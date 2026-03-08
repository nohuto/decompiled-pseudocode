/*
 * XREFs of KiSetClockTimerKTimerDeadlines @ 0x1402DF1B0
 * Callers:
 *     KeClockInterruptNotify @ 0x14022CD80 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x14022E860 (KeResumeClockTimerFromIdle.c)
 *     KiSetClockInterval @ 0x1403ACBC4 (KiSetClockInterval.c)
 *     KiResetClockInterval @ 0x14056D814 (KiResetClockInterval.c)
 *     KiResumeClockTimer @ 0x14056D878 (KiResumeClockTimer.c)
 * Callees:
 *     KiSetClockTimer @ 0x14022AC78 (KiSetClockTimer.c)
 */

__int64 __fastcall KiSetClockTimerKTimerDeadlines(__int64 a1, char a2)
{
  __int64 result; // rax

  result = KiSetClockTimer(a1, KiLastPseudoHrTimerExpiration + KePseudoHrTimeIncrement, KeMinimumIncrement, 1, 1, 0);
  if ( a2 )
  {
    if ( KiClockOwnerOneShotRequest )
      return KiSetClockTimer(a1, KiClockOwnerOneShotRequest, 0, 2, 1, 0);
  }
  return result;
}
