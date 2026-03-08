/*
 * XREFs of memmove_s @ 0x1403D9B40
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

errno_t __cdecl memmove_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v5; // ebx

  if ( !MaxCount )
    return 0;
  if ( a1 && Src )
  {
    if ( DstSize >= MaxCount )
    {
      memmove(a1, Src, MaxCount);
      return 0;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  xHalTimerWatchdogStop();
  return v5;
}
