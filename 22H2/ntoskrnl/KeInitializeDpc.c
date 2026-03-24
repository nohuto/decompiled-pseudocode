/*
 * XREFs of KeInitializeDpc @ 0x1403446C0
 * Callers:
 *     ExpInitializeTimeChangeWorker @ 0x1405D19CC (ExpInitializeTimeChangeWorker.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x140619D80 (PspThreadDelete.c)
 *     PfSnBeginTrace @ 0x14062E040 (PfSnBeginTrace.c)
 *     ObpProcessRemoveObjectQueue @ 0x140663DF0 (ObpProcessRemoveObjectQueue.c)
 *     PfSnAsyncContextInitialize @ 0x1406964CC (PfSnAsyncContextInitialize.c)
 *     NtCreateTimer @ 0x1406C5B20 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x140711218 (EtwpInitLoggerContext.c)
 *     IopConnectInterrupt @ 0x1407617EC (IopConnectInterrupt.c)
 *     PoUserShutdownInitiated @ 0x140776090 (PoUserShutdownInitiated.c)
 *     PopUserPresentSetWorker @ 0x14078EA40 (PopUserPresentSetWorker.c)
 *     CmpCmdInit @ 0x140799498 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x140799DE8 (CmpInitializeLazyWriters.c)
 *     KeInitializeTimerTable @ 0x14079FF64 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x1407A00B0 (KiInitializeForceIdle.c)
 *     PiDrvDbCreateNode @ 0x1407A3DFC (PiDrvDbCreateNode.c)
 *     VslpSkStartProfiling @ 0x140890A70 (VslpSkStartProfiling.c)
 *     IopErrorLogQueueRequest @ 0x1408998C4 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408A0600 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1408A1590 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1408BB8C0 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1408E7820 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1408FD57C (TtmiCreateTerminal.c)
 *     EtwpInitializeStackTracing @ 0x14093580C (EtwpInitializeStackTracing.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942308 (EtwpCovSampCaptureContextStart.c)
 *     PopCaptureTimeOnProcZero @ 0x140990E6C (PopCaptureTimeOnProcZero.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140990FD4 (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x14099324C (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140996240 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x1409971A8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140998400 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14099B360 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x14099C048 (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x14099D610 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x14099DBB0 (PoInitializePrcb.c)
 *     HalpMcaInitializePcrContext @ 0x14099FEAC (HalpMcaInitializePcrContext.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A7DA8 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     IopLiveDumpCorralProcessors @ 0x1409ABDE0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409AE8B4 (PnprQuiesceProcessors.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1409D5C88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DA3B4 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1409E0C38 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F4370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F4784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F7148 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
