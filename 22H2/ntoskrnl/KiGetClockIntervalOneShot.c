/*
 * XREFs of KiGetClockIntervalOneShot @ 0x1402F10CC
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1402247B0 (KiCheckForTimerExpiration.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402F0984 (KiSetClockIntervalToMinimumRequested.c)
 *     KiRestoreClockTickRate @ 0x1402F1058 (KiRestoreClockTickRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetClockIntervalOneShot(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = KeMinimumIncrement;
  if ( a1 > a2 + (unsigned __int64)(unsigned int)KeMinimumIncrement )
    return (KeMinimumIncrement - (int)a2 + (int)a1 - 1) / (unsigned int)KeMinimumIncrement * KeMinimumIncrement;
  return v2;
}
