/*
 * XREFs of KiDpcInterruptBypass @ 0x140405330
 * Callers:
 *     KiChainedDispatch @ 0x1403FEC40 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FF5C0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FF9B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FFDA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400190 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400580 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404011C0 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140403B30 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140403F30 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1404045E0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140405370 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140405BD0 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x140405330
 * Reason: Hex-Rays returned no pseudocode for 0x140405330
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405330: sub     rsp, 8
 * 0000000140405334: mov     ecx, 2
 * 0000000140405339: mov     cr8, rcx
 * 000000014040533D: sti
 * 000000014040533E: mov     al, [rbp-57h]
 * 0000000140405341: mov     rcx, gs:188h
 * 000000014040534A: mov     [rcx+186h], al
 * 0000000140405350: call    KiDispatchInterrupt
 * 0000000140405355: cli
 * 0000000140405356: add     rsp, 8
 * 000000014040535A: retn
 */
