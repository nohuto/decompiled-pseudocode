/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x14022A7B0
 * Callers:
 *     KeClockInterruptNotify @ 0x140221640 (KeClockInterruptNotify.c)
 *     KeIntSteerSnapPerf @ 0x14022A2A0 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x14022A450 (PpmCheckStart.c)
 *     HalpTimerClockInterrupt @ 0x14022A590 (HalpTimerClockInterrupt.c)
 *     KeSetTimer2 @ 0x14022C550 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x14024B5C0 (KiExpireTimer2.c)
 *     KiCheckWaitNext @ 0x140257970 (KiCheckWaitNext.c)
 *     PopFxIdleComponent @ 0x1402611F0 (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x140262990 (PopFxResidentTimeoutRoutine.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402930E4 (KiSetClockIntervalToMinimumRequested.c)
 *     KePrepareClockTimerForIdle @ 0x140293310 (KePrepareClockTimerForIdle.c)
 *     KeQueryInterruptTimePrecise @ 0x1402BF150 (KeQueryInterruptTimePrecise.c)
 *     KiCheckAndRearmForceIdle @ 0x1402CF6BC (KiCheckAndRearmForceIdle.c)
 *     KiResumeClockTimer @ 0x140383480 (KiResumeClockTimer.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404C0710 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404C08C0 (HalpVpptArmTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404C0E54 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x1404C2870 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x1404C2960 (HalpWatchdogDelayExpiration.c)
 *     KeGetNextClockTickDuration @ 0x140513CE0 (KeGetNextClockTickDuration.c)
 *     KeQueryWakeSource @ 0x1405146AC (KeQueryWakeSource.c)
 *     KeSetForceIdle @ 0x140522FA8 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x140523620 (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x14056695C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x140566AF0 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x140567FD0 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x14056FEA0 (PopCalculateCsSummary.c)
 *     PopSetModernStandbyTransitionReason @ 0x140576774 (PopSetModernStandbyTransitionReason.c)
 *     PpmEventTracePreVetoAccounting @ 0x14057AB68 (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x14057B678 (PopIdleWakeNotifyDevicesActive.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14057B774 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14057BA10 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSleepstudyInitialize @ 0x140A40C80 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
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
