/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x140366FF0
 * Callers:
 *     PopScanIdleList @ 0x14032C730 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14058FC80 (PopThermalStandbyNotify.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PopCoalescingNotify @ 0x140987090 (PopCoalescingNotify.c)
 *     PopDispatchSuperfetchNotification @ 0x140989840 (PopDispatchSuperfetchNotification.c)
 *     PopResumeApps @ 0x14098A4E4 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A55C (PopResumeServices.c)
 *     PopSetSystemAwayMode @ 0x14098A940 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x14098AAC4 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14098AB18 (PopSuspendServices.c)
 *     PopNotifyCallbacksPreSleep @ 0x14098BB2C (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14098E80C (PopDiagTraceDevicesWakeEnd.c)
 *     PopDiagTraceIoCoalescingOff @ 0x14098FCB8 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTracePrepareSleep @ 0x1409914E4 (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140991500 (PopDiagTracePrepareSleepEnd.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x140991D18 (PopDiagTraceSuspendResumeNotification.c)
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 *     PopTransitionToSleep @ 0x140AA5400 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140AA65A8 (PopFlushVolumes.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140AA71FC (PopBuildDeviceNotifyList.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140AA7EEC (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140AA7F08 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceZeroHiberFile @ 0x140AA81A4 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140AA81C0 (PopDiagTraceZeroHiberFileEnd.c)
 * Callees:
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  REGHANDLE v2; // rdi

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWrite(v2, EventDescriptor, 0LL, 0, 0LL);
  }
}
