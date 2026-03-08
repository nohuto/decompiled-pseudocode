/*
 * XREFs of KeInsertQueueDpc @ 0x140230290
 * Callers:
 *     KeReleaseMutantEx @ 0x14040A86C (KeReleaseMutantEx.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     EtwpStopLoggerInstance @ 0x140748874 (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x140749078 (EtwpSynchronizeWithLogger.c)
 *     PspThreadDelete @ 0x14075E4B0 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x1407DEA90 (ObpProcessRemoveObjectQueue.c)
 *     EtwInitialize @ 0x14080AAA4 (EtwInitialize.c)
 *     IopLiveDumpCorralProcessors @ 0x140A97E30 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140A9A884 (PnprQuiesceProcessors.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9BEC0 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x140A9F6B0 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     KdExitDebugger @ 0x140AAD2D0 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
