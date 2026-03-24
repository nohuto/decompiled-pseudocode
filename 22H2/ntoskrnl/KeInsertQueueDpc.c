/*
 * XREFs of KeInsertQueueDpc @ 0x14021FD00
 * Callers:
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140259900 (KiChargeSchedulingGroupCycleTime.c)
 *     EtwpRequestFlushTimer @ 0x14025F43C (EtwpRequestFlushTimer.c)
 *     IopAllocateIrpPrivate @ 0x1402D2220 (IopAllocateIrpPrivate.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DE7EC (KiAbQueueAutoBoostDpc.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F4130 (KiAddThreadToPrcbQueue.c)
 *     MiRestoreTransitionPte @ 0x1402FB620 (MiRestoreTransitionPte.c)
 *     KiInitializeUserApc @ 0x140309CE4 (KiInitializeUserApc.c)
 *     KiScheduleNextForegroundBoost @ 0x14030F47C (KiScheduleNextForegroundBoost.c)
 *     EtwpSwitchBuffer @ 0x14032EE9C (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14032F3E4 (EtwpPrepareDirtyBuffer.c)
 *     PopQueueTargetDpc @ 0x140344920 (PopQueueTargetDpc.c)
 *     MmSetAccessLogging @ 0x140380304 (MmSetAccessLogging.c)
 *     ExQueueDebuggerWorker @ 0x1403C661C (ExQueueDebuggerWorker.c)
 *     HalpCmciHandler @ 0x1404BC9F8 (HalpCmciHandler.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404ED774 (CmFcManagerNotifyFeatureUsage.c)
 *     KiResetForceIdle @ 0x140523560 (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x1405A5E70 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A6D5C (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AEFA8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AF0A0 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x1405AF44C (EtwpCovSampLookasidePop.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140619D80 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140663DF0 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x14069BD8C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x140710AB0 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x140793C24 (EtwInitialize.c)
 *     PopCaptureTimeOnProcZero @ 0x140990E6C (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x14099324C (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140995370 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x140996240 (PopEndMirroring.c)
 *     HalpCmciInitProcessor @ 0x140999D10 (HalpCmciInitProcessor.c)
 *     IopLiveDumpCorralProcessors @ 0x1409ABDE0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409AE8B4 (PnprQuiesceProcessors.c)
 *     KdExitDebugger @ 0x1409B7190 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
