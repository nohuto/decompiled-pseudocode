/*
 * XREFs of KiFlushCurrentRsb @ 0x140413380
 * Callers:
 *     KiUpdateSpeculationControl @ 0x14021ECC0 (KiUpdateSpeculationControl.c)
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiHandleMcheck @ 0x140512660 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x1405129B0 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x14051B158 (KeFlushRsb.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x14051B260 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x14051B600 (KiFlushRsbTarget.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140413380 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x140413380
 * Reason: Hex-Rays returned no pseudocode for 0x140413380
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140413380: sub     rsp, 8
 * 0000000140413384: pushfq
 * 0000000140413385: cli
 * 0000000140413386: call    loc_140413499
 * 000000014041338B: add     rsp, 8
 * 000000014041338F: call    loc_1404134A2
 * 0000000140413394: add     rsp, 8
 * 0000000140413398: call    loc_14041338B
 * 000000014041339D: add     rsp, 8
 * 00000001404133A1: call    loc_140413394
 * 00000001404133A6: add     rsp, 8
 * 00000001404133AA: call    loc_14041339D
 * 00000001404133AF: add     rsp, 8
 * 00000001404133B3: call    loc_1404133A6
 * 00000001404133B8: add     rsp, 8
 * 00000001404133BC: call    loc_1404133AF
 * 00000001404133C1: add     rsp, 8
 * 00000001404133C5: call    loc_1404133B8
 * 00000001404133CA: add     rsp, 8
 * 00000001404133CE: call    loc_1404133C1
 * 00000001404133D3: add     rsp, 8
 * 00000001404133D7: call    loc_1404133CA
 * 00000001404133DC: add     rsp, 8
 * 00000001404133E0: call    loc_1404133D3
 * 00000001404133E5: add     rsp, 8
 * 00000001404133E9: call    loc_1404133DC
 * 00000001404133EE: add     rsp, 8
 * 00000001404133F2: call    loc_1404133E5
 * 00000001404133F7: add     rsp, 8
 * 00000001404133FB: call    loc_1404133EE
 * 0000000140413400: add     rsp, 8
 * 0000000140413404: call    loc_1404133F7
 * 0000000140413409: add     rsp, 8
 * 000000014041340D: call    loc_140413400
 * 0000000140413412: add     rsp, 8
 * 0000000140413416: call    loc_140413409
 * 000000014041341B: add     rsp, 8
 * 000000014041341F: call    loc_140413412
 * 0000000140413424: add     rsp, 8
 * 0000000140413428: call    loc_14041341B
 * 000000014041342D: add     rsp, 8
 * 0000000140413431: call    loc_140413424
 * 0000000140413436: add     rsp, 8
 * 000000014041343A: call    loc_14041342D
 * 000000014041343F: add     rsp, 8
 * 0000000140413443: call    loc_140413436
 * 0000000140413448: add     rsp, 8
 * 000000014041344C: call    loc_14041343F
 * 0000000140413451: add     rsp, 8
 * 0000000140413455: call    loc_140413448
 * 000000014041345A: add     rsp, 8
 * 000000014041345E: call    loc_140413451
 * 0000000140413463: add     rsp, 8
 * 0000000140413467: call    loc_14041345A
 * 000000014041346C: add     rsp, 8
 * 0000000140413470: call    loc_140413463
 * 0000000140413475: add     rsp, 8
 * 0000000140413479: call    loc_14041346C
 * 000000014041347E: add     rsp, 8
 * 0000000140413482: call    loc_140413475
 * 0000000140413487: add     rsp, 8
 * 000000014041348B: call    loc_14041347E
 * 0000000140413490: add     rsp, 8
 * 0000000140413494: call    loc_140413487
 * 0000000140413499: add     rsp, 8
 * 000000014041349D: call    loc_140413490
 * 00000001404134A2: add     rsp, 8
 * 00000001404134A6: mov     eax, 0DADAh
 * 00000001404134AB: lfence
 * 00000001404134AE: bt      [rsp-0F0h+arg_E8], 9
 * 00000001404134B4: jnb     short loc_1404134B7
 * 00000001404134B6: sti
 * 00000001404134B7: add     rsp, 10h
 * 00000001404134BB: retn
 */
