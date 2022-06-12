/* Generated from: ../mega65-core/iomap.txt */
/* Date: 2022-06-11 */

/* Immediately stop transmitting the current ethernet frame. Will cause a partially sent frame to be received, most likely resulting in the loss of that frame. */
#define ETHCOMMAND_STOPTX $00
/* Immediately stop transmitting the current ethernet frame. Will cause a partially sent frame to be received, most likely resulting in the loss of that frame. */
#define STOPTX $00
/* 6510/45GS10 CPU port DDR */
#define CPU_PORTDDR $0000000
/* 6510/45GS10 CPU port DDR */
#define PORTDDR $0000000
/* 6510/45GS10 CPU port data */
#define CPU_PORT $0000001
/* 6510/45GS10 CPU port data */
#define PORT $0000001
/* Transmit packet */
#define ETHCOMMAND_STARTTX $01
/* Transmit packet */
#define STARTTX $01
/* Disable the effects of RXONLYONE */
#define ETHCOMMAND_RXNORMAL $D0
/* Disable the effects of RXONLYONE */
#define RXNORMAL $D0
/* sprite N horizontal position */
#define VIC2_S0X $D000
/* sprite N horizontal position */
#define S0X $D000
/* sprite N vertical position */
#define VIC2_S0Y $D001
/* sprite N vertical position */
#define S0Y $D001
/* @SNX */
#define VIC2_S1X $D002
/* @SNX */
#define S1X $D002
/* @SNY */
#define VIC2_S1Y $D003
/* @SNY */
#define S1Y $D003
/* @SNX */
#define VIC2_S2X $D004
/* @SNX */
#define S2X $D004
/* @SNY */
#define VIC2_S2Y $D005
/* @SNY */
#define S2Y $D005
/* @SNX */
#define VIC2_S3X $D006
/* @SNX */
#define S3X $D006
/* @SNY */
#define VIC2_S3Y $D007
/* @SNY */
#define S3Y $D007
/* @SNX */
#define VIC2_S4X $D008
/* @SNX */
#define S4X $D008
/* @SNY */
#define VIC2_S4Y $D009
/* @SNY */
#define S4Y $D009
/* @SNX */
#define VIC2_S5X $D00A
/* @SNX */
#define S5X $D00A
/* @SNY */
#define VIC2_S5Y $D00B
/* @SNY */
#define S5Y $D00B
/* @SNX */
#define VIC2_S6X $D00C
/* @SNX */
#define S6X $D00C
/* @SNY */
#define VIC2_S6Y $D00D
/* @SNY */
#define S6Y $D00D
/* @SNX */
#define VIC2_S7X $D00E
/* @SNX */
#define S7X $D00E
/* @SNY */
#define VIC2_S7Y $D00F
/* @SNY */
#define S7Y $D00F
/* sprite horizontal position MSBs */
#define VIC2_SXMSB $D010
/* sprite horizontal position MSBs */
#define SXMSB $D010
/* 24/25 vertical smooth scroll (address) */
#define VIC2_YSCL_ADDR $D011
/* 24/25 vertical smooth scroll (address) */
#define YSCL_ADDR $D011
/* 24/25 vertical smooth scroll (bit mask) */
#define VIC2_YSCL_MASK 7
/* 24/25 vertical smooth scroll (bit mask) */
#define YSCL_MASK 7
/* 24/25 row select (address) */
#define VIC2_RSEL_ADDR $D011
/* 24/25 row select (address) */
#define RSEL_ADDR $D011
/* 24/25 row select (bit mask) */
#define VIC2_RSEL_MASK 8
/* 24/25 row select (bit mask) */
#define RSEL_MASK 8
/* disable display (address) */
#define VIC2_BLNK_ADDR $D011
/* disable display (address) */
#define BLNK_ADDR $D011
/* disable display (bit mask) */
#define VIC2_BLNK_MASK 16
/* disable display (bit mask) */
#define BLNK_MASK 16
/* bitmap mode (address) */
#define VIC2_BMM_ADDR $D011
/* bitmap mode (address) */
#define BMM_ADDR $D011
/* bitmap mode (bit mask) */
#define VIC2_BMM_MASK 32
/* bitmap mode (bit mask) */
#define BMM_MASK 32
/* extended background mode (address) */
#define VIC2_ECM_ADDR $D011
/* extended background mode (address) */
#define ECM_ADDR $D011
/* extended background mode (bit mask) */
#define VIC2_ECM_MASK 64
/* extended background mode (bit mask) */
#define ECM_MASK 64
/* raster compare bit 8 (address) */
#define VIC2_RC_ADDR $D011
/* raster compare bit 8 (address) */
#define RC_ADDR $D011
/* raster compare bit 8 (bit mask) */
#define VIC2_RC_MASK 128
/* raster compare bit 8 (bit mask) */
#define RC_MASK 128
/* raster compare bits 0 to 7 */
#define VIC2_RC $D012
/* raster compare bits 0 to 7 */
#define RC $D012
/* Coarse horizontal beam position (was lightpen X) */
#define VIC2_LPX $D013
/* Coarse horizontal beam position (was lightpen X) */
#define LPX $D013
/* Coarse vertical beam position (was lightpen Y) */
#define VIC2_LPY $D014
/* Coarse vertical beam position (was lightpen Y) */
#define LPY $D014
/* sprite enable bits */
#define VIC2_SE $D015
/* sprite enable bits */
#define SE $D015
/* horizontal smooth scroll (address) */
#define VIC2_XSCL_ADDR $D016
/* horizontal smooth scroll (address) */
#define XSCL_ADDR $D016
/* horizontal smooth scroll (bit mask) */
#define VIC2_XSCL_MASK 7
/* horizontal smooth scroll (bit mask) */
#define XSCL_MASK 7
/* 38/40 column select (address) */
#define VIC2_CSEL_ADDR $D016
/* 38/40 column select (address) */
#define CSEL_ADDR $D016
/* 38/40 column select (bit mask) */
#define VIC2_CSEL_MASK 8
/* 38/40 column select (bit mask) */
#define CSEL_MASK 8
/* Multi-colour mode (address) */
#define VIC2_MCM_ADDR $D016
/* Multi-colour mode (address) */
#define MCM_ADDR $D016
/* Multi-colour mode (bit mask) */
#define VIC2_MCM_MASK 16
/* Multi-colour mode (bit mask) */
#define MCM_MASK 16
/* Disables video output on MAX Machine(tm) VIC-II 6566. Ignored on normal C64s and the MEGA65 (address) */
#define VIC2_RST_ADDR $D016
/* Disables video output on MAX Machine(tm) VIC-II 6566. Ignored on normal C64s and the MEGA65 (bit mask) */
#define VIC2_RST_MASK 32
/* sprite vertical expansion enable bits */
#define VIC2_SEXY $D017
/* sprite vertical expansion enable bits */
#define SEXY $D017
/* character set address location ($\times$ 1KiB) (address) */
#define VIC2_CB_ADDR $D018
/* character set address location ($\times$ 1KiB) (address) */
#define CB_ADDR $D018
/* character set address location ($\times$ 1KiB) (bit mask) */
#define VIC2_CB_MASK 14
/* character set address location ($\times$ 1KiB) (bit mask) */
#define CB_MASK 14
/* screen address ($\times$ 1KiB) (address) */
#define VIC2_VS_ADDR $D018
/* screen address ($\times$ 1KiB) (address) */
#define VS_ADDR $D018
/* screen address ($\times$ 1KiB) (bit mask) */
#define VIC2_VS_MASK 240
/* screen address ($\times$ 1KiB) (bit mask) */
#define VS_MASK 240
/* raster compare indicate or acknowledge (address) */
#define VIC2_RIRQ_ADDR $D019
/* raster compare indicate or acknowledge (address) */
#define RIRQ_ADDR $D019
/* raster compare indicate or acknowledge (bit mask) */
#define VIC2_RIRQ_MASK 1
/* raster compare indicate or acknowledge (bit mask) */
#define RIRQ_MASK 1
/* sprite:bitmap collision indicate or acknowledge (address) */
#define VIC2_ISBC_ADDR $D019
/* sprite:bitmap collision indicate or acknowledge (address) */
#define ISBC_ADDR $D019
/* sprite:bitmap collision indicate or acknowledge (bit mask) */
#define VIC2_ISBC_MASK 2
/* sprite:bitmap collision indicate or acknowledge (bit mask) */
#define ISBC_MASK 2
/* sprite:sprite collision indicate or acknowledge (address) */
#define VIC2_ISSC_ADDR $D019
/* sprite:sprite collision indicate or acknowledge (address) */
#define ISSC_ADDR $D019
/* sprite:sprite collision indicate or acknowledge (bit mask) */
#define VIC2_ISSC_MASK 4
/* sprite:sprite collision indicate or acknowledge (bit mask) */
#define ISSC_MASK 4
/* light pen indicate or acknowledge (address) */
#define VIC2_ILP_ADDR $D019
/* light pen indicate or acknowledge (address) */
#define ILP_ADDR $D019
/* light pen indicate or acknowledge (bit mask) */
#define VIC2_ILP_MASK 8
/* light pen indicate or acknowledge (bit mask) */
#define ILP_MASK 8
/* mask raster IRQ (address) */
#define VIC2_MRIRQ_ADDR $D01A
/* mask raster IRQ (address) */
#define MRIRQ_ADDR $D01A
/* mask raster IRQ (bit mask) */
#define VIC2_MRIRQ_MASK 1
/* mask raster IRQ (bit mask) */
#define MRIRQ_MASK 1
/* mask sprite:bitmap collision IRQ (address) */
#define VIC2_MISBC_ADDR $D01A
/* mask sprite:bitmap collision IRQ (address) */
#define MISBC_ADDR $D01A
/* mask sprite:bitmap collision IRQ (bit mask) */
#define VIC2_MISBC_MASK 2
/* mask sprite:bitmap collision IRQ (bit mask) */
#define MISBC_MASK 2
/* mask sprite:sprite collision IRQ (address) */
#define VIC2_MISSC_ADDR $D01A
/* mask sprite:sprite collision IRQ (address) */
#define MISSC_ADDR $D01A
/* mask sprite:sprite collision IRQ (bit mask) */
#define VIC2_MISSC_MASK 4
/* mask sprite:sprite collision IRQ (bit mask) */
#define MISSC_MASK 4
/* sprite background priority bits */
#define VIC2_BSP $D01B
/* sprite background priority bits */
#define BSP $D01B
/* sprite multicolour enable bits */
#define VIC2_SCM $D01C
/* sprite multicolour enable bits */
#define SCM $D01C
/* sprite horizontal expansion enable bits */
#define VIC2_SEXX $D01D
/* sprite horizontal expansion enable bits */
#define SEXX $D01D
/* sprite/sprite collision indicate bits */
#define VIC2_SSC $D01E
/* sprite/sprite collision indicate bits */
#define SSC $D01E
/* sprite/foreground collision indicate bits */
#define VIC2_SBC $D01F
/* sprite/foreground collision indicate bits */
#define _SBC $D01F
/* display border colour (16 colour) (address) */
#define VIC2_BORDERCOL_ADDR $D020
/* display border colour (16 colour) (bit mask) */
#define VIC2_BORDERCOL_MASK 15
/* display border colour (256 colour) (address) */
#define VIC3_BORDERCOL_ADDR $D020
/* display border colour (256 colour) (bit mask) */
#define VIC3_BORDERCOL_MASK 255
/* display border colour (256 colour) (address) */
#define VIC4_BORDERCOL_ADDR $D020
/* display border colour (256 colour) (bit mask) */
#define VIC4_BORDERCOL_MASK 255
/* screen colour (16 colour) (address) */
#define VIC2_SCREENCOL_ADDR $D021
/* screen colour (16 colour) (bit mask) */
#define VIC2_SCREENCOL_MASK 15
/* screen colour (256 colour) (address) */
#define VIC3_SCREENCOL_ADDR $D021
/* screen colour (256 colour) (bit mask) */
#define VIC3_SCREENCOL_MASK 255
/* screen colour (256 colour) (address) */
#define VIC4_SCREENCOL_ADDR $D021
/* screen colour (256 colour) (bit mask) */
#define VIC4_SCREENCOL_MASK 255
/* multi-colour 1 (16 colour) (address) */
#define VIC2_MC1_ADDR $D022
/* multi-colour 1 (16 colour) (bit mask) */
#define VIC2_MC1_MASK 15
/* multi-colour 1 (256 colour) (address) */
#define VIC3_MC1_ADDR $D022
/* multi-colour 1 (256 colour) (bit mask) */
#define VIC3_MC1_MASK 255
/* multi-colour 1 (256 colour) (address) */
#define VIC4_MC1_ADDR $D022
/* multi-colour 1 (256 colour) (bit mask) */
#define VIC4_MC1_MASK 255
/* multi-colour 2 (16 colour) (address) */
#define VIC2_MC2_ADDR $D023
/* multi-colour 2 (16 colour) (bit mask) */
#define VIC2_MC2_MASK 15
/* multi-colour 2 (256 colour) (address) */
#define VIC3_MC2_ADDR $D023
/* multi-colour 2 (256 colour) (bit mask) */
#define VIC3_MC2_MASK 255
/* multi-colour 2 (256 colour) (address) */
#define VIC4_MC2_ADDR $D023
/* multi-colour 2 (256 colour) (bit mask) */
#define VIC4_MC2_MASK 255
/* multi-colour 3 (16 colour) (address) */
#define VIC2_MC3_ADDR $D024
/* multi-colour 3 (16 colour) (bit mask) */
#define VIC2_MC3_MASK 15
/* multi-colour 3 (256 colour) (address) */
#define VIC3_MC3_ADDR $D024
/* multi-colour 3 (256 colour) (bit mask) */
#define VIC3_MC3_MASK 255
/* multi-colour 3 (256 colour) (address) */
#define VIC4_MC3_ADDR $D024
/* multi-colour 3 (256 colour) (bit mask) */
#define VIC4_MC3_MASK 255
/* Sprite multi-colour 0 */
#define VIC2_SPRMC0 $D025
/* Sprite multi-colour 0 (8-bit for selection of any palette colour) */
#define VIC3_SPRMC0 $D025
/* Sprite multi-colour 0 (8-bit for selection of any palette colour) */
#define VIC4_SPRMC0 $D025
/* Sprite multi-colour 1 */
#define VIC2_SPRMC1 $D026
/* Sprite multi-colour 1 (8-bit for selection of any palette colour) */
#define VIC3_SPRMC1 $D026
/* Sprite multi-colour 1 (8-bit for selection of any palette colour) */
#define VIC4_SPRMC1 $D026
/* sprite N colour / 16-colour sprite transparency colour (lower nybl) */
#define VIC2_SPR0COL $D027
/* sprite N colour / 16-colour sprite transparency colour (lower nybl) */
#define SPR0COL $D027
/* @SPRNCOL */
#define VIC2_SPR1COL $D028
/* @SPRNCOL */
#define SPR1COL $D028
/* @SPRNCOL */
#define VIC2_SPR2COL $D029
/* @SPRNCOL */
#define SPR2COL $D029
/* @SPRNCOL */
#define VIC2_SPR3COL $D02A
/* @SPRNCOL */
#define SPR3COL $D02A
/* @SPRNCOL */
#define VIC2_SPR4COL $D02B
/* @SPRNCOL */
#define SPR4COL $D02B
/* @SPRNCOL */
#define VIC2_SPR5COL $D02C
/* @SPRNCOL */
#define SPR5COL $D02C
/* @SPRNCOL */
#define VIC2_SPR6COL $D02D
/* @SPRNCOL */
#define SPR6COL $D02D
/* @SPRNCOL */
#define VIC2_SPR7COL $D02E
/* @SPRNCOL */
#define SPR7COL $D02E
/* Write $A5 then $96 to enable C65/VIC-III IO registers */
#define VIC3_KEY $D02F
/* Write $45 then $54 to map 45E100 ethernet controller buffers to $D000-$DFFF */
#define VIC4_KEY $D02F
/* Write $47 then $53 to enable C65GS/VIC-IV IO registers */
#define GS_VIC4_KEY $D02F
/* Control Register A */
#define SUMMARY_VIC_III $D030
/* 2MHz select (for C128 2MHz emulation) (address) */
#define VIC2_C128_FAST_ADDR $D030
/* 2MHz select (for C128 2MHz emulation) (address) */
#define C128_FAST_ADDR $D030
/* 2MHz select (for C128 2MHz emulation) (bit mask) */
#define VIC2_C128_FAST_MASK 1
/* 2MHz select (for C128 2MHz emulation) (bit mask) */
#define C128_FAST_MASK 1
/* Map 2nd KB of colour RAM @ $DC00-$DFFF (address) */
#define VIC3_CRAM2K_ADDR $D030
/* Map 2nd KB of colour RAM @ $DC00-$DFFF (address) */
#define CRAM2K_ADDR $D030
/* Map 2nd KB of colour RAM @ $DC00-$DFFF (bit mask) */
#define VIC3_CRAM2K_MASK 1
/* Map 2nd KB of colour RAM @ $DC00-$DFFF (bit mask) */
#define CRAM2K_MASK 1
/* Enable external video sync (genlock input) (address) */
#define VIC3_EXTSYNC_ADDR $D030
/* Enable external video sync (genlock input) (address) */
#define EXTSYNC_ADDR $D030
/* Enable external video sync (genlock input) (bit mask) */
#define VIC3_EXTSYNC_MASK 2
/* Enable external video sync (genlock input) (bit mask) */
#define EXTSYNC_MASK 2
/* Use PALETTE ROM (0) or RAM (1) entries for colours 0 - 15 (address) */
#define VIC3_PAL_ADDR $D030
/* Use PALETTE ROM (0) or RAM (1) entries for colours 0 - 15 (address) */
#define PAL_ADDR $D030
/* Use PALETTE ROM (0) or RAM (1) entries for colours 0 - 15 (bit mask) */
#define VIC3_PAL_MASK 4
/* Use PALETTE ROM (0) or RAM (1) entries for colours 0 - 15 (bit mask) */
#define PAL_MASK 4
/* Map C65 ROM @ $8000 (address) */
#define VIC3_ROM8_ADDR $D030
/* Map C65 ROM @ $8000 (address) */
#define ROM8_ADDR $D030
/* Map C65 ROM @ $8000 (bit mask) */
#define VIC3_ROM8_MASK 8
/* Map C65 ROM @ $8000 (bit mask) */
#define ROM8_MASK 8
/* Map C65 ROM @ $A000 (address) */
#define VIC3_ROMA_ADDR $D030
/* Map C65 ROM @ $A000 (address) */
#define ROMA_ADDR $D030
/* Map C65 ROM @ $A000 (bit mask) */
#define VIC3_ROMA_MASK 16
/* Map C65 ROM @ $A000 (bit mask) */
#define ROMA_MASK 16
/* Map C65 ROM @ $C000 (address) */
#define VIC3_ROMC_ADDR $D030
/* Map C65 ROM @ $C000 (address) */
#define ROMC_ADDR $D030
/* Map C65 ROM @ $C000 (bit mask) */
#define VIC3_ROMC_MASK 32
/* Map C65 ROM @ $C000 (bit mask) */
#define ROMC_MASK 32
/* Select between C64 and C65 charset. (address) */
#define VIC3_CROM9_ADDR $D030
/* Select between C64 and C65 charset. (address) */
#define CROM9_ADDR $D030
/* Select between C64 and C65 charset. (bit mask) */
#define VIC3_CROM9_MASK 64
/* Select between C64 and C65 charset. (bit mask) */
#define CROM9_MASK 64
/* Map C65 ROM @ $E000 (address) */
#define VIC3_ROME_ADDR $D030
/* Map C65 ROM @ $E000 (address) */
#define ROME_ADDR $D030
/* Map C65 ROM @ $E000 (bit mask) */
#define VIC3_ROME_MASK 128
/* Map C65 ROM @ $E000 (bit mask) */
#define ROME_MASK 128
/* Control Register B */
#define C65_SUMMARY_VIC_III $D031
/* Enable VIC-III interlaced mode (address) */
#define VIC3_INT_ADDR $D031
/* Enable VIC-III interlaced mode (address) */
#define INT_ADDR $D031
/* Enable VIC-III interlaced mode (bit mask) */
#define VIC3_INT_MASK 1
/* Enable VIC-III interlaced mode (bit mask) */
#define INT_MASK 1
/* Enable VIC-III MONO video output (not implemented) (address) */
#define VIC3_MONO_ADDR $D031
/* Enable VIC-III MONO video output (not implemented) (address) */
#define MONO_ADDR $D031
/* Enable VIC-III MONO video output (not implemented) (bit mask) */
#define VIC3_MONO_MASK 2
/* Enable VIC-III MONO video output (not implemented) (bit mask) */
#define MONO_MASK 2
/* Enable 1280 horizontal pixels (not implemented) (address) */
#define VIC3_H1280_ADDR $D031
/* Enable 1280 horizontal pixels (not implemented) (address) */
#define H1280_ADDR $D031
/* Enable 1280 horizontal pixels (not implemented) (bit mask) */
#define VIC3_H1280_MASK 4
/* Enable 1280 horizontal pixels (not implemented) (bit mask) */
#define H1280_MASK 4
/* Enable 400 vertical pixels (address) */
#define VIC3_V400_ADDR $D031
/* Enable 400 vertical pixels (address) */
#define V400_ADDR $D031
/* Enable 400 vertical pixels (bit mask) */
#define VIC3_V400_MASK 8
/* Enable 400 vertical pixels (bit mask) */
#define V400_MASK 8
/* Bit-Plane Mode (address) */
#define VIC3_BPM_ADDR $D031
/* Bit-Plane Mode (address) */
#define BPM_ADDR $D031
/* Bit-Plane Mode (bit mask) */
#define VIC3_BPM_MASK 16
/* Bit-Plane Mode (bit mask) */
#define BPM_MASK 16
/* Enable extended attributes and 8 bit colour entries (address) */
#define VIC3_ATTR_ADDR $D031
/* Enable extended attributes and 8 bit colour entries (address) */
#define ATTR_ADDR $D031
/* Enable extended attributes and 8 bit colour entries (bit mask) */
#define VIC3_ATTR_MASK 32
/* Enable extended attributes and 8 bit colour entries (bit mask) */
#define ATTR_MASK 32
/* Enable C65 FAST mode (~3.5MHz) (address) */
#define VIC3_FAST_ADDR $D031
/* Enable C65 FAST mode (~3.5MHz) (address) */
#define FAST_ADDR $D031
/* Enable C65 FAST mode (~3.5MHz) (bit mask) */
#define VIC3_FAST_MASK 64
/* Enable C65 FAST mode (~3.5MHz) (bit mask) */
#define FAST_MASK 64
/* Enable C64 640 horizontal pixels / 80 column mode (address) */
#define VIC3_H640_ADDR $D031
/* Enable C64 640 horizontal pixels / 80 column mode (address) */
#define H640_ADDR $D031
/* Enable C64 640 horizontal pixels / 80 column mode (bit mask) */
#define VIC3_H640_MASK 128
/* Enable C64 640 horizontal pixels / 80 column mode (bit mask) */
#define H640_MASK 128
/* Bitplane X address, even lines (address) */
#define VIC3_B0ADEVN_ADDR $D033
/* Bitplane X address, even lines (address) */
#define B0ADEVN_ADDR $D033
/* Bitplane X address, even lines (bit mask) */
#define VIC3_B0ADEVN_MASK 14
/* Bitplane X address, even lines (bit mask) */
#define B0ADEVN_MASK 14
/* Bitplane X address, odd lines (address) */
#define VIC3_B0ADODD_ADDR $D033
/* Bitplane X address, odd lines (address) */
#define B0ADODD_ADDR $D033
/* Bitplane X address, odd lines (bit mask) */
#define VIC3_B0ADODD_MASK 224
/* Bitplane X address, odd lines (bit mask) */
#define B0ADODD_MASK 224
/* @BXADEVN (address) */
#define VIC3_B1ADEVN_ADDR $D034
/* @BXADEVN (address) */
#define B1ADEVN_ADDR $D034
/* @BXADEVN (bit mask) */
#define VIC3_B1ADEVN_MASK 14
/* @BXADEVN (bit mask) */
#define B1ADEVN_MASK 14
/* @BXADODD (address) */
#define VIC3_B1ADODD_ADDR $D034
/* @BXADODD (address) */
#define B1ADODD_ADDR $D034
/* @BXADODD (bit mask) */
#define VIC3_B1ADODD_MASK 224
/* @BXADODD (bit mask) */
#define B1ADODD_MASK 224
/* @BXADEVN (address) */
#define VIC3_B2ADEVN_ADDR $D035
/* @BXADEVN (address) */
#define B2ADEVN_ADDR $D035
/* @BXADEVN (bit mask) */
#define VIC3_B2ADEVN_MASK 14
/* @BXADEVN (bit mask) */
#define B2ADEVN_MASK 14
/* @BXADODD (address) */
#define VIC3_B2ADODD_ADDR $D035
/* @BXADODD (address) */
#define B2ADODD_ADDR $D035
/* @BXADODD (bit mask) */
#define VIC3_B2ADODD_MASK 224
/* @BXADODD (bit mask) */
#define B2ADODD_MASK 224
/* @BXADEVN (address) */
#define VIC3_B3ADEVN_ADDR $D036
/* @BXADEVN (address) */
#define B3ADEVN_ADDR $D036
/* @BXADEVN (bit mask) */
#define VIC3_B3ADEVN_MASK 14
/* @BXADEVN (bit mask) */
#define B3ADEVN_MASK 14
/* @BXADODD (address) */
#define VIC3_B3ADODD_ADDR $D036
/* @BXADODD (address) */
#define B3ADODD_ADDR $D036
/* @BXADODD (bit mask) */
#define VIC3_B3ADODD_MASK 224
/* @BXADODD (bit mask) */
#define B3ADODD_MASK 224
/* @BXADEVN (address) */
#define VIC3_B4ADEVN_ADDR $D037
/* @BXADEVN (address) */
#define B4ADEVN_ADDR $D037
/* @BXADEVN (bit mask) */
#define VIC3_B4ADEVN_MASK 14
/* @BXADEVN (bit mask) */
#define B4ADEVN_MASK 14
/* @BXADODD (address) */
#define VIC3_B4ADODD_ADDR $D037
/* @BXADODD (address) */
#define B4ADODD_ADDR $D037
/* @BXADODD (bit mask) */
#define VIC3_B4ADODD_MASK 224
/* @BXADODD (bit mask) */
#define B4ADODD_MASK 224
/* @BXADEVN (address) */
#define VIC3_B5ADEVN_ADDR $D038
/* @BXADEVN (address) */
#define B5ADEVN_ADDR $D038
/* @BXADEVN (bit mask) */
#define VIC3_B5ADEVN_MASK 14
/* @BXADEVN (bit mask) */
#define B5ADEVN_MASK 14
/* @BXADODD (address) */
#define VIC3_B5ADODD_ADDR $D038
/* @BXADODD (address) */
#define B5ADODD_ADDR $D038
/* @BXADODD (bit mask) */
#define VIC3_B5ADODD_MASK 224
/* @BXADODD (bit mask) */
#define B5ADODD_MASK 224
/* @BXADEVN (address) */
#define VIC3_B6ADEVN_ADDR $D039
/* @BXADEVN (address) */
#define B6ADEVN_ADDR $D039
/* @BXADEVN (bit mask) */
#define VIC3_B6ADEVN_MASK 14
/* @BXADEVN (bit mask) */
#define B6ADEVN_MASK 14
/* @BXADODD (address) */
#define VIC3_B6ADODD_ADDR $D039
/* @BXADODD (address) */
#define B6ADODD_ADDR $D039
/* @BXADODD (bit mask) */
#define VIC3_B6ADODD_MASK 224
/* @BXADODD (bit mask) */
#define B6ADODD_MASK 224
/* @BXADEVN (address) */
#define VIC3_B7ADEVN_ADDR $D03A
/* @BXADEVN (address) */
#define B7ADEVN_ADDR $D03A
/* @BXADEVN (bit mask) */
#define VIC3_B7ADEVN_MASK 14
/* @BXADEVN (bit mask) */
#define B7ADEVN_MASK 14
/* @BXADODD (address) */
#define VIC3_B7ADODD_ADDR $D03A
/* @BXADODD (address) */
#define B7ADODD_ADDR $D03A
/* @BXADODD (bit mask) */
#define VIC3_B7ADODD_MASK 224
/* @BXADODD (bit mask) */
#define B7ADODD_MASK 224
/* Complement bitplane flags */
#define VIC3_BPCOMP $D03B
/* Complement bitplane flags */
#define BPCOMP $D03B
/* Bitplane X */
#define VIC3_BPX $D03C
/* Bitplane X */
#define BPX $D03C
/* Bitplane Y */
#define VIC3_BPY $D03D
/* Bitplane Y */
#define BPY $D03D
/* Bitplane X Offset */
#define VIC3_HPOS $D03E
/* Bitplane X Offset */
#define HPOS $D03E
/* Bitplane Y Offset */
#define VIC3_VPOS $D03F
/* Bitplane Y Offset */
#define VPOS $D03F
/* Display Address Translater (DAT) Bitplane N port */
#define VIC3_B0PIX $D040
/* Display Address Translater (DAT) Bitplane N port */
#define B0PIX $D040
/* @BNPIX */
#define VIC3_B1PIX $D041
/* @BNPIX */
#define B1PIX $D041
/* @BNPIX */
#define VIC3_B2PIX $D042
/* @BNPIX */
#define B2PIX $D042
/* @BNPIX */
#define VIC3_B3PIX $D043
/* @BNPIX */
#define B3PIX $D043
/* @BNPIX */
#define VIC3_B4PIX $D044
/* @BNPIX */
#define B4PIX $D044
/* @BNPIX */
#define VIC3_B5PIX $D045
/* @BNPIX */
#define B5PIX $D045
/* @BNPIX */
#define VIC3_B6PIX $D046
/* @BNPIX */
#define B6PIX $D046
/* @BNPIX */
#define VIC3_B7PIX $D047
/* @BNPIX */
#define B7PIX $D047
/* top border position */
#define VIC4_TBDRPOS $D048
/* top border position */
#define TBDRPOS $D048
/* top border position MSB (address) */
#define VIC4_TBDRPOS_ADDR $D049
/* top border position MSB (address) */
#define TBDRPOS_ADDR $D049
/* top border position MSB (bit mask) */
#define VIC4_TBDRPOS_MASK 15
/* top border position MSB (bit mask) */
#define TBDRPOS_MASK 15
/* Sprite bitplane-modify-mode enables (address) */
#define VIC4_SPRBPMEN_ADDR $D049
/* Sprite bitplane-modify-mode enables (bit mask) */
#define VIC4_SPRBPMEN_MASK 240
/* bottom border position */
#define VIC4_BBDRPOS $D04A
/* bottom border position */
#define BBDRPOS $D04A
/* bottom border position (address) */
#define VIC4_BBDRPOS_ADDR $D04B
/* bottom border position (address) */
#define BBDRPOS_ADDR $D04B
/* bottom border position (bit mask) */
#define VIC4_BBDRPOS_MASK 15
/* bottom border position (bit mask) */
#define BBDRPOS_MASK 15
/* Sprite bitplane-modify-mode enables (address) */
#define GS_VIC4_SPRBPMEN_ADDR $D04B
/* Sprite bitplane-modify-mode enables (bit mask) */
#define GS_VIC4_SPRBPMEN_MASK 240
/* character generator horizontal position */
#define VIC4_TEXTXPOS $D04C
/* character generator horizontal position */
#define TEXTXPOS $D04C
/* character generator horizontal position (address) */
#define VIC4_TEXTXPOS_ADDR $D04D
/* character generator horizontal position (address) */
#define TEXTXPOS_ADDR $D04D
/* character generator horizontal position (bit mask) */
#define VIC4_TEXTXPOS_MASK 15
/* character generator horizontal position (bit mask) */
#define TEXTXPOS_MASK 15
/* Sprite horizontal tile enables. (address) */
#define VIC4_SPRTILEN_ADDR $D04D
/* Sprite horizontal tile enables. (bit mask) */
#define VIC4_SPRTILEN_MASK 240
/* Character generator vertical position */
#define VIC4_TEXTYPOS $D04E
/* Character generator vertical position */
#define TEXTYPOS $D04E
/* Character generator vertical position (address) */
#define VIC4_TEXTYPOS_ADDR $D04F
/* Character generator vertical position (address) */
#define TEXTYPOS_ADDR $D04F
/* Character generator vertical position (bit mask) */
#define VIC4_TEXTYPOS_MASK 15
/* Character generator vertical position (bit mask) */
#define TEXTYPOS_MASK 15
/* Sprite 7-4 horizontal tile enables (address) */
#define GS_VIC4_SPRTILEN_ADDR $D04F
/* Sprite 7-4 horizontal tile enables (bit mask) */
#define GS_VIC4_SPRTILEN_MASK 240
/* Read horizontal raster scan position LSB */
#define VIC4_XPOSLSB $D050
/* Read horizontal raster scan position LSB */
#define XPOSLSB $D050
/* Read horizontal raster scan position MSB (address) */
#define VIC4_XPOSMSB_ADDR $D051
/* Read horizontal raster scan position MSB (address) */
#define XPOSMSB_ADDR $D051
/* Read horizontal raster scan position MSB (bit mask) */
#define VIC4_XPOSMSB_MASK 63
/* Read horizontal raster scan position MSB (bit mask) */
#define XPOSMSB_MASK 63
/* When set, the Raster Rewrite Buffer is only updated every 2nd raster line, limiting resolution to V200, but allowing more cycles for Raster-Rewrite actions. (address) */
#define VIC4_DBLRR_ADDR $D051
/* When set, the Raster Rewrite Buffer is only updated every 2nd raster line, limiting resolution to V200, but allowing more cycles for Raster-Rewrite actions. (address) */
#define DBLRR_ADDR $D051
/* When set, the Raster Rewrite Buffer is only updated every 2nd raster line, limiting resolution to V200, but allowing more cycles for Raster-Rewrite actions. (bit mask) */
#define VIC4_DBLRR_MASK 64
/* When set, the Raster Rewrite Buffer is only updated every 2nd raster line, limiting resolution to V200, but allowing more cycles for Raster-Rewrite actions. (bit mask) */
#define DBLRR_MASK 64
/* When clear, raster rewrite double buffering is used (address) */
#define VIC4_NORRDEL_ADDR $D051
/* When clear, raster rewrite double buffering is used (address) */
#define NORRDEL_ADDR $D051
/* When clear, raster rewrite double buffering is used (bit mask) */
#define VIC4_NORRDEL_MASK 128
/* When clear, raster rewrite double buffering is used (bit mask) */
#define NORRDEL_MASK 128
/* Read physical raster position */
#define VIC4_FNRASTERLSB $D052
/* Read physical raster position */
#define FNRASTERLSB $D052
/* Read physical raster position (address) */
#define VIC4_FN_RASTER_MSB_ADDR $D053
/* Read physical raster position (address) */
#define FN_RASTER_MSB_ADDR $D053
/* Read physical raster position (bit mask) */
#define VIC4_FN_RASTER_MSB_MASK 7
/* Read physical raster position (bit mask) */
#define FN_RASTER_MSB_MASK 7
/* Enable simulated shadow-mask (PALEMU must also be enabled) (address) */
#define VIC4_SHDEMU_ADDR $D053
/* Enable simulated shadow-mask (PALEMU must also be enabled) (address) */
#define SHDEMU_ADDR $D053
/* Enable simulated shadow-mask (PALEMU must also be enabled) (bit mask) */
#define VIC4_SHDEMU_MASK 64
/* Enable simulated shadow-mask (PALEMU must also be enabled) (bit mask) */
#define SHDEMU_MASK 64
/* Raster compare source (0=VIC-IV fine raster, 1=VIC-II raster) (address) */
#define VIC4_FNRST_ADDR $D053
/* Raster compare source (0=VIC-IV fine raster, 1=VIC-II raster) (address) */
#define FNRST_ADDR $D053
/* Raster compare source (0=VIC-IV fine raster, 1=VIC-II raster) (bit mask) */
#define VIC4_FNRST_MASK 128
/* Raster compare source (0=VIC-IV fine raster, 1=VIC-II raster) (bit mask) */
#define FNRST_MASK 128
/* Control register C */
#define SUMMARY_VIC_IV $D054
/* Control register C */
#define VIC_IV $D054
/* enable 16-bit character numbers (two screen bytes per character) (address) */
#define VIC4_CHR16_ADDR $D054
/* enable 16-bit character numbers (two screen bytes per character) (address) */
#define CHR16_ADDR $D054
/* enable 16-bit character numbers (two screen bytes per character) (bit mask) */
#define VIC4_CHR16_MASK 1
/* enable 16-bit character numbers (two screen bytes per character) (bit mask) */
#define CHR16_MASK 1
/* enable full-colour mode for character numbers <=$FF (address) */
#define VIC4_FCLRLO_ADDR $D054
/* enable full-colour mode for character numbers <=$FF (address) */
#define FCLRLO_ADDR $D054
/* enable full-colour mode for character numbers <=$FF (bit mask) */
#define VIC4_FCLRLO_MASK 2
/* enable full-colour mode for character numbers <=$FF (bit mask) */
#define FCLRLO_MASK 2
/* enable full-colour mode for character numbers >$FF (address) */
#define VIC4_FCLRHI_ADDR $D054
/* enable full-colour mode for character numbers >$FF (address) */
#define FCLRHI_ADDR $D054
/* enable full-colour mode for character numbers >$FF (bit mask) */
#define VIC4_FCLRHI_MASK 4
/* enable full-colour mode for character numbers >$FF (bit mask) */
#define FCLRHI_MASK 4
/* video output horizontal smoothing enable (address) */
#define VIC4_SMTH_ADDR $D054
/* video output horizontal smoothing enable (address) */
#define SMTH_ADDR $D054
/* video output horizontal smoothing enable (bit mask) */
#define VIC4_SMTH_MASK 8
/* video output horizontal smoothing enable (bit mask) */
#define SMTH_MASK 8
/* Sprite H640 enable; (address) */
#define VIC4_SPR640_ADDR $D054
/* Sprite H640 enable; (address) */
#define SPR640_ADDR $D054
/* Sprite H640 enable; (bit mask) */
#define VIC4_SPR640_MASK 16
/* Sprite H640 enable; (bit mask) */
#define SPR640_MASK 16
/* Enable PAL CRT-like scan-line emulation (address) */
#define VIC4_PALEMU_ADDR $D054
/* Enable PAL CRT-like scan-line emulation (address) */
#define PALEMU_ADDR $D054
/* Enable PAL CRT-like scan-line emulation (bit mask) */
#define VIC4_PALEMU_MASK 32
/* Enable PAL CRT-like scan-line emulation (bit mask) */
#define PALEMU_MASK 32
/* C65GS FAST mode (48MHz) (address) */
#define VIC4_VFAST_ADDR $D054
/* C65GS FAST mode (48MHz) (address) */
#define VFAST_ADDR $D054
/* C65GS FAST mode (48MHz) (bit mask) */
#define VIC4_VFAST_MASK 64
/* C65GS FAST mode (48MHz) (bit mask) */
#define VFAST_MASK 64
/* Alpha compositor enable (address) */
#define VIC4_ALPHEN_ADDR $D054
/* Alpha compositor enable (address) */
#define ALPHEN_ADDR $D054
/* Alpha compositor enable (bit mask) */
#define VIC4_ALPHEN_MASK 128
/* Alpha compositor enable (bit mask) */
#define ALPHEN_MASK 128
/* sprite extended height enable (one bit per sprite) */
#define VIC4_SPRHGTEN $D055
/* sprite extended height enable (one bit per sprite) */
#define SPRHGTEN $D055
/* Sprite extended height size (sprite pixels high) */
#define VIC4_SPRHGHT $D056
/* Sprite extended height size (sprite pixels high) */
#define SPRHGHT $D056
/* Sprite extended width enables (8 bytes per sprite row = 64 pixels wide for normal sprites or 16 pixels wide for 16-colour sprite mode) */
#define VIC4_SPRX64EN $D057
/* Sprite extended width enables (8 bytes per sprite row = 64 pixels wide for normal sprites or 16 pixels wide for 16-colour sprite mode) */
#define SPRX64EN $D057
/* number of bytes to advance between each text row (LSB) */
#define VIC4_LINESTEPLSB $D058
/* number of bytes to advance between each text row (LSB) */
#define LINESTEPLSB $D058
/* number of bytes to advance between each text row (MSB) */
#define VIC4_LINESTEPMSB $D059
/* number of bytes to advance between each text row (MSB) */
#define LINESTEPMSB $D059
/* Horizontal hardware scale of text mode (pixel 120ths per pixel) */
#define VIC4_CHRXSCL $D05A
/* Horizontal hardware scale of text mode (pixel 120ths per pixel) */
#define CHRXSCL $D05A
/* Vertical scaling of text mode (number of physical rasters per char text row) */
#define VIC4_CHRYSCL $D05B
/* Vertical scaling of text mode (number of physical rasters per char text row) */
#define CHRYSCL $D05B
/* Width of single side border (LSB) */
#define VIC4_SDBDRWD_LSB $D05C
/* Width of single side border (LSB) */
#define SDBDRWD_LSB $D05C
/* side border width (MSB) (address) */
#define VIC4_SDBDRWD_MSB_ADDR $D05D
/* side border width (MSB) (address) */
#define SDBDRWD_MSB_ADDR $D05D
/* side border width (MSB) (bit mask) */
#define VIC4_SDBDRWD_MSB_MASK 63
/* side border width (MSB) (bit mask) */
#define SDBDRWD_MSB_MASK 63
/* Enable raster delay (delays raster counter and interrupts by one line to match output pipeline latency) (address) */
#define VIC4_RST_DELEN_ADDR $D05D
/* Enable raster delay (delays raster counter and interrupts by one line to match output pipeline latency) (address) */
#define RST_DELEN_ADDR $D05D
/* Enable raster delay (delays raster counter and interrupts by one line to match output pipeline latency) (bit mask) */
#define VIC4_RST_DELEN_MASK 64
/* Enable raster delay (delays raster counter and interrupts by one line to match output pipeline latency) (bit mask) */
#define RST_DELEN_MASK 64
/* Enable VIC-II hot registers. When enabled, touching many VIC-II registers causes the VIC-IV to recalculate display parameters, such as border positions and sizes (address) */
#define VIC4_HOTREG_ADDR $D05D
/* Enable VIC-II hot registers. When enabled, touching many VIC-II registers causes the VIC-IV to recalculate display parameters, such as border positions and sizes (address) */
#define HOTREG_ADDR $D05D
/* Enable VIC-II hot registers. When enabled, touching many VIC-II registers causes the VIC-IV to recalculate display parameters, such as border positions and sizes (bit mask) */
#define VIC4_HOTREG_MASK 128
/* Enable VIC-II hot registers. When enabled, touching many VIC-II registers causes the VIC-IV to recalculate display parameters, such as border positions and sizes (bit mask) */
#define HOTREG_MASK 128
/* Number of characters to display per row (LSB) */
#define VIC4_CHRCOUNT $D05E
/* Number of characters to display per row (LSB) */
#define CHRCOUNT $D05E
/* Sprite H640 X Super-MSBs */
#define VIC4_SPRXSMSBS $D05F
/* Sprite H640 X Super-MSBs */
#define SPRXSMSBS $D05F
/* screen RAM precise base address (bits 0 - 7) */
#define VIC4_SCRNPTRLSB $D060
/* screen RAM precise base address (bits 0 - 7) */
#define SCRNPTRLSB $D060
/* screen RAM precise base address (bits 15 - 8) */
#define VIC4_SCRNPTRMSB $D061
/* screen RAM precise base address (bits 15 - 8) */
#define SCRNPTRMSB $D061
/* screen RAM precise base address (bits 23 - 16) */
#define VIC4_SCRNPTRBNK $D062
/* screen RAM precise base address (bits 23 - 16) */
#define SCRNPTRBNK $D062
/* screen RAM precise base address (bits 31 - 24) (address) */
#define VIC4_SCRNPTRMB_ADDR $D063
/* screen RAM precise base address (bits 31 - 24) (address) */
#define SCRNPTRMB_ADDR $D063
/* screen RAM precise base address (bits 31 - 24) (bit mask) */
#define VIC4_SCRNPTRMB_MASK 15
/* screen RAM precise base address (bits 31 - 24) (bit mask) */
#define SCRNPTRMB_MASK 15
/* Number of characters to display per (address) */
#define VIC4_CHRCOUNT_ADDR $D063
/* Number of characters to display per (address) */
#define CHRCOUNT_ADDR $D063
/* Number of characters to display per (bit mask) */
#define VIC4_CHRCOUNT_MASK 48
/* Number of characters to display per (bit mask) */
#define CHRCOUNT_MASK 48
/* source full-colour character data from expansion RAM (address) */
#define VIC4_EXGLYPH_ADDR $D063
/* source full-colour character data from expansion RAM (address) */
#define EXGLYPH_ADDR $D063
/* source full-colour character data from expansion RAM (bit mask) */
#define VIC4_EXGLYPH_MASK 128
/* source full-colour character data from expansion RAM (bit mask) */
#define EXGLYPH_MASK 128
/* colour RAM base address (bits 0 - 7) */
#define VIC4_COLPTRLSB $D064
/* colour RAM base address (bits 0 - 7) */
#define COLPTRLSB $D064
/* colour RAM base address (bits 15 - 8) */
#define VIC4_COLPTRMSB $D065
/* colour RAM base address (bits 15 - 8) */
#define COLPTRMSB $D065
/* Sprite/bitplane first X DEBUG WILL BE REMOVED */
#define DEBUG_SBPDEBUG $D067
/* Sprite/bitplane first X DEBUG WILL BE REMOVED */
#define SBPDEBUG $D067
/* Character set precise base address (bits 0 - 7) */
#define VIC4_CHARPTRLSB $D068
/* Character set precise base address (bits 0 - 7) */
#define CHARPTRLSB $D068
/* Character set precise base address (bits 15 - 8) */
#define VIC4_CHARPTRMSB $D069
/* Character set precise base address (bits 15 - 8) */
#define CHARPTRMSB $D069
/* Character set precise base address (bits 23 - 16) */
#define VIC4_CHARPTRBNK $D06A
/* Character set precise base address (bits 23 - 16) */
#define CHARPTRBNK $D06A
/* sprite 16-colour mode enables */
#define VIC4_SPR16EN $D06B
/* sprite 16-colour mode enables */
#define SPR16EN $D06B
/* sprite pointer address (bits 7 - 0) */
#define VIC4_SPRPTRADRLSB $D06C
/* sprite pointer address (bits 7 - 0) */
#define SPRPTRADRLSB $D06C
/* sprite pointer address (bits 15 - 8) */
#define VIC4_SPRPTRADRMSB $D06D
/* sprite pointer address (bits 15 - 8) */
#define SPRPTRADRMSB $D06D
/* sprite pointer address (bits 23 - 16) (address) */
#define VIC4_SPRPTRBNK_ADDR $D06E
/* sprite pointer address (bits 23 - 16) (address) */
#define SPRPTRBNK_ADDR $D06E
/* sprite pointer address (bits 23 - 16) (bit mask) */
#define VIC4_SPRPTRBNK_MASK 127
/* sprite pointer address (bits 23 - 16) (bit mask) */
#define SPRPTRBNK_MASK 127
/* 16-bit sprite pointer mode (allows sprites to be located on any 64 byte boundary in chip RAM) (address) */
#define VIC4_SPR_PTR16_ADDR $D06E
/* 16-bit sprite pointer mode (allows sprites to be located on any 64 byte boundary in chip RAM) (address) */
#define SPR_PTR16_ADDR $D06E
/* 16-bit sprite pointer mode (allows sprites to be located on any 64 byte boundary in chip RAM) (bit mask) */
#define VIC4_SPR_PTR16_MASK 128
/* 16-bit sprite pointer mode (allows sprites to be located on any 64 byte boundary in chip RAM) (bit mask) */
#define SPR_PTR16_MASK 128
/* first VIC-II raster line (address) */
#define VIC4_RASLINE0_ADDR $D06F
/* first VIC-II raster line (address) */
#define RASLINE0_ADDR $D06F
/* first VIC-II raster line (bit mask) */
#define VIC4_RASLINE0_MASK 63
/* first VIC-II raster line (bit mask) */
#define RASLINE0_MASK 63
/* Select more VGA-compatible mode if set, instead of HDMI/HDTV VIC-II cycle-exact frame timing. May help to produce a functional display on older VGA monitors. (address) */
#define VIC4_VGAHDTV_ADDR $D06F
/* Select more VGA-compatible mode if set, instead of HDMI/HDTV VIC-II cycle-exact frame timing. May help to produce a functional display on older VGA monitors. (address) */
#define VGAHDTV_ADDR $D06F
/* Select more VGA-compatible mode if set, instead of HDMI/HDTV VIC-II cycle-exact frame timing. May help to produce a functional display on older VGA monitors. (bit mask) */
#define VIC4_VGAHDTV_MASK 64
/* Select more VGA-compatible mode if set, instead of HDMI/HDTV VIC-II cycle-exact frame timing. May help to produce a functional display on older VGA monitors. (bit mask) */
#define VGAHDTV_MASK 64
/* NTSC emulation mode (max raster = 262) (address) */
#define VIC4_PALNTSC_ADDR $D06F
/* NTSC emulation mode (max raster = 262) (address) */
#define PALNTSC_ADDR $D06F
/* NTSC emulation mode (max raster = 262) (bit mask) */
#define VIC4_PALNTSC_MASK 128
/* NTSC emulation mode (max raster = 262) (bit mask) */
#define PALNTSC_MASK 128
/* VIC-IV bitmap/text palette bank (alternate palette) (address) */
#define VIC4_ABTPALSEL_ADDR $D070
/* VIC-IV bitmap/text palette bank (alternate palette) (address) */
#define ABTPALSEL_ADDR $D070
/* VIC-IV bitmap/text palette bank (alternate palette) (bit mask) */
#define VIC4_ABTPALSEL_MASK 3
/* VIC-IV bitmap/text palette bank (alternate palette) (bit mask) */
#define ABTPALSEL_MASK 3
/* sprite palette bank (address) */
#define VIC4_SPRPALSEL_ADDR $D070
/* sprite palette bank (address) */
#define SPRPALSEL_ADDR $D070
/* sprite palette bank (bit mask) */
#define VIC4_SPRPALSEL_MASK 12
/* sprite palette bank (bit mask) */
#define SPRPALSEL_MASK 12
/* bitmap/text palette bank (address) */
#define VIC4_BTPALSEL_ADDR $D070
/* bitmap/text palette bank (address) */
#define BTPALSEL_ADDR $D070
/* bitmap/text palette bank (bit mask) */
#define VIC4_BTPALSEL_MASK 48
/* bitmap/text palette bank (bit mask) */
#define BTPALSEL_MASK 48
/* palette bank mapped at $D100-$D3FF (address) */
#define VIC4_MAPEDPAL_ADDR $D070
/* palette bank mapped at $D100-$D3FF (address) */
#define MAPEDPAL_ADDR $D070
/* palette bank mapped at $D100-$D3FF (bit mask) */
#define VIC4_MAPEDPAL_MASK 192
/* palette bank mapped at $D100-$D3FF (bit mask) */
#define MAPEDPAL_MASK 192
/* VIC-IV 16-colour bitplane enable flags */
#define VIC4_BP16ENS $D071
/* VIC-IV 16-colour bitplane enable flags */
#define BP16ENS $D071
/* Sprite Y position adjustment */
#define VIC4_SPRYADJ $D072
/* Sprite Y position adjustment */
#define SPRYADJ $D072
/* Alpha delay for compositor (address) */
#define VIC4_ALPHADELAY_ADDR $D073
/* Alpha delay for compositor (address) */
#define ALPHADELAY_ADDR $D073
/* Alpha delay for compositor (bit mask) */
#define VIC4_ALPHADELAY_MASK 15
/* Alpha delay for compositor (bit mask) */
#define ALPHADELAY_MASK 15
/* physical rasters per VIC-II raster (1 to 16) (address) */
#define VIC4_RASTERHEIGHT_ADDR $D073
/* physical rasters per VIC-II raster (1 to 16) (address) */
#define RASTERHEIGHT_ADDR $D073
/* physical rasters per VIC-II raster (1 to 16) (bit mask) */
#define VIC4_RASTERHEIGHT_MASK 240
/* physical rasters per VIC-II raster (1 to 16) (bit mask) */
#define RASTERHEIGHT_MASK 240
/* Sprite alpha-blend enable */
#define VIC4_SPRENALPHA $D074
/* Sprite alpha-blend enable */
#define SPRENALPHA $D074
/* Sprite alpha-blend value */
#define VIC4_SPRALPHAVAL $D075
/* Sprite alpha-blend value */
#define SPRALPHAVAL $D075
/* Sprite V400 enables */
#define VIC4_SPRENV400 $D076
/* Sprite V400 enables */
#define SPRENV400 $D076
/* Sprite V400 Y position MSBs */
#define VIC4_SRPYMSBS $D077
/* Sprite V400 Y position MSBs */
#define SRPYMSBS $D077
/* Sprite V400 Y position super MSBs */
#define VIC4_SPRYSMSBS $D078
/* Sprite V400 Y position super MSBs */
#define SPRYSMSBS $D078
/* Raster compare value */
#define VIC4_RSTCOMP $D079
/* Raster compare value */
#define RSTCOMP $D079
/* Raster compare value MSB (address) */
#define VIC4_RSTCMP_ADDR $D07A
/* Raster compare value MSB (address) */
#define RSTCMP_ADDR $D07A
/* Raster compare value MSB (bit mask) */
#define VIC4_RSTCMP_MASK 7
/* Raster compare value MSB (bit mask) */
#define RSTCMP_MASK 7
/* Continuously monitor sprite pointer, to allow changing sprite data source while a sprite is being drawn (address) */
#define VIC4_SPTR_CONT_ADDR $D07A
/* Continuously monitor sprite pointer, to allow changing sprite data source while a sprite is being drawn (address) */
#define SPTR_CONT_ADDR $D07A
/* Continuously monitor sprite pointer, to allow changing sprite data source while a sprite is being drawn (bit mask) */
#define VIC4_SPTR_CONT_MASK 8
/* Continuously monitor sprite pointer, to allow changing sprite data source while a sprite is being drawn (bit mask) */
#define SPTR_CONT_MASK 8
/* Reserved. (address) */
#define VIC4_RESV_ADDR $D07A
/* Reserved. (bit mask) */
#define VIC4_RESV_MASK 48
/* Enable additional IRQ sources, e.g., raster X position. (address) */
#define VIC4_EXTIRQS_ADDR $D07A
/* Enable additional IRQ sources, e.g., raster X position. (address) */
#define EXTIRQS_ADDR $D07A
/* Enable additional IRQ sources, e.g., raster X position. (bit mask) */
#define VIC4_EXTIRQS_MASK 64
/* Enable additional IRQ sources, e.g., raster X position. (bit mask) */
#define EXTIRQS_MASK 64
/* Raster compare is in physical rasters if set, or VIC-II raster if clear (address) */
#define VIC4_FNRST_CMP_ADDR $D07A
/* Raster compare is in physical rasters if set, or VIC-II raster if clear (address) */
#define FNRST_CMP_ADDR $D07A
/* Raster compare is in physical rasters if set, or VIC-II raster if clear (bit mask) */
#define VIC4_FNRST_CMP_MASK 128
/* Raster compare is in physical rasters if set, or VIC-II raster if clear (bit mask) */
#define FNRST_CMP_MASK 128
/* of text rows to display */
#define VIC4_Number $D07B
/* of text rows to display */
#define Number $D07B
/* Set which 128KB bank bitplanes (address) */
#define VIC4_BIT_PBANK_ADDR $D07C
/* Set which 128KB bank bitplanes (address) */
#define BIT_PBANK_ADDR $D07C
/* Set which 128KB bank bitplanes (bit mask) */
#define VIC4_BIT_PBANK_MASK 7
/* Set which 128KB bank bitplanes (bit mask) */
#define BIT_PBANK_MASK 7
/* @RESV (address) */
#define GS_VIC4_RESV_ADDR $D07C
/* @RESV (bit mask) */
#define GS_VIC4_RESV_MASK 8
/* hsync polarity (address) */
#define VIC4_HSYNCP_ADDR $D07C
/* hsync polarity (address) */
#define HSYNCP_ADDR $D07C
/* hsync polarity (bit mask) */
#define VIC4_HSYNCP_MASK 16
/* hsync polarity (bit mask) */
#define HSYNCP_MASK 16
/* vsync polarity (address) */
#define VIC4_VSYNCP_ADDR $D07C
/* vsync polarity (address) */
#define VSYNCP_ADDR $D07C
/* vsync polarity (bit mask) */
#define VIC4_VSYNCP_MASK 32
/* vsync polarity (bit mask) */
#define VSYNCP_MASK 32
/* VIC-IV debug pixel select red(01), green(10) or blue(11) channel visible in $D07D (address) */
#define VIC4_DEBUGC_ADDR $D07C
/* VIC-IV debug pixel select red(01), green(10) or blue(11) channel visible in $D07D (address) */
#define DEBUGC_ADDR $D07C
/* VIC-IV debug pixel select red(01), green(10) or blue(11) channel visible in $D07D (bit mask) */
#define VIC4_DEBUGC_MASK 192
/* VIC-IV debug pixel select red(01), green(10) or blue(11) channel visible in $D07D (bit mask) */
#define DEBUGC_MASK 192
/* VIC-IV debug value read-back (read only) */
#define DEBUG_DEBUGOUT $D07D
/* VIC-IV debug value read-back (read only) */
#define DEBUGOUT $D07D
/* VIC-IV debug X position (LSB) (write only) */
#define DEBUG_DEBUGX $D07D
/* VIC-IV debug X position (LSB) (write only) */
#define DEBUGX $D07D
/* VIC-IV debug Y position (LSB) */
#define DEBUG_DEBUGY $D07E
/* VIC-IV debug Y position (LSB) */
#define DEBUGY $D07E
/* VIC-IV debug X position (MSB) (address) */
#define DEBUG_DEBUGX_ADDR $D07F
/* VIC-IV debug X position (MSB) (address) */
#define DEBUGX_ADDR $D07F
/* VIC-IV debug X position (MSB) (bit mask) */
#define DEBUG_DEBUGX_MASK 15
/* VIC-IV debug X position (MSB) (bit mask) */
#define DEBUGX_MASK 15
/* VIC-IV debug Y position (MSB) (address) */
#define DEBUG_DEBUGY_ADDR $D07F
/* VIC-IV debug Y position (MSB) (address) */
#define DEBUGY_ADDR $D07F
/* VIC-IV debug Y position (MSB) (bit mask) */
#define DEBUG_DEBUGY_MASK 240
/* VIC-IV debug Y position (MSB) (bit mask) */
#define DEBUGY_MASK 240
/* VIC-IV debug out-of-frame signal enable (address) */
#define DEBUG_DEBUGOOF_ADDR $D07F
/* VIC-IV debug out-of-frame signal enable (address) */
#define DEBUGOOF_ADDR $D07F
/* VIC-IV debug out-of-frame signal enable (bit mask) */
#define DEBUG_DEBUGOOF_MASK 128
/* VIC-IV debug out-of-frame signal enable (bit mask) */
#define DEBUGOOF_MASK 128
/* Drive select (0 to 7). Internal drive is 0. Second floppy drive on internal cable is 1. Other values reserved for C1565 external drive interface. (address) */
#define FDC_DS_ADDR $D080
/* Drive select (0 to 7). Internal drive is 0. Second floppy drive on internal cable is 1. Other values reserved for C1565 external drive interface. (address) */
#define DS_ADDR $D080
/* Drive select (0 to 7). Internal drive is 0. Second floppy drive on internal cable is 1. Other values reserved for C1565 external drive interface. (bit mask) */
#define FDC_DS_MASK 7
/* Drive select (0 to 7). Internal drive is 0. Second floppy drive on internal cable is 1. Other values reserved for C1565 external drive interface. (bit mask) */
#define DS_MASK 7
/* Directly controls the SIDE signal to the floppy drive, i.e., selecting which side of the media is active. (address) */
#define FDC_SIDE_ADDR $D080
/* Directly controls the SIDE signal to the floppy drive, i.e., selecting which side of the media is active. (address) */
#define SIDE_ADDR $D080
/* Directly controls the SIDE signal to the floppy drive, i.e., selecting which side of the media is active. (bit mask) */
#define FDC_SIDE_MASK 8
/* Directly controls the SIDE signal to the floppy drive, i.e., selecting which side of the media is active. (bit mask) */
#define SIDE_MASK 8
/* Swap upper and lower halves of data buffer (i.e. invert bit 8 of the sector buffer) (address) */
#define FDC_SWAP_ADDR $D080
/* Swap upper and lower halves of data buffer (i.e. invert bit 8 of the sector buffer) (address) */
#define SWAP_ADDR $D080
/* Swap upper and lower halves of data buffer (i.e. invert bit 8 of the sector buffer) (bit mask) */
#define FDC_SWAP_MASK 16
/* Swap upper and lower halves of data buffer (i.e. invert bit 8 of the sector buffer) (bit mask) */
#define SWAP_MASK 16
/* Activates drive motor and LED (unless LED signal is also set, causing the drive LED to blink) (address) */
#define FDC_MOTOR_ADDR $D080
/* Activates drive motor and LED (unless LED signal is also set, causing the drive LED to blink) (address) */
#define MOTOR_ADDR $D080
/* Activates drive motor and LED (unless LED signal is also set, causing the drive LED to blink) (bit mask) */
#define FDC_MOTOR_MASK 32
/* Activates drive motor and LED (unless LED signal is also set, causing the drive LED to blink) (bit mask) */
#define MOTOR_MASK 32
/* Drive LED blinks when set (address) */
#define FDC_LED_ADDR $D080
/* Drive LED blinks when set (address) */
#define LED_ADDR $D080
/* Drive LED blinks when set (bit mask) */
#define FDC_LED_MASK 64
/* Drive LED blinks when set (bit mask) */
#define LED_MASK 64
/* When set, enables interrupts to occur. Clearing clears any pending interrupt and disables interrupts until set again. (address) */
#define FDC_IRQ_ADDR $D080
/* When set, enables interrupts to occur. Clearing clears any pending interrupt and disables interrupts until set again. (bit mask) */
#define FDC_IRQ_MASK 128
/* F011 FDC command register */
#define FDC_COMMAND $D081
/* Reset the sector buffer read/write pointers (address) */
#define FDC_NOBUF_ADDR $D081
/* Reset the sector buffer read/write pointers (address) */
#define NOBUF_ADDR $D081
/* Reset the sector buffer read/write pointers (bit mask) */
#define FDC_NOBUF_MASK 1
/* Reset the sector buffer read/write pointers (bit mask) */
#define NOBUF_MASK 1
/* Selects alternate DPLL read recovery method (not implemented) (address) */
#define FDC_ALT_ADDR $D081
/* Selects alternate DPLL read recovery method (not implemented) (address) */
#define ALT_ADDR $D081
/* Selects alternate DPLL read recovery method (not implemented) (bit mask) */
#define FDC_ALT_MASK 2
/* Selects alternate DPLL read recovery method (not implemented) (bit mask) */
#define ALT_MASK 2
/* Selects reading and writing algorithm (currently ignored). (address) */
#define FDC_ALGO_ADDR $D081
/* Selects reading and writing algorithm (currently ignored). (address) */
#define ALGO_ADDR $D081
/* Selects reading and writing algorithm (currently ignored). (bit mask) */
#define FDC_ALGO_MASK 4
/* Selects reading and writing algorithm (currently ignored). (bit mask) */
#define ALGO_MASK 4
/* Sets the stepping direction (inward vs (address) */
#define FDC_DIR_ADDR $D081
/* Sets the stepping direction (inward vs (address) */
#define DIR_ADDR $D081
/* Sets the stepping direction (inward vs (bit mask) */
#define FDC_DIR_MASK 8
/* Sets the stepping direction (inward vs (bit mask) */
#define DIR_MASK 8
/* Writing 1 causes the head to step in the indicated direction (address) */
#define FDC_STEP_ADDR $D081
/* Writing 1 causes the head to step in the indicated direction (address) */
#define STEP_ADDR $D081
/* Writing 1 causes the head to step in the indicated direction (bit mask) */
#define FDC_STEP_MASK 16
/* Writing 1 causes the head to step in the indicated direction (bit mask) */
#define STEP_MASK 16
/* Command is a free-format (low level) operation (address) */
#define FDC_FREE_ADDR $D081
/* Command is a free-format (low level) operation (address) */
#define FREE_ADDR $D081
/* Command is a free-format (low level) operation (bit mask) */
#define FDC_FREE_MASK 32
/* Command is a free-format (low level) operation (bit mask) */
#define FREE_MASK 32
/* Command is a read operation if set (address) */
#define FDC_RDCMD_ADDR $D081
/* Command is a read operation if set (address) */
#define RDCMD_ADDR $D081
/* Command is a read operation if set (bit mask) */
#define FDC_RDCMD_MASK 64
/* Command is a read operation if set (bit mask) */
#define RDCMD_MASK 64
/* Command is a write operation if set (address) */
#define FDC_WRCMD_ADDR $D081
/* Command is a write operation if set (address) */
#define WRCMD_ADDR $D081
/* Command is a write operation if set (bit mask) */
#define FDC_WRCMD_MASK 128
/* Command is a write operation if set (bit mask) */
#define WRCMD_MASK 128
/* F011 Head is over track 0 flag (read only) (address) */
#define FDC_TK0_ADDR $D082
/* F011 Head is over track 0 flag (read only) (address) */
#define TK0_ADDR $D082
/* F011 Head is over track 0 flag (read only) (bit mask) */
#define FDC_TK0_MASK 1
/* F011 Head is over track 0 flag (read only) (bit mask) */
#define TK0_MASK 1
/* F011 Disk write protect flag (read only) (address) */
#define FDC_PROT_ADDR $D082
/* F011 Disk write protect flag (read only) (address) */
#define PROT_ADDR $D082
/* F011 Disk write protect flag (read only) (bit mask) */
#define FDC_PROT_MASK 2
/* F011 Disk write protect flag (read only) (bit mask) */
#define PROT_MASK 2
/* F011 LOST flag (data was lost during transfer, i.e., CPU did not read data fast enough) (read only) (address) */
#define FDC_LOST_ADDR $D082
/* F011 LOST flag (data was lost during transfer, i.e., CPU did not read data fast enough) (read only) (address) */
#define LOST_ADDR $D082
/* F011 LOST flag (data was lost during transfer, i.e., CPU did not read data fast enough) (read only) (bit mask) */
#define FDC_LOST_MASK 4
/* F011 LOST flag (data was lost during transfer, i.e., CPU did not read data fast enough) (read only) (bit mask) */
#define LOST_MASK 4
/* F011 FDC CRC check failure flag (read only) (address) */
#define FDC_CRC_ADDR $D082
/* F011 FDC CRC check failure flag (read only) (address) */
#define CRC_ADDR $D082
/* F011 FDC CRC check failure flag (read only) (bit mask) */
#define FDC_CRC_MASK 8
/* F011 FDC CRC check failure flag (read only) (bit mask) */
#define CRC_MASK 8
/* F011 FDC Request Not Found (RNF), i.e., a sector read or write operation did not find the requested sector (read only) (address) */
#define FDC_RNF_ADDR $D082
/* F011 FDC Request Not Found (RNF), i.e., a sector read or write operation did not find the requested sector (read only) (address) */
#define RNF_ADDR $D082
/* F011 FDC Request Not Found (RNF), i.e., a sector read or write operation did not find the requested sector (read only) (bit mask) */
#define FDC_RNF_MASK 16
/* F011 FDC Request Not Found (RNF), i.e., a sector read or write operation did not find the requested sector (read only) (bit mask) */
#define RNF_MASK 16
/* F011 FDC CPU and disk pointers to sector buffer are equal, indicating that the sector buffer is either full or empty. (read only) (address) */
#define FDC_EQ_ADDR $D082
/* F011 FDC CPU and disk pointers to sector buffer are equal, indicating that the sector buffer is either full or empty. (read only) (address) */
#define EQ_ADDR $D082
/* F011 FDC CPU and disk pointers to sector buffer are equal, indicating that the sector buffer is either full or empty. (read only) (bit mask) */
#define FDC_EQ_MASK 32
/* F011 FDC CPU and disk pointers to sector buffer are equal, indicating that the sector buffer is either full or empty. (read only) (bit mask) */
#define EQ_MASK 32
/* F011 FDC DRQ flag (one or more bytes of data are ready) (read only) (address) */
#define FDC_DRQ_ADDR $D082
/* F011 FDC DRQ flag (one or more bytes of data are ready) (read only) (address) */
#define DRQ_ADDR $D082
/* F011 FDC DRQ flag (one or more bytes of data are ready) (read only) (bit mask) */
#define FDC_DRQ_MASK 64
/* F011 FDC DRQ flag (one or more bytes of data are ready) (read only) (bit mask) */
#define DRQ_MASK 64
/* F011 FDC busy flag (command is being executed) (read only) (address) */
#define FDC_BUSY_ADDR $D082
/* F011 FDC busy flag (command is being executed) (read only) (address) */
#define BUSY_ADDR $D082
/* F011 FDC busy flag (command is being executed) (read only) (bit mask) */
#define FDC_BUSY_MASK 128
/* F011 FDC busy flag (command is being executed) (read only) (bit mask) */
#define BUSY_MASK 128
/* F011 disk change sense (read only) (address) */
#define FDC_DSKCHG_ADDR $D083
/* F011 disk change sense (read only) (address) */
#define DSKCHG_ADDR $D083
/* F011 disk change sense (read only) (bit mask) */
#define FDC_DSKCHG_MASK 1
/* F011 disk change sense (read only) (bit mask) */
#define DSKCHG_MASK 1
/* The floppy controller has generated an interrupt (read only). Note that interrupts are not currently implemented on the 45GS27. (address) */
#define C65_FDC_IRQ_ADDR $D083
/* The floppy controller has generated an interrupt (read only). Note that interrupts are not currently implemented on the 45GS27. (bit mask) */
#define C65_FDC_IRQ_MASK 2
/* F011 Index hole sense (read only) (address) */
#define FDC_INDEX_ADDR $D083
/* F011 Index hole sense (read only) (address) */
#define INDEX_ADDR $D083
/* F011 Index hole sense (read only) (bit mask) */
#define FDC_INDEX_MASK 4
/* F011 Index hole sense (read only) (bit mask) */
#define INDEX_MASK 4
/* F011 Disk sense (read only) (address) */
#define FDC_DISKIN_ADDR $D083
/* F011 Disk sense (read only) (address) */
#define DISKIN_ADDR $D083
/* F011 Disk sense (read only) (bit mask) */
#define FDC_DISKIN_MASK 8
/* F011 Disk sense (read only) (bit mask) */
#define DISKIN_MASK 8
/* F011 write gate flag. Indicates that the drive is currently writing to media. Bad things may happen if a write transaction is aborted (read only) (address) */
#define FDC_WGATE_ADDR $D083
/* F011 write gate flag. Indicates that the drive is currently writing to media. Bad things may happen if a write transaction is aborted (read only) (address) */
#define WGATE_ADDR $D083
/* F011 write gate flag. Indicates that the drive is currently writing to media. Bad things may happen if a write transaction is aborted (read only) (bit mask) */
#define FDC_WGATE_MASK 16
/* F011 write gate flag. Indicates that the drive is currently writing to media. Bad things may happen if a write transaction is aborted (read only) (bit mask) */
#define WGATE_MASK 16
/* F011 Successive match. A synonym of RDREQ on the 45IO47 (read only) (address) */
#define FDC_RUN_ADDR $D083
/* F011 Successive match. A synonym of RDREQ on the 45IO47 (read only) (address) */
#define RUN_ADDR $D083
/* F011 Successive match. A synonym of RDREQ on the 45IO47 (read only) (bit mask) */
#define FDC_RUN_MASK 32
/* F011 Successive match. A synonym of RDREQ on the 45IO47 (read only) (bit mask) */
#define RUN_MASK 32
/* F011 Write Request flag, i.e., the requested sector was found during a write operation (read only) (address) */
#define FDC_WTREQ_ADDR $D083
/* F011 Write Request flag, i.e., the requested sector was found during a write operation (read only) (address) */
#define WTREQ_ADDR $D083
/* F011 Write Request flag, i.e., the requested sector was found during a write operation (read only) (bit mask) */
#define FDC_WTREQ_MASK 64
/* F011 Write Request flag, i.e., the requested sector was found during a write operation (read only) (bit mask) */
#define WTREQ_MASK 64
/* F011 Read Request flag, i.e., the requested sector was found during a read operation (read only) (address) */
#define FDC_RDREQ_ADDR $D083
/* F011 Read Request flag, i.e., the requested sector was found during a read operation (read only) (address) */
#define RDREQ_ADDR $D083
/* F011 Read Request flag, i.e., the requested sector was found during a read operation (read only) (bit mask) */
#define FDC_RDREQ_MASK 128
/* F011 Read Request flag, i.e., the requested sector was found during a read operation (read only) (bit mask) */
#define RDREQ_MASK 128
/* F011 FDC track selection register */
#define FDC_TRACK $D084
/* F011 FDC track selection register */
#define TRACK $D084
/* F011 FDC sector selection register */
#define FDC_SECTOR $D085
/* F011 FDC sector selection register */
#define SECTOR $D085
/* F011 FDC side selection register */
#define FDC_SIDE $D086
/* F011 FDC side selection register */
#define SIDE $D086
/* F011 FDC data register (read/write) for accessing the floppy controller's 512 byte sector buffer */
#define FDC_DATA $D087
/* Set or read the clock pattern to be used when writing address and data marks. Should normally be left $FF */
#define FDC_CLOCK $D088
/* Set or read the clock pattern to be used when writing address and data marks. Should normally be left $FF */
#define CLOCK $D088
/* Set or read the track stepping rate in 62.5 microsecond steps (normally 128, i.e., 8 milliseconds). */
#define FDC_STEP $D089
/* Set or read the track stepping rate in 62.5 microsecond steps (normally 128, i.e., 8 milliseconds). */
#define STEP $D089
/* (Read only) returns the protection code of the most recently read sector. Was intended for rudimentary copy protection. Not implemented. */
#define FDC_PCODE $D08A
/* (Read only) returns the protection code of the most recently read sector. Was intended for rudimentary copy protection. Not implemented. */
#define PCODE $D08A
/* Reserved for C65 RAM Expansion Controller. */
#define SUMMARY_REC $D0A0
/* Reserved for C65 RAM Expansion Controller. */
#define REC $D0A0
/* red palette values (reversed nybl order) */
#define VIC3_PALRED $D100
/* red palette values (reversed nybl order) */
#define PALRED $D100
/* green palette values (reversed nybl order) */
#define VIC3_PALGREEN $D200
/* green palette values (reversed nybl order) */
#define PALGREEN $D200
/* blue palette values (reversed nybl order) */
#define VIC3_PALBLUE $D300
/* blue palette values (reversed nybl order) */
#define PALBLUE $D300
/* Select VIC-IV debug stream via ethernet when \$D6E1.3 is set */
#define ETHCOMMAND_DEBUGVIC $D4
/* Select VIC-IV debug stream via ethernet when \$D6E1.3 is set */
#define DEBUGVIC $D4
/* UART data register (read or write) */
#define UART_DATA $D600
/* UART RX byte ready flag (clear by reading \$D600) (address) */
#define UART_RXRDY_ADDR $D601
/* UART RX byte ready flag (clear by reading \$D600) (address) */
#define RXRDY_ADDR $D601
/* UART RX byte ready flag (clear by reading \$D600) (bit mask) */
#define UART_RXRDY_MASK 1
/* UART RX byte ready flag (clear by reading \$D600) (bit mask) */
#define RXRDY_MASK 1
/* UART RX overrun flag (clear by reading \$D600) (address) */
#define UART_RXOVRRUN_ADDR $D601
/* UART RX overrun flag (clear by reading \$D600) (address) */
#define RXOVRRUN_ADDR $D601
/* UART RX overrun flag (clear by reading \$D600) (bit mask) */
#define UART_RXOVRRUN_MASK 2
/* UART RX overrun flag (clear by reading \$D600) (bit mask) */
#define RXOVRRUN_MASK 2
/* UART RX parity error flag (clear by reading \$D600) (address) */
#define UART_PTYERR_ADDR $D601
/* UART RX parity error flag (clear by reading \$D600) (address) */
#define PTYERR_ADDR $D601
/* UART RX parity error flag (clear by reading \$D600) (bit mask) */
#define UART_PTYERR_MASK 4
/* UART RX parity error flag (clear by reading \$D600) (bit mask) */
#define PTYERR_MASK 4
/* UART RX framing error flag (clear by reading \$D600) (address) */
#define UART_FRMERR_ADDR $D601
/* UART RX framing error flag (clear by reading \$D600) (address) */
#define FRMERR_ADDR $D601
/* UART RX framing error flag (clear by reading \$D600) (bit mask) */
#define UART_FRMERR_MASK 8
/* UART RX framing error flag (clear by reading \$D600) (bit mask) */
#define FRMERR_MASK 8
/* UART Parity: 1=even, 0=odd (address) */
#define UART_PTYEVEN_ADDR $D602
/* UART Parity: 1=even, 0=odd (address) */
#define PTYEVEN_ADDR $D602
/* UART Parity: 1=even, 0=odd (bit mask) */
#define UART_PTYEVEN_MASK 1
/* UART Parity: 1=even, 0=odd (bit mask) */
#define PTYEVEN_MASK 1
/* UART Parity enable: 1=enabled (address) */
#define UART_PTYEN_ADDR $D602
/* UART Parity enable: 1=enabled (address) */
#define PTYEN_ADDR $D602
/* UART Parity enable: 1=enabled (bit mask) */
#define UART_PTYEN_MASK 2
/* UART Parity enable: 1=enabled (bit mask) */
#define PTYEN_MASK 2
/* UART character size: 00=8, 01=7, 10=6, 11=5 bits per byte (address) */
#define UART_CHARSZ_ADDR $D602
/* UART character size: 00=8, 01=7, 10=6, 11=5 bits per byte (address) */
#define CHARSZ_ADDR $D602
/* UART character size: 00=8, 01=7, 10=6, 11=5 bits per byte (bit mask) */
#define UART_CHARSZ_MASK 12
/* UART character size: 00=8, 01=7, 10=6, 11=5 bits per byte (bit mask) */
#define CHARSZ_MASK 12
/* UART synchronisation mode flags (00=RX \& TX both async, 01=RX sync, TX async, 1x=TX sync, RX async (unused on the MEGA65) (address) */
#define UART_SYNCMOD_ADDR $D602
/* UART synchronisation mode flags (00=RX \& TX both async, 01=RX sync, TX async, 1x=TX sync, RX async (unused on the MEGA65) (address) */
#define SYNCMOD_ADDR $D602
/* UART synchronisation mode flags (00=RX \& TX both async, 01=RX sync, TX async, 1x=TX sync, RX async (unused on the MEGA65) (bit mask) */
#define UART_SYNCMOD_MASK 48
/* UART synchronisation mode flags (00=RX \& TX both async, 01=RX sync, TX async, 1x=TX sync, RX async (unused on the MEGA65) (bit mask) */
#define SYNCMOD_MASK 48
/* UART enable receive (address) */
#define UART_RXEN_ADDR $D602
/* UART enable receive (address) */
#define RXEN_ADDR $D602
/* UART enable receive (bit mask) */
#define UART_RXEN_MASK 64
/* UART enable receive (bit mask) */
#define RXEN_MASK 64
/* UART enable transmit (address) */
#define UART_TXEN_ADDR $D602
/* UART enable transmit (address) */
#define TXEN_ADDR $D602
/* UART enable transmit (bit mask) */
#define UART_TXEN_MASK 128
/* UART enable transmit (bit mask) */
#define TXEN_MASK 128
/* UART baud rate divisor (16 bit). Baud rate = 7.09375MHz / DIVISOR, unless MEGA65 fast UART mode is enabled, in which case baud rate = 80MHz / DIVISOR */
#define UART_DIVISOR $D603
/* UART baud rate divisor (16 bit). Baud rate = 7.09375MHz / DIVISOR, unless MEGA65 fast UART mode is enabled, in which case baud rate = 80MHz / DIVISOR */
#define C65_UART_DIVISOR $D604
/* UART interrupt mask: NMI on RX (not yet implemented on the MEGA65) (address) */
#define UART_IMRXNMI_ADDR $D605
/* UART interrupt mask: NMI on RX (not yet implemented on the MEGA65) (address) */
#define IMRXNMI_ADDR $D605
/* UART interrupt mask: NMI on RX (not yet implemented on the MEGA65) (bit mask) */
#define UART_IMRXNMI_MASK 16
/* UART interrupt mask: NMI on RX (not yet implemented on the MEGA65) (bit mask) */
#define IMRXNMI_MASK 16
/* UART interrupt mask: NMI on TX (not yet implemented on the MEGA65) (address) */
#define UART_IMTXNMI_ADDR $D605
/* UART interrupt mask: NMI on TX (not yet implemented on the MEGA65) (address) */
#define IMTXNMI_ADDR $D605
/* UART interrupt mask: NMI on TX (not yet implemented on the MEGA65) (bit mask) */
#define UART_IMTXNMI_MASK 32
/* UART interrupt mask: NMI on TX (not yet implemented on the MEGA65) (bit mask) */
#define IMTXNMI_MASK 32
/* UART interrupt mask: IRQ on RX (not yet implemented on the MEGA65) (address) */
#define UART_IMRXIRQ_ADDR $D605
/* UART interrupt mask: IRQ on RX (not yet implemented on the MEGA65) (address) */
#define IMRXIRQ_ADDR $D605
/* UART interrupt mask: IRQ on RX (not yet implemented on the MEGA65) (bit mask) */
#define UART_IMRXIRQ_MASK 64
/* UART interrupt mask: IRQ on RX (not yet implemented on the MEGA65) (bit mask) */
#define IMRXIRQ_MASK 64
/* UART interrupt mask: IRQ on TX (not yet implemented on the MEGA65) (address) */
#define UART_IMTXIRQ_ADDR $D605
/* UART interrupt mask: IRQ on TX (not yet implemented on the MEGA65) (address) */
#define IMTXIRQ_ADDR $D605
/* UART interrupt mask: IRQ on TX (not yet implemented on the MEGA65) (bit mask) */
#define UART_IMTXIRQ_MASK 128
/* UART interrupt mask: IRQ on TX (not yet implemented on the MEGA65) (bit mask) */
#define IMTXIRQ_MASK 128
/* UART interrupt flag: NMI on RX (not yet implemented on the MEGA65) (address) */
#define UART_IFRXNMI_ADDR $D606
/* UART interrupt flag: NMI on RX (not yet implemented on the MEGA65) (address) */
#define IFRXNMI_ADDR $D606
/* UART interrupt flag: NMI on RX (not yet implemented on the MEGA65) (bit mask) */
#define UART_IFRXNMI_MASK 16
/* UART interrupt flag: NMI on RX (not yet implemented on the MEGA65) (bit mask) */
#define IFRXNMI_MASK 16
/* UART interrupt flag: NMI on TX (not yet implemented on the MEGA65) (address) */
#define UART_IFTXNMI_ADDR $D606
/* UART interrupt flag: NMI on TX (not yet implemented on the MEGA65) (address) */
#define IFTXNMI_ADDR $D606
/* UART interrupt flag: NMI on TX (not yet implemented on the MEGA65) (bit mask) */
#define UART_IFTXNMI_MASK 32
/* UART interrupt flag: NMI on TX (not yet implemented on the MEGA65) (bit mask) */
#define IFTXNMI_MASK 32
/* UART interrupt flag: IRQ on RX (not yet implemented on the MEGA65) (address) */
#define UART_IFRXIRQ_ADDR $D606
/* UART interrupt flag: IRQ on RX (not yet implemented on the MEGA65) (address) */
#define IFRXIRQ_ADDR $D606
/* UART interrupt flag: IRQ on RX (not yet implemented on the MEGA65) (bit mask) */
#define UART_IFRXIRQ_MASK 64
/* UART interrupt flag: IRQ on RX (not yet implemented on the MEGA65) (bit mask) */
#define IFRXIRQ_MASK 64
/* UART interrupt flag: IRQ on TX (not yet implemented on the MEGA65) (address) */
#define UART_IFTXIRQ_ADDR $D606
/* UART interrupt flag: IRQ on TX (not yet implemented on the MEGA65) (address) */
#define IFTXIRQ_ADDR $D606
/* UART interrupt flag: IRQ on TX (not yet implemented on the MEGA65) (bit mask) */
#define UART_IFTXIRQ_MASK 128
/* UART interrupt flag: IRQ on TX (not yet implemented on the MEGA65) (bit mask) */
#define IFTXIRQ_MASK 128
/* C65 capslock key sense (address) */
#define UART_CAPLOCK_ADDR $D607
/* C65 capslock key sense (address) */
#define CAPLOCK_ADDR $D607
/* C65 capslock key sense (bit mask) */
#define UART_CAPLOCK_MASK 1
/* C65 capslock key sense (bit mask) */
#define CAPLOCK_MASK 1
/* C65 keyboard column 8 select (address) */
#define UART_KEYCOL8_ADDR $D607
/* C65 keyboard column 8 select (address) */
#define KEYCOL8_ADDR $D607
/* C65 keyboard column 8 select (bit mask) */
#define UART_KEYCOL8_MASK 2
/* C65 keyboard column 8 select (bit mask) */
#define KEYCOL8_MASK 2
/* C65 keyboard extra lines Data Direction Register (DDR) (address) */
#define UART_PORTEDDR_ADDR $D608
/* C65 keyboard extra lines Data Direction Register (DDR) (address) */
#define PORTEDDR_ADDR $D608
/* C65 keyboard extra lines Data Direction Register (DDR) (bit mask) */
#define UART_PORTEDDR_MASK 3
/* C65 keyboard extra lines Data Direction Register (DDR) (bit mask) */
#define PORTEDDR_MASK 3
/* C65 UART BAUD clock source: 1 = 7.09375MHz, 0 = 80MHz (VIC-IV pixel clock) (address) */
#define UARTMISC_UFAST_ADDR $D609
/* C65 UART BAUD clock source: 1 = 7.09375MHz, 0 = 80MHz (VIC-IV pixel clock) (address) */
#define UFAST_ADDR $D609
/* C65 UART BAUD clock source: 1 = 7.09375MHz, 0 = 80MHz (VIC-IV pixel clock) (bit mask) */
#define UARTMISC_UFAST_MASK 1
/* C65 UART BAUD clock source: 1 = 7.09375MHz, 0 = 80MHz (VIC-IV pixel clock) (bit mask) */
#define UFAST_MASK 1
/* PMOD port A on FPGA board (data) (Nexys4 boards only) (address) */
#define UARTMISC_PORTF_ADDR $D60B
/* PMOD port A on FPGA board (data) (Nexys4 boards only) (address) */
#define PORTF_ADDR $D60B
/* PMOD port A on FPGA board (data) (Nexys4 boards only) (bit mask) */
#define UARTMISC_PORTF_MASK 63
/* PMOD port A on FPGA board (data) (Nexys4 boards only) (bit mask) */
#define PORTF_MASK 63
/* Display hardware zoom of region under first touch point always (address) */
#define UARTMISC_OSKZON_ADDR $D60B
/* Display hardware zoom of region under first touch point always (address) */
#define OSKZON_ADDR $D60B
/* Display hardware zoom of region under first touch point always (bit mask) */
#define UARTMISC_OSKZON_MASK 64
/* Display hardware zoom of region under first touch point always (bit mask) */
#define OSKZON_MASK 64
/* Display hardware zoom of region under first touch point for on-screen keyboard (address) */
#define UARTMISC_OSKZEN_ADDR $D60B
/* Display hardware zoom of region under first touch point for on-screen keyboard (address) */
#define OSKZEN_ADDR $D60B
/* Display hardware zoom of region under first touch point for on-screen keyboard (bit mask) */
#define UARTMISC_OSKZEN_MASK 128
/* Display hardware zoom of region under first touch point for on-screen keyboard (bit mask) */
#define OSKZEN_MASK 128
/* PMOD port A on FPGA board (DDR) (address) */
#define UARTMISC_PORTFDDR_ADDR $D60C
/* PMOD port A on FPGA board (DDR) (bit mask) */
#define UARTMISC_PORTFDDR_MASK 63
/* On Screen Keyboard (OSK) Zoom Control Data Direction Register (DDR). Must be set to output to control these features. (address) */
#define GS_UARTMISC_PORTFDDR_ADDR $D60C
/* On Screen Keyboard (OSK) Zoom Control Data Direction Register (DDR). Must be set to output to control these features. (bit mask) */
#define GS_UARTMISC_PORTFDDR_MASK 192
/* Internal 1541 drive connect (1=connect internal 1541 drive to IEC bus) (address) */
#define UARTMISC_CONN41_ADDR $D60D
/* Internal 1541 drive connect (1=connect internal 1541 drive to IEC bus) (address) */
#define CONN41_ADDR $D60D
/* Internal 1541 drive connect (1=connect internal 1541 drive to IEC bus) (bit mask) */
#define UARTMISC_CONN41_MASK 1
/* Internal 1541 drive connect (1=connect internal 1541 drive to IEC bus) (bit mask) */
#define CONN41_MASK 1
/* Internal 1541 drive reset (1=reset, 0=operate) (address) */
#define UARTMISC_RST41_ADDR $D60D
/* Internal 1541 drive reset (1=reset, 0=operate) (address) */
#define RST41_ADDR $D60D
/* Internal 1541 drive reset (1=reset, 0=operate) (bit mask) */
#define UARTMISC_RST41_MASK 2
/* Internal 1541 drive reset (1=reset, 0=operate) (bit mask) */
#define RST41_MASK 2
/* SD card MOSI/MISO (address) */
#define UARTMISC_SDDATA_ADDR $D60D
/* SD card MOSI/MISO (address) */
#define SDDATA_ADDR $D60D
/* SD card MOSI/MISO (bit mask) */
#define UARTMISC_SDDATA_MASK 4
/* SD card MOSI/MISO (bit mask) */
#define SDDATA_MASK 4
/* SD card SCLK (address) */
#define UARTMISC_SDCLK_ADDR $D60D
/* SD card SCLK (address) */
#define SDCLK_ADDR $D60D
/* SD card SCLK (bit mask) */
#define UARTMISC_SDCLK_MASK 8
/* SD card SCLK (bit mask) */
#define SDCLK_MASK 8
/* SD card CS_BO (address) */
#define UARTMISC_SDCS_ADDR $D60D
/* SD card CS_BO (address) */
#define SDCS_ADDR $D60D
/* SD card CS_BO (bit mask) */
#define UARTMISC_SDCS_MASK 16
/* SD card CS_BO (bit mask) */
#define SDCS_MASK 16
/* Enable SD card bitbash mode (address) */
#define UARTMISC_SDBSH_ADDR $D60D
/* Enable SD card bitbash mode (address) */
#define SDBSH_ADDR $D60D
/* Enable SD card bitbash mode (bit mask) */
#define UARTMISC_SDBSH_MASK 32
/* Enable SD card bitbash mode (bit mask) */
#define SDBSH_MASK 32
/* HDMI I2C control interface SDA data line (address) */
#define UARTMISC_HDSDA_ADDR $D60D
/* HDMI I2C control interface SDA data line (address) */
#define HDSDA_ADDR $D60D
/* HDMI I2C control interface SDA data line (bit mask) */
#define UARTMISC_HDSDA_MASK 64
/* HDMI I2C control interface SDA data line (bit mask) */
#define HDSDA_MASK 64
/* HDMI I2C control interface SCL clock (address) */
#define UARTMISC_HDSCL_ADDR $D60D
/* HDMI I2C control interface SCL clock (address) */
#define HDSCL_ADDR $D60D
/* HDMI I2C control interface SCL clock (bit mask) */
#define UARTMISC_HDSCL_MASK 128
/* HDMI I2C control interface SCL clock (bit mask) */
#define HDSCL_MASK 128
/* Data Direction Register (DDR) for \$D60D bit bashing port. */
#define UARTMISC_BASHDDR $D60E
/* Data Direction Register (DDR) for \$D60D bit bashing port. */
#define BASHDDR $D60E
/* Directly read C65 Cursor left key (address) */
#define UARTMISC_KEYLEFT_ADDR $D60F
/* Directly read C65 Cursor left key (address) */
#define KEYLEFT_ADDR $D60F
/* Directly read C65 Cursor left key (bit mask) */
#define UARTMISC_KEYLEFT_MASK 1
/* Directly read C65 Cursor left key (bit mask) */
#define KEYLEFT_MASK 1
/* Directly read C65 Cursor up key (address) */
#define UARTMISC_KEYUP_ADDR $D60F
/* Directly read C65 Cursor up key (address) */
#define KEYUP_ADDR $D60F
/* Directly read C65 Cursor up key (bit mask) */
#define UARTMISC_KEYUP_MASK 2
/* Directly read C65 Cursor up key (bit mask) */
#define KEYUP_MASK 2
/* Set to 1 if the MEGA65 is running on real hardware, set to 0 if emulated (Xemu) or simulated (ghdl) (address) */
#define UARTMISC_REALHW_ADDR $D60F
/* Set to 1 if the MEGA65 is running on real hardware, set to 0 if emulated (Xemu) or simulated (ghdl) (address) */
#define REALHW_ADDR $D60F
/* Set to 1 if the MEGA65 is running on real hardware, set to 0 if emulated (Xemu) or simulated (ghdl) (bit mask) */
#define UARTMISC_REALHW_MASK 32
/* Set to 1 if the MEGA65 is running on real hardware, set to 0 if emulated (Xemu) or simulated (ghdl) (bit mask) */
#define REALHW_MASK 32
/* Light or heavy dimming of background material behind on-screen keyboard (address) */
#define UARTMISC_OSKDIM_ADDR $D60F
/* Light or heavy dimming of background material behind on-screen keyboard (address) */
#define OSKDIM_ADDR $D60F
/* Light or heavy dimming of background material behind on-screen keyboard (bit mask) */
#define UARTMISC_OSKDIM_MASK 64
/* Light or heavy dimming of background material behind on-screen keyboard (bit mask) */
#define OSKDIM_MASK 64
/* Enable accessible keyboard input via joystick port 2 fire button (address) */
#define UARTMISC_ACCESSKEY_ADDR $D60F
/* Enable accessible keyboard input via joystick port 2 fire button (address) */
#define ACCESSKEY_ADDR $D60F
/* Enable accessible keyboard input via joystick port 2 fire button (bit mask) */
#define UARTMISC_ACCESSKEY_MASK 128
/* Enable accessible keyboard input via joystick port 2 fire button (bit mask) */
#define ACCESSKEY_MASK 128
/* Last key press as ASCII (hardware accelerated keyboard scanner). Write to clear event ready for next. */
#define UARTMISC_ASCIIKEY $D610
/* Last key press as ASCII (hardware accelerated keyboard scanner). Write to clear event ready for next. */
#define ASCIIKEY $D610
/* Right shift key state (hardware accelerated keyboard scanner). (address) */
#define UARTMISC_MRSHFT_ADDR $D611
/* Right shift key state (hardware accelerated keyboard scanner). (address) */
#define MRSHFT_ADDR $D611
/* Right shift key state (hardware accelerated keyboard scanner). (bit mask) */
#define UARTMISC_MRSHFT_MASK 1
/* Right shift key state (hardware accelerated keyboard scanner). (bit mask) */
#define MRSHFT_MASK 1
/* Left shift key state (hardware accelerated keyboard scanner). (address) */
#define UARTMISC_MLSHFT_ADDR $D611
/* Left shift key state (hardware accelerated keyboard scanner). (address) */
#define MLSHFT_ADDR $D611
/* Left shift key state (hardware accelerated keyboard scanner). (bit mask) */
#define UARTMISC_MLSHFT_MASK 2
/* Left shift key state (hardware accelerated keyboard scanner). (bit mask) */
#define MLSHFT_MASK 2
/* CTRL key state (hardware accelerated keyboard scanner). (address) */
#define UARTMISC_MCTRL_ADDR $D611
/* CTRL key state (hardware accelerated keyboard scanner). (address) */
#define MCTRL_ADDR $D611
/* CTRL key state (hardware accelerated keyboard scanner). (bit mask) */
#define UARTMISC_MCTRL_MASK 4
/* CTRL key state (hardware accelerated keyboard scanner). (bit mask) */
#define MCTRL_MASK 4
/* MEGA/C= key state (hardware accelerated keyboard scanner). (address) */
#define UARTMISC_MMEGA_ADDR $D611
/* MEGA/C= key state (hardware accelerated keyboard scanner). (address) */
#define MMEGA_ADDR $D611
/* MEGA/C= key state (hardware accelerated keyboard scanner). (bit mask) */
#define UARTMISC_MMEGA_MASK 8
/* MEGA/C= key state (hardware accelerated keyboard scanner). (bit mask) */
#define MMEGA_MASK 8
/* ALT key state (hardware accelerated keyboard scanner). (address) */
#define UARTMISC_MALT_ADDR $D611
/* ALT key state (hardware accelerated keyboard scanner). (address) */
#define MALT_ADDR $D611
/* ALT key state (hardware accelerated keyboard scanner). (bit mask) */
#define UARTMISC_MALT_MASK 16
/* ALT key state (hardware accelerated keyboard scanner). (bit mask) */
#define MALT_MASK 16
/* NOSCRL key state (hardware accelerated keyboard scanner). (address) */
#define UARTMISC_MSCRL_ADDR $D611
/* NOSCRL key state (hardware accelerated keyboard scanner). (address) */
#define MSCRL_ADDR $D611
/* NOSCRL key state (hardware accelerated keyboard scanner). (bit mask) */
#define UARTMISC_MSCRL_MASK 32
/* NOSCRL key state (hardware accelerated keyboard scanner). (bit mask) */
#define MSCRL_MASK 32
/* CAPS LOCK key state (hardware accelerated keyboard scanner). (address) */
#define UARTMISC_MCAPS_ADDR $D611
/* CAPS LOCK key state (hardware accelerated keyboard scanner). (address) */
#define MCAPS_ADDR $D611
/* CAPS LOCK key state (hardware accelerated keyboard scanner). (bit mask) */
#define UARTMISC_MCAPS_MASK 64
/* CAPS LOCK key state (hardware accelerated keyboard scanner). (bit mask) */
#define MCAPS_MASK 64
/* Enable widget board keyboard/joystick input (address) */
#define UARTMISC_WGTKEY_ADDR $D612
/* Enable widget board keyboard/joystick input (address) */
#define WGTKEY_ADDR $D612
/* Enable widget board keyboard/joystick input (bit mask) */
#define UARTMISC_WGTKEY_MASK 1
/* Enable widget board keyboard/joystick input (bit mask) */
#define WGTKEY_MASK 1
/* Enable ps2 keyboard/joystick input (address) */
#define UARTMISC_PS2KEY_ADDR $D612
/* Enable ps2 keyboard/joystick input (address) */
#define PS2KEY_ADDR $D612
/* Enable ps2 keyboard/joystick input (bit mask) */
#define UARTMISC_PS2KEY_MASK 2
/* Enable ps2 keyboard/joystick input (bit mask) */
#define PS2KEY_MASK 2
/* Enable physical keyboard input (address) */
#define UARTMISC_PHYKEY_ADDR $D612
/* Enable physical keyboard input (address) */
#define PHYKEY_ADDR $D612
/* Enable physical keyboard input (bit mask) */
#define UARTMISC_PHYKEY_MASK 4
/* Enable physical keyboard input (bit mask) */
#define PHYKEY_MASK 4
/* Enable virtual/snythetic keyboard input (address) */
#define UARTMISC_VRTKEY_ADDR $D612
/* Enable virtual/snythetic keyboard input (address) */
#define VRTKEY_ADDR $D612
/* Enable virtual/snythetic keyboard input (bit mask) */
#define UARTMISC_VRTKEY_MASK 8
/* Enable virtual/snythetic keyboard input (bit mask) */
#define VRTKEY_MASK 8
/* Debug OSK overlay (WRITE ONLY) (address) */
#define UARTMISC_OSKDEBUG_ADDR $D612
/* Debug OSK overlay (WRITE ONLY) (address) */
#define OSKDEBUG_ADDR $D612
/* Debug OSK overlay (WRITE ONLY) (bit mask) */
#define UARTMISC_OSKDEBUG_MASK 16
/* Debug OSK overlay (WRITE ONLY) (bit mask) */
#define OSKDEBUG_MASK 16
/* Enable PS/2 / USB keyboard simulated joystick input (address) */
#define UARTMISC_PS2JOY_ADDR $D612
/* Enable PS/2 / USB keyboard simulated joystick input (address) */
#define PS2JOY_ADDR $D612
/* Enable PS/2 / USB keyboard simulated joystick input (bit mask) */
#define UARTMISC_PS2JOY_MASK 16
/* Enable PS/2 / USB keyboard simulated joystick input (bit mask) */
#define PS2JOY_MASK 16
/* Exchange joystick ports 1 \& 2 (address) */
#define UARTMISC_JOYSWAP_ADDR $D612
/* Exchange joystick ports 1 \& 2 (address) */
#define JOYSWAP_ADDR $D612
/* Exchange joystick ports 1 \& 2 (bit mask) */
#define UARTMISC_JOYSWAP_MASK 32
/* Exchange joystick ports 1 \& 2 (bit mask) */
#define JOYSWAP_MASK 32
/* Rotate inputs of joystick A by 180 degrees (for left handed use) (address) */
#define UARTMISC_LJOYA_ADDR $D612
/* Rotate inputs of joystick A by 180 degrees (for left handed use) (address) */
#define LJOYA_ADDR $D612
/* Rotate inputs of joystick A by 180 degrees (for left handed use) (bit mask) */
#define UARTMISC_LJOYA_MASK 64
/* Rotate inputs of joystick A by 180 degrees (for left handed use) (bit mask) */
#define LJOYA_MASK 64
/* Rotate inputs of joystick B by 180 degrees (for left handed use) (address) */
#define UARTMISC_LJOYB_ADDR $D612
/* Rotate inputs of joystick B by 180 degrees (for left handed use) (address) */
#define LJOYB_ADDR $D612
/* Rotate inputs of joystick B by 180 degrees (for left handed use) (bit mask) */
#define UARTMISC_LJOYB_MASK 128
/* Rotate inputs of joystick B by 180 degrees (for left handed use) (bit mask) */
#define LJOYB_MASK 128
/* Count of cartridge port memory accesses (read only) */
#define DEBUG_CRTACSCNT $D613
/* Count of cartridge port memory accesses (read only) */
#define CRTACSCNT $D613
/* 8-bit segment of combined keyboard matrix (READ) */
#define DEBUG_KEYMATRIXPEEK $D614
/* 8-bit segment of combined keyboard matrix (READ) */
#define KEYMATRIXPEEK $D614
/* Set to \$7F for no key down, else specify virtual key press. (address) */
#define UARTMISC_VIRTKEY1_ADDR $D615
/* Set to \$7F for no key down, else specify virtual key press. (address) */
#define VIRTKEY1_ADDR $D615
/* Set to \$7F for no key down, else specify virtual key press. (bit mask) */
#define UARTMISC_VIRTKEY1_MASK 127
/* Set to \$7F for no key down, else specify virtual key press. (bit mask) */
#define VIRTKEY1_MASK 127
/* Enable display of on-screen keyboard composited overlay (address) */
#define UARTMISC_OSKEN_ADDR $D615
/* Enable display of on-screen keyboard composited overlay (address) */
#define OSKEN_ADDR $D615
/* Enable display of on-screen keyboard composited overlay (bit mask) */
#define UARTMISC_OSKEN_MASK 128
/* Enable display of on-screen keyboard composited overlay (bit mask) */
#define OSKEN_MASK 128
/* Set to \$7F for no key down, else specify 2nd virtual key press. (address) */
#define UARTMISC_VIRTKEY2_ADDR $D616
/* Set to \$7F for no key down, else specify 2nd virtual key press. (address) */
#define VIRTKEY2_ADDR $D616
/* Set to \$7F for no key down, else specify 2nd virtual key press. (bit mask) */
#define UARTMISC_VIRTKEY2_MASK 127
/* Set to \$7F for no key down, else specify 2nd virtual key press. (bit mask) */
#define VIRTKEY2_MASK 127
/* Display alternate on-screen keyboard layout (typically dial pad for MEGA65 telephone) (address) */
#define UARTMISC_OSKALT_ADDR $D616
/* Display alternate on-screen keyboard layout (typically dial pad for MEGA65 telephone) (address) */
#define OSKALT_ADDR $D616
/* Display alternate on-screen keyboard layout (typically dial pad for MEGA65 telephone) (bit mask) */
#define UARTMISC_OSKALT_MASK 128
/* Display alternate on-screen keyboard layout (typically dial pad for MEGA65 telephone) (bit mask) */
#define OSKALT_MASK 128
/* Set to \$7F for no key down, else specify 3nd virtual key press. (address) */
#define UARTMISC_VIRTKEY3_ADDR $D617
/* Set to \$7F for no key down, else specify 3nd virtual key press. (address) */
#define VIRTKEY3_ADDR $D617
/* Set to \$7F for no key down, else specify 3nd virtual key press. (bit mask) */
#define UARTMISC_VIRTKEY3_MASK 127
/* Set to \$7F for no key down, else specify 3nd virtual key press. (bit mask) */
#define VIRTKEY3_MASK 127
/* 1=Display on-screen keyboard at top, 0=Disply on-screen keyboard at bottom of screen. (address) */
#define UARTMISC_OSKTOP_ADDR $D617
/* 1=Display on-screen keyboard at top, 0=Disply on-screen keyboard at bottom of screen. (address) */
#define OSKTOP_ADDR $D617
/* 1=Display on-screen keyboard at top, 0=Disply on-screen keyboard at bottom of screen. (bit mask) */
#define UARTMISC_OSKTOP_MASK 128
/* 1=Display on-screen keyboard at top, 0=Disply on-screen keyboard at bottom of screen. (bit mask) */
#define OSKTOP_MASK 128
/* Physical keyboard scan rate (\$00=50MHz, \$FF=~200KHz) */
#define UARTMISC_KSCNRATE $D618
/* Physical keyboard scan rate (\$00=50MHz, \$FF=~200KHz) */
#define KSCNRATE $D618
/* port o output value */
#define UARTMISC_UNUSED $D619
/* port o output value */
#define UNUSED $D619
/* System control flags (target specific) */
#define UARTMISC_SYSCTL $D61A
/* System control flags (target specific) */
#define SYSCTL $D61A
/* READ 1351/amiga mouse auto detection DEBUG */
#define DEBUG_AMIMOUSDETECT $D61B
/* READ 1351/amiga mouse auto detection DEBUG */
#define AMIMOUSDETECT $D61B
/* internal 1541 PC LSB */
#define DEBUG__1541PCLSB $D61C
/* internal 1541 PC LSB */
#define _1541PCLSB $D61C
/* LED register select (R,G,B channels x 4 = 0 to 11) (address) */
#define UARTMISC_Keyboard_ADDR $D61D
/* LED register select (R,G,B channels x 4 = 0 to 11) (bit mask) */
#define UARTMISC_Keyboard_MASK 127
/* LED control enable (address) */
#define GS_UARTMISC_Keyboard_ADDR $D61D
/* LED control enable (bit mask) */
#define GS_UARTMISC_Keyboard_MASK 128
/* register value (write only) */
#define UARTMISC_Keyboard $D61E
/* register value (write only) */
#define Keyboard $D61E
/* DUPLICATE Modifier key state (hardware accelerated keyboard scanner). */
#define DEBUG_BUCKYCOPY $D61F
/* DUPLICATE Modifier key state (hardware accelerated keyboard scanner). */
#define BUCKYCOPY $D61F
/* Read Port A paddle X, without having to fiddle with SID/CIA settings. */
#define UARTMISC_POTAX $D620
/* Read Port A paddle X, without having to fiddle with SID/CIA settings. */
#define POTAX $D620
/* Read Port A paddle Y, without having to fiddle with SID/CIA settings. */
#define UARTMISC_POTAY $D621
/* Read Port A paddle Y, without having to fiddle with SID/CIA settings. */
#define POTAY $D621
/* Read Port B paddle X, without having to fiddle with SID/CIA settings. */
#define UARTMISC_POTBX $D622
/* Read Port B paddle X, without having to fiddle with SID/CIA settings. */
#define POTBX $D622
/* Read Port B paddle Y, without having to fiddle with SID/CIA settings. */
#define UARTMISC_POTBY $D623
/* Read Port B paddle Y, without having to fiddle with SID/CIA settings. */
#define POTBY $D623
/* READ ONLY flags for paddles. See c65uart.vhdl for more information. */
#define DEBUG_POTDEBUG $D624
/* READ ONLY flags for paddles. See c65uart.vhdl for more information. */
#define POTDEBUG $D624
/* J21 pins 1 -- 6, 9 -- 10 input/output values */
#define UARTMISC_J21L $D625
/* J21 pins 1 -- 6, 9 -- 10 input/output values */
#define J21L $D625
/* J21 pins 11 -- 14 input/output values */
#define UARTMISC_J21H $D626
/* J21 pins 11 -- 14 input/output values */
#define J21H $D626
/* J21 pins 1 -- 6, 9 -- 10 data direction register */
#define UARTMISC_J21LDDR $D627
/* J21 pins 1 -- 6, 9 -- 10 data direction register */
#define J21LDDR $D627
/* J21 pins 11 -- 14 data direction register */
#define UARTMISC_J21HDDR $D628
/* J21 pins 11 -- 14 data direction register */
#define J21HDDR $D628
/* MEGA65 model ID. Can be used to determine the model of MEGA65 a programme is running on, e.g., to enable touch controls on MEGAphone. */
#define UARTMISC_M65MODEL $D629
/* MEGA65 model ID. Can be used to determine the model of MEGA65 a programme is running on, e.g., to enable touch controls on MEGAphone. */
#define M65MODEL $D629
/* LSB of keyboard firmware date stamp (days since 1 Jan 2020) */
#define KBD_FWDATEL $D62A
/* MSB of keyboard firmware date stamp (days since 1 Jan 2020) */
#define KBD_FWDATEH $D62B
/* LSB of keyboard firmware git commit */
#define KBD_FWGIT0 $D62C
/* 2nd byte of keyboard firmware git commit */
#define GS_KBD_FWGIT0 $D62D
/* 3rd byte of keyboard firmware git commit */
#define GS_KBD_FWGIT0_2 $D62E
/* MSB of keyboard firmware git commit */
#define GS_KBD_FWGIT0_3 $D62F
/* LSB of MEGA65 FPGA design date stamp (days since 1 Jan 2020) */
#define FPGA_FWDATEL $D630
/* MSB of MEGA65 FPGA design date stamp (days since 1 Jan 2020) */
#define FPGA_FWDATEH $D631
/* LSB of MEGA65 FPGA design git commit */
#define FPGA_FWGIT0 $D632
/* 2nd byte of MEGA65 FPGA design git commit */
#define GS_FPGA_FWGIT0 $D633
/* 3rd byte of MEGA65 FPGA design git commit */
#define GS_FPGA_FWGIT0_2 $D634
/* MSB of MEGA65 FPGA design git commit */
#define GS_FPGA_FWGIT0_3 $D635
/* LSB of Auxilliary (MAX10) FPGA design date stamp (days since 1 Jan 2020) */
#define AUXFPGA_FWDATEL $D636
/* MSB of Auxilliary (MAX10) FPGA design date stamp (days since 1 Jan 2020) */
#define AUXFPGA_MFWDATEH $D637
/* MSB of Auxilliary (MAX10) FPGA design date stamp (days since 1 Jan 2020) */
#define MFWDATEH $D637
/* LSB of Auxilliary (MAX10) FPGA design git commit */
#define AUXFPGA_FWGIT0 $D638
/* 2nd byte of Auxilliary (MAX10) FPGA design git commit */
#define GS_AUXFPGA_FWGIT0 $D639
/* 3rd byte of Auxilliary (MAX10) FPGA design git commit */
#define GS_AUXFPGA_FWGIT0_2 $D63A
/* MSB of Auxilliary (MAX10) FPGA design git commit */
#define GS_AUXFPGA_FWGIT0_3 $D63B
/* Select SID mode: 0=6581, 1=8580 (address) */
#define SID_SIDMODE_ADDR $D63C
/* Select SID mode: 0=6581, 1=8580 (address) */
#define SIDMODE_ADDR $D63C
/* Select SID mode: 0=6581, 1=8580 (bit mask) */
#define SID_SIDMODE_MASK 15
/* Select SID mode: 0=6581, 1=8580 (bit mask) */
#define SIDMODE_MASK 15
/* Enable DC offset subtraction in audio mixer (address) */
#define AUDIOMIX_DCTRKEN_ADDR $D63C
/* Enable DC offset subtraction in audio mixer (address) */
#define DCTRKEN_ADDR $D63C
/* Enable DC offset subtraction in audio mixer (bit mask) */
#define AUDIOMIX_DCTRKEN_MASK 16
/* Enable DC offset subtraction in audio mixer (bit mask) */
#define DCTRKEN_MASK 16
/* Source of last CPU reset (address) */
#define DEBUG_RESETSRC_ADDR $D63C
/* Source of last CPU reset (address) */
#define RESETSRC_ADDR $D63C
/* Source of last CPU reset (bit mask) */
#define DEBUG_RESETSRC_MASK 224
/* Source of last CPU reset (bit mask) */
#define RESETSRC_MASK 224
/* Audio mixer DC-estimation time step. Lower values = faster updating of DC estimation, at the cost of making low-frequencies quieter. */
#define AUDIOMIX_DCTIME $D63D
/* Audio mixer DC-estimation time step. Lower values = faster updating of DC estimation, at the cost of making low-frequencies quieter. */
#define DCTIME $D63D
/* Writing triggers hypervisor trap \$XX */
#define CPU_HTRAP00 $D640
/* Writing triggers hypervisor trap \$XX */
#define HTRAP00 $D640
/* Hypervisor A register storage */
#define HCPU_REGA $D640
/* Hypervisor A register storage */
#define REGA $D640
/* @HTRAPXX */
#define CPU_HTRAP01 $D641
/* @HTRAPXX */
#define HTRAP01 $D641
/* Hypervisor X register storage */
#define HCPU_REGX $D641
/* Hypervisor X register storage */
#define REGX $D641
/* @HTRAPXX */
#define CPU_HTRAP02 $D642
/* @HTRAPXX */
#define HTRAP02 $D642
/* @HTRAPXX */
#define CPU_HTRAP03 $D643
/* @HTRAPXX */
#define HTRAP03 $D643
/* Hypervisor Z register storage */
#define HCPU_REGZ $D643
/* Hypervisor Z register storage */
#define REGZ $D643
/* @HTRAPXX */
#define CPU_HTRAP04 $D644
/* @HTRAPXX */
#define HTRAP04 $D644
/* Hypervisor B register storage */
#define HCPU_REGB $D644
/* Hypervisor B register storage */
#define REGB $D644
/* @HTRAPXX */
#define CPU_HTRAP05 $D645
/* @HTRAPXX */
#define HTRAP05 $D645
/* Hypervisor SPL register storage */
#define HCPU_SPL $D645
/* Hypervisor SPL register storage */
#define SPL $D645
/* @HTRAPXX */
#define CPU_HTRAP06 $D646
/* @HTRAPXX */
#define HTRAP06 $D646
/* Hypervisor SPH register storage */
#define HCPU_SPH $D646
/* Hypervisor SPH register storage */
#define SPH $D646
/* @HTRAPXX */
#define CPU_HTRAP07 $D647
/* @HTRAPXX */
#define HTRAP07 $D647
/* Hypervisor P register storage */
#define HCPU_PFLAGS $D647
/* Hypervisor P register storage */
#define PFLAGS $D647
/* @HTRAPXX */
#define CPU_HTRAP08 $D648
/* @HTRAPXX */
#define HTRAP08 $D648
/* Hypervisor PC-low register storage */
#define HCPU_PCL $D648
/* Hypervisor PC-low register storage */
#define PCL $D648
/* @HTRAPXX */
#define CPU_HTRAP09 $D649
/* @HTRAPXX */
#define HTRAP09 $D649
/* Hypervisor PC-high register storage */
#define HCPU_PCH $D649
/* Hypervisor PC-high register storage */
#define PCH $D649
/* @HTRAPXX */
#define CPU_HTRAP0A $D64A
/* @HTRAPXX */
#define HTRAP0A $D64A
/* Hypervisor MAPLO register storage (high bits) */
#define HCPU_MAPLO $D64A
/* @HTRAPXX */
#define CPU_HTRAP0B $D64B
/* @HTRAPXX */
#define HTRAP0B $D64B
/* Hypervisor MAPLO register storage (low bits) */
#define GS_HCPU_MAPLO $D64B
/* @HTRAPXX */
#define CPU_HTRAP0C $D64C
/* @HTRAPXX */
#define HTRAP0C $D64C
/* Hypervisor MAPHI register storage (high bits) */
#define HCPU_MAPHI $D64C
/* @HTRAPXX */
#define CPU_HTRAP0D $D64D
/* @HTRAPXX */
#define HTRAP0D $D64D
/* Hypervisor MAPHI register storage (low bits) */
#define GS_HCPU_MAPHI $D64D
/* @HTRAPXX */
#define CPU_HTRAP0E $D64E
/* @HTRAPXX */
#define HTRAP0E $D64E
/* Hypervisor MAPLO mega-byte number register storage */
#define HCPU_MAPLOMB $D64E
/* Hypervisor MAPLO mega-byte number register storage */
#define MAPLOMB $D64E
/* @HTRAPXX */
#define CPU_HTRAP0F $D64F
/* @HTRAPXX */
#define HTRAP0F $D64F
/* Hypervisor MAPHI mega-byte number register storage */
#define HCPU_MAPHIMB $D64F
/* Hypervisor MAPHI mega-byte number register storage */
#define MAPHIMB $D64F
/* @HTRAPXX */
#define CPU_HTRAP10 $D650
/* @HTRAPXX */
#define HTRAP10 $D650
/* Hypervisor CPU port \$00 value */
#define HCPU_PORT00 $D650
/* Hypervisor CPU port \$00 value */
#define PORT00 $D650
/* @HTRAPXX */
#define CPU_HTRAP11 $D651
/* @HTRAPXX */
#define HTRAP11 $D651
/* Hypervisor CPU port \$01 value */
#define HCPU_PORT01 $D651
/* Hypervisor CPU port \$01 value */
#define PORT01 $D651
/* @HTRAPXX */
#define CPU_HTRAP12 $D652
/* @HTRAPXX */
#define HTRAP12 $D652
/* VIC-II/VIC-III/VIC-IV mode select (address) */
#define HCPU_VICMODE_ADDR $D652
/* VIC-II/VIC-III/VIC-IV mode select (address) */
#define VICMODE_ADDR $D652
/* VIC-II/VIC-III/VIC-IV mode select (bit mask) */
#define HCPU_VICMODE_MASK 3
/* VIC-II/VIC-III/VIC-IV mode select (bit mask) */
#define VICMODE_MASK 3
/* 0=Use internal SIDs, 1=Use external(1) SIDs (address) */
#define HCPU_EXSID_ADDR $D652
/* 0=Use internal SIDs, 1=Use external(1) SIDs (address) */
#define EXSID_ADDR $D652
/* 0=Use internal SIDs, 1=Use external(1) SIDs (bit mask) */
#define HCPU_EXSID_MASK 4
/* 0=Use internal SIDs, 1=Use external(1) SIDs (bit mask) */
#define EXSID_MASK 4
/* @HTRAPXX */
#define CPU_HTRAP13 $D653
/* @HTRAPXX */
#define HTRAP13 $D653
/* Hypervisor DMAgic source MB */
#define HCPU_DMASRCMB $D653
/* Hypervisor DMAgic source MB */
#define DMASRCMB $D653
/* @HTRAPXX */
#define CPU_HTRAP14 $D654
/* @HTRAPXX */
#define HTRAP14 $D654
/* Hypervisor DMAgic destination MB */
#define HCPU_DMADSTMB $D654
/* Hypervisor DMAgic destination MB */
#define DMADSTMB $D654
/* @HTRAPXX */
#define CPU_HTRAP15 $D655
/* @HTRAPXX */
#define HTRAP15 $D655
/* Hypervisor DMAGic list address bits 0-7 */
#define HCPU_DMALADDR $D655
/* @HTRAPXX */
#define CPU_HTRAP16 $D656
/* @HTRAPXX */
#define HTRAP16 $D656
/* Hypervisor DMAGic list address bits 15-8 */
#define GS_HCPU_DMALADDR $D656
/* @HTRAPXX */
#define CPU_HTRAP17 $D657
/* @HTRAPXX */
#define HTRAP17 $D657
/* Hypervisor DMAGic list address bits 23-16 */
#define GS_HCPU_DMALADDR_2 $D657
/* @HTRAPXX */
#define CPU_HTRAP18 $D658
/* @HTRAPXX */
#define HTRAP18 $D658
/* Hypervisor DMAGic list address bits 27-24 */
#define GS_HCPU_DMALADDR_3 $D658
/* @HTRAPXX */
#define CPU_HTRAP19 $D659
/* @HTRAPXX */
#define HTRAP19 $D659
/* 1=Virtualise SD/Floppy0 access (usually for access via serial debugger interface) (address) */
#define HCPU_VFLOP_ADDR $D659
/* 1=Virtualise SD/Floppy0 access (usually for access via serial debugger interface) (bit mask) */
#define HCPU_VFLOP_MASK 1
/* 1=Virtualise SD/Floppy1 access (usually for access via serial debugger interface) (address) */
#define GS_HCPU_VFLOP_ADDR $D659
/* 1=Virtualise SD/Floppy1 access (usually for access via serial debugger interface) (bit mask) */
#define GS_HCPU_VFLOP_MASK 2
/* @HTRAPXX */
#define CPU_HTRAP1A $D65A
/* @HTRAPXX */
#define HTRAP1A $D65A
/* @HTRAPXX */
#define CPU_HTRAP1B $D65B
/* @HTRAPXX */
#define HTRAP1B $D65B
/* @HTRAPXX */
#define CPU_HTRAP1C $D65C
/* @HTRAPXX */
#define HTRAP1C $D65C
/* @HTRAPXX */
#define CPU_HTRAP1D $D65D
/* @HTRAPXX */
#define HTRAP1D $D65D
/* @HTRAPXX */
#define CPU_HTRAP1E $D65E
/* @HTRAPXX */
#define HTRAP1E $D65E
/* @HTRAPXX */
#define CPU_HTRAP1F $D65F
/* @HTRAPXX */
#define HTRAP1F $D65F
/* @HTRAPXX */
#define CPU_HTRAP20 $D660
/* @HTRAPXX */
#define HTRAP20 $D660
/* @HTRAPXX */
#define CPU_HTRAP21 $D661
/* @HTRAPXX */
#define HTRAP21 $D661
/* @HTRAPXX */
#define CPU_HTRAP22 $D662
/* @HTRAPXX */
#define HTRAP22 $D662
/* @HTRAPXX */
#define CPU_HTRAP23 $D663
/* @HTRAPXX */
#define HTRAP23 $D663
/* @HTRAPXX */
#define CPU_HTRAP24 $D664
/* @HTRAPXX */
#define HTRAP24 $D664
/* @HTRAPXX */
#define CPU_HTRAP25 $D665
/* @HTRAPXX */
#define HTRAP25 $D665
/* @HTRAPXX */
#define CPU_HTRAP26 $D666
/* @HTRAPXX */
#define HTRAP26 $D666
/* @HTRAPXX */
#define CPU_HTRAP27 $D667
/* @HTRAPXX */
#define HTRAP27 $D667
/* @HTRAPXX */
#define CPU_HTRAP28 $D668
/* @HTRAPXX */
#define HTRAP28 $D668
/* @HTRAPXX */
#define CPU_HTRAP29 $D669
/* @HTRAPXX */
#define HTRAP29 $D669
/* @HTRAPXX */
#define CPU_HTRAP2A $D66A
/* @HTRAPXX */
#define HTRAP2A $D66A
/* @HTRAPXX */
#define CPU_HTRAP2B $D66B
/* @HTRAPXX */
#define HTRAP2B $D66B
/* @HTRAPXX */
#define CPU_HTRAP2C $D66C
/* @HTRAPXX */
#define HTRAP2C $D66C
/* @HTRAPXX */
#define CPU_HTRAP2D $D66D
/* @HTRAPXX */
#define HTRAP2D $D66D
/* @HTRAPXX */
#define CPU_HTRAP2E $D66E
/* @HTRAPXX */
#define HTRAP2E $D66E
/* @HTRAPXX */
#define CPU_HTRAP2F $D66F
/* @HTRAPXX */
#define HTRAP2F $D66F
/* @HTRAPXX */
#define CPU_HTRAP30 $D670
/* @HTRAPXX */
#define HTRAP30 $D670
/* Hypervisor GeoRAM base address (x MB) */
#define HCPU_GEORAMBASE $D670
/* Hypervisor GeoRAM base address (x MB) */
#define GEORAMBASE $D670
/* @HTRAPXX */
#define CPU_HTRAP31 $D671
/* @HTRAPXX */
#define HTRAP31 $D671
/* Hypervisor GeoRAM address mask (applied to GeoRAM block register) */
#define HCPU_GEORAMMASK $D671
/* Hypervisor GeoRAM address mask (applied to GeoRAM block register) */
#define GEORAMMASK $D671
/* @HTRAPXX */
#define CPU_HTRAP32 $D672
/* @HTRAPXX */
#define HTRAP32 $D672
/* Enable composited Matrix Mode, and disable UART access to serial monitor. (address) */
#define HCPU_MATRIXEN_ADDR $D672
/* Enable composited Matrix Mode, and disable UART access to serial monitor. (address) */
#define MATRIXEN_ADDR $D672
/* Enable composited Matrix Mode, and disable UART access to serial monitor. (bit mask) */
#define HCPU_MATRIXEN_MASK 64
/* Enable composited Matrix Mode, and disable UART access to serial monitor. (bit mask) */
#define MATRIXEN_MASK 64
/* @HTRAPXX */
#define CPU_HTRAP33 $D673
/* @HTRAPXX */
#define HTRAP33 $D673
/* @HTRAPXX */
#define CPU_HTRAP34 $D674
/* @HTRAPXX */
#define HTRAP34 $D674
/* @HTRAPXX */
#define CPU_HTRAP35 $D675
/* @HTRAPXX */
#define HTRAP35 $D675
/* @HTRAPXX */
#define CPU_HTRAP36 $D676
/* @HTRAPXX */
#define HTRAP36 $D676
/* @HTRAPXX */
#define CPU_HTRAP37 $D677
/* @HTRAPXX */
#define HTRAP37 $D677
/* @HTRAPXX */
#define CPU_HTRAP38 $D678
/* @HTRAPXX */
#define HTRAP38 $D678
/* @HTRAPXX */
#define CPU_HTRAP39 $D679
/* @HTRAPXX */
#define HTRAP39 $D679
/* @HTRAPXX */
#define CPU_HTRAP3A $D67A
/* @HTRAPXX */
#define HTRAP3A $D67A
/* @HTRAPXX */
#define CPU_HTRAP3B $D67B
/* @HTRAPXX */
#define HTRAP3B $D67B
/* @HTRAPXX */
#define CPU_HTRAP3C $D67C
/* @HTRAPXX */
#define HTRAP3C $D67C
/* (write) Hypervisor write serial output to UART monitor (address) */
#define HCPU_UARTDATA_ADDR $D67C
/* (write) Hypervisor write serial output to UART monitor (address) */
#define UARTDATA_ADDR $D67C
/* (write) Hypervisor write serial output to UART monitor (bit mask) */
#define HCPU_UARTDATA_MASK 255
/* (write) Hypervisor write serial output to UART monitor (bit mask) */
#define UARTDATA_MASK 255
/* @HTRAPXX */
#define CPU_HTRAP3D $D67D
/* @HTRAPXX */
#define HTRAP3D $D67D
/* Hypervisor watchdog register: writing any value clears the watch dog */
#define HCPU_WATCHDOG $D67D
/* Hypervisor watchdog register: writing any value clears the watch dog */
#define WATCHDOG $D67D
/* RESERVED (address) */
#define HCPU_RSVD_ADDR $D67D
/* RESERVED (address) */
#define RSVD_ADDR $D67D
/* RESERVED (bit mask) */
#define HCPU_RSVD_MASK 1
/* RESERVED (bit mask) */
#define RSVD_MASK 1
/* Hypervisor enable 32-bit JMP/JSR etc (address) */
#define HCPU_JMP32EN_ADDR $D67D
/* Hypervisor enable 32-bit JMP/JSR etc (address) */
#define JMP32EN_ADDR $D67D
/* Hypervisor enable 32-bit JMP/JSR etc (bit mask) */
#define HCPU_JMP32EN_MASK 2
/* Hypervisor enable 32-bit JMP/JSR etc (bit mask) */
#define JMP32EN_MASK 2
/* Hypervisor write protect C65 ROM \$20000-\$3FFFF (address) */
#define HCPU_ROMPROT_ADDR $D67D
/* Hypervisor write protect C65 ROM \$20000-\$3FFFF (address) */
#define ROMPROT_ADDR $D67D
/* Hypervisor write protect C65 ROM \$20000-\$3FFFF (bit mask) */
#define HCPU_ROMPROT_MASK 4
/* Hypervisor write protect C65 ROM \$20000-\$3FFFF (bit mask) */
#define ROMPROT_MASK 4
/* Hypervisor enable ASC/DIN CAPS LOCK key to enable/disable CPU slow-down in C64/C128/C65 modes (address) */
#define HCPU_ASCFAST_ADDR $D67D
/* Hypervisor enable ASC/DIN CAPS LOCK key to enable/disable CPU slow-down in C64/C128/C65 modes (address) */
#define ASCFAST_ADDR $D67D
/* Hypervisor enable ASC/DIN CAPS LOCK key to enable/disable CPU slow-down in C64/C128/C65 modes (bit mask) */
#define HCPU_ASCFAST_MASK 8
/* Hypervisor enable ASC/DIN CAPS LOCK key to enable/disable CPU slow-down in C64/C128/C65 modes (bit mask) */
#define ASCFAST_MASK 8
/* Hypervisor force CPU to 48MHz for userland (userland can override via POKE0) (address) */
#define HCPU_CPUFAST_ADDR $D67D
/* Hypervisor force CPU to 48MHz for userland (userland can override via POKE0) (address) */
#define CPUFAST_ADDR $D67D
/* Hypervisor force CPU to 48MHz for userland (userland can override via POKE0) (bit mask) */
#define HCPU_CPUFAST_MASK 16
/* Hypervisor force CPU to 48MHz for userland (userland can override via POKE0) (bit mask) */
#define CPUFAST_MASK 16
/* Hypervisor force CPU to 4502 personality, even in C64 IO mode. (address) */
#define HCPU_F4502_ADDR $D67D
/* Hypervisor force CPU to 4502 personality, even in C64 IO mode. (address) */
#define F4502_ADDR $D67D
/* Hypervisor force CPU to 4502 personality, even in C64 IO mode. (bit mask) */
#define HCPU_F4502_MASK 32
/* Hypervisor force CPU to 4502 personality, even in C64 IO mode. (bit mask) */
#define F4502_MASK 32
/* Hypervisor flag to indicate if an IRQ is pending on exit from the hypervisor / set 1 to force IRQ/NMI deferal for 1,024 cycles on exit from hypervisor. (address) */
#define HCPU_PIRQ_ADDR $D67D
/* Hypervisor flag to indicate if an IRQ is pending on exit from the hypervisor / set 1 to force IRQ/NMI deferal for 1,024 cycles on exit from hypervisor. (address) */
#define PIRQ_ADDR $D67D
/* Hypervisor flag to indicate if an IRQ is pending on exit from the hypervisor / set 1 to force IRQ/NMI deferal for 1,024 cycles on exit from hypervisor. (bit mask) */
#define HCPU_PIRQ_MASK 64
/* Hypervisor flag to indicate if an IRQ is pending on exit from the hypervisor / set 1 to force IRQ/NMI deferal for 1,024 cycles on exit from hypervisor. (bit mask) */
#define PIRQ_MASK 64
/* Hypervisor flag to indicate if an NMI is pending on exit from the hypervisor. (address) */
#define HCPU_PNMI_ADDR $D67D
/* Hypervisor flag to indicate if an NMI is pending on exit from the hypervisor. (address) */
#define PNMI_ADDR $D67D
/* Hypervisor flag to indicate if an NMI is pending on exit from the hypervisor. (bit mask) */
#define HCPU_PNMI_MASK 128
/* Hypervisor flag to indicate if an NMI is pending on exit from the hypervisor. (bit mask) */
#define PNMI_MASK 128
/* @HTRAPXX */
#define CPU_HTRAP3E $D67E
/* @HTRAPXX */
#define HTRAP3E $D67E
/* Hypervisor already-upgraded bit (writing sets permanently) */
#define HCPU_HICKED $D67E
/* Hypervisor already-upgraded bit (writing sets permanently) */
#define HICKED $D67E
/* @HTRAPXX */
#define CPU_HTRAP3F $D67F
/* @HTRAPXX */
#define HTRAP3F $D67F
/* Writing trigger return from hypervisor */
#define HCPU_ENTEREXIT $D67F
/* Writing trigger return from hypervisor */
#define ENTEREXIT $D67F
/* SD controller status/command */
#define SD_CMDANDSTAT $D680
/* SD controller status/command */
#define CMDANDSTAT $D680
/* SD controller SD sector address (LSB) */
#define SD_SECTOR0 $D681
/* SD controller SD sector address (LSB) */
#define SECTOR0 $D681
/* SD controller SD sector address (2nd byte) */
#define SD_SECTOR1 $D682
/* SD controller SD sector address (2nd byte) */
#define SECTOR1 $D682
/* SD controller SD sector address (3rd byte) */
#define SD_SECTOR2 $D683
/* SD controller SD sector address (3rd byte) */
#define SECTOR2 $D683
/* SD controller SD sector address (MSB) */
#define SD_SECTOR3 $D684
/* SD controller SD sector address (MSB) */
#define SECTOR3 $D684
/* WRITE ONLY set fill byte for use in fill mode, instead of SD buffer data */
#define SD_FILLVAL $D686
/* WRITE ONLY set fill byte for use in fill mode, instead of SD buffer data */
#define FILLVAL $D686
/* (read only) reads bit 8 of the sector buffer pointer (address) */
#define SD_BUFBIT8_ADDR $D689
/* (read only) reads bit 8 of the sector buffer pointer (address) */
#define BUFBIT8_ADDR $D689
/* (read only) reads bit 8 of the sector buffer pointer (bit mask) */
#define SD_BUFBIT8_MASK 1
/* (read only) reads bit 8 of the sector buffer pointer (bit mask) */
#define BUFBIT8_MASK 1
/* (read only) if set, indicates that the sector buffer is full and has not yet been read (address) */
#define SD_BUFFFULL_ADDR $D689
/* (read only) if set, indicates that the sector buffer is full and has not yet been read (address) */
#define BUFFFULL_ADDR $D689
/* (read only) if set, indicates that the sector buffer is full and has not yet been read (bit mask) */
#define SD_BUFFFULL_MASK 2
/* (read only) if set, indicates that the sector buffer is full and has not yet been read (bit mask) */
#define BUFFFULL_MASK 2
/* Set/read SD card sd_handshake signal (address) */
#define SD_HNDSHK_ADDR $D689
/* Set/read SD card sd_handshake signal (address) */
#define HNDSHK_ADDR $D689
/* Set/read SD card sd_handshake signal (bit mask) */
#define SD_HNDSHK_MASK 4
/* Set/read SD card sd_handshake signal (bit mask) */
#define HNDSHK_MASK 4
/* SD Card Data Ready indication (address) */
#define SD_DRDY_ADDR $D689
/* SD Card Data Ready indication (address) */
#define DRDY_ADDR $D689
/* SD Card Data Ready indication (bit mask) */
#define SD_DRDY_MASK 8
/* SD Card Data Ready indication (bit mask) */
#define DRDY_MASK 8
/* Reserved (address) */
#define SD_RESERVED_ADDR $D689
/* Reserved (bit mask) */
#define SD_RESERVED_MASK 16
/* Set to swap floppy drive 0 (the internal drive) and drive 1 (the drive on the 2nd position on the internal floppy cable). (address) */
#define SD_FDCSWAP_ADDR $D689
/* Set to swap floppy drive 0 (the internal drive) and drive 1 (the drive on the 2nd position on the internal floppy cable). (address) */
#define FDCSWAP_ADDR $D689
/* Set to swap floppy drive 0 (the internal drive) and drive 1 (the drive on the 2nd position on the internal floppy cable). (bit mask) */
#define SD_FDCSWAP_MASK 32
/* Set to swap floppy drive 0 (the internal drive) and drive 1 (the drive on the 2nd position on the internal floppy cable). (bit mask) */
#define FDCSWAP_MASK 32
/* Set to switch sector buffer to view SD card direct access, clear for access to the F011 FDC sector buffer. (address) */
#define SD_BUFFSEL_ADDR $D689
/* Set to switch sector buffer to view SD card direct access, clear for access to the F011 FDC sector buffer. (address) */
#define BUFFSEL_ADDR $D689
/* Set to switch sector buffer to view SD card direct access, clear for access to the F011 FDC sector buffer. (bit mask) */
#define SD_BUFFSEL_MASK 128
/* Set to switch sector buffer to view SD card direct access, clear for access to the F011 FDC sector buffer. (bit mask) */
#define BUFFSEL_MASK 128
/* (read only) Set if colour RAM at $DC00 (address) */
#define SD_CDC00_ADDR $D68A
/* (read only) Set if colour RAM at $DC00 (address) */
#define CDC00_ADDR $D68A
/* (read only) Set if colour RAM at $DC00 (bit mask) */
#define SD_CDC00_MASK 1
/* (read only) Set if colour RAM at $DC00 (bit mask) */
#define CDC00_MASK 1
/* (read only) Set if VIC-IV or ethernet IO bank visible (address) */
#define SD_VICIII_ADDR $D68A
/* (read only) Set if VIC-IV or ethernet IO bank visible (address) */
#define VICIII_ADDR $D68A
/* (read only) Set if VIC-IV or ethernet IO bank visible (bit mask) */
#define SD_VICIII_MASK 2
/* (read only) Set if VIC-IV or ethernet IO bank visible (bit mask) */
#define VICIII_MASK 2
/* (read only) Set if drive 0 is virtualised (sectors delivered via serial monitor interface) (address) */
#define SD_VFDC0_ADDR $D68A
/* (read only) Set if drive 0 is virtualised (sectors delivered via serial monitor interface) (address) */
#define VFDC0_ADDR $D68A
/* (read only) Set if drive 0 is virtualised (sectors delivered via serial monitor interface) (bit mask) */
#define SD_VFDC0_MASK 4
/* (read only) Set if drive 0 is virtualised (sectors delivered via serial monitor interface) (bit mask) */
#define VFDC0_MASK 4
/* (read only) Set if drive 1 is virtualised (sectors delivered via serial monitor interface) (address) */
#define SD_VFDC1_ADDR $D68A
/* (read only) Set if drive 1 is virtualised (sectors delivered via serial monitor interface) (address) */
#define VFDC1_ADDR $D68A
/* (read only) Set if drive 1 is virtualised (sectors delivered via serial monitor interface) (bit mask) */
#define SD_VFDC1_MASK 8
/* (read only) Set if drive 1 is virtualised (sectors delivered via serial monitor interface) (bit mask) */
#define VFDC1_MASK 8
/* F011 drive 0 use disk image if set, otherwise use real floppy drive. (address) */
#define SDFDC_D0IMG_ADDR $D68B
/* F011 drive 0 use disk image if set, otherwise use real floppy drive. (address) */
#define D0IMG_ADDR $D68B
/* F011 drive 0 use disk image if set, otherwise use real floppy drive. (bit mask) */
#define SDFDC_D0IMG_MASK 1
/* F011 drive 0 use disk image if set, otherwise use real floppy drive. (bit mask) */
#define D0IMG_MASK 1
/* F011 drive 0 media present (address) */
#define SDFDC_D0P_ADDR $D68B
/* F011 drive 0 media present (address) */
#define D0P_ADDR $D68B
/* F011 drive 0 media present (bit mask) */
#define SDFDC_D0P_MASK 2
/* F011 drive 0 media present (bit mask) */
#define D0P_MASK 2
/* Write enable F011 drive 0 (address) */
#define SDFDC_D0WP_ADDR $D68B
/* Write enable F011 drive 0 (address) */
#define D0WP_ADDR $D68B
/* Write enable F011 drive 0 (bit mask) */
#define SDFDC_D0WP_MASK 4
/* Write enable F011 drive 0 (bit mask) */
#define D0WP_MASK 4
/* F011 drive 1 use disk image if set, otherwise use real floppy drive. (address) */
#define SDFDC_D1IMG_ADDR $D68B
/* F011 drive 1 use disk image if set, otherwise use real floppy drive. (address) */
#define D1IMG_ADDR $D68B
/* F011 drive 1 use disk image if set, otherwise use real floppy drive. (bit mask) */
#define SDFDC_D1IMG_MASK 8
/* F011 drive 1 use disk image if set, otherwise use real floppy drive. (bit mask) */
#define D1IMG_MASK 8
/* F011 drive 1 media present (address) */
#define SDFDC_D1P_ADDR $D68B
/* F011 drive 1 media present (address) */
#define D1P_ADDR $D68B
/* F011 drive 1 media present (bit mask) */
#define SDFDC_D1P_MASK 16
/* F011 drive 1 media present (bit mask) */
#define D1P_MASK 16
/* Write enable F011 drive 1 (address) */
#define SDFDC_D1WP_ADDR $D68B
/* Write enable F011 drive 1 (address) */
#define D1WP_ADDR $D68B
/* Write enable F011 drive 1 (bit mask) */
#define SDFDC_D1WP_MASK 32
/* Write enable F011 drive 1 (bit mask) */
#define D1WP_MASK 32
/* Enable 64MiB ``MEGA Disk'' for F011 emulated drive 0 (address) */
#define F011_MDISK0_ADDR $D68B
/* Enable 64MiB ``MEGA Disk'' for F011 emulated drive 0 (bit mask) */
#define F011_MDISK0_MASK 64
/* F011 drive 0 disk image is 64MiB mega image if set (otherwise 800KiB 1581 image) (address) */
#define SDFDC_D0MD_ADDR $D68B
/* F011 drive 0 disk image is 64MiB mega image if set (otherwise 800KiB 1581 image) (address) */
#define D0MD_ADDR $D68B
/* F011 drive 0 disk image is 64MiB mega image if set (otherwise 800KiB 1581 image) (bit mask) */
#define SDFDC_D0MD_MASK 64
/* F011 drive 0 disk image is 64MiB mega image if set (otherwise 800KiB 1581 image) (bit mask) */
#define D0MD_MASK 64
/* Enable 64MiB ``MEGA Disk'' for F011 emulated drive 1 (address) */
#define GS_F011_MDISK0_ADDR $D68B
/* Enable 64MiB ``MEGA Disk'' for F011 emulated drive 1 (bit mask) */
#define GS_F011_MDISK0_MASK 128
/* F011 drive 1 disk image is 64MiB mega image if set (otherwise 800KiB 1581 image) (address) */
#define SDFDC_D1MD_ADDR $D68B
/* F011 drive 1 disk image is 64MiB mega image if set (otherwise 800KiB 1581 image) (address) */
#define D1MD_ADDR $D68B
/* F011 drive 1 disk image is 64MiB mega image if set (otherwise 800KiB 1581 image) (bit mask) */
#define SDFDC_D1MD_MASK 128
/* F011 drive 1 disk image is 64MiB mega image if set (otherwise 800KiB 1581 image) (bit mask) */
#define D1MD_MASK 128
/* Diskimage sector number (bits 0-7) */
#define F011_DISKADDR0 $D68C
/* Diskimage sector number (bits 0-7) */
#define DISKADDR0 $D68C
/* F011 drive 0 disk image address on SD card (LSB) */
#define SDFDC_D0STARTSEC0 $D68C
/* F011 drive 0 disk image address on SD card (LSB) */
#define D0STARTSEC0 $D68C
/* Diskimage sector number (bits 8-15) */
#define F011_DISKADDR1 $D68D
/* Diskimage sector number (bits 8-15) */
#define DISKADDR1 $D68D
/* F011 drive 0 disk image address on SD card (2nd byte) */
#define SDFDC_D0STARTSEC1 $D68D
/* F011 drive 0 disk image address on SD card (2nd byte) */
#define D0STARTSEC1 $D68D
/* Diskimage sector number (bits 16-23) */
#define F011_DISKADDR2 $D68E
/* Diskimage sector number (bits 16-23) */
#define DISKADDR2 $D68E
/* F011 drive 0 disk image address on SD card (3rd byte) */
#define SDFDC_D0STARTSEC2 $D68E
/* F011 drive 0 disk image address on SD card (3rd byte) */
#define D0STARTSEC2 $D68E
/* Diskimage sector number (bits 24-31) */
#define F011_DISKADDR3 $D68F
/* Diskimage sector number (bits 24-31) */
#define DISKADDR3 $D68F
/* F011 drive 0 disk image address on SD card (MSB) */
#define SDFDC_D0STARTSEC3 $D68F
/* F011 drive 0 disk image address on SD card (MSB) */
#define D0STARTSEC3 $D68F
/* Diskimage 2 sector number (bits 0-7) */
#define F011_DISK2ADDR0 $D690
/* Diskimage 2 sector number (bits 0-7) */
#define DISK2ADDR0 $D690
/* F011 drive 1 disk image address on SD card (LSB) */
#define SDFDC_D1STARTSEC0 $D690
/* F011 drive 1 disk image address on SD card (LSB) */
#define D1STARTSEC0 $D690
/* Diskimage 2 sector number (bits 8-15) */
#define F011_DISK2ADDR1 $D691
/* Diskimage 2 sector number (bits 8-15) */
#define DISK2ADDR1 $D691
/* F011 drive 1 disk image address on SD card (2nd byte) */
#define SDFDC_D1STARTSEC1 $D691
/* F011 drive 1 disk image address on SD card (2nd byte) */
#define D1STARTSEC1 $D691
/* Diskimage 2 sector number (bits 16-23) */
#define F011_DISK2ADDR2 $D692
/* Diskimage 2 sector number (bits 16-23) */
#define DISK2ADDR2 $D692
/* F011 drive 1 disk image address on SD card (3rd byte) */
#define SDFDC_D1STARTSEC2 $D692
/* F011 drive 1 disk image address on SD card (3rd byte) */
#define D1STARTSEC2 $D692
/* Diskimage 2 sector number (bits 24-31) */
#define F011_DISK2ADDR3 $D693
/* Diskimage 2 sector number (bits 24-31) */
#define DISK2ADDR3 $D693
/* F011 drive 1 disk image address on SD card (MSB) */
#define SDFDC_D1STARTSEC3 $D693
/* F011 drive 1 disk image address on SD card (MSB) */
#define D1STARTSEC3 $D693
/* Enable automatic track seeking for sector reads and writes */
#define F011_AUTOTUNE $D696
/* Enable automatic track seeking for sector reads and writes */
#define AUTOTUNE $D696
/* Status of M65 R3 J21 pins */
#define DEBUG_J21INL $D69B
/* Status of M65 R3 J21 pins */
#define J21INL $D69B
/* Status of M65 R3 J21 pins */
#define DEBUG_J21INH $D69C
/* Status of M65 R3 J21 pins */
#define J21INH $D69C
/* Status of M65 R3 DIP switches */
#define DEBUG_DIPSW $D69D
/* Status of M65 R3 DIP switches */
#define DIPSW $D69D
/* Status of switches 0 to 7 */
#define DEBUG_SWSTATUS $D69E
/* Status of switches 8 to 15 */
#define GS_DEBUG_SWSTATUS $D69F
/* Control floppy drive SIDE1 line (address) */
#define FDC_DBGWGATE_ADDR $D6A0
/* Control floppy drive SIDE1 line (bit mask) */
#define FDC_DBGWGATE_MASK 1
/* Control floppy drive WGATE line (address) */
#define GS_FDC_DBGWGATE_ADDR $D6A0
/* Control floppy drive WGATE line (bit mask) */
#define GS_FDC_DBGWGATE_MASK 2
/* Control floppy drive WDATA line (address) */
#define FDC_DBGWDATA_ADDR $D6A0
/* Control floppy drive WDATA line (address) */
#define DBGWDATA_ADDR $D6A0
/* Control floppy drive WDATA line (bit mask) */
#define FDC_DBGWDATA_MASK 4
/* Control floppy drive WDATA line (bit mask) */
#define DBGWDATA_MASK 4
/* Control floppy drive STEP line (address) */
#define FDC_DBGDIR_ADDR $D6A0
/* Control floppy drive STEP line (bit mask) */
#define FDC_DBGDIR_MASK 8
/* Control floppy drive STEPDIR line (address) */
#define GS_FDC_DBGDIR_ADDR $D6A0
/* Control floppy drive STEPDIR line (bit mask) */
#define GS_FDC_DBGDIR_MASK 16
/* Control floppy drive SELECT line (address) */
#define FDC_DBGMOTORA_ADDR $D6A0
/* Control floppy drive SELECT line (bit mask) */
#define FDC_DBGMOTORA_MASK 32
/* Control floppy drive MOTOR line (address) */
#define GS_FDC_DBGMOTORA_ADDR $D6A0
/* Control floppy drive MOTOR line (bit mask) */
#define GS_FDC_DBGMOTORA_MASK 64
/* Control floppy drive density select line (address) */
#define FDC_DENSITY_ADDR $D6A0
/* Control floppy drive density select line (address) */
#define DENSITY_ADDR $D6A0
/* Control floppy drive density select line (bit mask) */
#define FDC_DENSITY_MASK 128
/* Control floppy drive density select line (bit mask) */
#define DENSITY_MASK 128
/* Use real floppy drive instead of SD card for 1st floppy drive (address) */
#define F011_DRV0EN_ADDR $D6A1
/* Use real floppy drive instead of SD card for 1st floppy drive (address) */
#define DRV0EN_ADDR $D6A1
/* Use real floppy drive instead of SD card for 1st floppy drive (bit mask) */
#define F011_DRV0EN_MASK 1
/* Use real floppy drive instead of SD card for 1st floppy drive (bit mask) */
#define DRV0EN_MASK 1
/* Use real floppy drive for drive 0 if set (read-only, except for from hypervisor) (address) */
#define SDFDC_USEREAL0_ADDR $D6A1
/* Use real floppy drive for drive 0 if set (read-only, except for from hypervisor) (address) */
#define USEREAL0_ADDR $D6A1
/* Use real floppy drive for drive 0 if set (read-only, except for from hypervisor) (bit mask) */
#define SDFDC_USEREAL0_MASK 1
/* Use real floppy drive for drive 0 if set (read-only, except for from hypervisor) (bit mask) */
#define USEREAL0_MASK 1
/* Read next sector under head if set, ignoring the requested side, track and sector number. (address) */
#define SDFDC_TARGANY_ADDR $D6A1
/* Read next sector under head if set, ignoring the requested side, track and sector number. (address) */
#define TARGANY_ADDR $D6A1
/* Read next sector under head if set, ignoring the requested side, track and sector number. (bit mask) */
#define SDFDC_TARGANY_MASK 2
/* Read next sector under head if set, ignoring the requested side, track and sector number. (bit mask) */
#define TARGANY_MASK 2
/* Use real floppy drive instead of SD card for 2nd floppy drive (address) */
#define F011_DRV2EN_ADDR $D6A1
/* Use real floppy drive instead of SD card for 2nd floppy drive (address) */
#define DRV2EN_ADDR $D6A1
/* Use real floppy drive instead of SD card for 2nd floppy drive (bit mask) */
#define F011_DRV2EN_MASK 4
/* Use real floppy drive instead of SD card for 2nd floppy drive (bit mask) */
#define DRV2EN_MASK 4
/* Use real floppy drive for drive 1 if set (read-only, except for from hypervisor) (address) */
#define SDFDC_USEREAL1_ADDR $D6A1
/* Use real floppy drive for drive 1 if set (read-only, except for from hypervisor) (address) */
#define USEREAL1_ADDR $D6A1
/* Use real floppy drive for drive 1 if set (read-only, except for from hypervisor) (bit mask) */
#define SDFDC_USEREAL1_MASK 4
/* Use real floppy drive for drive 1 if set (read-only, except for from hypervisor) (bit mask) */
#define USEREAL1_MASK 4
/* Disable floppy spinning and tracking for SD card operations. (address) */
#define SDFDC_SILENT_ADDR $D6A1
/* Disable floppy spinning and tracking for SD card operations. (address) */
#define SILENT_ADDR $D6A1
/* Disable floppy spinning and tracking for SD card operations. (bit mask) */
#define SDFDC_SILENT_MASK 8
/* Disable floppy spinning and tracking for SD card operations. (bit mask) */
#define SILENT_MASK 8
/* Set number of bus cycles per floppy magnetic interval (decrease to increase data rate) */
#define FDC_DATARATE $D6A2
/* Set number of bus cycles per floppy magnetic interval (decrease to increase data rate) */
#define DATARATE $D6A2
/* Select audio channel volume to be set by thumb wheel #3 (address) */
#define MISCIO_WHEEL3TARGET_ADDR $D6AC
/* Select audio channel volume to be set by thumb wheel #3 (address) */
#define WHEEL3TARGET_ADDR $D6AC
/* Select audio channel volume to be set by thumb wheel #3 (bit mask) */
#define MISCIO_WHEEL3TARGET_MASK 15
/* Select audio channel volume to be set by thumb wheel #3 (bit mask) */
#define WHEEL3TARGET_MASK 15
/* Enable control of LCD panel brightness via thumb wheel (address) */
#define MISCIO_WHEELBRIGHTEN_ADDR $D6AC
/* Enable control of LCD panel brightness via thumb wheel (address) */
#define WHEELBRIGHTEN_ADDR $D6AC
/* Enable control of LCD panel brightness via thumb wheel (bit mask) */
#define MISCIO_WHEELBRIGHTEN_MASK 128
/* Enable control of LCD panel brightness via thumb wheel (bit mask) */
#define WHEELBRIGHTEN_MASK 128
/* Select audio channel volume to be set by thumb wheel #1 (address) */
#define MISCIO_WHEEL1TARGET_ADDR $D6AD
/* Select audio channel volume to be set by thumb wheel #1 (address) */
#define WHEEL1TARGET_ADDR $D6AD
/* Select audio channel volume to be set by thumb wheel #1 (bit mask) */
#define MISCIO_WHEEL1TARGET_MASK 15
/* Select audio channel volume to be set by thumb wheel #1 (bit mask) */
#define WHEEL1TARGET_MASK 15
/* Select audio channel volume to be set by thumb wheel #2 (address) */
#define MISCIO_WHEEL2TARGET_ADDR $D6AD
/* Select audio channel volume to be set by thumb wheel #2 (address) */
#define WHEEL2TARGET_ADDR $D6AD
/* Select audio channel volume to be set by thumb wheel #2 (bit mask) */
#define MISCIO_WHEEL2TARGET_MASK 240
/* Select audio channel volume to be set by thumb wheel #2 (bit mask) */
#define WHEEL2TARGET_MASK 240
/* Select floppy encoding (0=MFM, 1=RLL2,7, F=Raw encoding) (address) */
#define SD_FDC_ENC_ADDR $D6AE
/* Select floppy encoding (0=MFM, 1=RLL2,7, F=Raw encoding) (address) */
#define FDC_ENC_ADDR $D6AE
/* Select floppy encoding (0=MFM, 1=RLL2,7, F=Raw encoding) (bit mask) */
#define SD_FDC_ENC_MASK 15
/* Select floppy encoding (0=MFM, 1=RLL2,7, F=Raw encoding) (bit mask) */
#define FDC_ENC_MASK 15
/* Automatically select DD or HD decoder for last sector display (address) */
#define SD_AUTO_2XSEL_ADDR $D6AE
/* Automatically select DD or HD decoder for last sector display (address) */
#define AUTO_2XSEL_ADDR $D6AE
/* Automatically select DD or HD decoder for last sector display (bit mask) */
#define SD_AUTO_2XSEL_MASK 16
/* Automatically select DD or HD decoder for last sector display (bit mask) */
#define AUTO_2XSEL_MASK 16
/* Enable automatic variable speed selection for floppy controller using Track Information Blocks on MEGA65 HD floppies (address) */
#define SD_FDC_VARSPD_ADDR $D6AE
/* Enable automatic variable speed selection for floppy controller using Track Information Blocks on MEGA65 HD floppies (address) */
#define FDC_VARSPD_ADDR $D6AE
/* Enable automatic variable speed selection for floppy controller using Track Information Blocks on MEGA65 HD floppies (bit mask) */
#define SD_FDC_VARSPD_MASK 32
/* Enable automatic variable speed selection for floppy controller using Track Information Blocks on MEGA65 HD floppies (bit mask) */
#define FDC_VARSPD_MASK 32
/* Select HD decoder for last sector display (address) */
#define SD_FDC_2XSEL_ADDR $D6AE
/* Select HD decoder for last sector display (address) */
#define FDC_2XSEL_ADDR $D6AE
/* Select HD decoder for last sector display (bit mask) */
#define SD_FDC_2XSEL_MASK 64
/* Select HD decoder for last sector display (bit mask) */
#define FDC_2XSEL_MASK 64
/* Enable use of Track Info Block settings (address) */
#define SD_FDC_TIBEN_ADDR $D6AE
/* Enable use of Track Info Block settings (address) */
#define FDC_TIBEN_ADDR $D6AE
/* Enable use of Track Info Block settings (bit mask) */
#define SD_FDC_TIBEN_MASK 128
/* Enable use of Track Info Block settings (bit mask) */
#define FDC_TIBEN_MASK 128
/* Manually set f011_rsector_found signal (indented for virtual F011 mode only) (address) */
#define SD_VR_FOUND_ADDR $D6AF
/* Manually set f011_rsector_found signal (indented for virtual F011 mode only) (address) */
#define VR_FOUND_ADDR $D6AF
/* Manually set f011_rsector_found signal (indented for virtual F011 mode only) (bit mask) */
#define SD_VR_FOUND_MASK 1
/* Manually set f011_rsector_found signal (indented for virtual F011 mode only) (bit mask) */
#define VR_FOUND_MASK 1
/* Manually set f011_wsector_found signal (indented for virtual F011 mode only) (address) */
#define SD_VW_FOUND_ADDR $D6AF
/* Manually set f011_wsector_found signal (indented for virtual F011 mode only) (address) */
#define VW_FOUND_ADDR $D6AF
/* Manually set f011_wsector_found signal (indented for virtual F011 mode only) (bit mask) */
#define SD_VW_FOUND_MASK 2
/* Manually set f011_wsector_found signal (indented for virtual F011 mode only) (bit mask) */
#define VW_FOUND_MASK 2
/* Manually set f011_eq_inhibit signal (indented for virtual F011 mode only) (address) */
#define SD_VEQ_INH_ADDR $D6AF
/* Manually set f011_eq_inhibit signal (indented for virtual F011 mode only) (address) */
#define VEQ_INH_ADDR $D6AF
/* Manually set f011_eq_inhibit signal (indented for virtual F011 mode only) (bit mask) */
#define SD_VEQ_INH_MASK 4
/* Manually set f011_eq_inhibit signal (indented for virtual F011 mode only) (bit mask) */
#define VEQ_INH_MASK 4
/* Manually set f011_rnf signal (indented for virtual F011 mode only) (address) */
#define SD_VRNF_ADDR $D6AF
/* Manually set f011_rnf signal (indented for virtual F011 mode only) (address) */
#define VRNF_ADDR $D6AF
/* Manually set f011_rnf signal (indented for virtual F011 mode only) (bit mask) */
#define SD_VRNF_MASK 8
/* Manually set f011_rnf signal (indented for virtual F011 mode only) (bit mask) */
#define VRNF_MASK 8
/* Manually set f011_drq signal (indented for virtual F011 mode only) (address) */
#define SD_VDRQ_ADDR $D6AF
/* Manually set f011_drq signal (indented for virtual F011 mode only) (address) */
#define VDRQ_ADDR $D6AF
/* Manually set f011_drq signal (indented for virtual F011 mode only) (bit mask) */
#define SD_VDRQ_MASK 16
/* Manually set f011_drq signal (indented for virtual F011 mode only) (bit mask) */
#define VDRQ_MASK 16
/* Manually set f011_lost signal (indented for virtual F011 mode only) (address) */
#define SD_VLOST_ADDR $D6AF
/* Manually set f011_lost signal (indented for virtual F011 mode only) (address) */
#define VLOST_ADDR $D6AF
/* Manually set f011_lost signal (indented for virtual F011 mode only) (bit mask) */
#define SD_VLOST_MASK 32
/* Manually set f011_lost signal (indented for virtual F011 mode only) (bit mask) */
#define VLOST_MASK 32
/* Touch event 1 is valid (address) */
#define TOUCH_EV1_ADDR $D6B0
/* Touch event 1 is valid (address) */
#define EV1_ADDR $D6B0
/* Touch event 1 is valid (bit mask) */
#define TOUCH_EV1_MASK 1
/* Touch event 1 is valid (bit mask) */
#define EV1_MASK 1
/* Touch event 2 is valid (address) */
#define TOUCH_EV2_ADDR $D6B0
/* Touch event 2 is valid (address) */
#define EV2_ADDR $D6B0
/* Touch event 2 is valid (bit mask) */
#define TOUCH_EV2_MASK 2
/* Touch event 2 is valid (bit mask) */
#define EV2_MASK 2
/* Touch event 1 up/down state (address) */
#define TOUCH_UPDN1_ADDR $D6B0
/* Touch event 1 up/down state (address) */
#define UPDN1_ADDR $D6B0
/* Touch event 1 up/down state (bit mask) */
#define TOUCH_UPDN1_MASK 12
/* Touch event 1 up/down state (bit mask) */
#define UPDN1_MASK 12
/* Touch event 2 up/down state (address) */
#define TOUCH_UPDN2_ADDR $D6B0
/* Touch event 2 up/down state (address) */
#define UPDN2_ADDR $D6B0
/* Touch event 2 up/down state (bit mask) */
#define TOUCH_UPDN2_MASK 48
/* Touch event 2 up/down state (bit mask) */
#define UPDN2_MASK 48
/* Flip X axis of touch interface if set (address) */
#define MISCIO_TCHFLX_ADDR $D6B0
/* Flip X axis of touch interface if set (bit mask) */
#define MISCIO_TCHFLX_MASK 64
/* Invert horizontal axis (address) */
#define TOUCH_XINV_ADDR $D6B0
/* Invert horizontal axis (address) */
#define XINV_ADDR $D6B0
/* Invert horizontal axis (bit mask) */
#define TOUCH_XINV_MASK 64
/* Invert horizontal axis (bit mask) */
#define XINV_MASK 64
/* Flip Y axis of touch interface if set (address) */
#define GS_MISCIO_TCHFLX_ADDR $D6B0
/* Flip Y axis of touch interface if set (bit mask) */
#define GS_MISCIO_TCHFLX_MASK 128
/* Invert vertical axis (address) */
#define TOUCH_YINV_ADDR $D6B0
/* Invert vertical axis (address) */
#define YINV_ADDR $D6B0
/* Invert vertical axis (bit mask) */
#define TOUCH_YINV_MASK 128
/* Invert vertical axis (bit mask) */
#define YINV_MASK 128
/* Set X scale value for touch interface (LSB) */
#define MISCIO_TCHXSCALE $D6B1
/* Touch pad X scaling LSB */
#define TOUCH_CALXSCALELSB $D6B1
/* Touch pad X scaling LSB */
#define CALXSCALELSB $D6B1
/* Set X scale value for touch interface (MSB) */
#define GS_MISCIO_TCHXSCALE $D6B2
/* Touch pad X scaling MSB */
#define TOUCH_CALXSCALEMSB $D6B2
/* Touch pad X scaling MSB */
#define CALXSCALEMSB $D6B2
/* Set Y scale value for touch interface (LSB) */
#define MISCIO_TCHYSCALE $D6B3
/* Touch pad Y scaling LSB */
#define TOUCH_CALYSCALELSB $D6B3
/* Touch pad Y scaling LSB */
#define CALYSCALELSB $D6B3
/* Set Y scale value for touch interface (MSB) */
#define GS_MISCIO_TCHYSCALE $D6B4
/* Touch pad Y scaling MSB */
#define TOUCH_CALYSCALEMSB $D6B4
/* Touch pad Y scaling MSB */
#define CALYSCALEMSB $D6B4
/* Set X delta value for touch interface (LSB) */
#define MISCIO_TCHXDELTA $D6B5
/* Touch pad X delta LSB */
#define TOUCH_CALXDELTALSB $D6B5
/* Touch pad X delta LSB */
#define CALXDELTALSB $D6B5
/* Set Y delta value for touch interface (LSB) */
#define MISCIO_TCHYDELTA $D6B7
/* Touch pad Y delta LSB */
#define TOUCH_CALYDELTALSB $D6B7
/* Touch pad Y delta LSB */
#define CALYDELTALSB $D6B7
/* Set Y delta value for touch interface (MSB) */
#define GS_MISCIO_TCHYDELTA $D6B8
/* Touch pad Y delta MSB */
#define TOUCH_CALYDELTAMSB $D6B8
/* Touch pad Y delta MSB */
#define CALYDELTAMSB $D6B8
/* Touch pad touch #1 X LSB */
#define TOUCH_TOUCH1XLSB $D6B9
/* Touch pad touch #1 X LSB */
#define TOUCH1XLSB $D6B9
/* Touch pad touch #1 Y LSB */
#define TOUCH_TOUCH1YLSB $D6BA
/* Touch pad touch #1 Y LSB */
#define TOUCH1YLSB $D6BA
/* Set X delta value for touch interface (MSB) */
#define GS_MISCIO_TCHXDELTA $D6BB
/* Touch pad touch \#1 X MSBs (address) */
#define TOUCH_TOUCH1XMSB_ADDR $D6BB
/* Touch pad touch \#1 X MSBs (address) */
#define TOUCH1XMSB_ADDR $D6BB
/* Touch pad touch \#1 X MSBs (bit mask) */
#define TOUCH_TOUCH1XMSB_MASK 3
/* Touch pad touch \#1 X MSBs (bit mask) */
#define TOUCH1XMSB_MASK 3
/* Touch pad touch \#1 Y MSBs (address) */
#define TOUCH_TOUCH1YMSB_ADDR $D6BB
/* Touch pad touch \#1 Y MSBs (address) */
#define TOUCH1YMSB_ADDR $D6BB
/* Touch pad touch \#1 Y MSBs (bit mask) */
#define TOUCH_TOUCH1YMSB_MASK 48
/* Touch pad touch \#1 Y MSBs (bit mask) */
#define TOUCH1YMSB_MASK 48
/* Touch pad touch \#2 X LSB */
#define TOUCH_TOUCH2XLSB $D6BC
/* Touch pad touch \#2 X LSB */
#define TOUCH2XLSB $D6BC
/* Touch pad touch \#2 Y LSB */
#define TOUCH_TOUCH2YLSB $D6BD
/* Touch pad touch \#2 Y LSB */
#define TOUCH2YLSB $D6BD
/* Touch pad touch \#2 X MSBs (address) */
#define TOUCH_TOUCH2XMSB_ADDR $D6BE
/* Touch pad touch \#2 X MSBs (address) */
#define TOUCH2XMSB_ADDR $D6BE
/* Touch pad touch \#2 X MSBs (bit mask) */
#define TOUCH_TOUCH2XMSB_MASK 3
/* Touch pad touch \#2 X MSBs (bit mask) */
#define TOUCH2XMSB_MASK 3
/* Touch pad touch \#2 Y MSBs (address) */
#define TOUCH_TOUCH2YMSB_ADDR $D6BE
/* Touch pad touch \#2 Y MSBs (address) */
#define TOUCH2YMSB_ADDR $D6BE
/* Touch pad touch \#2 Y MSBs (bit mask) */
#define TOUCH_TOUCH2YMSB_MASK 48
/* Touch pad touch \#2 Y MSBs (bit mask) */
#define TOUCH2YMSB_MASK 48
/* Select byte number for touch panel communications instrumentation (address) */
#define MISCIO_TCHBYTENUM_ADDR $D6BF
/* Select byte number for touch panel communications instrumentation (address) */
#define TCHBYTENUM_ADDR $D6BF
/* Select byte number for touch panel communications instrumentation (bit mask) */
#define MISCIO_TCHBYTENUM_MASK 127
/* Select byte number for touch panel communications instrumentation (bit mask) */
#define TCHBYTENUM_MASK 127
/* Enable/disable touch panel I2C communications (address) */
#define MISCIO_TCHI2CEN_ADDR $D6BF
/* Enable/disable touch panel I2C communications (address) */
#define TCHI2CEN_ADDR $D6BF
/* Enable/disable touch panel I2C communications (bit mask) */
#define MISCIO_TCHI2CEN_MASK 128
/* Enable/disable touch panel I2C communications (bit mask) */
#define TCHI2CEN_MASK 128
/* Touch pad gesture directions (left,right,up,down) (address) */
#define TOUCH_GESTUREDIR_ADDR $D6C0
/* Touch pad gesture directions (left,right,up,down) (address) */
#define GESTUREDIR_ADDR $D6C0
/* Touch pad gesture directions (left,right,up,down) (bit mask) */
#define TOUCH_GESTUREDIR_MASK 15
/* Touch pad gesture directions (left,right,up,down) (bit mask) */
#define GESTUREDIR_MASK 15
/* Touch pad gesture ID (address) */
#define TOUCH_GESTUREID_ADDR $D6C0
/* Touch pad gesture ID (address) */
#define GESTUREID_ADDR $D6C0
/* Touch pad gesture ID (bit mask) */
#define TOUCH_GESTUREID_MASK 240
/* Touch pad gesture ID (bit mask) */
#define GESTUREID_MASK 240
/* Select ICAPE2 FPGA configuration register for reading WRITE ONLY */
#define FPGA_REGNUM $D6C4
/* Select ICAPE2 FPGA configuration register for reading WRITE ONLY */
#define REGNUM $D6C4
/* Value of selected ICAPE2 register (least significant byte) */
#define FPGA_REGVAL $D6C4
/* Value of selected ICAPE2 register */
#define GS_FPGA_REGVAL $D6C5
/* Value of selected ICAPE2 register */
#define GS_FPGA_REGVAL_2 $D6C6
/* Value of selected ICAPE2 register (most significant byte) */
#define GS_FPGA_REGVAL_3 $D6C7
/* Address of bitstream in boot flash for reconfiguration (least significant byte) */
#define FPGA_BOOTADDR0 $D6C8
/* Address of bitstream in boot flash for reconfiguration (least significant byte) */
#define BOOTADDR0 $D6C8
/* Address of bitstream in boot flash for reconfiguration */
#define FPGA_BOOTADDR1 $D6C9
/* Address of bitstream in boot flash for reconfiguration */
#define BOOTADDR1 $D6C9
/* Address of bitstream in boot flash for reconfiguration */
#define FPGA_BOOTADDR2 $D6CA
/* Address of bitstream in boot flash for reconfiguration */
#define BOOTADDR2 $D6CA
/* Address of bitstream in boot flash for reconfiguration (most significant byte) */
#define FPGA_BOOTADDR3 $D6CB
/* Address of bitstream in boot flash for reconfiguration (most significant byte) */
#define BOOTADDR3 $D6CB
/* Data bits for QSPI flash interface (read/write) (address) */
#define QSPI_DB_ADDR $D6CC
/* Data bits for QSPI flash interface (read/write) (address) */
#define DB_ADDR $D6CC
/* Data bits for QSPI flash interface (read/write) (bit mask) */
#define QSPI_DB_MASK 15
/* Data bits for QSPI flash interface (read/write) (bit mask) */
#define DB_MASK 15
/* (set to 0) (address) */
#define QSPI_RESERVED_ADDR $D6CC
/* (set to 0) (bit mask) */
#define QSPI_RESERVED_MASK 16
/* Clock output line for QSPI flash (address) */
#define QSPI_CLOCK_ADDR $D6CC
/* Clock output line for QSPI flash (bit mask) */
#define QSPI_CLOCK_MASK 32
/* Active-low chip-select for QSPI flash (address) */
#define QSPI_CSN_ADDR $D6CC
/* Active-low chip-select for QSPI flash (address) */
#define CSN_ADDR $D6CC
/* Active-low chip-select for QSPI flash (bit mask) */
#define QSPI_CSN_MASK 64
/* Active-low chip-select for QSPI flash (bit mask) */
#define CSN_MASK 64
/* Tristate DB0-3 (address) */
#define QSPI_TRI_ADDR $D6CC
/* Tristate DB0-3 (address) */
#define TRI_ADDR $D6CC
/* Tristate DB0-3 (bit mask) */
#define QSPI_TRI_MASK 128
/* Tristate DB0-3 (bit mask) */
#define TRI_MASK 128
/* Set to cause QSPI clock to free run at CPU clock frequency. (address) */
#define QSPI_CLOCKRUN_ADDR $D6CD
/* Set to cause QSPI clock to free run at CPU clock frequency. (address) */
#define CLOCKRUN_ADDR $D6CD
/* Set to cause QSPI clock to free run at CPU clock frequency. (bit mask) */
#define QSPI_CLOCKRUN_MASK 1
/* Set to cause QSPI clock to free run at CPU clock frequency. (bit mask) */
#define CLOCKRUN_MASK 1
/* Alternate address for direct manipulation of QSPI CLOCK (address) */
#define GS_QSPI_CLOCK_ADDR $D6CD
/* Alternate address for direct manipulation of QSPI CLOCK (bit mask) */
#define GS_QSPI_CLOCK_MASK 2
/* Write $42 to Trigger FPGA reconfiguration to switch to alternate bitstream. */
#define FPGA_RECONFTRIG $D6CF
/* Write $42 to Trigger FPGA reconfiguration to switch to alternate bitstream. */
#define RECONFTRIG $D6CF
/* I2C bus select (bus 0 = temp sensor on Nexys4 boardS) */
#define MISC_I2CBUSSELECT $D6D0
/* I2C bus select (bus 0 = temp sensor on Nexys4 boardS) */
#define I2CBUSSELECT $D6D0
/* Select I2C bus number (I2C busses vary between MEGA65 and MEGAphone variants) */
#define MISCIO_I2CBUSSEL $D6D0
/* Select I2C bus number (I2C busses vary between MEGA65 and MEGAphone variants) */
#define I2CBUSSEL $D6D0
/* I2C reset (address) */
#define MISCIO_I2CRST_ADDR $D6D1
/* I2C reset (address) */
#define I2CRST_ADDR $D6D1
/* I2C reset (bit mask) */
#define MISCIO_I2CRST_MASK 1
/* I2C reset (bit mask) */
#define I2CRST_MASK 1
/* I2C command latch write strobe (write 1 to trigger command) (address) */
#define MISCIO_I2CL_ADDR $D6D1
/* I2C command latch write strobe (write 1 to trigger command) (address) */
#define I2CL_ADDR $D6D1
/* I2C command latch write strobe (write 1 to trigger command) (bit mask) */
#define MISCIO_I2CL_MASK 2
/* I2C command latch write strobe (write 1 to trigger command) (bit mask) */
#define I2CL_MASK 2
/* I2C Select read (1) or write (0) (address) */
#define MISCIO_I2CRW_ADDR $D6D1
/* I2C Select read (1) or write (0) (address) */
#define I2CRW_ADDR $D6D1
/* I2C Select read (1) or write (0) (bit mask) */
#define MISCIO_I2CRW_MASK 4
/* I2C Select read (1) or write (0) (bit mask) */
#define I2CRW_MASK 4
/* I2C bus 1 swap SDA/SCL pins (address) */
#define MISCIO_I2CSW_ADDR $D6D1
/* I2C bus 1 swap SDA/SCL pins (address) */
#define I2CSW_ADDR $D6D1
/* I2C bus 1 swap SDA/SCL pins (bit mask) */
#define MISCIO_I2CSW_MASK 32
/* I2C bus 1 swap SDA/SCL pins (bit mask) */
#define I2CSW_MASK 32
/* I2C busy flag (address) */
#define MISCIO_I2CBSY_ADDR $D6D1
/* I2C busy flag (address) */
#define I2CBSY_ADDR $D6D1
/* I2C busy flag (bit mask) */
#define MISCIO_I2CBSY_MASK 64
/* I2C busy flag (bit mask) */
#define I2CBSY_MASK 64
/* I2C ack error (address) */
#define MISCIO_I2CERR_ADDR $D6D1
/* I2C ack error (address) */
#define I2CERR_ADDR $D6D1
/* I2C ack error (bit mask) */
#define MISCIO_I2CERR_MASK 128
/* I2C ack error (bit mask) */
#define I2CERR_MASK 128
/* I2C address (address) */
#define MISCIO_I2CADDR_ADDR $D6D2
/* I2C address (address) */
#define I2CADDR_ADDR $D6D2
/* I2C address (bit mask) */
#define MISCIO_I2CADDR_MASK 254
/* I2C address (bit mask) */
#define I2CADDR_MASK 254
/* I2C data write register */
#define MISCIO_I2CWDATA $D6D3
/* I2C data write register */
#define I2CWDATA $D6D3
/* I2C data read register */
#define MISCIO_I2CRDATA $D6D4
/* I2C data read register */
#define I2CRDATA $D6D4
/* DEBUG SD card last error code LSB */
#define MISC_SDDEBUGERRLSB $D6DA
/* DEBUG SD card last error code LSB */
#define SDDEBUGERRLSB $D6DA
/* DEBUG SD card last error code MSB */
#define MISC_SDDEBUGERRMSB $D6DB
/* DEBUG SD card last error code MSB */
#define SDDEBUGERRMSB $D6DB
/* FPGA die temperature sensor (lower nybl) */
#define FPGA_FPGATEMPLSB $D6DE
/* FPGA die temperature sensor (lower nybl) */
#define FPGATEMPLSB $D6DE
/* FPGA die temperature sensor (upper byte) */
#define FPGA_FPGATEMPMSB $D6DF
/* FPGA die temperature sensor (upper byte) */
#define FPGATEMPMSB $D6DF
/* Write 0 to hold ethernet controller under reset (address) */
#define ETH_RST_ADDR $D6E0
/* Write 0 to hold ethernet controller under reset (bit mask) */
#define ETH_RST_MASK 1
/* Write 0 to hold ethernet controller transmit sub-system under reset (address) */
#define ETH_TXRST_ADDR $D6E0
/* Write 0 to hold ethernet controller transmit sub-system under reset (address) */
#define TXRST_ADDR $D6E0
/* Write 0 to hold ethernet controller transmit sub-system under reset (bit mask) */
#define ETH_TXRST_MASK 2
/* Write 0 to hold ethernet controller transmit sub-system under reset (bit mask) */
#define TXRST_MASK 2
/* Read ethernet RX bits currently on the wire (address) */
#define ETH_DRXD_ADDR $D6E0
/* Read ethernet RX bits currently on the wire (address) */
#define DRXD_ADDR $D6E0
/* Read ethernet RX bits currently on the wire (bit mask) */
#define ETH_DRXD_MASK 4
/* Read ethernet RX bits currently on the wire (bit mask) */
#define DRXD_MASK 4
/* Read ethernet RX data valid (debug) (address) */
#define ETH_DRXDV_ADDR $D6E0
/* Read ethernet RX data valid (debug) (address) */
#define DRXDV_ADDR $D6E0
/* Read ethernet RX data valid (debug) (bit mask) */
#define ETH_DRXDV_MASK 8
/* Read ethernet RX data valid (debug) (bit mask) */
#define DRXDV_MASK 8
/* Allow remote keyboard input via magic ethernet frames (address) */
#define ETH_KEYEN_ADDR $D6E0
/* Allow remote keyboard input via magic ethernet frames (address) */
#define KEYEN_ADDR $D6E0
/* Allow remote keyboard input via magic ethernet frames (bit mask) */
#define ETH_KEYEN_MASK 16
/* Allow remote keyboard input via magic ethernet frames (bit mask) */
#define KEYEN_MASK 16
/* Indicate if ethernet RX is blocked until RX buffers freed (address) */
#define ETH_RXBLKD_ADDR $D6E0
/* Indicate if ethernet RX is blocked until RX buffers freed (address) */
#define RXBLKD_ADDR $D6E0
/* Indicate if ethernet RX is blocked until RX buffers freed (bit mask) */
#define ETH_RXBLKD_MASK 64
/* Indicate if ethernet RX is blocked until RX buffers freed (bit mask) */
#define RXBLKD_MASK 64
/* Ethernet transmit side is idle, i.e., a packet can be sent. (address) */
#define ETH_TXIDLE_ADDR $D6E0
/* Ethernet transmit side is idle, i.e., a packet can be sent. (address) */
#define TXIDLE_ADDR $D6E0
/* Ethernet transmit side is idle, i.e., a packet can be sent. (bit mask) */
#define ETH_TXIDLE_MASK 128
/* Ethernet transmit side is idle, i.e., a packet can be sent. (bit mask) */
#define TXIDLE_MASK 128
/* Number of free receive buffers (address) */
#define ETH_RXBF_ADDR $D6E1
/* Number of free receive buffers (address) */
#define RXBF_ADDR $D6E1
/* Number of free receive buffers (bit mask) */
#define ETH_RXBF_MASK 6
/* Number of free receive buffers (bit mask) */
#define RXBF_MASK 6
/* Enable streaming of CPU instruction stream or VIC-IV display on ethernet (address) */
#define ETH_STRM_ADDR $D6E1
/* Enable streaming of CPU instruction stream or VIC-IV display on ethernet (address) */
#define STRM_ADDR $D6E1
/* Enable streaming of CPU instruction stream or VIC-IV display on ethernet (bit mask) */
#define ETH_STRM_MASK 8
/* Enable streaming of CPU instruction stream or VIC-IV display on ethernet (bit mask) */
#define STRM_MASK 8
/* Ethernet TX IRQ status (address) */
#define ETH_TXQ_ADDR $D6E1
/* Ethernet TX IRQ status (address) */
#define TXQ_ADDR $D6E1
/* Ethernet TX IRQ status (bit mask) */
#define ETH_TXQ_MASK 16
/* Ethernet TX IRQ status (bit mask) */
#define TXQ_MASK 16
/* Ethernet RX IRQ status (address) */
#define ETH_RXQ_ADDR $D6E1
/* Ethernet RX IRQ status (address) */
#define RXQ_ADDR $D6E1
/* Ethernet RX IRQ status (bit mask) */
#define ETH_RXQ_MASK 32
/* Ethernet RX IRQ status (bit mask) */
#define RXQ_MASK 32
/* Enable ethernet TX IRQ (address) */
#define ETH_TXQEN_ADDR $D6E1
/* Enable ethernet TX IRQ (address) */
#define TXQEN_ADDR $D6E1
/* Enable ethernet TX IRQ (bit mask) */
#define ETH_TXQEN_MASK 64
/* Enable ethernet TX IRQ (bit mask) */
#define TXQEN_MASK 64
/* Enable ethernet RX IRQ (address) */
#define ETH_RXQEN_ADDR $D6E1
/* Enable ethernet RX IRQ (address) */
#define RXQEN_ADDR $D6E1
/* Enable ethernet RX IRQ (bit mask) */
#define ETH_RXQEN_MASK 128
/* Enable ethernet RX IRQ (bit mask) */
#define RXQEN_MASK 128
/* TX Packet size (low byte) */
#define ETH_TXSZLSB $D6E2
/* TX Packet size (low byte) */
#define TXSZLSB $D6E2
/* TX Packet size (high byte) */
#define ETH_TXSZMSB $D6E3
/* TX Packet size (high byte) */
#define TXSZMSB $D6E3
/* Ethernet command register (write only) */
#define ETH_COMMAND $D6E4
/* Ethernet disable promiscuous mode (address) */
#define ETH_NOPROM_ADDR $D6E5
/* Ethernet disable promiscuous mode (address) */
#define NOPROM_ADDR $D6E5
/* Ethernet disable promiscuous mode (bit mask) */
#define ETH_NOPROM_MASK 1
/* Ethernet disable promiscuous mode (bit mask) */
#define NOPROM_MASK 1
/* Disable CRC check for received packets (address) */
#define ETH_NOCRC_ADDR $D6E5
/* Disable CRC check for received packets (address) */
#define NOCRC_ADDR $D6E5
/* Disable CRC check for received packets (bit mask) */
#define ETH_NOCRC_MASK 2
/* Disable CRC check for received packets (bit mask) */
#define NOCRC_MASK 2
/* Ethernet TX clock phase adjust (address) */
#define ETH_TXPH_ADDR $D6E5
/* Ethernet TX clock phase adjust (address) */
#define TXPH_ADDR $D6E5
/* Ethernet TX clock phase adjust (bit mask) */
#define ETH_TXPH_MASK 12
/* Ethernet TX clock phase adjust (bit mask) */
#define TXPH_MASK 12
/* Accept broadcast frames (address) */
#define ETH_BCST_ADDR $D6E5
/* Accept broadcast frames (address) */
#define BCST_ADDR $D6E5
/* Accept broadcast frames (bit mask) */
#define ETH_BCST_MASK 16
/* Accept broadcast frames (bit mask) */
#define BCST_MASK 16
/* Accept multicast frames (address) */
#define ETH_MCST_ADDR $D6E5
/* Accept multicast frames (address) */
#define MCST_ADDR $D6E5
/* Accept multicast frames (bit mask) */
#define ETH_MCST_MASK 32
/* Accept multicast frames (bit mask) */
#define MCST_MASK 32
/* Ethernet RX clock phase adjust (address) */
#define ETH_RXPH_ADDR $D6E5
/* Ethernet RX clock phase adjust (address) */
#define RXPH_ADDR $D6E5
/* Ethernet RX clock phase adjust (bit mask) */
#define ETH_RXPH_MASK 192
/* Ethernet RX clock phase adjust (bit mask) */
#define RXPH_MASK 192
/* Ethernet MIIM register number (address) */
#define ETH_MIIMREG_ADDR $D6E6
/* Ethernet MIIM register number (address) */
#define MIIMREG_ADDR $D6E6
/* Ethernet MIIM register number (bit mask) */
#define ETH_MIIMREG_MASK 31
/* Ethernet MIIM register number (bit mask) */
#define MIIMREG_MASK 31
/* Ethernet MIIM PHY number (use 0 for Nexys4, 1 for MEGA65 r1 PCBs) (address) */
#define ETH_MIIMPHY_ADDR $D6E6
/* Ethernet MIIM PHY number (use 0 for Nexys4, 1 for MEGA65 r1 PCBs) (address) */
#define MIIMPHY_ADDR $D6E6
/* Ethernet MIIM PHY number (use 0 for Nexys4, 1 for MEGA65 r1 PCBs) (bit mask) */
#define ETH_MIIMPHY_MASK 224
/* Ethernet MIIM PHY number (use 0 for Nexys4, 1 for MEGA65 r1 PCBs) (bit mask) */
#define MIIMPHY_MASK 224
/* Ethernet MIIM register value (LSB) */
#define ETH_MIIMVLSB $D6E7
/* Ethernet MIIM register value (LSB) */
#define MIIMVLSB $D6E7
/* Ethernet MIIM register value (MSB) */
#define ETH_MIIMVMSB $D6E8
/* Ethernet MIIM register value (MSB) */
#define MIIMVMSB $D6E8
/* Ethernet MAC address */
#define ETH_MACADDR1 $D6E9
/* Ethernet MAC address */
#define MACADDR1 $D6E9
/* @MACADDRX */
#define ETH_MACADDR2 $D6EA
/* @MACADDRX */
#define MACADDR2 $D6EA
/* @MACADDRX */
#define ETH_MACADDR3 $D6EB
/* @MACADDRX */
#define MACADDR3 $D6EB
/* @MACADDRX */
#define ETH_MACADDR4 $D6EC
/* @MACADDRX */
#define MACADDR4 $D6EC
/* @MACADDRX */
#define ETH_MACADDR5 $D6ED
/* @MACADDRX */
#define MACADDR5 $D6ED
/* @MACADDRX */
#define ETH_MACADDR6 $D6EE
/* @MACADDRX */
#define MACADDR6 $D6EE
/* DEBUG show number of writes to eth RX buffer */
#define ETH_DBGRXWCOUNT $D6EF
/* DEBUG show number of writes to eth RX buffer */
#define DBGRXWCOUNT $D6EF
/* DEBUG show current ethernet TX state */
#define ETH_DBGTXSTAT $D6EF
/* DEBUG show current ethernet TX state */
#define DBGTXSTAT $D6EF
/* LCD panel brightness control */
#define MISC_LCDBRIGHTNESS $D6F0
/* LCD panel brightness control */
#define LCDBRIGHTNESS $D6F0
/* LCD panel brightness control */
#define MISCIO_LCDBRIGHT $D6F0
/* LCD panel brightness control */
#define LCDBRIGHT $D6F0
/* Read FPGA five-way buttons */
#define MISC_FPGABUTTONS $D6F2
/* Read FPGA five-way buttons */
#define FPGABUTTONS $D6F2
/* Accelerometer bit-bash interface */
#define MISC_ACCELBITBASH $D6F3
/* Accelerometer bit-bash interface */
#define ACCELBITBASH $D6F3
/* Accelerometer bit-bashing port (debug only) */
#define MISCIO_ACCELBASH $D6F3
/* Accelerometer bit-bashing port (debug only) */
#define ACCELBASH $D6F3
/* Audio Mixer register select */
#define AUDIO_MIXREGSEL $D6F4
/* Audio Mixer register select */
#define MIXREGSEL $D6F4
/* Audio Mixer register select */
#define AUDIOMIX_REGSEL $D6F4
/* Audio Mixer register select */
#define REGSEL $D6F4
/* Audio Mixer register read port */
#define AUDIO_MIXREGDATA $D6F5
/* Audio Mixer register read port */
#define MIXREGDATA $D6F5
/* Audio Mixer register write port */
#define AUDIOMIX_REGWDATA $D6F5
/* Audio Mixer register write port */
#define REGWDATA $D6F5
/* Keyboard scan code reader (lower byte) */
#define MISC_PS2KEYSCANLSB $D6F6
/* Keyboard scan code reader (lower byte) */
#define PS2KEYSCANLSB $D6F6
/* Keyboard scan code reader (upper nybl) */
#define MISC_PS2KEYSCANMSB $D6F7
/* Keyboard scan code reader (upper nybl) */
#define PS2KEYSCANMSB $D6F7
/* Digital audio, left channel, LSB */
#define AUDIO_DIGILEFTLSB $D6F8
/* Digital audio, left channel, LSB */
#define DIGILEFTLSB $D6F8
/* 16-bit digital audio out (left LSB) */
#define AUDIO_DIGILLSB $D6F8
/* 16-bit digital audio out (left LSB) */
#define DIGILLSB $D6F8
/* Digital audio, left channel, MSB */
#define AUDIO_DIGILEFTMSB $D6F9
/* Digital audio, left channel, MSB */
#define DIGILEFTMSB $D6F9
/* 16-bit digital audio out (left MSB) */
#define AUDIO_DIGILMSB $D6F9
/* 16-bit digital audio out (left MSB) */
#define DIGILMSB $D6F9
/* Digital audio, left channel, LSB */
#define AUDIO_DIGIRIGHTLSB $D6FA
/* Digital audio, left channel, LSB */
#define DIGIRIGHTLSB $D6FA
/* 16-bit digital audio out (right LSB) */
#define AUDIO_DIGIRLSB $D6FA
/* 16-bit digital audio out (right LSB) */
#define DIGIRLSB $D6FA
/* Digital audio, left channel, MSB */
#define AUDIO_DIGIRIGHTMSB $D6FB
/* Digital audio, left channel, MSB */
#define DIGIRIGHTMSB $D6FB
/* 16-bit digital audio out (right MSB) */
#define AUDIO_DIGIRMSB $D6FB
/* 16-bit digital audio out (right MSB) */
#define DIGIRMSB $D6FB
/* audio read-back LSB (source selected by $D6F4) */
#define AUDIO_READBACKLSB $D6FC
/* audio read-back LSB (source selected by $D6F4) */
#define READBACKLSB $D6FC
/* audio read-back MSB (source selected by $D6F4) */
#define AUDIO_READBACKMSB $D6FD
/* audio read-back MSB (source selected by $D6F4) */
#define READBACKMSB $D6FD
/* DMAgic DMA list address LSB, and trigger DMA (when written) */
#define DMA_ADDRLSBTRIG $D700
/* DMAgic DMA list address LSB, and trigger DMA (when written) */
#define ADDRLSBTRIG $D700
/* DMA list address high byte (address bits 8 -- 15). */
#define DMA_ADDRMSB $D701
/* DMA list address high byte (address bits 8 -- 15). */
#define ADDRMSB $D701
/* DMA list address bank (address bits 16 -- 22). Writing clears \$D704. */
#define DMA_ADDRBANK $D702
/* DMA list address bank (address bits 16 -- 22). Writing clears \$D704. */
#define ADDRBANK $D702
/* DMA enable F018B mode (adds sub-command byte) (address) */
#define DMA_EN018B_ADDR $D703
/* DMA enable F018B mode (adds sub-command byte) (address) */
#define EN018B_ADDR $D703
/* DMA enable F018B mode (adds sub-command byte) (bit mask) */
#define DMA_EN018B_MASK 1
/* DMA enable F018B mode (adds sub-command byte) (bit mask) */
#define EN018B_MASK 1
/* DMA list address mega-byte */
#define DMA_ADDRMB $D704
/* DMA list address mega-byte */
#define ADDRMB $D704
/* Set low-order byte of DMA list address, and trigger Enhanced DMA job, with list address specified as 28-bit flat address (uses DMA option list) */
#define DMA_ETRIG $D705
/* Set low-order byte of DMA list address, and trigger Enhanced DMA job, with list address specified as 28-bit flat address (uses DMA option list) */
#define ETRIG $D705
/* Set low-order byte of DMA list address, and trigger Enhanced DMA job, with list in current CPU memory map (uses DMA option list) */
#define DMA_ETRIGMAPD $D706
/* Set low-order byte of DMA list address, and trigger Enhanced DMA job, with list in current CPU memory map (uses DMA option list) */
#define ETRIGMAPD $D706
/* DMA list address low byte (address bits 0 -- 7) WITHOUT STARTING A DMA JOB (used by Hypervisor for unfreezing DMA-using tasks) */
#define DMA_ADDRLSB $D70E
/* DMA list address low byte (address bits 0 -- 7) WITHOUT STARTING A DMA JOB (used by Hypervisor for unfreezing DMA-using tasks) */
#define ADDRLSB $D70E
/* Set if hardware multiplier is busy (address) */
#define MATH_MULBUSY_ADDR $D70F
/* Set if hardware multiplier is busy (address) */
#define MULBUSY_ADDR $D70F
/* Set if hardware multiplier is busy (bit mask) */
#define MATH_MULBUSY_MASK 64
/* Set if hardware multiplier is busy (bit mask) */
#define MULBUSY_MASK 64
/* Set if hardware divider is busy (address) */
#define MATH_DIVBUSY_ADDR $D70F
/* Set if hardware divider is busy (address) */
#define DIVBUSY_ADDR $D70F
/* Set if hardware divider is busy (bit mask) */
#define MATH_DIVBUSY_MASK 128
/* Set if hardware divider is busy (bit mask) */
#define DIVBUSY_MASK 128
/* Enable badline emulation (address) */
#define CPU_BADLEN_ADDR $D710
/* Enable badline emulation (address) */
#define BADLEN_ADDR $D710
/* Enable badline emulation (bit mask) */
#define CPU_BADLEN_MASK 1
/* Enable badline emulation (bit mask) */
#define BADLEN_MASK 1
/* Enable 6502-style slow (7 cycle) interrupts (address) */
#define CPU_SLIEN_ADDR $D710
/* Enable 6502-style slow (7 cycle) interrupts (address) */
#define SLIEN_ADDR $D710
/* Enable 6502-style slow (7 cycle) interrupts (bit mask) */
#define CPU_SLIEN_MASK 2
/* Enable 6502-style slow (7 cycle) interrupts (bit mask) */
#define SLIEN_MASK 2
/* Enable VDC inteface simulation (address) */
#define MISC_VDCSEN_ADDR $D710
/* Enable VDC inteface simulation (address) */
#define VDCSEN_ADDR $D710
/* Enable VDC inteface simulation (bit mask) */
#define MISC_VDCSEN_MASK 4
/* Enable VDC inteface simulation (bit mask) */
#define VDCSEN_MASK 4
/* 1=charge extra cycle(s) for branches taken (address) */
#define CPU_BRCOST_ADDR $D710
/* 1=charge extra cycle(s) for branches taken (address) */
#define BRCOST_ADDR $D710
/* 1=charge extra cycle(s) for branches taken (bit mask) */
#define CPU_BRCOST_MASK 8
/* 1=charge extra cycle(s) for branches taken (bit mask) */
#define BRCOST_MASK 8
/* Cost of badlines minus 40. ie. 00=40 cycles, 11 = 43 cycles. (address) */
#define CPU_BADEXTRA_ADDR $D710
/* Cost of badlines minus 40. ie. 00=40 cycles, 11 = 43 cycles. (address) */
#define BADEXTRA_ADDR $D710
/* Cost of badlines minus 40. ie. 00=40 cycles, 11 = 43 cycles. (bit mask) */
#define CPU_BADEXTRA_MASK 48
/* Cost of badlines minus 40. ie. 00=40 cycles, 11 = 43 cycles. (bit mask) */
#define BADEXTRA_MASK 48
/* Audio DMA block timeout (read only) DEBUG (address) */
#define DMA_AUD_BLKTO_ADDR $D711
/* Audio DMA block timeout (read only) DEBUG (address) */
#define AUD_BLKTO_ADDR $D711
/* Audio DMA block timeout (read only) DEBUG (bit mask) */
#define DMA_AUD_BLKTO_MASK 7
/* Audio DMA block timeout (read only) DEBUG (bit mask) */
#define AUD_BLKTO_MASK 7
/* PWM/PDM audio encoding select (address) */
#define AUDIO_PWMPDM_ADDR $D711
/* PWM/PDM audio encoding select (address) */
#define PWMPDM_ADDR $D711
/* PWM/PDM audio encoding select (bit mask) */
#define AUDIO_PWMPDM_MASK 8
/* PWM/PDM audio encoding select (bit mask) */
#define PWMPDM_MASK 8
/* Audio DMA bypasses audio mixer (address) */
#define DMA_NOMIX_ADDR $D711
/* Audio DMA bypasses audio mixer (address) */
#define NOMIX_ADDR $D711
/* Audio DMA bypasses audio mixer (bit mask) */
#define DMA_NOMIX_MASK 16
/* Audio DMA bypasses audio mixer (bit mask) */
#define NOMIX_MASK 16
/* Audio DMA block writes (samples still get read) (address) */
#define DMA_AUD_WRBLK_ADDR $D711
/* Audio DMA block writes (samples still get read) (address) */
#define AUD_WRBLK_ADDR $D711
/* Audio DMA block writes (samples still get read) (bit mask) */
#define DMA_AUD_WRBLK_MASK 32
/* Audio DMA block writes (samples still get read) (bit mask) */
#define AUD_WRBLK_MASK 32
/* Audio DMA blocked (read only) DEBUG (address) */
#define DMA_BLKD_ADDR $D711
/* Audio DMA blocked (read only) DEBUG (address) */
#define BLKD_ADDR $D711
/* Audio DMA blocked (read only) DEBUG (bit mask) */
#define DMA_BLKD_MASK 64
/* Audio DMA blocked (read only) DEBUG (bit mask) */
#define BLKD_MASK 64
/* Enable Audio DMA (address) */
#define DMA_AUDEN_ADDR $D711
/* Enable Audio DMA (address) */
#define AUDEN_ADDR $D711
/* Enable Audio DMA (bit mask) */
#define DMA_AUDEN_MASK 128
/* Enable Audio DMA (bit mask) */
#define AUDEN_MASK 128
/* Audio DMA channel 0 right channel volume */
#define DMA_CH0RVOL $D71C
/* Audio DMA channel 0 right channel volume */
#define CH0RVOL $D71C
/* Audio DMA channel 1 right channel volume */
#define DMA_CH1RVOL $D71D
/* Audio DMA channel 1 right channel volume */
#define CH1RVOL $D71D
/* Audio DMA channel 2 left channel volume */
#define DMA_CH2LVOL $D71E
/* Audio DMA channel 2 left channel volume */
#define CH2LVOL $D71E
/* Audio DMA channel 3 left channel volume */
#define DMA_CH3LVOL $D71F
/* Audio DMA channel 3 left channel volume */
#define CH3LVOL $D71F
/* Audio DMA channel X sample bits (11=16, 10=8, 01=upper nybl, 00=lower nybl) (address) */
#define DMA_CH0_SBITS_ADDR $D720
/* Audio DMA channel X sample bits (11=16, 10=8, 01=upper nybl, 00=lower nybl) (address) */
#define CH0_SBITS_ADDR $D720
/* Audio DMA channel X sample bits (11=16, 10=8, 01=upper nybl, 00=lower nybl) (bit mask) */
#define DMA_CH0_SBITS_MASK 3
/* Audio DMA channel X sample bits (11=16, 10=8, 01=upper nybl, 00=lower nybl) (bit mask) */
#define CH0_SBITS_MASK 3
/* Audio DMA channel X stop flag (address) */
#define DMA_CH0_STP_ADDR $D720
/* Audio DMA channel X stop flag (address) */
#define CH0_STP_ADDR $D720
/* Audio DMA channel X stop flag (bit mask) */
#define DMA_CH0_STP_MASK 8
/* Audio DMA channel X stop flag (bit mask) */
#define CH0_STP_MASK 8
/* Audio DMA channel X play 32-sample sine wave instead of DMA data (address) */
#define DMA_CH0_SINE_ADDR $D720
/* Audio DMA channel X play 32-sample sine wave instead of DMA data (address) */
#define CH0_SINE_ADDR $D720
/* Audio DMA channel X play 32-sample sine wave instead of DMA data (bit mask) */
#define DMA_CH0_SINE_MASK 16
/* Audio DMA channel X play 32-sample sine wave instead of DMA data (bit mask) */
#define CH0_SINE_MASK 16
/* Enable Audio DMA channel X signed samples (address) */
#define DMA_CH0_SGN_ADDR $D720
/* Enable Audio DMA channel X signed samples (address) */
#define CH0_SGN_ADDR $D720
/* Enable Audio DMA channel X signed samples (bit mask) */
#define DMA_CH0_SGN_MASK 32
/* Enable Audio DMA channel X signed samples (bit mask) */
#define CH0_SGN_MASK 32
/* Enable Audio DMA channel X looping (address) */
#define DMA_CH0_LOOP_ADDR $D720
/* Enable Audio DMA channel X looping (address) */
#define CH0_LOOP_ADDR $D720
/* Enable Audio DMA channel X looping (bit mask) */
#define DMA_CH0_LOOP_MASK 64
/* Enable Audio DMA channel X looping (bit mask) */
#define CH0_LOOP_MASK 64
/* Enable Audio DMA channel X (address) */
#define DMA_CH0_EN_ADDR $D720
/* Enable Audio DMA channel X (address) */
#define CH0_EN_ADDR $D720
/* Enable Audio DMA channel X (bit mask) */
#define DMA_CH0_EN_MASK 128
/* Enable Audio DMA channel X (bit mask) */
#define CH0_EN_MASK 128
/* Audio DMA channel X base address LSB */
#define DMA_CH0BADDRL $D721
/* Audio DMA channel X base address LSB */
#define CH0BADDRL $D721
/* Audio DMA channel X base address middle byte */
#define DMA_CH0BADDRC $D722
/* Audio DMA channel X base address middle byte */
#define CH0BADDRC $D722
/* Audio DMA channel X base address MSB */
#define DMA_CH0BADDRM $D723
/* Audio DMA channel X base address MSB */
#define CH0BADDRM $D723
/* Audio DMA channel X frequency LSB */
#define DMA_CH0FREQL $D724
/* Audio DMA channel X frequency LSB */
#define CH0FREQL $D724
/* Audio DMA channel X frequency middle byte */
#define DMA_CH0FREQC $D725
/* Audio DMA channel X frequency middle byte */
#define CH0FREQC $D725
/* Audio DMA channel X frequency MSB */
#define DMA_CH0FREQM $D726
/* Audio DMA channel X frequency MSB */
#define CH0FREQM $D726
/* Audio DMA channel X top address LSB */
#define DMA_CH0TADDRL $D727
/* Audio DMA channel X top address LSB */
#define CH0TADDRL $D727
/* Audio DMA channel X top address MSB */
#define DMA_CH0TADDRM $D728
/* Audio DMA channel X top address MSB */
#define CH0TADDRM $D728
/* Audio DMA channel X playback volume */
#define DMA_CH0VOLUME $D729
/* Audio DMA channel X playback volume */
#define CH0VOLUME $D729
/* Audio DMA channel X current address LSB */
#define DMA_CH0CURADDRL $D72A
/* Audio DMA channel X current address LSB */
#define CH0CURADDRL $D72A
/* Audio DMA channel X current address middle byte */
#define DMA_CH0CURADDRC $D72B
/* Audio DMA channel X current address middle byte */
#define CH0CURADDRC $D72B
/* Audio DMA channel X current address MSB */
#define DMA_CH0CURADDRM $D72C
/* Audio DMA channel X current address MSB */
#define CH0CURADDRM $D72C
/* Audio DMA channel X timing counter LSB */
#define DMA_CH0TMRADDRL $D72D
/* Audio DMA channel X timing counter LSB */
#define CH0TMRADDRL $D72D
/* Audio DMA channel X timing counter middle byte */
#define DMA_CH0TMRADDRC $D72E
/* Audio DMA channel X timing counter middle byte */
#define CH0TMRADDRC $D72E
/* Audio DMA channel X timing counter MSB */
#define DMA_CH0TMRADDRM $D72F
/* Audio DMA channel X timing counter MSB */
#define CH0TMRADDRM $D72F
/* @CHXSBITS (address) */
#define DMA_CH1_SBITS_ADDR $D730
/* @CHXSBITS (address) */
#define CH1_SBITS_ADDR $D730
/* @CHXSBITS (bit mask) */
#define DMA_CH1_SBITS_MASK 3
/* @CHXSBITS (bit mask) */
#define CH1_SBITS_MASK 3
/* @CHXSTP (address) */
#define DMA_CH1_STP_ADDR $D730
/* @CHXSTP (address) */
#define CH1_STP_ADDR $D730
/* @CHXSTP (bit mask) */
#define DMA_CH1_STP_MASK 8
/* @CHXSTP (bit mask) */
#define CH1_STP_MASK 8
/* @CHXSINE (address) */
#define DMA_CH1_SINE_ADDR $D730
/* @CHXSINE (address) */
#define CH1_SINE_ADDR $D730
/* @CHXSINE (bit mask) */
#define DMA_CH1_SINE_MASK 16
/* @CHXSINE (bit mask) */
#define CH1_SINE_MASK 16
/* @CHXSGN (address) */
#define DMA_CH1_SGN_ADDR $D730
/* @CHXSGN (address) */
#define CH1_SGN_ADDR $D730
/* @CHXSGN (bit mask) */
#define DMA_CH1_SGN_MASK 32
/* @CHXSGN (bit mask) */
#define CH1_SGN_MASK 32
/* @CHXLOOP (address) */
#define DMA_CH1_LOOP_ADDR $D730
/* @CHXLOOP (address) */
#define CH1_LOOP_ADDR $D730
/* @CHXLOOP (bit mask) */
#define DMA_CH1_LOOP_MASK 64
/* @CHXLOOP (bit mask) */
#define CH1_LOOP_MASK 64
/* @CHXEN (address) */
#define DMA_CH1_EN_ADDR $D730
/* @CHXEN (address) */
#define CH1_EN_ADDR $D730
/* @CHXEN (bit mask) */
#define DMA_CH1_EN_MASK 128
/* @CHXEN (bit mask) */
#define CH1_EN_MASK 128
/* @CHXBADDRL */
#define DMA_CH1BADDRL $D731
/* @CHXBADDRL */
#define CH1BADDRL $D731
/* @CHXBADDRC */
#define DMA_CH1BADDRC $D732
/* @CHXBADDRC */
#define CH1BADDRC $D732
/* @CHXBADDRM */
#define DMA_CH1BADDRM $D733
/* @CHXBADDRM */
#define CH1BADDRM $D733
/* @CHXFREQL */
#define DMA_CH1FREQL $D734
/* @CHXFREQL */
#define CH1FREQL $D734
/* @CHXFREQC */
#define DMA_CH1FREQC $D735
/* @CHXFREQC */
#define CH1FREQC $D735
/* @CHXFREQM */
#define DMA_CH1FREQM $D736
/* @CHXFREQM */
#define CH1FREQM $D736
/* @CHXTADDRL */
#define DMA_CH1TADDRL $D737
/* @CHXTADDRL */
#define CH1TADDRL $D737
/* @CHXTADDRM */
#define DMA_CH1TADDRM $D738
/* @CHXTADDRM */
#define CH1TADDRM $D738
/* @CHXVOLUME */
#define DMA_CH1VOLUME $D739
/* @CHXVOLUME */
#define CH1VOLUME $D739
/* @CHXCURADDRL */
#define DMA_CH1CURADDRL $D73A
/* @CHXCURADDRL */
#define CH1CURADDRL $D73A
/* @CHXCURADDRC */
#define DMA_CH1CURADDRC $D73B
/* @CHXCURADDRC */
#define CH1CURADDRC $D73B
/* @CHXCURADDRM */
#define DMA_CH1CURADDRM $D73C
/* @CHXCURADDRM */
#define CH1CURADDRM $D73C
/* @CHXTMRADDRL */
#define DMA_CH1TMRADDRL $D73D
/* @CHXTMRADDRL */
#define CH1TMRADDRL $D73D
/* @CHXTMRADDRC */
#define DMA_CH1TMRADDRC $D73E
/* @CHXTMRADDRC */
#define CH1TMRADDRC $D73E
/* @CHXTMRADDRM */
#define DMA_CH1TMRADDRM $D73F
/* @CHXTMRADDRM */
#define CH1TMRADDRM $D73F
/* @CHXSBITS (address) */
#define DMA_CH2_SBITS_ADDR $D740
/* @CHXSBITS (address) */
#define CH2_SBITS_ADDR $D740
/* @CHXSBITS (bit mask) */
#define DMA_CH2_SBITS_MASK 3
/* @CHXSBITS (bit mask) */
#define CH2_SBITS_MASK 3
/* @CHXSTP (address) */
#define DMA_CH2_STP_ADDR $D740
/* @CHXSTP (address) */
#define CH2_STP_ADDR $D740
/* @CHXSTP (bit mask) */
#define DMA_CH2_STP_MASK 8
/* @CHXSTP (bit mask) */
#define CH2_STP_MASK 8
/* @CHXSINE (address) */
#define DMA_CH2_SINE_ADDR $D740
/* @CHXSINE (address) */
#define CH2_SINE_ADDR $D740
/* @CHXSINE (bit mask) */
#define DMA_CH2_SINE_MASK 16
/* @CHXSINE (bit mask) */
#define CH2_SINE_MASK 16
/* @CHXSGN (address) */
#define DMA_CH2_SGN_ADDR $D740
/* @CHXSGN (address) */
#define CH2_SGN_ADDR $D740
/* @CHXSGN (bit mask) */
#define DMA_CH2_SGN_MASK 32
/* @CHXSGN (bit mask) */
#define CH2_SGN_MASK 32
/* @CHXLOOP (address) */
#define DMA_CH2_LOOP_ADDR $D740
/* @CHXLOOP (address) */
#define CH2_LOOP_ADDR $D740
/* @CHXLOOP (bit mask) */
#define DMA_CH2_LOOP_MASK 64
/* @CHXLOOP (bit mask) */
#define CH2_LOOP_MASK 64
/* @CHXEN (address) */
#define DMA_CH2_EN_ADDR $D740
/* @CHXEN (address) */
#define CH2_EN_ADDR $D740
/* @CHXEN (bit mask) */
#define DMA_CH2_EN_MASK 128
/* @CHXEN (bit mask) */
#define CH2_EN_MASK 128
/* @CHXBADDRL */
#define DMA_CH2BADDRL $D741
/* @CHXBADDRL */
#define CH2BADDRL $D741
/* @CHXBADDRC */
#define DMA_CH2BADDRC $D742
/* @CHXBADDRC */
#define CH2BADDRC $D742
/* @CHXBADDRM */
#define DMA_CH2BADDRM $D743
/* @CHXBADDRM */
#define CH2BADDRM $D743
/* @CHXFREQL */
#define DMA_CH2FREQL $D744
/* @CHXFREQL */
#define CH2FREQL $D744
/* @CHXFREQC */
#define DMA_CH2FREQC $D745
/* @CHXFREQC */
#define CH2FREQC $D745
/* @CHXFREQM */
#define DMA_CH2FREQM $D746
/* @CHXFREQM */
#define CH2FREQM $D746
/* @CHXTADDRL */
#define DMA_CH2TADDRL $D747
/* @CHXTADDRL */
#define CH2TADDRL $D747
/* @CHXTADDRM */
#define DMA_CH2TADDRM $D748
/* @CHXTADDRM */
#define CH2TADDRM $D748
/* @CHXVOLUME */
#define DMA_CH2VOLUME $D749
/* @CHXVOLUME */
#define CH2VOLUME $D749
/* @CHXCURADDRL */
#define DMA_CH2CURADDRL $D74A
/* @CHXCURADDRL */
#define CH2CURADDRL $D74A
/* @CHXCURADDRC */
#define DMA_CH2CURADDRC $D74B
/* @CHXCURADDRC */
#define CH2CURADDRC $D74B
/* @CHXCURADDRM */
#define DMA_CH2CURADDRM $D74C
/* @CHXCURADDRM */
#define CH2CURADDRM $D74C
/* @CHXTMRADDRL */
#define DMA_CH2TMRADDRL $D74D
/* @CHXTMRADDRL */
#define CH2TMRADDRL $D74D
/* @CHXTMRADDRC */
#define DMA_CH2TMRADDRC $D74E
/* @CHXTMRADDRC */
#define CH2TMRADDRC $D74E
/* @CHXTMRADDRM */
#define DMA_CH2TMRADDRM $D74F
/* @CHXTMRADDRM */
#define CH2TMRADDRM $D74F
/* @CHXSBITS (address) */
#define DMA_CH3_SBITS_ADDR $D750
/* @CHXSBITS (address) */
#define CH3_SBITS_ADDR $D750
/* @CHXSBITS (bit mask) */
#define DMA_CH3_SBITS_MASK 3
/* @CHXSBITS (bit mask) */
#define CH3_SBITS_MASK 3
/* @CHXSTP (address) */
#define DMA_CH3_STP_ADDR $D750
/* @CHXSTP (address) */
#define CH3_STP_ADDR $D750
/* @CHXSTP (bit mask) */
#define DMA_CH3_STP_MASK 8
/* @CHXSTP (bit mask) */
#define CH3_STP_MASK 8
/* @CHXSINE (address) */
#define DMA_CH3_SINE_ADDR $D750
/* @CHXSINE (address) */
#define CH3_SINE_ADDR $D750
/* @CHXSINE (bit mask) */
#define DMA_CH3_SINE_MASK 16
/* @CHXSINE (bit mask) */
#define CH3_SINE_MASK 16
/* @CHXSGN (address) */
#define DMA_CH3_SGN_ADDR $D750
/* @CHXSGN (address) */
#define CH3_SGN_ADDR $D750
/* @CHXSGN (bit mask) */
#define DMA_CH3_SGN_MASK 32
/* @CHXSGN (bit mask) */
#define CH3_SGN_MASK 32
/* @CHXLOOP (address) */
#define DMA_CH3_LOOP_ADDR $D750
/* @CHXLOOP (address) */
#define CH3_LOOP_ADDR $D750
/* @CHXLOOP (bit mask) */
#define DMA_CH3_LOOP_MASK 64
/* @CHXLOOP (bit mask) */
#define CH3_LOOP_MASK 64
/* @CHXEN (address) */
#define DMA_CH3_EN_ADDR $D750
/* @CHXEN (address) */
#define CH3_EN_ADDR $D750
/* @CHXEN (bit mask) */
#define DMA_CH3_EN_MASK 128
/* @CHXEN (bit mask) */
#define CH3_EN_MASK 128
/* @CHXBADDRL */
#define DMA_CH3BADDRL $D751
/* @CHXBADDRL */
#define CH3BADDRL $D751
/* @CHXBADDRC */
#define DMA_CH3BADDRC $D752
/* @CHXBADDRC */
#define CH3BADDRC $D752
/* @CHXBADDRM */
#define DMA_CH3BADDRM $D753
/* @CHXBADDRM */
#define CH3BADDRM $D753
/* @CHXFREQL */
#define DMA_CH3FREQL $D754
/* @CHXFREQL */
#define CH3FREQL $D754
/* @CHXFREQC */
#define DMA_CH3FREQC $D755
/* @CHXFREQC */
#define CH3FREQC $D755
/* @CHXFREQM */
#define DMA_CH3FREQM $D756
/* @CHXFREQM */
#define CH3FREQM $D756
/* @CHXTADDRL */
#define DMA_CH3TADDRL $D757
/* @CHXTADDRL */
#define CH3TADDRL $D757
/* @CHXTADDRM */
#define DMA_CH3TADDRM $D758
/* @CHXTADDRM */
#define CH3TADDRM $D758
/* @CHXVOLUME */
#define DMA_CH3VOLUME $D759
/* @CHXVOLUME */
#define CH3VOLUME $D759
/* @CHXCURADDRL */
#define DMA_CH3CURADDRL $D75A
/* @CHXCURADDRL */
#define CH3CURADDRL $D75A
/* @CHXCURADDRC */
#define DMA_CH3CURADDRC $D75B
/* @CHXCURADDRC */
#define CH3CURADDRC $D75B
/* @CHXCURADDRM */
#define DMA_CH3CURADDRM $D75C
/* @CHXCURADDRM */
#define CH3CURADDRM $D75C
/* @CHXTMRADDRL */
#define DMA_CH3TMRADDRL $D75D
/* @CHXTMRADDRL */
#define CH3TMRADDRL $D75D
/* @CHXTMRADDRC */
#define DMA_CH3TMRADDRC $D75E
/* @CHXTMRADDRC */
#define CH3TMRADDRC $D75E
/* @CHXTMRADDRM */
#define DMA_CH3TMRADDRM $D75F
/* @CHXTMRADDRM */
#define CH3TMRADDRM $D75F
/* 64-bit output of MULTINA $\div$ MULTINB */
#define MATH_DIVOUT $D768
/* 64-bit output of MULTINA $\div$ MULTINB */
#define GS_MATH_DIVOUT $D769
/* 64-bit output of MULTINA $\div$ MULTINB */
#define GS_MATH_DIVOUT_2 $D76A
/* 64-bit output of MULTINA $\div$ MULTINB */
#define GS_MATH_DIVOUT_3 $D76B
/* 64-bit output of MULTINA $\div$ MULTINB */
#define GS_MATH_DIVOUT_4 $D76C
/* 64-bit output of MULTINA $\div$ MULTINB */
#define GS_MATH_DIVOUT_5 $D76D
/* 64-bit output of MULTINA $\div$ MULTINB */
#define GS_MATH_DIVOUT_6 $D76E
/* 64-bit output of MULTINA $\div$ MULTINB */
#define GS_MATH_DIVOUT_7 $D76F
/* Multiplier input A / Divider numerator (32 bit) */
#define MATH_MULTINA $D770
/* Multiplier input A / Divider numerator (32 bit) */
#define GS_MATH_MULTINA $D771
/* Multiplier input A / Divider numerator (32 bit) */
#define GS_MATH_MULTINA_2 $D772
/* Multiplier input A / Divider numerator (32 bit) */
#define GS_MATH_MULTINA_3 $D773
/* Multiplier input B / Divider denominator (32 bit) */
#define MATH_MULTINB $D774
/* Multiplier input B / Divider denominator (32 bit) */
#define GS_MATH_MULTINB $D775
/* Multiplier input B / Divider denominator (32 bit) */
#define GS_MATH_MULTINB_2 $D776
/* Multiplier input B / Divider denominator (32 bit) */
#define GS_MATH_MULTINB_3 $D777
/* 64-bit output of MULTINA $\times$ MULTINB */
#define MATH_MULTOUT $D778
/* 64-bit output of MULTINA $\times$ MULTINB */
#define GS_MATH_MULTOUT $D779
/* 64-bit output of MULTINA $\times$ MULTINB */
#define GS_MATH_MULTOUT_2 $D77A
/* 64-bit output of MULTINA $\times$ MULTINB */
#define GS_MATH_MULTOUT_3 $D77B
/* 64-bit output of MULTINA $\times$ MULTINB */
#define GS_MATH_MULTOUT_4 $D77C
/* 64-bit output of MULTINA $\times$ MULTINB */
#define GS_MATH_MULTOUT_5 $D77D
/* 64-bit output of MULTINA $\times$ MULTINB */
#define GS_MATH_MULTOUT_6 $D77E
/* 64-bit output of MULTINA $\times$ MULTINB */
#define GS_MATH_MULTOUT_7 $D77F
/* Math unit 32-bit input X */
#define MATH_MATHIN0 $D780
/* @MATHINX */
#define GS_MATH_MATHIN0 $D781
/* @MATHINX */
#define GS_MATH_MATHIN0_2 $D782
/* @MATHINX */
#define GS_MATH_MATHIN0_3 $D783
/* @MATHINX */
#define MATH_MATHIN1 $D784
/* @MATHINX */
#define GS_MATH_MATHIN1 $D785
/* @MATHINX */
#define GS_MATH_MATHIN1_2 $D786
/* @MATHINX */
#define GS_MATH_MATHIN1_3 $D787
/* @MATHINX */
#define MATH_MATHIN2 $D788
/* @MATHINX */
#define GS_MATH_MATHIN2 $D789
/* @MATHINX */
#define GS_MATH_MATHIN2_2 $D78A
/* @MATHINX */
#define GS_MATH_MATHIN2_3 $D78B
/* @MATHINX */
#define MATH_MATHIN3 $D78C
/* @MATHINX */
#define GS_MATH_MATHIN3 $D78D
/* @MATHINX */
#define GS_MATH_MATHIN3_2 $D78E
/* @MATHINX */
#define GS_MATH_MATHIN3_3 $D78F
/* @MATHINX */
#define MATH_MATHIN4 $D790
/* @MATHINX */
#define GS_MATH_MATHIN4 $D791
/* @MATHINX */
#define GS_MATH_MATHIN4_2 $D792
/* @MATHINX */
#define GS_MATH_MATHIN4_3 $D793
/* @MATHINX */
#define MATH_MATHIN5 $D794
/* @MATHINX */
#define GS_MATH_MATHIN5 $D795
/* @MATHINX */
#define GS_MATH_MATHIN5_2 $D796
/* @MATHINX */
#define GS_MATH_MATHIN5_3 $D797
/* @MATHINX */
#define MATH_MATHIN6 $D798
/* @MATHINX */
#define GS_MATH_MATHIN6 $D799
/* @MATHINX */
#define GS_MATH_MATHIN6_2 $D79A
/* @MATHINX */
#define GS_MATH_MATHIN6_3 $D79B
/* @MATHINX */
#define MATH_MATHIN7 $D79C
/* @MATHINX */
#define GS_MATH_MATHIN7 $D79D
/* @MATHINX */
#define GS_MATH_MATHIN7_2 $D79E
/* @MATHINX */
#define GS_MATH_MATHIN7_3 $D79F
/* @MATHINX */
#define MATH_MATHIN8 $D7A0
/* @MATHINX */
#define GS_MATH_MATHIN8 $D7A1
/* @MATHINX */
#define GS_MATH_MATHIN8_2 $D7A2
/* @MATHINX */
#define GS_MATH_MATHIN8_3 $D7A3
/* @MATHINX */
#define MATH_MATHIN9 $D7A4
/* @MATHINX */
#define GS_MATH_MATHIN9 $D7A5
/* @MATHINX */
#define GS_MATH_MATHIN9_2 $D7A6
/* @MATHINX */
#define GS_MATH_MATHIN9_3 $D7A7
/* @MATHINX */
#define MATH_MATHINA $D7A8
/* @MATHINX */
#define GS_MATH_MATHINA $D7A9
/* @MATHINX */
#define GS_MATH_MATHINA_2 $D7AA
/* @MATHINX */
#define GS_MATH_MATHINA_3 $D7AB
/* @MATHINX */
#define MATH_MATHINB $D7AC
/* @MATHINX */
#define GS_MATH_MATHINB $D7AD
/* @MATHINX */
#define GS_MATH_MATHINB_2 $D7AE
/* @MATHINX */
#define GS_MATH_MATHINB_3 $D7AF
/* @MATHINX */
#define MATH_MATHINC $D7B0
/* @MATHINX */
#define GS_MATH_MATHINC $D7B1
/* @MATHINX */
#define GS_MATH_MATHINC_2 $D7B2
/* @MATHINX */
#define GS_MATH_MATHINC_3 $D7B3
/* @MATHINX */
#define MATH_MATHIND $D7B4
/* @MATHINX */
#define GS_MATH_MATHIND $D7B5
/* @MATHINX */
#define GS_MATH_MATHIND_2 $D7B6
/* @MATHINX */
#define GS_MATH_MATHIND_3 $D7B7
/* @MATHINX */
#define MATH_MATHINE $D7B8
/* @MATHINX */
#define GS_MATH_MATHINE $D7B9
/* @MATHINX */
#define GS_MATH_MATHINE_2 $D7BA
/* @MATHINX */
#define GS_MATH_MATHINE_3 $D7BB
/* @MATHINX */
#define MATH_MATHINF $D7BC
/* @MATHINX */
#define GS_MATH_MATHINF $D7BD
/* @MATHINX */
#define GS_MATH_MATHINF_2 $D7BE
/* @MATHINX */
#define GS_MATH_MATHINF_3 $D7BF
/* Select which of the 16 32-bit math registers is input A for Math Function Unit X. (address) */
#define MATH_UNIT0INA_ADDR $D7C0
/* Select which of the 16 32-bit math registers is input A for Math Function Unit X. (address) */
#define UNIT0INA_ADDR $D7C0
/* Select which of the 16 32-bit math registers is input A for Math Function Unit X. (bit mask) */
#define MATH_UNIT0INA_MASK 15
/* Select which of the 16 32-bit math registers is input A for Math Function Unit X. (bit mask) */
#define UNIT0INA_MASK 15
/* Select which of the 16 32-bit math registers is input B for Math Function Unit X. (address) */
#define MATH_UNIT0INB_ADDR $D7C0
/* Select which of the 16 32-bit math registers is input B for Math Function Unit X. (address) */
#define UNIT0INB_ADDR $D7C0
/* Select which of the 16 32-bit math registers is input B for Math Function Unit X. (bit mask) */
#define MATH_UNIT0INB_MASK 240
/* Select which of the 16 32-bit math registers is input B for Math Function Unit X. (bit mask) */
#define UNIT0INB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNIT1INA_ADDR $D7C1
/* @UNITXINA (address) */
#define UNIT1INA_ADDR $D7C1
/* @UNITXINA (bit mask) */
#define MATH_UNIT1INA_MASK 15
/* @UNITXINA (bit mask) */
#define UNIT1INA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNIT1INB_ADDR $D7C1
/* @UNITXINB (address) */
#define UNIT1INB_ADDR $D7C1
/* @UNITXINB (bit mask) */
#define MATH_UNIT1INB_MASK 240
/* @UNITXINB (bit mask) */
#define UNIT1INB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNIT2INA_ADDR $D7C2
/* @UNITXINA (address) */
#define UNIT2INA_ADDR $D7C2
/* @UNITXINA (bit mask) */
#define MATH_UNIT2INA_MASK 15
/* @UNITXINA (bit mask) */
#define UNIT2INA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNIT2INB_ADDR $D7C2
/* @UNITXINB (address) */
#define UNIT2INB_ADDR $D7C2
/* @UNITXINB (bit mask) */
#define MATH_UNIT2INB_MASK 240
/* @UNITXINB (bit mask) */
#define UNIT2INB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNIT3INA_ADDR $D7C3
/* @UNITXINA (address) */
#define UNIT3INA_ADDR $D7C3
/* @UNITXINA (bit mask) */
#define MATH_UNIT3INA_MASK 15
/* @UNITXINA (bit mask) */
#define UNIT3INA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNIT3INB_ADDR $D7C3
/* @UNITXINB (address) */
#define UNIT3INB_ADDR $D7C3
/* @UNITXINB (bit mask) */
#define MATH_UNIT3INB_MASK 240
/* @UNITXINB (bit mask) */
#define UNIT3INB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNIT4INA_ADDR $D7C4
/* @UNITXINA (address) */
#define UNIT4INA_ADDR $D7C4
/* @UNITXINA (bit mask) */
#define MATH_UNIT4INA_MASK 15
/* @UNITXINA (bit mask) */
#define UNIT4INA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNIT4INB_ADDR $D7C4
/* @UNITXINB (address) */
#define UNIT4INB_ADDR $D7C4
/* @UNITXINB (bit mask) */
#define MATH_UNIT4INB_MASK 240
/* @UNITXINB (bit mask) */
#define UNIT4INB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNIT5INA_ADDR $D7C5
/* @UNITXINA (address) */
#define UNIT5INA_ADDR $D7C5
/* @UNITXINA (bit mask) */
#define MATH_UNIT5INA_MASK 15
/* @UNITXINA (bit mask) */
#define UNIT5INA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNIT5INB_ADDR $D7C5
/* @UNITXINB (address) */
#define UNIT5INB_ADDR $D7C5
/* @UNITXINB (bit mask) */
#define MATH_UNIT5INB_MASK 240
/* @UNITXINB (bit mask) */
#define UNIT5INB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNIT6INA_ADDR $D7C6
/* @UNITXINA (address) */
#define UNIT6INA_ADDR $D7C6
/* @UNITXINA (bit mask) */
#define MATH_UNIT6INA_MASK 15
/* @UNITXINA (bit mask) */
#define UNIT6INA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNIT6INB_ADDR $D7C6
/* @UNITXINB (address) */
#define UNIT6INB_ADDR $D7C6
/* @UNITXINB (bit mask) */
#define MATH_UNIT6INB_MASK 240
/* @UNITXINB (bit mask) */
#define UNIT6INB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNIT7INA_ADDR $D7C7
/* @UNITXINA (address) */
#define UNIT7INA_ADDR $D7C7
/* @UNITXINA (bit mask) */
#define MATH_UNIT7INA_MASK 15
/* @UNITXINA (bit mask) */
#define UNIT7INA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNIT7INB_ADDR $D7C7
/* @UNITXINB (address) */
#define UNIT7INB_ADDR $D7C7
/* @UNITXINB (bit mask) */
#define MATH_UNIT7INB_MASK 240
/* @UNITXINB (bit mask) */
#define UNIT7INB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNIT8INA_ADDR $D7C8
/* @UNITXINA (address) */
#define UNIT8INA_ADDR $D7C8
/* @UNITXINA (bit mask) */
#define MATH_UNIT8INA_MASK 15
/* @UNITXINA (bit mask) */
#define UNIT8INA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNIT8INB_ADDR $D7C8
/* @UNITXINB (address) */
#define UNIT8INB_ADDR $D7C8
/* @UNITXINB (bit mask) */
#define MATH_UNIT8INB_MASK 240
/* @UNITXINB (bit mask) */
#define UNIT8INB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNIT9INA_ADDR $D7C9
/* @UNITXINA (address) */
#define UNIT9INA_ADDR $D7C9
/* @UNITXINA (bit mask) */
#define MATH_UNIT9INA_MASK 15
/* @UNITXINA (bit mask) */
#define UNIT9INA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNIT9INB_ADDR $D7C9
/* @UNITXINB (address) */
#define UNIT9INB_ADDR $D7C9
/* @UNITXINB (bit mask) */
#define MATH_UNIT9INB_MASK 240
/* @UNITXINB (bit mask) */
#define UNIT9INB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNITAINA_ADDR $D7CA
/* @UNITXINA (address) */
#define UNITAINA_ADDR $D7CA
/* @UNITXINA (bit mask) */
#define MATH_UNITAINA_MASK 15
/* @UNITXINA (bit mask) */
#define UNITAINA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNITAINB_ADDR $D7CA
/* @UNITXINB (address) */
#define UNITAINB_ADDR $D7CA
/* @UNITXINB (bit mask) */
#define MATH_UNITAINB_MASK 240
/* @UNITXINB (bit mask) */
#define UNITAINB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNITBINA_ADDR $D7CB
/* @UNITXINA (address) */
#define UNITBINA_ADDR $D7CB
/* @UNITXINA (bit mask) */
#define MATH_UNITBINA_MASK 15
/* @UNITXINA (bit mask) */
#define UNITBINA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNITBINB_ADDR $D7CB
/* @UNITXINB (address) */
#define UNITBINB_ADDR $D7CB
/* @UNITXINB (bit mask) */
#define MATH_UNITBINB_MASK 240
/* @UNITXINB (bit mask) */
#define UNITBINB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNITCINA_ADDR $D7CC
/* @UNITXINA (address) */
#define UNITCINA_ADDR $D7CC
/* @UNITXINA (bit mask) */
#define MATH_UNITCINA_MASK 15
/* @UNITXINA (bit mask) */
#define UNITCINA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNITCINB_ADDR $D7CC
/* @UNITXINB (address) */
#define UNITCINB_ADDR $D7CC
/* @UNITXINB (bit mask) */
#define MATH_UNITCINB_MASK 240
/* @UNITXINB (bit mask) */
#define UNITCINB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNITDINA_ADDR $D7CD
/* @UNITXINA (address) */
#define UNITDINA_ADDR $D7CD
/* @UNITXINA (bit mask) */
#define MATH_UNITDINA_MASK 15
/* @UNITXINA (bit mask) */
#define UNITDINA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNITDINB_ADDR $D7CD
/* @UNITXINB (address) */
#define UNITDINB_ADDR $D7CD
/* @UNITXINB (bit mask) */
#define MATH_UNITDINB_MASK 240
/* @UNITXINB (bit mask) */
#define UNITDINB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNITEINA_ADDR $D7CE
/* @UNITXINA (address) */
#define UNITEINA_ADDR $D7CE
/* @UNITXINA (bit mask) */
#define MATH_UNITEINA_MASK 15
/* @UNITXINA (bit mask) */
#define UNITEINA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNITEINB_ADDR $D7CE
/* @UNITXINB (address) */
#define UNITEINB_ADDR $D7CE
/* @UNITXINB (bit mask) */
#define MATH_UNITEINB_MASK 240
/* @UNITXINB (bit mask) */
#define UNITEINB_MASK 240
/* @UNITXINA (address) */
#define MATH_UNITFINA_ADDR $D7CF
/* @UNITXINA (address) */
#define UNITFINA_ADDR $D7CF
/* @UNITXINA (bit mask) */
#define MATH_UNITFINA_MASK 15
/* @UNITXINA (bit mask) */
#define UNITFINA_MASK 15
/* @UNITXINB (address) */
#define MATH_UNITFINB_ADDR $D7CF
/* @UNITXINB (address) */
#define UNITFINB_ADDR $D7CF
/* @UNITXINB (bit mask) */
#define MATH_UNITFINB_MASK 240
/* @UNITXINB (bit mask) */
#define UNITFINB_MASK 240
/* Select which of the 16 32-bit math registers receives the output of Math Function Unit X (address) */
#define MATH_UNIT0OUT_ADDR $D7D0
/* Select which of the 16 32-bit math registers receives the output of Math Function Unit X (address) */
#define UNIT0OUT_ADDR $D7D0
/* Select which of the 16 32-bit math registers receives the output of Math Function Unit X (bit mask) */
#define MATH_UNIT0OUT_MASK 15
/* Select which of the 16 32-bit math registers receives the output of Math Function Unit X (bit mask) */
#define UNIT0OUT_MASK 15
/* If set, the low-half of the output of Math Function Unit X is written to math register UNITXOUT. (address) */
#define MATH_U0_LOWOUT_ADDR $D7D0
/* If set, the low-half of the output of Math Function Unit X is written to math register UNITXOUT. (address) */
#define U0_LOWOUT_ADDR $D7D0
/* If set, the low-half of the output of Math Function Unit X is written to math register UNITXOUT. (bit mask) */
#define MATH_U0_LOWOUT_MASK 16
/* If set, the low-half of the output of Math Function Unit X is written to math register UNITXOUT. (bit mask) */
#define U0_LOWOUT_MASK 16
/* If set, the high-half of the output of Math Function Unit X is written to math register UNITXOUT. (address) */
#define MATH_U0_HIOUT_ADDR $D7D0
/* If set, the high-half of the output of Math Function Unit X is written to math register UNITXOUT. (address) */
#define U0_HIOUT_ADDR $D7D0
/* If set, the high-half of the output of Math Function Unit X is written to math register UNITXOUT. (bit mask) */
#define MATH_U0_HIOUT_MASK 32
/* If set, the high-half of the output of Math Function Unit X is written to math register UNITXOUT. (bit mask) */
#define U0_HIOUT_MASK 32
/* If set, Math Function Unit X acts as a 32-bit adder instead of 32-bit multiplier. (address) */
#define MATH_U0_MLADD_ADDR $D7D0
/* If set, Math Function Unit X acts as a 32-bit adder instead of 32-bit multiplier. (address) */
#define U0_MLADD_ADDR $D7D0
/* If set, Math Function Unit X acts as a 32-bit adder instead of 32-bit multiplier. (bit mask) */
#define MATH_U0_MLADD_MASK 64
/* If set, Math Function Unit X acts as a 32-bit adder instead of 32-bit multiplier. (bit mask) */
#define U0_MLADD_MASK 64
/* If set, Math Function Unit X's output is latched. (address) */
#define MATH_U0_LATCH_ADDR $D7D0
/* If set, Math Function Unit X's output is latched. (address) */
#define U0_LATCH_ADDR $D7D0
/* If set, Math Function Unit X's output is latched. (bit mask) */
#define MATH_U0_LATCH_MASK 128
/* If set, Math Function Unit X's output is latched. (bit mask) */
#define U0_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNIT1OUT_ADDR $D7D1
/* @UNITXOUT (address) */
#define UNIT1OUT_ADDR $D7D1
/* @UNITXOUT (bit mask) */
#define MATH_UNIT1OUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNIT1OUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_U1_LOWOUT_ADDR $D7D1
/* @UXLOWOUT (address) */
#define U1_LOWOUT_ADDR $D7D1
/* @UXLOWOUT (bit mask) */
#define MATH_U1_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define U1_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_U1_HIOUT_ADDR $D7D1
/* @UXHIOUT (address) */
#define U1_HIOUT_ADDR $D7D1
/* @UXHIOUT (bit mask) */
#define MATH_U1_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define U1_HIOUT_MASK 32
/* @UXMLADD (address) */
#define MATH_U1_MLADD_ADDR $D7D1
/* @UXMLADD (address) */
#define U1_MLADD_ADDR $D7D1
/* @UXMLADD (bit mask) */
#define MATH_U1_MLADD_MASK 64
/* @UXMLADD (bit mask) */
#define U1_MLADD_MASK 64
/* @UXLATCH (address) */
#define MATH_U1_LATCH_ADDR $D7D1
/* @UXLATCH (address) */
#define U1_LATCH_ADDR $D7D1
/* @UXLATCH (bit mask) */
#define MATH_U1_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define U1_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNIT2OUT_ADDR $D7D2
/* @UNITXOUT (address) */
#define UNIT2OUT_ADDR $D7D2
/* @UNITXOUT (bit mask) */
#define MATH_UNIT2OUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNIT2OUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_U2_LOWOUT_ADDR $D7D2
/* @UXLOWOUT (address) */
#define U2_LOWOUT_ADDR $D7D2
/* @UXLOWOUT (bit mask) */
#define MATH_U2_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define U2_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_U2_HIOUT_ADDR $D7D2
/* @UXHIOUT (address) */
#define U2_HIOUT_ADDR $D7D2
/* @UXHIOUT (bit mask) */
#define MATH_U2_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define U2_HIOUT_MASK 32
/* @UXMLADD (address) */
#define MATH_U2_MLADD_ADDR $D7D2
/* @UXMLADD (address) */
#define U2_MLADD_ADDR $D7D2
/* @UXMLADD (bit mask) */
#define MATH_U2_MLADD_MASK 64
/* @UXMLADD (bit mask) */
#define U2_MLADD_MASK 64
/* @UXLATCH (address) */
#define MATH_U2_LATCH_ADDR $D7D2
/* @UXLATCH (address) */
#define U2_LATCH_ADDR $D7D2
/* @UXLATCH (bit mask) */
#define MATH_U2_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define U2_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNIT3OUT_ADDR $D7D3
/* @UNITXOUT (address) */
#define UNIT3OUT_ADDR $D7D3
/* @UNITXOUT (bit mask) */
#define MATH_UNIT3OUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNIT3OUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_U3_LOWOUT_ADDR $D7D3
/* @UXLOWOUT (address) */
#define U3_LOWOUT_ADDR $D7D3
/* @UXLOWOUT (bit mask) */
#define MATH_U3_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define U3_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_U3_HIOUT_ADDR $D7D3
/* @UXHIOUT (address) */
#define U3_HIOUT_ADDR $D7D3
/* @UXHIOUT (bit mask) */
#define MATH_U3_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define U3_HIOUT_MASK 32
/* @UXMLADD (address) */
#define MATH_U3_MLADD_ADDR $D7D3
/* @UXMLADD (address) */
#define U3_MLADD_ADDR $D7D3
/* @UXMLADD (bit mask) */
#define MATH_U3_MLADD_MASK 64
/* @UXMLADD (bit mask) */
#define U3_MLADD_MASK 64
/* @UXLATCH (address) */
#define MATH_U3_LATCH_ADDR $D7D3
/* @UXLATCH (address) */
#define U3_LATCH_ADDR $D7D3
/* @UXLATCH (bit mask) */
#define MATH_U3_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define U3_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNIT4OUT_ADDR $D7D4
/* @UNITXOUT (address) */
#define UNIT4OUT_ADDR $D7D4
/* @UNITXOUT (bit mask) */
#define MATH_UNIT4OUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNIT4OUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_U4_LOWOUT_ADDR $D7D4
/* @UXLOWOUT (address) */
#define U4_LOWOUT_ADDR $D7D4
/* @UXLOWOUT (bit mask) */
#define MATH_U4_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define U4_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_U4_HIOUT_ADDR $D7D4
/* @UXHIOUT (address) */
#define U4_HIOUT_ADDR $D7D4
/* @UXHIOUT (bit mask) */
#define MATH_U4_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define U4_HIOUT_MASK 32
/* @UXMLADD (address) */
#define MATH_U4_MLADD_ADDR $D7D4
/* @UXMLADD (address) */
#define U4_MLADD_ADDR $D7D4
/* @UXMLADD (bit mask) */
#define MATH_U4_MLADD_MASK 64
/* @UXMLADD (bit mask) */
#define U4_MLADD_MASK 64
/* @UXLATCH (address) */
#define MATH_U4_LATCH_ADDR $D7D4
/* @UXLATCH (address) */
#define U4_LATCH_ADDR $D7D4
/* @UXLATCH (bit mask) */
#define MATH_U4_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define U4_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNIT5OUT_ADDR $D7D5
/* @UNITXOUT (address) */
#define UNIT5OUT_ADDR $D7D5
/* @UNITXOUT (bit mask) */
#define MATH_UNIT5OUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNIT5OUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_U5_LOWOUT_ADDR $D7D5
/* @UXLOWOUT (address) */
#define U5_LOWOUT_ADDR $D7D5
/* @UXLOWOUT (bit mask) */
#define MATH_U5_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define U5_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_U5_HIOUT_ADDR $D7D5
/* @UXHIOUT (address) */
#define U5_HIOUT_ADDR $D7D5
/* @UXHIOUT (bit mask) */
#define MATH_U5_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define U5_HIOUT_MASK 32
/* @UXMLADD (address) */
#define MATH_U5_MLADD_ADDR $D7D5
/* @UXMLADD (address) */
#define U5_MLADD_ADDR $D7D5
/* @UXMLADD (bit mask) */
#define MATH_U5_MLADD_MASK 64
/* @UXMLADD (bit mask) */
#define U5_MLADD_MASK 64
/* @UXLATCH (address) */
#define MATH_U5_LATCH_ADDR $D7D5
/* @UXLATCH (address) */
#define U5_LATCH_ADDR $D7D5
/* @UXLATCH (bit mask) */
#define MATH_U5_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define U5_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNIT6OUT_ADDR $D7D6
/* @UNITXOUT (address) */
#define UNIT6OUT_ADDR $D7D6
/* @UNITXOUT (bit mask) */
#define MATH_UNIT6OUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNIT6OUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_U6_LOWOUT_ADDR $D7D6
/* @UXLOWOUT (address) */
#define U6_LOWOUT_ADDR $D7D6
/* @UXLOWOUT (bit mask) */
#define MATH_U6_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define U6_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_U6_HIOUT_ADDR $D7D6
/* @UXHIOUT (address) */
#define U6_HIOUT_ADDR $D7D6
/* @UXHIOUT (bit mask) */
#define MATH_U6_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define U6_HIOUT_MASK 32
/* @UXMLADD (address) */
#define MATH_U6_MLADD_ADDR $D7D6
/* @UXMLADD (address) */
#define U6_MLADD_ADDR $D7D6
/* @UXMLADD (bit mask) */
#define MATH_U6_MLADD_MASK 64
/* @UXMLADD (bit mask) */
#define U6_MLADD_MASK 64
/* @UXLATCH (address) */
#define MATH_U6_LATCH_ADDR $D7D6
/* @UXLATCH (address) */
#define U6_LATCH_ADDR $D7D6
/* @UXLATCH (bit mask) */
#define MATH_U6_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define U6_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNIT7OUT_ADDR $D7D7
/* @UNITXOUT (address) */
#define UNIT7OUT_ADDR $D7D7
/* @UNITXOUT (bit mask) */
#define MATH_UNIT7OUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNIT7OUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_U7_LOWOUT_ADDR $D7D7
/* @UXLOWOUT (address) */
#define U7_LOWOUT_ADDR $D7D7
/* @UXLOWOUT (bit mask) */
#define MATH_U7_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define U7_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_U7_HIOUT_ADDR $D7D7
/* @UXHIOUT (address) */
#define U7_HIOUT_ADDR $D7D7
/* @UXHIOUT (bit mask) */
#define MATH_U7_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define U7_HIOUT_MASK 32
/* @UXMLADD (address) */
#define MATH_U7_MLADD_ADDR $D7D7
/* @UXMLADD (address) */
#define U7_MLADD_ADDR $D7D7
/* @UXMLADD (bit mask) */
#define MATH_U7_MLADD_MASK 64
/* @UXMLADD (bit mask) */
#define U7_MLADD_MASK 64
/* @UXLATCH (address) */
#define MATH_U7_LATCH_ADDR $D7D7
/* @UXLATCH (address) */
#define U7_LATCH_ADDR $D7D7
/* @UXLATCH (bit mask) */
#define MATH_U7_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define U7_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNIT8OUT_ADDR $D7D8
/* @UNITXOUT (address) */
#define UNIT8OUT_ADDR $D7D8
/* @UNITXOUT (bit mask) */
#define MATH_UNIT8OUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNIT8OUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_U8_LOWOUT_ADDR $D7D8
/* @UXLOWOUT (address) */
#define U8_LOWOUT_ADDR $D7D8
/* @UXLOWOUT (bit mask) */
#define MATH_U8_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define U8_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_U8_HIOUT_ADDR $D7D8
/* @UXHIOUT (address) */
#define U8_HIOUT_ADDR $D7D8
/* @UXHIOUT (bit mask) */
#define MATH_U8_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define U8_HIOUT_MASK 32
/* If set, Math Function Unit Y acts as a 32-bit adder instead of 32-bit barrel-shifter. (address) */
#define MATH_U8_BSADD_ADDR $D7D8
/* If set, Math Function Unit Y acts as a 32-bit adder instead of 32-bit barrel-shifter. (address) */
#define U8_BSADD_ADDR $D7D8
/* If set, Math Function Unit Y acts as a 32-bit adder instead of 32-bit barrel-shifter. (bit mask) */
#define MATH_U8_BSADD_MASK 64
/* If set, Math Function Unit Y acts as a 32-bit adder instead of 32-bit barrel-shifter. (bit mask) */
#define U8_BSADD_MASK 64
/* @UXLATCH (address) */
#define MATH_U8_LATCH_ADDR $D7D8
/* @UXLATCH (address) */
#define U8_LATCH_ADDR $D7D8
/* @UXLATCH (bit mask) */
#define MATH_U8_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define U8_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNIT9OUT_ADDR $D7D9
/* @UNITXOUT (address) */
#define UNIT9OUT_ADDR $D7D9
/* @UNITXOUT (bit mask) */
#define MATH_UNIT9OUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNIT9OUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_U9_LOWOUT_ADDR $D7D9
/* @UXLOWOUT (address) */
#define U9_LOWOUT_ADDR $D7D9
/* @UXLOWOUT (bit mask) */
#define MATH_U9_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define U9_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_U9_HIOUT_ADDR $D7D9
/* @UXHIOUT (address) */
#define U9_HIOUT_ADDR $D7D9
/* @UXHIOUT (bit mask) */
#define MATH_U9_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define U9_HIOUT_MASK 32
/* @UXBSADD (address) */
#define MATH_U9_BSADD_ADDR $D7D9
/* @UXBSADD (address) */
#define U9_BSADD_ADDR $D7D9
/* @UXBSADD (bit mask) */
#define MATH_U9_BSADD_MASK 64
/* @UXBSADD (bit mask) */
#define U9_BSADD_MASK 64
/* @UXLATCH (address) */
#define MATH_U9_LATCH_ADDR $D7D9
/* @UXLATCH (address) */
#define U9_LATCH_ADDR $D7D9
/* @UXLATCH (bit mask) */
#define MATH_U9_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define U9_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNITAOUT_ADDR $D7DA
/* @UNITXOUT (address) */
#define UNITAOUT_ADDR $D7DA
/* @UNITXOUT (bit mask) */
#define MATH_UNITAOUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNITAOUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_UA_LOWOUT_ADDR $D7DA
/* @UXLOWOUT (address) */
#define UA_LOWOUT_ADDR $D7DA
/* @UXLOWOUT (bit mask) */
#define MATH_UA_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define UA_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_UA_HIOUT_ADDR $D7DA
/* @UXHIOUT (address) */
#define UA_HIOUT_ADDR $D7DA
/* @UXHIOUT (bit mask) */
#define MATH_UA_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define UA_HIOUT_MASK 32
/* @UXBSADD (address) */
#define MATH_UA_BSADD_ADDR $D7DA
/* @UXBSADD (address) */
#define UA_BSADD_ADDR $D7DA
/* @UXBSADD (bit mask) */
#define MATH_UA_BSADD_MASK 64
/* @UXBSADD (bit mask) */
#define UA_BSADD_MASK 64
/* @UXLATCH (address) */
#define MATH_UA_LATCH_ADDR $D7DA
/* @UXLATCH (address) */
#define UA_LATCH_ADDR $D7DA
/* @UXLATCH (bit mask) */
#define MATH_UA_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define UA_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNITBOUT_ADDR $D7DB
/* @UNITXOUT (address) */
#define UNITBOUT_ADDR $D7DB
/* @UNITXOUT (bit mask) */
#define MATH_UNITBOUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNITBOUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_UB_LOWOUT_ADDR $D7DB
/* @UXLOWOUT (address) */
#define UB_LOWOUT_ADDR $D7DB
/* @UXLOWOUT (bit mask) */
#define MATH_UB_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define UB_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_UB_HIOUT_ADDR $D7DB
/* @UXHIOUT (address) */
#define UB_HIOUT_ADDR $D7DB
/* @UXHIOUT (bit mask) */
#define MATH_UB_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define UB_HIOUT_MASK 32
/* @UXBSADD (address) */
#define MATH_UB_BSADD_ADDR $D7DB
/* @UXBSADD (address) */
#define UB_BSADD_ADDR $D7DB
/* @UXBSADD (bit mask) */
#define MATH_UB_BSADD_MASK 64
/* @UXBSADD (bit mask) */
#define UB_BSADD_MASK 64
/* @UXLATCH (address) */
#define MATH_UB_LATCH_ADDR $D7DB
/* @UXLATCH (address) */
#define UB_LATCH_ADDR $D7DB
/* @UXLATCH (bit mask) */
#define MATH_UB_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define UB_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNITCOUT_ADDR $D7DC
/* @UNITXOUT (address) */
#define UNITCOUT_ADDR $D7DC
/* @UNITXOUT (bit mask) */
#define MATH_UNITCOUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNITCOUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_UC_LOWOUT_ADDR $D7DC
/* @UXLOWOUT (address) */
#define UC_LOWOUT_ADDR $D7DC
/* @UXLOWOUT (bit mask) */
#define MATH_UC_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define UC_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_UC_HIOUT_ADDR $D7DC
/* @UXHIOUT (address) */
#define UC_HIOUT_ADDR $D7DC
/* @UXHIOUT (bit mask) */
#define MATH_UC_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define UC_HIOUT_MASK 32
/* If set, Math Function Unit X acts as a 32-bit adder instead of 32-bit divider. (address) */
#define MATH_UC_DVADD_ADDR $D7DC
/* If set, Math Function Unit X acts as a 32-bit adder instead of 32-bit divider. (address) */
#define UC_DVADD_ADDR $D7DC
/* If set, Math Function Unit X acts as a 32-bit adder instead of 32-bit divider. (bit mask) */
#define MATH_UC_DVADD_MASK 64
/* If set, Math Function Unit X acts as a 32-bit adder instead of 32-bit divider. (bit mask) */
#define UC_DVADD_MASK 64
/* @UXLATCH (address) */
#define MATH_UC_LATCH_ADDR $D7DC
/* @UXLATCH (address) */
#define UC_LATCH_ADDR $D7DC
/* @UXLATCH (bit mask) */
#define MATH_UC_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define UC_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNITDOUT_ADDR $D7DD
/* @UNITXOUT (address) */
#define UNITDOUT_ADDR $D7DD
/* @UNITXOUT (bit mask) */
#define MATH_UNITDOUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNITDOUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_UD_LOWOUT_ADDR $D7DD
/* @UXLOWOUT (address) */
#define UD_LOWOUT_ADDR $D7DD
/* @UXLOWOUT (bit mask) */
#define MATH_UD_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define UD_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_UD_HIOUT_ADDR $D7DD
/* @UXHIOUT (address) */
#define UD_HIOUT_ADDR $D7DD
/* @UXHIOUT (bit mask) */
#define MATH_UD_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define UD_HIOUT_MASK 32
/*  (address) */
#define MATH_UD_DVADD_ADDR $D7DD
/*  (address) */
#define UD_DVADD_ADDR $D7DD
/*  (bit mask) */
#define MATH_UD_DVADD_MASK 64
/*  (bit mask) */
#define UD_DVADD_MASK 64
/* @UXLATCH (address) */
#define MATH_UD_LATCH_ADDR $D7DD
/* @UXLATCH (address) */
#define UD_LATCH_ADDR $D7DD
/* @UXLATCH (bit mask) */
#define MATH_UD_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define UD_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNITEOUT_ADDR $D7DE
/* @UNITXOUT (address) */
#define UNITEOUT_ADDR $D7DE
/* @UNITXOUT (bit mask) */
#define MATH_UNITEOUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNITEOUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_UE_LOWOUT_ADDR $D7DE
/* @UXLOWOUT (address) */
#define UE_LOWOUT_ADDR $D7DE
/* @UXLOWOUT (bit mask) */
#define MATH_UE_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define UE_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_UE_HIOUT_ADDR $D7DE
/* @UXHIOUT (address) */
#define UE_HIOUT_ADDR $D7DE
/* @UXHIOUT (bit mask) */
#define MATH_UE_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define UE_HIOUT_MASK 32
/*  (address) */
#define MATH_UE_DVADD_ADDR $D7DE
/*  (address) */
#define UE_DVADD_ADDR $D7DE
/*  (bit mask) */
#define MATH_UE_DVADD_MASK 64
/*  (bit mask) */
#define UE_DVADD_MASK 64
/* @UXLATCH (address) */
#define MATH_UE_LATCH_ADDR $D7DE
/* @UXLATCH (address) */
#define UE_LATCH_ADDR $D7DE
/* @UXLATCH (bit mask) */
#define MATH_UE_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define UE_LATCH_MASK 128
/* @UNITXOUT (address) */
#define MATH_UNITFOUT_ADDR $D7DF
/* @UNITXOUT (address) */
#define UNITFOUT_ADDR $D7DF
/* @UNITXOUT (bit mask) */
#define MATH_UNITFOUT_MASK 15
/* @UNITXOUT (bit mask) */
#define UNITFOUT_MASK 15
/* @UXLOWOUT (address) */
#define MATH_UF_LOWOUT_ADDR $D7DF
/* @UXLOWOUT (address) */
#define UF_LOWOUT_ADDR $D7DF
/* @UXLOWOUT (bit mask) */
#define MATH_UF_LOWOUT_MASK 16
/* @UXLOWOUT (bit mask) */
#define UF_LOWOUT_MASK 16
/* @UXHIOUT (address) */
#define MATH_UF_HIOUT_ADDR $D7DF
/* @UXHIOUT (address) */
#define UF_HIOUT_ADDR $D7DF
/* @UXHIOUT (bit mask) */
#define MATH_UF_HIOUT_MASK 32
/* @UXHIOUT (bit mask) */
#define UF_HIOUT_MASK 32
/*  (address) */
#define MATH_UF_DVADD_ADDR $D7DF
/*  (address) */
#define UF_DVADD_ADDR $D7DF
/*  (bit mask) */
#define MATH_UF_DVADD_MASK 64
/*  (bit mask) */
#define UF_DVADD_MASK 64
/* @UXLATCH (address) */
#define MATH_UF_LATCH_ADDR $D7DF
/* @UXLATCH (address) */
#define UF_LATCH_ADDR $D7DF
/* @UXLATCH (bit mask) */
#define MATH_UF_LATCH_MASK 128
/* @UXLATCH (bit mask) */
#define UF_LATCH_MASK 128
/* Latch interval for latched outputs (in CPU cycles) */
#define MATH_LATCHINT $D7E0
/* Latch interval for latched outputs (in CPU cycles) */
#define LATCHINT $D7E0
/* Enable setting of math registers (must normally be set) (address) */
#define MATH_WREN_ADDR $D7E1
/* Enable setting of math registers (must normally be set) (address) */
#define WREN_ADDR $D7E1
/* Enable setting of math registers (must normally be set) (bit mask) */
#define MATH_WREN_MASK 1
/* Enable setting of math registers (must normally be set) (bit mask) */
#define WREN_MASK 1
/* Enable committing of output values from math units back to math registers (clearing effectively pauses iterative formulae) (address) */
#define MATH_CALCEN_ADDR $D7E1
/* Enable committing of output values from math units back to math registers (clearing effectively pauses iterative formulae) (address) */
#define CALCEN_ADDR $D7E1
/* Enable committing of output values from math units back to math registers (clearing effectively pauses iterative formulae) (bit mask) */
#define MATH_CALCEN_MASK 2
/* Enable committing of output values from math units back to math registers (clearing effectively pauses iterative formulae) (bit mask) */
#define CALCEN_MASK 2
/* Reserved */
#define MATH_RESERVED $D7E2
/* Reserved */
#define GS_MATH_RESERVED $D7E3
/* Iteration Counter (32 bit) */
#define MATH_ITERCNT $D7E4
/* Iteration Counter (32 bit) */
#define GS_MATH_ITERCNT $D7E5
/* Iteration Counter (32 bit) */
#define GS_MATH_ITERCNT_2 $D7E6
/* Iteration Counter (32 bit) */
#define GS_MATH_ITERCNT_3 $D7E7
/* Math iteration counter comparator (32 bit) */
#define MATH_ITERCMP $D7E8
/* Math iteration counter comparator (32 bit) */
#define GS_MATH_ITERCMP $D7E9
/* Math iteration counter comparator (32 bit) */
#define GS_MATH_ITERCMP_2 $D7EA
/* Math iteration counter comparator (32 bit) */
#define GS_MATH_ITERCMP_3 $D7EB
/* IEC bus is active (address) */
#define CPU_IECBUSACT_ADDR $D7F1
/* IEC bus is active (address) */
#define IECBUSACT_ADDR $D7F1
/* IEC bus is active (bit mask) */
#define CPU_IECBUSACT_MASK 1
/* IEC bus is active (bit mask) */
#define IECBUSACT_MASK 1
/* Count the number of PHI cycles per video frame (LSB) */
#define CPU_PHIPERFRAME $D7F2
/* Count the number of PHI cycles per video frame (MSB) */
#define GS_CPU_PHIPERFRAME $D7F5
/* Count the number of usable (proceed=1) CPU cycles per video frame (LSB) */
#define CPU_CYCPERFRAME $D7F6
/* Count the number of usable (proceed=1) CPU cycles per video frame (MSB) */
#define GS_CPU_CYCPERFRAME $D7F9
/* Count number of elapsed video frames */
#define CPU_FRAMECOUNT $D7FA
/* Count number of elapsed video frames */
#define FRAMECOUNT $D7FA
/* 1= enable cartridges (address) */
#define CPU_CARTEN_ADDR $D7FB
/* 1= enable cartridges (address) */
#define CARTEN_ADDR $D7FB
/* 1= enable cartridges (bit mask) */
#define CPU_CARTEN_MASK 2
/* 1= enable cartridges (bit mask) */
#define CARTEN_MASK 2
/* Set to zero to power off computer on supported systems. WRITE ONLY. (address) */
#define CPU_POWEREN_ADDR $D7FD
/* Set to zero to power off computer on supported systems. WRITE ONLY. (address) */
#define POWEREN_ADDR $D7FD
/* Set to zero to power off computer on supported systems. WRITE ONLY. (bit mask) */
#define CPU_POWEREN_MASK 1
/* Set to zero to power off computer on supported systems. WRITE ONLY. (bit mask) */
#define POWEREN_MASK 1
/* Override for /GAME : Must be 0 to enable /GAME signal (address) */
#define CPU_NOGAME_ADDR $D7FD
/* Override for /GAME : Must be 0 to enable /GAME signal (address) */
#define NOGAME_ADDR $D7FD
/* Override for /GAME : Must be 0 to enable /GAME signal (bit mask) */
#define CPU_NOGAME_MASK 64
/* Override for /GAME : Must be 0 to enable /GAME signal (bit mask) */
#define NOGAME_MASK 64
/* Override for /EXROM : Must be 0 to enable /EXROM signal (address) */
#define CPU_NOEXROM_ADDR $D7FD
/* Override for /EXROM : Must be 0 to enable /EXROM signal (address) */
#define NOEXROM_ADDR $D7FD
/* Override for /EXROM : Must be 0 to enable /EXROM signal (bit mask) */
#define CPU_NOEXROM_MASK 128
/* Override for /EXROM : Must be 0 to enable /EXROM signal (bit mask) */
#define NOEXROM_MASK 128
/* Enable expansion RAM pre-fetch logic (address) */
#define CPU_PREFETCH_ADDR $D7FE
/* Enable expansion RAM pre-fetch logic (address) */
#define PREFETCH_ADDR $D7FE
/* Enable expansion RAM pre-fetch logic (bit mask) */
#define CPU_PREFETCH_MASK 1
/* Enable expansion RAM pre-fetch logic (bit mask) */
#define PREFETCH_MASK 1
/* Enable Ocean Type A cartridge emulation (address) */
#define CPU_OCEANA_ADDR $D7FE
/* Enable Ocean Type A cartridge emulation (address) */
#define OCEANA_ADDR $D7FE
/* Enable Ocean Type A cartridge emulation (bit mask) */
#define CPU_OCEANA_MASK 2
/* Enable Ocean Type A cartridge emulation (bit mask) */
#define OCEANA_MASK 2
/* Select CPU debug stream via ethernet when \$D6E1.3 is set */
#define ETHCOMMAND_DEBUGCPU $DC
/* Select CPU debug stream via ethernet when \$D6E1.3 is set */
#define DEBUGCPU $DC
/* Port A */
#define CIA1_PORTA $DC00
/* Port B */
#define CIA1_PORTB $DC01
/* Port A DDR */
#define CIA1_DDRA $DC02
/* Port B DDR */
#define CIA1_DDRB $DC03
/* Timer A counter (16 bit) */
#define CIA1_TIMERA $DC04
/* Timer A counter (16 bit) */
#define C64_CIA1_TIMERA $DC05
/* Timer B counter (16 bit) */
#define CIA1_TIMERB $DC06
/* Timer B counter (16 bit) */
#define C64_CIA1_TIMERB $DC07
/* TOD tenths of seconds (address) */
#define CIA1_TODJIF_ADDR $DC08
/* TOD tenths of seconds (bit mask) */
#define CIA1_TODJIF_MASK 15
/* TOD seconds (address) */
#define CIA1_TODSEC_ADDR $DC09
/* TOD seconds (bit mask) */
#define CIA1_TODSEC_MASK 63
/* TOD minutes (address) */
#define CIA1_TODMIN_ADDR $DC0A
/* TOD minutes (address) */
#define TODMIN_ADDR $DC0A
/* TOD minutes (bit mask) */
#define CIA1_TODMIN_MASK 63
/* TOD minutes (bit mask) */
#define TODMIN_MASK 63
/* TOD hours (address) */
#define CIA1_TODHOUR_ADDR $DC0B
/* TOD hours (bit mask) */
#define CIA1_TODHOUR_MASK 31
/* TOD PM flag (address) */
#define CIA1_TODAMPM_ADDR $DC0B
/* TOD PM flag (bit mask) */
#define CIA1_TODAMPM_MASK 128
/* shift register data register(writing starts sending) */
#define CIA1_SDR $DC0C
/* Timer A underflow (address) */
#define CIA1_TA_ADDR $DC0D
/* Timer A underflow (bit mask) */
#define CIA1_TA_MASK 1
/* Timer B underflow (address) */
#define CIA1_TB_ADDR $DC0D
/* Timer B underflow (bit mask) */
#define CIA1_TB_MASK 2
/* TOD alarm (address) */
#define CIA1_ALRM_ADDR $DC0D
/* TOD alarm (bit mask) */
#define CIA1_ALRM_MASK 4
/* shift register full/empty (address) */
#define CIA1_SP_ADDR $DC0D
/* shift register full/empty (bit mask) */
#define CIA1_SP_MASK 8
/* FLAG edge detected (address) */
#define CIA1_FLG_ADDR $DC0D
/* FLAG edge detected (bit mask) */
#define CIA1_FLG_MASK 16
/* Interrupt flag (address) */
#define CIA1_IR_ADDR $DC0D
/* Interrupt flag (address) */
#define IR_ADDR $DC0D
/* Interrupt flag (bit mask) */
#define CIA1_IR_MASK 128
/* Interrupt flag (bit mask) */
#define IR_MASK 128
/* Timer A start (address) */
#define CIA1_STRTA_ADDR $DC0E
/* Timer A start (bit mask) */
#define CIA1_STRTA_MASK 1
/* Timer A PB6 out (address) */
#define CIA1_PBONA_ADDR $DC0E
/* Timer A PB6 out (bit mask) */
#define CIA1_PBONA_MASK 2
/* Timer A toggle or pulse (address) */
#define CIA1_OMODA_ADDR $DC0E
/* Timer A toggle or pulse (bit mask) */
#define CIA1_OMODA_MASK 4
/* Timer A one-shot mode (address) */
#define CIA1_RMODA_ADDR $DC0E
/* Timer A one-shot mode (bit mask) */
#define CIA1_RMODA_MASK 8
/* Timer A Timer A tick source (address) */
#define CIA1_IMODA_ADDR $DC0E
/* Timer A Timer A tick source (bit mask) */
#define CIA1_IMODA_MASK 32
/* Serial port direction (address) */
#define CIA1_SPMOD_ADDR $DC0E
/* Serial port direction (bit mask) */
#define CIA1_SPMOD_MASK 64
/* 50/60Hz select for TOD clock (address) */
#define CIA1_TOD50_ADDR $DC0E
/* 50/60Hz select for TOD clock (bit mask) */
#define CIA1_TOD50_MASK 128
/* Timer B start (address) */
#define CIA1_STRTB_ADDR $DC0F
/* Timer B start (bit mask) */
#define CIA1_STRTB_MASK 1
/* Timer B PB7 out (address) */
#define CIA1_PBONB_ADDR $DC0F
/* Timer B PB7 out (bit mask) */
#define CIA1_PBONB_MASK 2
/* Timer B toggle or pulse (address) */
#define CIA1_OMODB_ADDR $DC0F
/* Timer B toggle or pulse (bit mask) */
#define CIA1_OMODB_MASK 4
/* Timer B one-shot mode (address) */
#define CIA1_RMODB_ADDR $DC0F
/* Timer B one-shot mode (bit mask) */
#define CIA1_RMODB_MASK 8
/* Strobe input to force-load timers (address) */
#define CIA1_LOAD_ADDR $DC0F
/* Strobe input to force-load timers (bit mask) */
#define CIA1_LOAD_MASK 16
/* Timer B Timer A tick source (address) */
#define CIA1_IMODB_ADDR $DC0F
/* Timer B Timer A tick source (bit mask) */
#define CIA1_IMODB_MASK 96
/* TOD alarm edit (address) */
#define CIA2_TODEDIT_ADDR $DC0F
/* TOD alarm edit (bit mask) */
#define CIA2_TODEDIT_MASK 128
/* Timer A latch value (16 bit) */
#define CIA1_TALATCH $DC10
/* Timer A latch value (16 bit) */
#define GS_CIA1_TALATCH $DC11
/* Timer B latch value (16 bit) */
#define GS_CIA1_TALATCH_2 $DC12
/* Timer B latch value (16 bit) */
#define GS_CIA1_TALATCH_3 $DC13
/* Timer A current value (16 bit) */
#define GS_CIA1_TALATCH_4 $DC14
/* Timer A current value (16 bit) */
#define GS_CIA1_TALATCH_5 $DC15
/* Timer B current value (16 bit) */
#define GS_CIA1_TALATCH_6 $DC16
/* Timer B current value (16 bit) */
#define GS_CIA1_TALATCH_7 $DC17
/* TOD 10ths of seconds value (address) */
#define GS_CIA1_TODJIF_ADDR $DC18
/* TOD 10ths of seconds value (bit mask) */
#define GS_CIA1_TODJIF_MASK 15
/* Interrupt mask for Timer B (address) */
#define CIA1_IMTB_ADDR $DC18
/* Interrupt mask for Timer B (bit mask) */
#define CIA1_IMTB_MASK 16
/* Interrupt mask for TOD alarm (address) */
#define CIA1_IMALRM_ADDR $DC18
/* Interrupt mask for TOD alarm (bit mask) */
#define CIA1_IMALRM_MASK 32
/* Interrupt mask for shift register (serial port) (address) */
#define CIA1_IMSP_ADDR $DC18
/* Interrupt mask for shift register (serial port) (bit mask) */
#define CIA1_IMSP_MASK 64
/* Interrupt mask for FLAG line (address) */
#define CIA1_IMFLG_ADDR $DC18
/* Interrupt mask for FLAG line (bit mask) */
#define CIA1_IMFLG_MASK 128
/* TOD Alarm seconds value */
#define CIA1_TODSEC $DC19
/* TOD Alarm minutes value */
#define CIA1_TODMIN $DC1A
/* TOD hours value (address) */
#define GS_CIA1_TODHOUR_ADDR $DC1B
/* TOD hours value (bit mask) */
#define GS_CIA1_TODHOUR_MASK 127
/* TOD AM/PM flag (address) */
#define GS_CIA1_TODAMPM_ADDR $DC1B
/* TOD AM/PM flag (bit mask) */
#define GS_CIA1_TODAMPM_MASK 128
/* TOD Alarm 10ths of seconds value */
#define CIA1_ALRMJIF $DC1C
/* TOD Alarm seconds value */
#define CIA1_ALRMSEC $DC1D
/* TOD Alarm minutes value */
#define CIA1_ALRMMIN $DC1E
/* TOD Alarm hours value (address) */
#define CIA1_ALRMHOUR_ADDR $DC1F
/* TOD Alarm hours value (bit mask) */
#define CIA1_ALRMHOUR_MASK 127
/* TOD Alarm AM/PM flag (address) */
#define CIA1_ALRMAMPM_ADDR $DC1F
/* TOD Alarm AM/PM flag (bit mask) */
#define CIA1_ALRMAMPM_MASK 128
/* Port A */
#define CIA2_PORTA $DD00
/* Port B */
#define CIA2_PORTB $DD01
/* Port A DDR */
#define CIA2_DDRA $DD02
/* Port B DDR */
#define CIA2_DDRB $DD03
/* Timer A counter (16 bit) */
#define CIA2_TIMERA $DD04
/* Timer A counter (16 bit) */
#define C64_CIA2_TIMERA $DD05
/* Timer B counter (16 bit) */
#define CIA2_TIMERB $DD06
/* Timer B counter (16 bit) */
#define C64_CIA2_TIMERB $DD07
/* TOD tenths of seconds (address) */
#define CIA2_TODJIF_ADDR $DD08
/* TOD tenths of seconds (bit mask) */
#define CIA2_TODJIF_MASK 15
/* TOD seconds (address) */
#define CIA2_TODSEC_ADDR $DD09
/* TOD seconds (bit mask) */
#define CIA2_TODSEC_MASK 63
/* TOD hours (address) */
#define CIA2_TODHOUR_ADDR $DD0B
/* TOD hours (bit mask) */
#define CIA2_TODHOUR_MASK 31
/* TOD PM flag (address) */
#define CIA2_TODAMPM_ADDR $DD0B
/* TOD PM flag (bit mask) */
#define CIA2_TODAMPM_MASK 128
/* shift register data register(writing starts sending) */
#define CIA2_SDR $DD0C
/* Timer A underflow (address) */
#define CIA2_TA_ADDR $DD0D
/* Timer A underflow (bit mask) */
#define CIA2_TA_MASK 1
/* Timer B underflow (address) */
#define CIA2_TB_ADDR $DD0D
/* Timer B underflow (bit mask) */
#define CIA2_TB_MASK 2
/* TOD alarm (address) */
#define CIA2_ALRM_ADDR $DD0D
/* TOD alarm (bit mask) */
#define CIA2_ALRM_MASK 4
/* shift register full/empty (address) */
#define CIA2_SP_ADDR $DD0D
/* shift register full/empty (bit mask) */
#define CIA2_SP_MASK 8
/* FLAG edge detected (address) */
#define CIA2_FLG_ADDR $DD0D
/* FLAG edge detected (bit mask) */
#define CIA2_FLG_MASK 16
/* Timer A start (address) */
#define CIA2_STRTA_ADDR $DD0E
/* Timer A start (bit mask) */
#define CIA2_STRTA_MASK 1
/* Timer A PB6 out (address) */
#define CIA2_PBONA_ADDR $DD0E
/* Timer A PB6 out (bit mask) */
#define CIA2_PBONA_MASK 2
/* Timer A toggle or pulse (address) */
#define CIA2_OMODA_ADDR $DD0E
/* Timer A toggle or pulse (bit mask) */
#define CIA2_OMODA_MASK 4
/* Timer A one-shot mode (address) */
#define CIA2_RMODA_ADDR $DD0E
/* Timer A one-shot mode (bit mask) */
#define CIA2_RMODA_MASK 8
/* Timer A Timer A tick source (address) */
#define CIA2_IMODA_ADDR $DD0E
/* Timer A Timer A tick source (bit mask) */
#define CIA2_IMODA_MASK 32
/* Serial port direction (address) */
#define CIA2_SPMOD_ADDR $DD0E
/* Serial port direction (bit mask) */
#define CIA2_SPMOD_MASK 64
/* 50/60Hz select for TOD clock (address) */
#define CIA2_TOD50_ADDR $DD0E
/* 50/60Hz select for TOD clock (bit mask) */
#define CIA2_TOD50_MASK 128
/* Timer B start (address) */
#define CIA2_STRTB_ADDR $DD0F
/* Timer B start (bit mask) */
#define CIA2_STRTB_MASK 1
/* Timer B PB7 out (address) */
#define CIA2_PBONB_ADDR $DD0F
/* Timer B PB7 out (bit mask) */
#define CIA2_PBONB_MASK 2
/* Timer B toggle or pulse (address) */
#define CIA2_OMODB_ADDR $DD0F
/* Timer B toggle or pulse (bit mask) */
#define CIA2_OMODB_MASK 4
/* Timer B one-shot mode (address) */
#define CIA2_RMODB_ADDR $DD0F
/* Timer B one-shot mode (bit mask) */
#define CIA2_RMODB_MASK 8
/* Strobe input to force-load timers (address) */
#define CIA2_LOAD_ADDR $DD0F
/* Strobe input to force-load timers (bit mask) */
#define CIA2_LOAD_MASK 16
/* Timer B Timer A tick source (address) */
#define CIA2_IMODB_ADDR $DD0F
/* Timer B Timer A tick source (bit mask) */
#define CIA2_IMODB_MASK 96
/* TOD alarm edit (address) */
#define C64_CIA2_TODEDIT_ADDR $DD0F
/* TOD alarm edit (bit mask) */
#define C64_CIA2_TODEDIT_MASK 128
/* Timer A latch value (16 bit) */
#define CIA2_TALATCH $DD10
/* Timer A latch value (16 bit) */
#define GS_CIA2_TALATCH $DD11
/* Timer B latch value (16 bit) */
#define GS_CIA2_TALATCH_2 $DD12
/* Timer B latch value (16 bit) */
#define GS_CIA2_TALATCH_3 $DD13
/* Timer A current value (16 bit) */
#define GS_CIA2_TALATCH_4 $DD14
/* Timer A current value (16 bit) */
#define GS_CIA2_TALATCH_5 $DD15
/* Timer B current value (16 bit) */
#define GS_CIA2_TALATCH_6 $DD16
/* Timer B current value (16 bit) */
#define GS_CIA2_TALATCH_7 $DD17
/* TOD 10ths of seconds value (address) */
#define GS_CIA2_TODJIF_ADDR $DD18
/* TOD 10ths of seconds value (bit mask) */
#define GS_CIA2_TODJIF_MASK 15
/* Interrupt mask for Timer B (address) */
#define CIA2_IMTB_ADDR $DD18
/* Interrupt mask for Timer B (bit mask) */
#define CIA2_IMTB_MASK 16
/* Interrupt mask for TOD alarm (address) */
#define CIA2_IMALRM_ADDR $DD18
/* Interrupt mask for TOD alarm (bit mask) */
#define CIA2_IMALRM_MASK 32
/* Interrupt mask for shift register (serial port) (address) */
#define CIA2_IMSP_ADDR $DD18
/* Interrupt mask for shift register (serial port) (bit mask) */
#define CIA2_IMSP_MASK 64
/* Interrupt mask for FLAG line (address) */
#define CIA2_IMFLG_ADDR $DD18
/* Interrupt mask for FLAG line (bit mask) */
#define CIA2_IMFLG_MASK 128
/* TOD Alarm seconds value */
#define CIA2_TODSEC $DD19
/* TOD Alarm minutes value */
#define CIA2_TODMIN $DD1A
/* TOD hours value (address) */
#define GS_CIA2_TODHOUR_ADDR $DD1B
/* TOD hours value (bit mask) */
#define GS_CIA2_TODHOUR_MASK 127
/* TOD AM/PM flag (address) */
#define GS_CIA2_TODAMPM_ADDR $DD1B
/* TOD AM/PM flag (bit mask) */
#define GS_CIA2_TODAMPM_MASK 128
/* TOD Alarm 10ths of seconds value */
#define CIA2_ALRMJIF $DD1C
/* Enable delaying writes to $DD00 by 3 cycles to match real 6502 timing (address) */
#define CIA2_DD00DELAY_ADDR $DD1C
/* Enable delaying writes to $DD00 by 3 cycles to match real 6502 timing (address) */
#define DD00DELAY_ADDR $DD1C
/* Enable delaying writes to $DD00 by 3 cycles to match real 6502 timing (bit mask) */
#define CIA2_DD00DELAY_MASK 128
/* Enable delaying writes to $DD00 by 3 cycles to match real 6502 timing (bit mask) */
#define DD00DELAY_MASK 128
/* TOD Alarm seconds value */
#define CIA2_ALRMSEC $DD1D
/* TOD Alarm minutes value */
#define CIA2_ALRMMIN $DD1E
/* TOD Alarm hours value (address) */
#define CIA2_ALRMHOUR_ADDR $DD1F
/* TOD Alarm hours value (bit mask) */
#define CIA2_ALRMHOUR_MASK 127
/* TOD Alarm AM/PM flag (address) */
#define CIA2_ALRMAMPM_ADDR $DD1F
/* TOD Alarm AM/PM flag (bit mask) */
#define CIA2_ALRMAMPM_MASK 128
/* Receive exactly one ethernet frame only, and keep all signals states (for debugging ethernet sub-system) */
#define ETHCOMMAND_RXONLYONE $DE
/* Receive exactly one ethernet frame only, and keep all signals states (for debugging ethernet sub-system) */
#define RXONLYONE $DE
/* Select ~1KiB frames for video/cpu debug stream frames (for receivers that do not support MTUs of greater than 2KiB) */
#define ETHCOMMAND_FRAME1K $F1
/* Select ~1KiB frames for video/cpu debug stream frames (for receivers that do not support MTUs of greater than 2KiB) */
#define FRAME1K $F1
/* Select ~2KiB frames for video/cpu debug stream frames, for optimal performance. */
#define ETHCOMMAND_FRAME2K $F2
/* Select ~2KiB frames for video/cpu debug stream frames, for optimal performance. */
#define FRAME2K $F2
/* VIC-IV CHARROM write area */
#define SUMMARY_CHARWRITE $FF7E000
/* VIC-IV CHARROM write area */
#define CHARWRITE $FF7E000
/* Colour RAM (32KB or 64KB) */
#define SUMMARY_COLOURRAM $FF80000
/* Colour RAM (32KB or 64KB) */
#define COLOURRAM $FF80000
/* Real-time Clock seconds value (binary coded decimal) */
#define RTC_RTCSEC $FFD7110
/* Real-time Clock seconds value (binary coded decimal) */
#define RTCSEC $FFD7110
/* Real-time Clock */
#define RTC_RTC $FFD7110
/* Real-time Clock */
#define RTC $FFD7110
/* Real-time Clock minutes value (binary coded decimal) */
#define RTC_RTCMIN $FFD7111
/* Real-time Clock minutes value (binary coded decimal) */
#define RTCMIN $FFD7111
/* Real-time Clock hours value (binary coded decimal) */
#define RTC_RTCHOUR $FFD7112
/* Real-time Clock hours value (binary coded decimal) */
#define RTCHOUR $FFD7112
/* Real-time Clock day of month value (binary coded decimal) */
#define RTC_RTCDAY $FFD7113
/* Real-time Clock day of month value (binary coded decimal) */
#define RTCDAY $FFD7113
/* Real-time Clock month value (binary coded decimal) */
#define RTC_RTCMONTH $FFD7114
/* Real-time Clock month value (binary coded decimal) */
#define RTCMONTH $FFD7114
/* Real-time Clock year value (binary coded decimal) */
#define RTC_RTCYEAR $FFD7115
/* Real-time Clock year value (binary coded decimal) */
#define RTCYEAR $FFD7115
/* 64-bytes of non-volatile RAM. Can be used for storing machine configuration. */
#define RTC_NVRAM $FFD7140
/* 64-bytes of non-volatile RAM. Can be used for storing machine configuration. */
#define NVRAM $FFD7140
/* 16KB Hyppo/Hypervisor ROM */
#define SUMMARY_HYPERVISOR $FFF8000
/* 16KB Hyppo/Hypervisor ROM */
#define HYPERVISOR $FFF8000
