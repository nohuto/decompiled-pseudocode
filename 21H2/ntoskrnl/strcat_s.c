/*
 * XREFs of strcat_s @ 0x1403E7100
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x140A6CC50 (ExpSystemErrorHandler2.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcat_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  char *v3; // r9
  signed __int64 v4; // r9
  char v5; // al
  errno_t v6; // ebx

  if ( a1 && SizeInBytes )
  {
    if ( Src )
    {
      v3 = a1;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInBytes )
          goto LABEL_13;
      }
      v4 = v3 - Src;
      while ( 1 )
      {
        v5 = *Src;
        Src[v4] = *Src;
        ++Src;
        if ( !v5 )
          return 0;
        if ( !--SizeInBytes )
        {
          v6 = 34;
          goto LABEL_14;
        }
      }
    }
    else
    {
LABEL_13:
      v6 = 22;
LABEL_14:
      *a1 = 0;
      xHalTimerWatchdogStop();
      return v6;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
