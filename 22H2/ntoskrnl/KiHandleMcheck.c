/*
 * XREFs of KiHandleMcheck @ 0x140512660
 * Callers:
 *     KxMcheckAbort @ 0x14040E700 (KxMcheckAbort.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140413380 (KiFlushCurrentRsb.c)
 *     HalHandleMcheck @ 0x1404BC9B0 (HalHandleMcheck.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x140512660
 * Reason: Hex-Rays returned no pseudocode for 0x140512660
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140512660: sub     rsp, 28h
 * 0000000140512664: call    HalHandleMcheck
 * 0000000140512669: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140512670: mov     rcx, 20000000000h
 * 000000014051267A: test    rcx, rax
 * 000000014051267D: jz      short loc_140512684
 * 000000014051267F: call    KiFlushCurrentRsb
 * 0000000140512684: lfence
 * 0000000140512687: add     rsp, 28h
 * 000000014051268B: retn
 */
