/*
 * XREFs of KeInitializeTimerEx @ 0x140341AF0
 * Callers:
 *     ExpInitializeTimeChangeWorker @ 0x1405D19CC (ExpInitializeTimeChangeWorker.c)
 *     PfSnBeginTrace @ 0x14062E040 (PfSnBeginTrace.c)
 *     PfSnAsyncContextInitialize @ 0x1406964CC (PfSnAsyncContextInitialize.c)
 *     NtCreateTimer @ 0x1406C5B20 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x140711218 (EtwpInitLoggerContext.c)
 *     PoUserShutdownInitiated @ 0x140776090 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x140797A24 (MiInitializeSections.c)
 *     CmpCmdInit @ 0x140799498 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x140799DE8 (CmpInitializeLazyWriters.c)
 *     PiDrvDbCreateNode @ 0x1407A3DFC (PiDrvDbCreateNode.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C2F58 (ExpWorkQueueManagerInitialize.c)
 *     VslpSkStartProfiling @ 0x140890A70 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x1408998C4 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408A0600 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x1408FD57C (TtmiCreateTerminal.c)
 *     KeInitThread @ 0x14098FD94 (KeInitThread.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140990FD4 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x1409971A8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140998400 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14099B360 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x14099EE3C (KiInitializeProcessor.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A7DA8 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D5C88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DA3B4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409E0C38 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F4370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F4784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F7148 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 *     CmpInitializeTransactions @ 0x140A57C9C (CmpInitializeTransactions.c)
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
