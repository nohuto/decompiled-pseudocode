/*
 * XREFs of ObGetCurrentIrql @ 0x14025EDF0
 * Callers:
 *     EtwpOpenLogger @ 0x14025D3F8 (EtwpOpenLogger.c)
 *     EtwpEventWriteFull @ 0x14025D7C0 (EtwpEventWriteFull.c)
 *     MmCanThreadFault @ 0x14025ED70 (MmCanThreadFault.c)
 *     EtwpRequestFlushTimer @ 0x14025F43C (EtwpRequestFlushTimer.c)
 *     ObpDeferObjectDeletion @ 0x140315484 (ObpDeferObjectDeletion.c)
 *     EtwTelemetryCoverageReport @ 0x140321950 (EtwTelemetryCoverageReport.c)
 *     EtwpSwitchBuffer @ 0x14032EE9C (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14032F3E4 (EtwpPrepareDirtyBuffer.c)
 *     KiDispatchException @ 0x14033C330 (KiDispatchException.c)
 *     RtlQueryFeatureConfiguration @ 0x14038C100 (RtlQueryFeatureConfiguration.c)
 *     sub_1403DD750 @ 0x1403DD750 (sub_1403DD750.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404ED774 (CmFcManagerNotifyFeatureUsage.c)
 *     KdPowerTransitionEx @ 0x140510F00 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x140513C54 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x140513D30 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x14051A750 (KeTryToInsertQueueApc.c)
 *     KiGetRecoveryInformation @ 0x140525020 (KiGetRecoveryInformation.c)
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14058E0A0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5CD4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x1405A5E70 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x1405A6E40 (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x1405AAAA8 (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x1405AD098 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1405AD600 (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x14069BD8C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x140710AB0 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x140793C24 (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402D0E60 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
