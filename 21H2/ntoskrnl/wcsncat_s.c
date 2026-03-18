/*
 * XREFs of wcsncat_s @ 0x1403E7750
 * Callers:
 *     NtLockProductActivationKeys @ 0x14080D370 (NtLockProductActivationKeys.c)
 *     PnprGetPluginDriverImagePath @ 0x140952178 (PnprGetPluginDriverImagePath.c)
 *     SddlpUuidFromString @ 0x1409CFF00 (SddlpUuidFromString.c)
 *     ExpConvertArcName @ 0x1409FB95C (ExpConvertArcName.c)
 *     ExpFindArcName @ 0x1409FC2D0 (ExpFindArcName.c)
 *     ExpTranslateEfiPath @ 0x1409FE5F4 (ExpTranslateEfiPath.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
{
  rsize_t v4; // r11
  wchar_t *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  v4 = SizeInWords;
  v5 = Dst;
  if ( MaxCount )
  {
    if ( !Dst )
    {
LABEL_28:
      xHalTimerWatchdogStop();
      return 22;
    }
  }
  else if ( !Dst )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_28;
  }
  if ( !SizeInWords )
    goto LABEL_28;
  if ( MaxCount && !Src )
  {
LABEL_11:
    v7 = 22;
  }
  else
  {
    while ( *Dst )
    {
      ++Dst;
      if ( !--SizeInWords )
        goto LABEL_11;
    }
    if ( MaxCount == -1LL )
    {
      v8 = (char *)Dst - (char *)Src;
      while ( 1 )
      {
        v9 = *Src;
        *(const wchar_t *)((char *)Src + v8) = *Src;
        ++Src;
        if ( !v9 )
          return 0;
        if ( !--SizeInWords )
          goto LABEL_23;
      }
    }
    if ( MaxCount )
    {
      v10 = (char *)Src - (char *)Dst;
      do
      {
        v11 = *(wchar_t *)((char *)Dst + v10);
        *Dst++ = v11;
        if ( !v11 )
          return 0;
        if ( !--SizeInWords )
          goto LABEL_23;
      }
      while ( --MaxCount );
    }
    *Dst = 0;
LABEL_23:
    if ( SizeInWords )
      return 0;
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
  }
  *v5 = 0;
  xHalTimerWatchdogStop();
  return v7;
}
