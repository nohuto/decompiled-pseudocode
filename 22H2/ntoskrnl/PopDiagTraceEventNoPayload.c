/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x1403265D4
 * Callers:
 *     PopScanIdleList @ 0x140349888 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14056F7AC (PopThermalStandbyNotify.c)
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     PopDiagTracePrepareSleep @ 0x1407753E0 (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x1407753FC (PopDiagTracePrepareSleepEnd.c)
 *     PopSuspendApps @ 0x140776E70 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140776EC4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140776F24 (PopResumeApps.c)
 *     PopResumeServices @ 0x140776F9C (PopResumeServices.c)
 *     PopDiagTraceSuperfetchNotification @ 0x140777018 (PopDiagTraceSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14077709C (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14077A4FC (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingNotify @ 0x1408E6900 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1408E7820 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408EA97C (PopDiagTraceIoCoalescingOff.c)
 *     PopTransitionToSleep @ 0x140990620 (PopTransitionToSleep.c)
 *     PoBroadcastSystemState @ 0x140992AC4 (PoBroadcastSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x1409971A8 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x140997CDC (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140998F80 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140998F9C (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x1409B10A0 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1409B2614 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1409B2630 (PopDiagTraceZeroHiberFileEnd.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  REGHANDLE v2; // rdi

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
