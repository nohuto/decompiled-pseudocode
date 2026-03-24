/*
 * XREFs of KiSetUserTbFlushPending @ 0x1403FEB70
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140222470 (PpmIdleExecuteTransition.c)
 *     KiFlushRangeWorker @ 0x1402EE4D0 (KiFlushRangeWorker.c)
 *     KiIpiProcessRequests @ 0x1402EF610 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x140300780 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x14031B4A0 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x1403897D8 (KeFlushSingleCurrentTb.c)
 *     KiFlushCurrentTbOnly @ 0x140396D7C (KiFlushCurrentTbOnly.c)
 *     KiFlushRangeTb @ 0x1403C8F30 (KiFlushRangeTb.c)
 *     KiInitializeKernel @ 0x14099CCF0 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1409AFCA0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x9018u, __readgsdword(0x9018u) | 1);
}
