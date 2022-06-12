#!/usr/bin/env python3

import argparse
import collections
from dataclasses import dataclass
import datetime
import os.path
import re
import sys

DESCRIPTION = """Generate assembly symbol tables from the MEGA65 iomap.txt"""

USAGE = """make-m65-symbols.py [options] --format <format> --iomap-file <filename>"""

EPILOG = """
Supported output formats:
    acme    ACME assembler symbols
    ca65    ca65 assembler symbols
    cc65    cc65 C #defines
    kick    Kick Assembler symbols
    ophis   Ophis assembler symbols

If --output-file is omitted, a canonical name is chosen for the selected
format.

You can download a copy of iomap.txt here:
https://raw.githubusercontent.com/MEGA65/mega65-core/ce23c676652ff8e431b5f2291d203d70a764c9a3/iomap.txt

To generate the latest iomap.txt file from the MEGA65 core, check out the
mega65-core repository, then run "make iomap.txt":
  https://github.com/MEGA65/mega65-core
"""

# Every line in iomap.txt starts with an architecture mode. Assert this
# by whitelisting modes.
ARCH_MODES = set(('C64', 'C65', 'GS'))

# Symbol names typically start with a chip ID followed by a colon. Names
# that start with these chip IDs are recognized as symbols.
CHIPS = set((
    'AUDIO',
    'AUDIOMIX',
    'AUXFPGA',
    'CIA1',
    'CIA2',
    'CPU',
    'DEBUG',
    'DMA',
    'ETH',
    'ETHCOMMAND',
    'ETHCOMMAND',
    'F011',
    'FDC',
    'FPGA',
    'HCPU',
    'KBD',
    'MATH',
    'MISC',
    'MISCIO',
    'MISCIO',
    'QSPI',
    'RTC',
    'SD',
    'SDFDC',
    'SID',
    'SUMMARY',
    'SYSCTL',
    'TOUCH',
    'UART',
    'UARTMISC',
    'VIC-II',
    'VIC-III',
    'VIC-IV'))

CHIP_ID_TRANSLATIONS = {
    'VIC-II': 'VIC2',
    'VIC-III': 'VIC3',
    'VIC-IV': 'VIC4'}

# Some things just can't be symbol names. Add these as they are found.
COLLISIONS = set((
    'SBC',
))


@dataclass
class Format:
    fname_suffix: str
    comment_tmpl: str
    sym_tmpl: str


@dataclass
class Symbol:
    full_name: str
    base_name: str
    value: str
    description: str = None
    is_address: bool = True
    arch_mode: str = None


FORMATS = {
    'acme': Format(
        fname_suffix='.a',
        comment_tmpl='{item};{comment}',
        sym_tmpl='{addr}{sym} = {val}'),
    'ca65': Format(
        fname_suffix='.s',
        comment_tmpl='{item};{comment}',
        sym_tmpl='{sym} = {val}'),
    'cc65': Format(
        fname_suffix='.h',
        comment_tmpl='/*{comment}*/\n{item}',
        sym_tmpl='#define {sym} {val}'),
    'kick': Format(
        fname_suffix='.asm',
        comment_tmpl='{item}//{comment}',
        sym_tmpl='.var {sym} = {val}'),
    'ophis': Format(
        fname_suffix='.oph',
        comment_tmpl='{item};{comment}',
        sym_tmpl='.alias {sym} {val}'),
}


def exit_with_error(msg):
    sys.stderr.write(msg + '\n\n')
    sys.exit(1)


def bitrange_to_mask(v):
    """Parse a bitrange in an address to a mask.

    Args:
        v: The address field with optional bitmask.

    Returns:
        (addr, mask), where addr is a string (typically a hex value
            starting with $) and mask is an integer mask of the
            bitrange or None if no bitrange is in the address field.
    """
    if '.' not in v:
        return (v, None)
    addr, bitrange_str = v.split('.')
    if '-' in bitrange_str:
        (start, end) = bitrange_str.split('-')
    else:
        start = bitrange_str
        end = bitrange_str
    start = int(start)
    end = int(end)
    assert(end < 8)
    if start > end:
        start, end = end, start
    mask_val = 0
    for i in range(8):
        if i >= start and i <= end:
            mask_val += 1 << i
    return (addr, mask_val)


