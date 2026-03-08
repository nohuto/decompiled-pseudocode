/*
 * XREFs of KiSetUserTbFlushPending @ 0x140417710
 * Callers:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     KiIpiProcessRequests @ 0x1402CB4E0 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x1402D0000 (KiFlushCurrentTbWorker.c)
 *     KiFlushSingleTbWorker @ 0x1402EAF90 (KiFlushSingleTbWorker.c)
 *     KeFlushSingleCurrentTb @ 0x140387AD4 (KeFlushSingleCurrentTb.c)
 *     KiFlushRangeTb @ 0x140387C18 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x1403B8390 (KiFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140A9CBB0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0xA018u, __readgsdword(0xA018u) | 1);
}
