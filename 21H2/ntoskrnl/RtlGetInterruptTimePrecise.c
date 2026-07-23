/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1402CF060
 * Callers:
 *     KiSetClockIntervalToMinimumRequested @ 0x140211054 (KiSetClockIntervalToMinimumRequested.c)
 *     KePrepareClockTimerForIdle @ 0x140211280 (KePrepareClockTimerForIdle.c)
 *     KeQueryInterruptTimePrecise @ 0x14023D5A0 (KeQueryInterruptTimePrecise.c)
 *     KiCheckAndRearmForceIdle @ 0x14024DA3C (KiCheckAndRearmForceIdle.c)
 *     KiCheckWaitNext @ 0x140278EE0 (KiCheckWaitNext.c)
 *     PopFxIdleComponent @ 0x1402826C0 (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x140283E60 (PopFxResidentTimeoutRoutine.c)
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     KeIntSteerSnapPerf @ 0x1402CEB50 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x1402CED00 (PpmCheckStart.c)
 *     HalpTimerClockInterrupt @ 0x1402CEE40 (HalpTimerClockInterrupt.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     KiResumeClockTimer @ 0x140383630 (KiResumeClockTimer.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404C0950 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404C0B00 (HalpVpptArmTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404C1094 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x1404C2AB0 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x1404C2BA0 (HalpWatchdogDelayExpiration.c)
 *     KeGetNextClockTickDuration @ 0x140513F20 (KeGetNextClockTickDuration.c)
 *     KeQueryWakeSource @ 0x1405148EC (KeQueryWakeSource.c)
 *     KeSetForceIdle @ 0x1405231E8 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x140523860 (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140566B9C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x140566D30 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x140568210 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x1405700E0 (PopCalculateCsSummary.c)
 *     PopSetModernStandbyTransitionReason @ 0x1405769B4 (PopSetModernStandbyTransitionReason.c)
 *     PpmEventTracePreVetoAccounting @ 0x14057ADA8 (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x14057B8B8 (PopIdleWakeNotifyDevicesActive.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14057B9B4 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14057BC50 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSleepstudyInitialize @ 0x140A41C80 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
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
