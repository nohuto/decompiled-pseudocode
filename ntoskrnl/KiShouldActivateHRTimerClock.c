/*
 * XREFs of KiShouldActivateHRTimerClock @ 0x14024FE90
 * Callers:
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x140250C10 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x14039680C (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     <none>
 */

char __fastcall KiShouldActivateHRTimerClock(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 < a1 + (unsigned __int64)(unsigned int)KeMaximumIncrement
    && (!KiClockOwnerOneShotRequest
     || a2 < KiClockOwnerOneShotRequest && KiClockOwnerOneShotRequest - a2 > (unsigned int)KeMinimumIncrement) )
  {
    return 1;
  }
  return v2;
}
