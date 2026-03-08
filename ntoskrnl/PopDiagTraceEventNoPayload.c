/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x1402FBBF8
 * Callers:
 *     PopScanIdleList @ 0x1402BC8E0 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14058D750 (PopThermalStandbyNotify.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopCoalescingNotify @ 0x140983FE0 (PopCoalescingNotify.c)
 *     PopDispatchSuperfetchNotification @ 0x140986790 (PopDispatchSuperfetchNotification.c)
 *     PopResumeApps @ 0x140987434 (PopResumeApps.c)
 *     PopResumeServices @ 0x1409874AC (PopResumeServices.c)
 *     PopSetSystemAwayMode @ 0x140987890 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x140987A14 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140987A68 (PopSuspendServices.c)
 *     PopNotifyCallbacksPreSleep @ 0x140988A7C (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14098B75C (PopDiagTraceDevicesWakeEnd.c)
 *     PopDiagTraceIoCoalescingOff @ 0x14098CC08 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTracePrepareSleep @ 0x14098E434 (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x14098E450 (PopDiagTracePrepareSleepEnd.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x14098EC68 (PopDiagTraceSuspendResumeNotification.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 *     PopTransitionToSleep @ 0x140AA21D0 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140AA3378 (PopFlushVolumes.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140AA3FCC (PopBuildDeviceNotifyList.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140AA4CBC (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140AA4CD8 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceZeroHiberFile @ 0x140AA4F74 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140AA4F90 (PopDiagTraceZeroHiberFileEnd.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
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
