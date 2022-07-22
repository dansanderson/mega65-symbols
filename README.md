# MEGA65 Symbols

This repo provides MEGA65 I/O register symbol definition files for several major assemblers and C compilers. It also provides a tool for generating new ones from the iomap.txt file, which itself is generated from the VHDL implementation of the chips.

**Note:** Future updates to the tool and to the MEGA65 iomap.txt may result in symbol name changes. I recommend downloading or making symbol files at the beginning of a project, and then not updating them for the lifetime of that project. Your patience is appreciated. :)

## Why?

When writing assembly language code for the [MEGA65](https://mega65.org/) personal computer, you will need to make regular use of addresses for the machine's input/output registers. These addresses are documented as hexadecimal values in [the official documentation](https://files.mega65.org/manuals-upload/). Typically, you find the register you need in the manual, then copy the address into your program, usually assigning it to a symbol to make your code easier to read.

```
VIC2_BORDERCOL_ADDR = $D020

* = $C000
loop:
    inc VIC2_BORDERCOL_ADDR
    jmp loop
```

All such registers already have names and known addresses. These are used to produce the tables of documentation in the first place. We might as well use a tool to generate a file that already contains all of these symbols to make them easier to use during programming.

## What?

I wrote a tool that generates symbol definition files for major assemblers and C compilers used for MEGA65 programming. It takes as input the `iomap.txt` file produced by the [mega65-core](https://github.com/MEGA65/mega65-core) project.

For convenience, I have committed the output from this tool directly in this repo, generated on the date listed in the file. I don't promise to keep these up to date, but they're probably useful as is.

-   `mega65_io.a` : [ACME assembler](https://sourceforge.net/projects/acme-crossass/)
-   `mega65_io.asm` : [Kick Assembler]http://theweb.dk/KickAssembler/Main.html#frontpage)
-   `mega65_io.s` : [ca65 assmebler](https://cc65.github.io/doc/ca65.html)
-   `mega65_io.h` : [cc65 C compiler](https://cc65.github.io/doc/cc65.html)
-   `mega65_io.oph` : [Ophis assembler](https://michaelcmartin.github.io/Ophis/)
-   `mega65_io.rs` : [Rust compiler](https://github.com/mrk-its/rust-mos)

## How?

To get the latest `iomap.txt` and run the tool to generate new symbol files:

```
gh repo clone MEGA65/mega65-core
cd mega65-core
make iomap.txt

python3 ../mega65-symbols/make-m65-symbols.py --format=acme
```

Run the tool with `--help` for more information about running the tool.

Once you have the appropriate file to your project directory, use the assembler/compiler syntax to include it in your project.

```
!source "mega65_io.a"

* = $C000
loop:
    inc VIC2_BORDERCOL_ADDR
    jmp loop
```

## Who?

Hi, I'm Dan! Please [file an issue](https://github.com/dansanderson/mega65-symbols/issues) with any feedback you have on this tool or the files it produces.
