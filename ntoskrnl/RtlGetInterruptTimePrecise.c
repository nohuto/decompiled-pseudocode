/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x14022C9C0
 * Callers:
 *     PpmIdleEvaluateConstraints @ 0x14022AB68 (PpmIdleEvaluateConstraints.c)
 *     KiSetClockTimer @ 0x14022AC78 (KiSetClockTimer.c)
 *     KiCheckWaitNext @ 0x14022AE00 (KiCheckWaitNext.c)
 *     KiSetClockTickRate @ 0x14022AF70 (KiSetClockTickRate.c)
 *     HalpTimerClockInterrupt @ 0x14022C760 (HalpTimerClockInterrupt.c)
 *     KeClockInterruptNotify @ 0x14022CD80 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x14022E860 (KeResumeClockTimerFromIdle.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x14024FED0 (KiExpireTimer2.c)
 *     KeIntSteerSnapPerf @ 0x1402A94D0 (KeIntSteerSnapPerf.c)
 *     KePrepareClockTimerForIdle @ 0x1402A9B1C (KePrepareClockTimerForIdle.c)
 *     PopSetWatchdog @ 0x1402BDFEC (PopSetWatchdog.c)
 *     PpmCheckStart @ 0x1402D1D84 (PpmCheckStart.c)
 *     KePrepareNonClockOwnerForIdle @ 0x1402D4634 (KePrepareNonClockOwnerForIdle.c)
 *     KiShouldRearmClockTimer @ 0x1402D96B0 (KiShouldRearmClockTimer.c)
 *     PopFxResidentTimeoutRoutine @ 0x1402E04F0 (PopFxResidentTimeoutRoutine.c)
 *     KiCheckAndRearmForceIdle @ 0x1403026FC (KiCheckAndRearmForceIdle.c)
 *     PopFxIdleComponent @ 0x140306A50 (PopFxIdleComponent.c)
 *     PopSetModernStandbyTransitionReason @ 0x1403C2B10 (PopSetModernStandbyTransitionReason.c)
 *     PopWatchdogWorker @ 0x1403D0490 (PopWatchdogWorker.c)
 *     PopWatchdogDpc @ 0x1403D0E90 (PopWatchdogDpc.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140507660 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x140507810 (HalpVpptArmTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140507DB0 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x1405098C0 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x1405099B0 (HalpWatchdogDelayExpiration.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14051C3E0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14051C6D0 (HalpTimerWatchdogPreResetInterrupt.c)
 *     KeGetNextClockTickDuration @ 0x14056D340 (KeGetNextClockTickDuration.c)
 *     KiResumeClockTimer @ 0x14056D878 (KiResumeClockTimer.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14056DA7C (KiSetClockIntervalToMinimumRequested.c)
 *     KeSetForceIdle @ 0x14057A814 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x14057ACCC (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140582B3C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x140582DB0 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x140583F90 (PpmUpdateIdleVeto.c)
 *     PpmResetPerfEngineForProcessor @ 0x14058B178 (PpmResetPerfEngineForProcessor.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058CC64 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopCalculateCsSummary @ 0x14058EE94 (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x140599A10 (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x14059B40C (PopIdleWakeNotifyDevicesActive.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14059B504 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14059B664 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1405A0478 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 *     PopPowerAggregatorRecordIntent @ 0x140757470 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140757580 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140990418 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140993DEC (PopEnableSystemSleepCheckpoint.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140997860 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     ExProcessCounterSetCallback @ 0x1409F2FF0 (ExProcessCounterSetCallback.c)
 *     PopSleepstudyInitialize @ 0x140B470D0 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlGetInterruptTimePrecise(LARGE_INTEGER *a1)
{
  __int64 v2; // rbx
  LARGE_INTEGER v3; // rdi
  __int64 v4; // rbp
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3.QuadPart = MEMORY[0xFFFFF78000000350];
      v4 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *a1 = PerformanceCounter;
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v3.QuadPart )
    return v4;
  v6 = PerformanceCounter.QuadPart - v3.QuadPart - 1;
  if ( MEMORY[0xFFFFF78000000369] )
    v6 <<= MEMORY[0xFFFFF78000000369];
  return (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64) + v4;
}
