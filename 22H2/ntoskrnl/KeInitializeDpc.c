/*
 * XREFs of KeInitializeDpc @ 0x1402BF970
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x1407478D0 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749A50 (ObpProcessRemoveObjectQueue.c)
 *     PfSnBeginTrace @ 0x14074DEC8 (PfSnBeginTrace.c)
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 *     IopConnectInterrupt @ 0x14078EC70 (IopConnectInterrupt.c)
 *     EtwpInitLoggerContext @ 0x1407B3A70 (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x1407C6B20 (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB758 (PfSnAsyncContextInitialize.c)
 *     TtmInit @ 0x140802F88 (TtmInit.c)
 *     CmpInitializeLazyWriters @ 0x14080CBAC (CmpInitializeLazyWriters.c)
 *     PiDrvDbCreateNode @ 0x14081425C (PiDrvDbCreateNode.c)
 *     KeInitializeTimerTable @ 0x14081FF44 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x140820080 (KiInitializeForceIdle.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x140822F28 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     ExpInitializeTimeZoneInformation @ 0x140841A60 (ExpInitializeTimeZoneInformation.c)
 *     CmpCmdInit @ 0x140844824 (CmpCmdInit.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140845940 (KeInitializeSecondaryInterruptServices.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140849B60 (IopAllocatePassiveInterruptBlock.c)
 *     IopErrorLogQueueRequest @ 0x140951674 (IopErrorLogQueueRequest.c)
 *     PopSetSystemAwayMode @ 0x14098A940 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1409AAE58 (TtmiCreateTerminal.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0AAC (EtwpCovSampCaptureContextStart.c)
 *     KiInitPrcb @ 0x140A8C3EC (KiInitPrcb.c)
 *     PoInitializePrcb @ 0x140A8D210 (PoInitializePrcb.c)
 *     KiCompleteKernelInit @ 0x140A8D340 (KiCompleteKernelInit.c)
 *     HalpMcaInitializePcrContext @ 0x140A90488 (HalpMcaInitializePcrContext.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A91DD4 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A91EA0 (PfSnAllocateEnablePrefetcherTimer.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AF70 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140A9D9C4 (PnprQuiesceProcessors.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140AA06B4 (PfpStartLoggingHardFaultEvents.c)
 *     PopEndMirroring @ 0x140AA28E0 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140AA71FC (PopBuildDeviceNotifyList.c)
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140AD2D48 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140AD6084 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140ADF0B8 (VfWdInit.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AED07C (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AED9AC (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEE558 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AF3174 (AnFwProgressIndicatorTransition.c)
 *     CmFcManagerInitialize @ 0x140B3BCA0 (CmFcManagerInitialize.c)
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
