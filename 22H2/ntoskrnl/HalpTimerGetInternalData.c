/*
 * XREFs of HalpTimerGetInternalData @ 0x14022A3A0
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x140221150 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140222470 (PpmIdleExecuteTransition.c)
 *     KiUpdateTime @ 0x1402276F0 (KiUpdateTime.c)
 *     HalpTimerClockInterrupt @ 0x140229F00 (HalpTimerClockInterrupt.c)
 *     KeStallExecutionProcessor @ 0x14022A1F0 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     KiRetireDpcList @ 0x140246020 (KiRetireDpcList.c)
 *     HalpSetTimer @ 0x14024DCEC (HalpSetTimer.c)
 *     HalpTimerClockStop @ 0x140324090 (HalpTimerClockStop.c)
 *     HalpTimerClockInitialize @ 0x140325990 (HalpTimerClockInitialize.c)
 *     HalpTimerDpcRoutine @ 0x14032A8C0 (HalpTimerDpcRoutine.c)
 *     HalpInterruptRestoreClock @ 0x1403861C8 (HalpInterruptRestoreClock.c)
 *     HalpTimerSavePerformanceCounter @ 0x1403864F4 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerSwitchStallSource @ 0x140386580 (HalpTimerSwitchStallSource.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1403865D8 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerClockActivate @ 0x1403A1D70 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A1E84 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A5564 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitializeProfiling @ 0x1403AF9E0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403AFBA0 (HalpTimerInitializeClockPn.c)
 *     HalpInitializePnTimers @ 0x1403AFC40 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x1403B07C8 (HalpInitializeTimers.c)
 *     HalpTimerMeasureFrequencies @ 0x1403B0A68 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403B0D68 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403B0E4C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerInitialize @ 0x1403B11C4 (HalpTimerInitialize.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403B1468 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerClockInterruptStub @ 0x1403C5640 (HalpTimerClockInterruptStub.c)
 *     HalpTimerQueryCycleCounter @ 0x1403CE740 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B63EC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B64A0 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerClockPowerChange @ 0x1404BF450 (HalpTimerClockPowerChange.c)
 *     HalpTimerSwitchToNormalClock @ 0x1404BF5B8 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerDelayedQueryCounter @ 0x1404BFA30 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BFBE0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerSetupMessageInterruptRouting @ 0x1404C0390 (HalpTimerSetupMessageInterruptRouting.c)
 *     HalpTimerStallCounterPowerChange @ 0x1404C0400 (HalpTimerStallCounterPowerChange.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404C0650 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404C09E4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404C0AD0 (HalpVpptStop.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404C0D94 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerProfilePowerChange @ 0x1404C1788 (HalpTimerProfilePowerChange.c)
 *     HalpTimerRestartProfileInterrupt @ 0x1404C17F8 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerStopProfileInterrupt @ 0x1404C1A1C (HalpTimerStopProfileInterrupt.c)
 *     HalpTimerWatchdogStart @ 0x1404C25B0 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogStop @ 0x1404C2640 (HalpTimerWatchdogStop.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404D4710 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerHypervisorInterruptStub @ 0x1404D4880 (HalpTimerHypervisorInterruptStub.c)
 *     HalpTimerProfileInterrupt @ 0x1404D48D0 (HalpTimerProfileInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1404D4910 (HalpTimerWatchdogPreResetInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerGetInternalData(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 224) & 0x10000) != 0 )
    return *(_QWORD *)(a1 + 72) + *(_DWORD *)(a1 + 80) * KeGetPcr()->Prcb.Number;
  else
    return *(_QWORD *)(a1 + 72);
}
