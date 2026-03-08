/*
 * XREFs of KeInitializeTimerEx @ 0x140237DB0
 * Callers:
 *     EtwpInitLoggerContext @ 0x140761AA8 (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x140777040 (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x1407DFF7C (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x1407E31A8 (PfSnBeginTrace.c)
 *     TtmInit @ 0x14080E764 (TtmInit.c)
 *     ExpInitializeTimeZoneInformation @ 0x140812638 (ExpInitializeTimeZoneInformation.c)
 *     CmpInitializeLazyWriters @ 0x1408176F8 (CmpInitializeLazyWriters.c)
 *     CmpCmdInit @ 0x140819024 (CmpCmdInit.c)
 *     PiDrvDbCreateNode @ 0x14081C92C (PiDrvDbCreateNode.c)
 *     MiInitializeSections @ 0x1408385EC (MiInitializeSections.c)
 *     ExpWorkQueueManagerInitialize @ 0x140848580 (ExpWorkQueueManagerInitialize.c)
 *     IopErrorLogQueueRequest @ 0x14094E654 (IopErrorLogQueueRequest.c)
 *     TtmiCreateTerminal @ 0x1409A7DD8 (TtmiCreateTerminal.c)
 *     KeInitThread @ 0x140A845D0 (KeInitThread.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A8EB74 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A8EC40 (PfSnAllocateEnablePrefetcherTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140A9D4FC (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140AA3FCC (PopBuildDeviceNotifyList.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140ACED48 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140AD2084 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140ADB0B8 (VfWdInit.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AE90B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEA598 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AEF174 (AnFwProgressIndicatorTransition.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  Timer->Period = 0;
  Timer->Processor = 0;
}
