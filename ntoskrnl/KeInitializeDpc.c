/*
 * XREFs of KeInitializeDpc @ 0x140305660
 * Callers:
 *     IopConnectInterrupt @ 0x1406F43D8 (IopConnectInterrupt.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x14075E4B0 (PspThreadDelete.c)
 *     EtwpInitLoggerContext @ 0x140761AA8 (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x140777040 (NtCreateTimer.c)
 *     ObpProcessRemoveObjectQueue @ 0x1407DEA90 (ObpProcessRemoveObjectQueue.c)
 *     PfSnAsyncContextInitialize @ 0x1407DFF7C (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x1407E31A8 (PfSnBeginTrace.c)
 *     KeInitializeTimerTable @ 0x14080B438 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x14080B574 (KiInitializeForceIdle.c)
 *     TtmInit @ 0x14080E764 (TtmInit.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x14080F2A0 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     ExpInitializeTimeZoneInformation @ 0x140812638 (ExpInitializeTimeZoneInformation.c)
 *     CmpInitializeLazyWriters @ 0x1408176F8 (CmpInitializeLazyWriters.c)
 *     CmpCmdInit @ 0x140819024 (CmpCmdInit.c)
 *     PiDrvDbCreateNode @ 0x14081C92C (PiDrvDbCreateNode.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140842B00 (KeInitializeSecondaryInterruptServices.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1408472F4 (IopAllocatePassiveInterruptBlock.c)
 *     IopErrorLogQueueRequest @ 0x14094E654 (IopErrorLogQueueRequest.c)
 *     PopSetSystemAwayMode @ 0x140987890 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1409A7DD8 (TtmiCreateTerminal.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EDC1C (EtwpCovSampCaptureContextStart.c)
 *     KiInitPrcb @ 0x140A88DD8 (KiInitPrcb.c)
 *     PoInitializePrcb @ 0x140A89C00 (PoInitializePrcb.c)
 *     KiCompleteKernelInit @ 0x140A89D30 (KiCompleteKernelInit.c)
 *     HalpMcaInitializePcrContext @ 0x140A8CFF8 (HalpMcaInitializePcrContext.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A8EB74 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A8EC40 (PfSnAllocateEnablePrefetcherTimer.c)
 *     IopLiveDumpCorralProcessors @ 0x140A97E30 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140A9A884 (PnprQuiesceProcessors.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140A9D4FC (PfpStartLoggingHardFaultEvents.c)
 *     PopEndMirroring @ 0x140A9F6B0 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140AA3FCC (PopBuildDeviceNotifyList.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140ACED48 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140AD2084 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140ADB0B8 (VfWdInit.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AE90B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEA598 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AEF174 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeTelemetry @ 0x140B31E14 (CcInitializeTelemetry.c)
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
