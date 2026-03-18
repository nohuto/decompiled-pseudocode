/*
 * XREFs of KiSetUserTbFlushPending @ 0x14041FAA0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C52F0 (PpmIdleExecuteTransition.c)
 *     KeFlushSingleTb @ 0x1402EB0C4 (KeFlushSingleTb.c)
 *     KiIpiProcessRequests @ 0x140334850 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x140339BC0 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x140356A20 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleCurrentTb @ 0x14038A710 (KeFlushSingleCurrentTb.c)
 *     KiFlushRangeTb @ 0x14038A858 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x1403BDCC0 (KiFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140A9FCF0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0xA018u, __readgsdword(0xA018u) | 1);
}
