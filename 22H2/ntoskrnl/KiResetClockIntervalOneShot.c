/*
 * XREFs of KiResetClockIntervalOneShot @ 0x1403405F8
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1402C8110 (KiCheckForTimerExpiration.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x140340704 (PoTraceSystemTimerResolutionKernel.c)
 *     KiCancelClockTimer @ 0x140340780 (KiCancelClockTimer.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1405700EC (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockIntervalOneShot(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = KiClockOwnerOneShotRequest;
  if ( KiClockOwnerOneShotRequest )
  {
    LOBYTE(a3) = 1;
    PoTraceSystemTimerResolutionKernel(0LL, 1397707336LL, a3);
    KiClockOwnerOneShotRequest = 0LL;
    if ( KiClockTimerPerCpuTickScheduling )
      return KiCancelClockTimer(KeGetCurrentPrcb(), 2LL);
    else
      return KiSetClockIntervalToMinimumRequested();
  }
  return result;
}
