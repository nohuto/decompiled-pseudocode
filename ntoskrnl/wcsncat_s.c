/*
 * XREFs of wcsncat_s @ 0x1403DA2A0
 * Callers:
 *     NtLockProductActivationKeys @ 0x140838E20 (NtLockProductActivationKeys.c)
 *     ExpTranslateEfiPath @ 0x14083EF60 (ExpTranslateEfiPath.c)
 *     PnprGetPluginDriverImagePath @ 0x140962EC8 (PnprGetPluginDriverImagePath.c)
 *     SddlpUuidFromString @ 0x1409CFC78 (SddlpUuidFromString.c)
 *     ExpConvertArcName @ 0x1409F8CB8 (ExpConvertArcName.c)
 *     ExpFindArcName @ 0x1409F9550 (ExpFindArcName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
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
      goto LABEL_4;
  }
  else if ( !Dst )
  {
    if ( SizeInWords )
    {
LABEL_4:
      xHalTimerWatchdogStop();
      return 22;
    }
    return 0;
  }
  if ( !SizeInWords )
    goto LABEL_4;
  if ( MaxCount && !Src )
  {
LABEL_11:
    v7 = 22;
LABEL_28:
    *v5 = 0;
    xHalTimerWatchdogStop();
    return v7;
  }
  while ( *Dst )
  {
    ++Dst;
    if ( !--SizeInWords )
      goto LABEL_11;
  }
  if ( MaxCount == -1LL )
  {
    v8 = (char *)Dst - (char *)Src;
    do
    {
      v9 = *Src;
      *(const wchar_t *)((char *)Src + v8) = *Src;
      ++Src;
      if ( !v9 )
        break;
      --SizeInWords;
    }
    while ( SizeInWords );
  }
  else
  {
    if ( MaxCount )
    {
      v10 = (char *)Src - (char *)Dst;
      while ( 1 )
      {
        v11 = *(wchar_t *)((char *)Dst + v10);
        *Dst++ = v11;
        if ( !v11 )
          return 0;
        if ( --SizeInWords )
        {
          if ( --MaxCount )
            continue;
        }
        if ( MaxCount )
          goto LABEL_24;
        break;
      }
    }
    *Dst = 0;
  }
LABEL_24:
  if ( !SizeInWords )
  {
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
    goto LABEL_28;
  }
  return 0;
}
