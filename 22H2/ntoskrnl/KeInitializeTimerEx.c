/*
 * XREFs of KeInitializeTimerEx @ 0x1402BE630
 * Callers:
 *     PfSnBeginTrace @ 0x14074DEC8 (PfSnBeginTrace.c)
 *     EtwpInitLoggerContext @ 0x1407B3A70 (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x1407C6B20 (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB758 (PfSnAsyncContextInitialize.c)
 *     TtmInit @ 0x140802F88 (TtmInit.c)
 *     CmpInitializeLazyWriters @ 0x14080CBAC (CmpInitializeLazyWriters.c)
 *     PiDrvDbCreateNode @ 0x14081425C (PiDrvDbCreateNode.c)
 *     MiInitializeSections @ 0x14083969C (MiInitializeSections.c)
 *     ExpInitializeTimeZoneInformation @ 0x140841A60 (ExpInitializeTimeZoneInformation.c)
 *     CmpCmdInit @ 0x140844824 (CmpCmdInit.c)
 *     ExpWorkQueueManagerInitialize @ 0x14084ABF0 (ExpWorkQueueManagerInitialize.c)
 *     IopErrorLogQueueRequest @ 0x140951674 (IopErrorLogQueueRequest.c)
 *     TtmiCreateTerminal @ 0x1409AAE58 (TtmiCreateTerminal.c)
 *     KeInitThread @ 0x140A875D0 (KeInitThread.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A91DD4 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A91EA0 (PfSnAllocateEnablePrefetcherTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140AA06B4 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140AA71FC (PopBuildDeviceNotifyList.c)
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140AD2D48 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140AD6084 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140ADF0B8 (VfWdInit.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AED07C (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AED9AC (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEE558 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AF3174 (AnFwProgressIndicatorTransition.c)
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