def parse_iomap_line(line):
    """Parse a line of the iomap.txt file.

    Args:
        line: The line, ending in `\n`.

    Returns:
        A sequence of zero or more Symbols.
    """
    fields = line.split()

    # 0: Architecture mode: C64, C65, GS
    assert(fields[0] in ARCH_MODES)
    arch_mode = fields[0]

    # 1: Address, start address, or range
    if not fields[1].startswith('$'):
        # E.g. ETH:$D6E0
        return []

    if '-$' in fields[1] or ('-' in fields[1] and '.' not in fields[1]):
        addr = fields[1].split('-')[0]
        mask = None
    else:
        addr, mask = bitrange_to_mask(fields[1])

    # 2: Identifier (chipid:symbol), placeholder hyphen, split range, first word of description
    # 3: Split range end, word of description
    # 4+: Rest of description words
    # TODO: support identifier in field index 3
    chip_id = None
    base_name = None
    desc_start = 3
    if ':' in fields[2] and fields[2].split(':')[0] in CHIPS:
        chip_id, base_name = fields[2].split(':')
        if chip_id in CHIP_ID_TRANSLATIONS:
            chip_id = CHIP_ID_TRANSLATIONS[chip_id]
        if '@' in base_name:
            base_name = base_name.split('@')[0]
    elif fields[2] == '-':
        if fields[3].startswith('$'):
            desc_start = 4
    else:
        desc_start = 2

    syms = []
    # (Catch both undefined base_name and empty string base_name.)
    if base_name:
        if re.match(r'^\d', base_name):
            base_name = '_' + base_name
        base_name = re.sub(
            r'\W',
            '_',
            base_name)
        full_name = re.sub(
            r'\W',
            '_',
            '_'.join([
                # arch_mode,  We add this later only to disambiguate.
                chip_id,
                base_name,
            ]))
        desc_text = ' '.join(fields[desc_start:]).strip()
        if mask is not None:
            syms = [
                Symbol(
                    arch_mode=arch_mode,
                    full_name=full_name + '_ADDR',
                    base_name=base_name + '_ADDR',
                    value=addr,
                    description=desc_text + ' (address)'),
                Symbol(
                    arch_mode=arch_mode,
                    full_name=full_name + '_MASK',
                    base_name=base_name + '_MASK',
                    value=str(mask),
                    description=desc_text + ' (bit mask)',
                    is_address=False),
                ]
        else:
            syms = [
                Symbol(
                    arch_mode=arch_mode,
                    full_name=full_name,
                    base_name=base_name,
                    value=addr,
                    description=desc_text)]
    else:
        # This is a non-symbol line.
        pass

    return syms


def write_comment(outfh, txt, fmt):
    item = fmt.comment_tmpl.format(
        item='',
        comment=' ' + txt + ' ').strip()
    outfh.write(item + '\n')


def write_sym(outfh, sym, fmt):
    item = fmt.sym_tmpl.format(
        addr='!addr ' if sym.is_address else '',
        sym=sym.full_name,
        val=sym.value)
    if sym.description:
        item = fmt.comment_tmpl.format(
            item=item + '  ',
            comment=' ' + sym.description + ' ').strip()
    outfh.write(item + '\n')


def parse_file(iomap_fname, verbose=False):
    """Parse an iomap.txt file.

    Parse each line into a Symbol. Keep them in file order.

    Args:
        iomap_fname: Filename of the iomap.txt file.
        verbose: If True, prints verbose progress messages.

    Returns:
        (iomap, line_count, line_no_symbol_count)
        iomap: Sequence of Symbols.
        line_count: Total number of lines read.
        line_no_symbol_count: Number of lines that did not have recognizable symbols.
    """
    iomap = []
    line_count = 0
    line_no_symbol_count = 0
    with open(iomap_fname) as infh:
        for line in infh:
            try:
                syms = parse_iomap_line(line)
                if syms:
                    iomap.extend(syms)
                else:
                    if verbose:
                        print('Skipped: ' + line[:-1])
                    line_no_symbol_count += 1
            except:
                print(f'\n** Error parsing line {line_count}: {line=}\n')
                raise
            line_count += 1

    return (iomap, line_count, line_no_symbol_count)


def dedupe_names(iomap, verbose=False):
    """Resolve duplicate symbol names.

    Despite our best efforts, some keys repeat. Attempt to disambiguate
    with the arch mode, and resolve further with an incremented key.

    This renames Symbols destructively.

    Args:
        iomap: Sequence of Symbols.
        verbose: If True, prints verbose progress messages.

    Returns:
        Count of symbols that needed de-duping.
    """
    full_name_counters = collections.Counter()
    duplicate_count = 0
    for i in iomap:
        full_name_counters[i.full_name] += 1
        if full_name_counters[i.full_name] > 1:
            i.full_name = i.arch_mode + '_' + i.full_name
            full_name_counters[i.full_name] += 1
            if full_name_counters[i.full_name] > 1:
                i.full_name = (
                    i.full_name +
                    '_' +
                    str(full_name_counters[i.full_name]))
            duplicate_count += 1
            if verbose:
                print(f'De-duplicating a key: {i.full_name}')
    return duplicate_count


