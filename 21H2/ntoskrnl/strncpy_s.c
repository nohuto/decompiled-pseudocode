/*
 * XREFs of strncpy_s @ 0x1403D8080
 * Callers:
 *     _splitpath_s @ 0x1403D7490 (_splitpath_s.c)
 *     HalGetEnvironmentVariable @ 0x1404BBD50 (HalGetEnvironmentVariable.c)
 *     CmpGetToken @ 0x140A63394 (CmpGetToken.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strncpy_s(char *a1, rsize_t SizeInBytes, const char *Src, rsize_t MaxCount)
{
  errno_t v5; // ebx
  char *v6; // r11
  rsize_t v7; // r10
  signed __int64 v8; // r11
  char v9; // al
  signed __int64 v10; // r8
  char v11; // al

  if ( MaxCount )
  {
    if ( !a1 )
      goto LABEL_4;
  }
  else if ( !a1 )
  {
    if ( SizeInBytes )
    {
LABEL_4:
      xHalTimerWatchdogStop();
      return 22;
    }
    return 0;
  }
  if ( !SizeInBytes )
    goto LABEL_4;
  if ( !MaxCount )
  {
    *a1 = 0;
    return 0;
  }
  if ( Src )
  {
    v6 = a1;
    v7 = SizeInBytes;
    if ( MaxCount == -1LL )
    {
      v8 = a1 - Src;
      do
      {
        v9 = *Src;
        Src[v8] = *Src;
        ++Src;
        if ( !v9 )
          break;
        --v7;
      }
      while ( v7 );
    }
    else
    {
      v10 = Src - a1;
      do
      {
        v11 = v6[v10];
        *v6++ = v11;
        if ( !v11 )
          break;
        if ( !--v7 )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
        *v6 = 0;
    }
    if ( v7 )
      return 0;
    if ( MaxCount == -1LL )
    {
      a1[SizeInBytes - 1] = 0;
      return 80;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  *a1 = 0;
  xHalTimerWatchdogStop();
  return v5;
}
