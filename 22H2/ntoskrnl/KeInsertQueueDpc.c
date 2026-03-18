/*
 * XREFs of KeInsertQueueDpc @ 0x140254650
 * Callers:
 *     KeReleaseMutantEx @ 0x14040FD6C (KeReleaseMutantEx.c)
 *     CmFcManagerRecordFeatureUsage @ 0x1404193A8 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x14041951C (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     PspThreadDelete @ 0x1407478D0 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749A50 (ObpProcessRemoveObjectQueue.c)
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5FE0 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1407F69E4 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x14081F5AC (EtwInitialize.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AF70 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140A9D9C4 (PnprQuiesceProcessors.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9F000 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x140AA28E0 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 *     KdExitDebugger @ 0x140AB1008 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
