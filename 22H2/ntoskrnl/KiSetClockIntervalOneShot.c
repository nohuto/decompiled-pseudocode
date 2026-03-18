/*
 * XREFs of KiSetClockIntervalOneShot @ 0x140340658
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1402C8110 (KiCheckForTimerExpiration.c)
 * Callees:
 *     KiSetClockTimer @ 0x1402C2568 (KiSetClockTimer.c)
 *     KiGetClockIntervalOneShot @ 0x1403406D0 (KiGetClockIntervalOneShot.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140340704 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1405700EC (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockIntervalOneShot(__int64 a1, __int64 a2)
{
  unsigned int ClockIntervalOneShot; // eax
  __int64 v5; // r8

  KiClockOwnerOneShotRequest = a1;
  if ( KiClockTimerPerCpuTickScheduling )
    KiSetClockTimer((__int64)KeGetCurrentPrcb(), a1, 0, 2, 1, 1);
  else
    KiSetClockIntervalToMinimumRequested();
  ClockIntervalOneShot = KiGetClockIntervalOneShot(a1, a2);
  LOBYTE(v5) = 1;
  return PoTraceSystemTimerResolutionKernel(ClockIntervalOneShot, 1397707336LL, v5);
}
