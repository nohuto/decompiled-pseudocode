/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x14022A120
 * Callers:
 *     KeClockInterruptNotify @ 0x140221600 (KeClockInterruptNotify.c)
 *     KeIntSteerSnapPerf @ 0x140229C10 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x140229DC0 (PpmCheckStart.c)
 *     HalpTimerClockInterrupt @ 0x140229F00 (HalpTimerClockInterrupt.c)
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x14024AF30 (KiExpireTimer2.c)
 *     KiCheckWaitNext @ 0x1402571D0 (KiCheckWaitNext.c)
 *     PopFxIdleComponent @ 0x140260A50 (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x1402621F0 (PopFxResidentTimeoutRoutine.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402F0984 (KiSetClockIntervalToMinimumRequested.c)
 *     KePrepareClockTimerForIdle @ 0x1402F0BB0 (KePrepareClockTimerForIdle.c)
 *     KeQueryInterruptTimePrecise @ 0x140318820 (KeQueryInterruptTimePrecise.c)
 *     KiCheckAndRearmForceIdle @ 0x140328AEC (KiCheckAndRearmForceIdle.c)
 *     KiResumeClockTimer @ 0x140383570 (KiResumeClockTimer.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404C0650 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404C0800 (HalpVpptArmTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404C0D94 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x1404C27B0 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x1404C28A0 (HalpWatchdogDelayExpiration.c)
 *     KeGetNextClockTickDuration @ 0x140513C20 (KeGetNextClockTickDuration.c)
 *     KeQueryWakeSource @ 0x1405145EC (KeQueryWakeSource.c)
 *     KeSetForceIdle @ 0x140522EE8 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x140523560 (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x14056689C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x140566A30 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x140567F10 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x14056FDE0 (PopCalculateCsSummary.c)
 *     PopSetModernStandbyTransitionReason @ 0x1405766B4 (PopSetModernStandbyTransitionReason.c)
 *     PpmEventTracePreVetoAccounting @ 0x14057AAA8 (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x14057B5B8 (PopIdleWakeNotifyDevicesActive.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14057B6B4 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14057B950 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSleepstudyInitialize @ 0x140A400B0 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  LARGE_INTEGER v4; // rbp
  LARGE_INTEGER v5; // rdx
  LONGLONG v6; // rdx
  LARGE_INTEGER result; // rax

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3 = MEMORY[0xFFFFF78000000350];
      v4.QuadPart = MEMORY[0xFFFFF78000000008];
      v5 = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *PerformanceCounter = v5;
  if ( v5.QuadPart <= v3 )
  {
    return v4;
  }
  else
  {
    v6 = v5.QuadPart - v3 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v6 <<= MEMORY[0xFFFFF78000000369];
    result.QuadPart = (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64) + v4.QuadPart;
  }
  return result;
}