def add_short_symbols(iomap):
    """Add short symbols when unambiguous.

    Add short base name aliases for unique base names.

    Args:
        iomap: Sequence of Symbols.

    Returns:
        New sequence of Symbols.
    """
    basename_counts = collections.Counter(i.base_name for i in iomap)
    revised_iomap = []
    for i in iomap:
        revised_iomap.append(i)
        if basename_counts[i.base_name] == 1:
            revised_iomap.append(Symbol(
                full_name=i.base_name,
                base_name=i.base_name,
                value=i.value,
                description=i.description))
    return revised_iomap


def resolve_collisions(iomap, verbose=False):
    """Resolve collisions with reserved names.

    It is possible that we generate a key that collides with an assembler
    mnemonic or keyword. We keep a list of these and add an underscore
    prefix.

    This renames Symbols destructively.

    Args:
        iomap: Sequence of Symbols.
        verbose: If True, prints verbose progress messages.

    Returns:
        Count of symbols that needed resolving.
    """
    collision_count = 0
    for i in iomap:
        if i.base_name in COLLISIONS:
            i.base_name = '_' + i.base_name
            collision_count += 1
            if verbose:
                print(f'Resolving full name collision: {i.base_name}')
        if i.full_name in COLLISIONS:
            i.full_name = '_' + i.full_name
            collision_count += 1
            if verbose:
                print(f'Resolving base name collision: {i.full_name}')
    return collision_count


def write_symbols_file(output_fname, iomap_fname, fmt, iomap):
    """Write the symbols file.

    Args:
        output_fname: The filename of the symbols file to create.
        iomap_fname: The iomap.txt filename, for including in the header.
        fmt: The FORMATS entry for the selected format.
        iomap: Sequence of Symbols.
    """
    with open(output_fname, 'w') as outfh:
        write_comment(outfh, 'Generated from: ' + iomap_fname, fmt)
        write_comment(
            outfh,
            'Date: ' + datetime.datetime.now().strftime('%Y-%m-%d'),
            fmt)
        outfh.write('\n')
        for sym in iomap:
            write_sym(outfh, sym, fmt)


def main():
    parser = argparse.ArgumentParser(
        description=DESCRIPTION,
        usage=USAGE,
        epilog=EPILOG,
        formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument(
        '--format',
        choices=FORMATS.keys(),
        help='The output format')
    parser.add_argument(
        '--output-file',
        help='The symbols output file path')
    parser.add_argument(
        '--iomap-file',
        help='The iomap.txt file path')
    parser.add_argument(
        '--verbose',
        action='store_true',
        help='Print messages about how the iomap is handled')
    parser.add_argument(
        '--all-formats',
        action='store_true',
        help='Generate files in all supported formats using default filenames')
    args = parser.parse_args()

    if args.all_formats:
        if args.format:
            exit_with_error('Cannot request both --all-formats and a --format')
        if args.output_file:
            exit_with_error('Cannot request both --all-formats and an --output-file')

    iomap_fname = args.iomap_file
    if not iomap_fname:
        if os.path.isfile('iomap.txt'):
            iomap_fname = 'iomap.txt'
        else:
            exit_with_error(
                'Cannot find iomap.txt file. Use --iomap-file to set a path.')
    if not os.path.isfile(iomap_fname):
        exit_with_error('iomap file not found: ' + iomap_fname)

    iomap, line_count, line_no_symbol_count = parse_file(iomap_fname, verbose=args.verbose)
    duplicate_count = dedupe_names(iomap, verbose=args.verbose)
    iomap = add_short_symbols(iomap)
    collision_count = resolve_collisions(iomap, args.verbose)

    if args.verbose:
        print(f'\nTotal iomap lines:     {line_count:>4}')
        print(f'Lines without symbols: {line_no_symbol_count:>4}')
        print(f'Duplicates:            {duplicate_count:>4}')
        print(f'Collisions:            {collision_count:>4}')

    if args.all_formats:
        print()
        for fmt_name in FORMATS:
            fmt = FORMATS[fmt_name]
            output_fname = 'mega65_io' + fmt.fname_suffix
            write_symbols_file(output_fname, iomap_fname, fmt, iomap)
            print(f'Created {output_fname} in {fmt_name} format.')
    else:
        fmt = FORMATS['acme']
        if args.format:
            fmt = FORMATS[args.format]
        output_fname = args.output_file
        if not output_fname:
            output_fname = 'mega65_io' + fmt.fname_suffix
        write_symbols_file(output_fname, iomap_fname, fmt, iomap)
        print(f'\nCreated {output_fname} in {args.format or "acme"} format.')


if __name__ == '__main__':
    main()
