/*
 * XREFs of ObGetCurrentIrql @ 0x140205E10
 * Callers:
 *     EtwpOpenLogger @ 0x140205B30 (EtwpOpenLogger.c)
 *     MmCanThreadFault @ 0x140205D8C (MmCanThreadFault.c)
 *     EtwpRequestFlushTimer @ 0x140205EDC (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140205FA4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x140205FF4 (EtwpSwitchBuffer.c)
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     ObpDeferObjectDeletion @ 0x1402ECA68 (ObpDeferObjectDeletion.c)
 *     RtlQueryFeatureConfiguration @ 0x1402F02B0 (RtlQueryFeatureConfiguration.c)
 *     EtwTelemetryCoverageReport @ 0x1402F9DD0 (EtwTelemetryCoverageReport.c)
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     WheaIsCriticalState @ 0x14037D730 (WheaIsCriticalState.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x140388D20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     EtwpSendTraceEvent @ 0x14039D2E8 (EtwpSendTraceEvent.c)
 *     KdPowerTransitionEx @ 0x1403A7D80 (KdPowerTransitionEx.c)
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     EtwpGetStackCaptureSettings @ 0x1404603A4 (EtwpGetStackCaptureSettings.c)
 *     KeResumeClockTimerSafe @ 0x14056D3B4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14056D500 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140570BD0 (KeTryToInsertQueueApc.c)
 *     KiGetRecoveryInformation @ 0x140578B44 (KiGetRecoveryInformation.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     EtwSendTraceBuffer @ 0x1405FCD90 (EtwSendTraceBuffer.c)
 *     EtwpDisableCompression @ 0x140600498 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1406005D4 (EtwpReenableCompression.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140614CE8 (CmFcManagerNotifyFeatureUsage.c)
 *     EtwpStopLoggerInstance @ 0x140748874 (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x140749078 (EtwpSynchronizeWithLogger.c)
 *     EtwInitialize @ 0x14080AAA4 (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
