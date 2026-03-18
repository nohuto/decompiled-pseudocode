/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x140303490
 * Callers:
 *     KiCheckWaitNext @ 0x140217E70 (KiCheckWaitNext.c)
 *     PpmCheckStart @ 0x140224A24 (PpmCheckStart.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14022F4BC (KiSetClockIntervalToMinimumRequested.c)
 *     KiSetClockTickRate @ 0x14022F6A4 (KiSetClockTickRate.c)
 *     KiCheckAndRearmForceIdle @ 0x1402595B0 (KiCheckAndRearmForceIdle.c)
 *     KiExpireTimer2 @ 0x1402F2CA0 (KiExpireTimer2.c)
 *     KeIntSteerSnapPerf @ 0x1402FEEE0 (KeIntSteerSnapPerf.c)
 *     HalpTimerClockInterrupt @ 0x140303240 (HalpTimerClockInterrupt.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x140308240 (KeResumeClockTimerFromIdle.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x140353FB0 (KePrepareClockTimerForIdle.c)
 *     PopFxIdleComponent @ 0x140355830 (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x140357EE0 (PopFxResidentTimeoutRoutine.c)
 *     KiResumeClockTimer @ 0x14038BFAC (KiResumeClockTimer.c)
 *     PopCalculateCsSummary @ 0x140397424 (PopCalculateCsSummary.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x140398B2C (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSetModernStandbyTransitionReason @ 0x14039A8F4 (PopSetModernStandbyTransitionReason.c)
 *     PpmResetPerfEngineForProcessorEx @ 0x140419B58 (PpmResetPerfEngineForProcessorEx.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x14050D1D0 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x14050D380 (HalpVpptArmTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x14050D91C (HalpVpptUpdatePhysicalTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x14050EC90 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x14050ED80 (HalpWatchdogDelayExpiration.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x140521CF0 (HalpTimerWatchdogPreResetInterrupt.c)
 *     KeQueryWakeSource @ 0x14056A60C (KeQueryWakeSource.c)
 *     KeGetNextClockTickDuration @ 0x14056C950 (KeGetNextClockTickDuration.c)
 *     KePrepareNonClockOwnerForIdle @ 0x14056C984 (KePrepareNonClockOwnerForIdle.c)
 *     KiSetClockTimer @ 0x14056CF48 (KiSetClockTimer.c)
 *     KiSetNextClockTickDueTime @ 0x14056D050 (KiSetNextClockTickDueTime.c)
 *     KeSetForceIdle @ 0x140579E04 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x14057A428 (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1405C7F88 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x1405C81FC (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x1405C92A0 (PpmUpdateIdleVeto.c)
 *     PpmEventTracePreVetoAccounting @ 0x1405DB13C (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x1405DBD2C (PopIdleWakeNotifyDevicesActive.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x1405DBE28 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopPowerAggregatorRecordIntent @ 0x1407F2400 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1407F27F4 (PopPowerAggregatorAllocateLogEntry.c)
 *     MiSessionCreateInternal @ 0x1407F336C (MiSessionCreateInternal.c)
 *     PopEnableSystemSleepCheckpoint @ 0x1407FE8C0 (PopEnableSystemSleepCheckpoint.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140806090 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140997DE0 (PopSleepstudySnapModernStandbySessionData.c)
 *     ExProcessCounterSetCallback @ 0x1409F5F90 (ExProcessCounterSetCallback.c)
 *     PopSleepstudyInitialize @ 0x140B02344 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
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
