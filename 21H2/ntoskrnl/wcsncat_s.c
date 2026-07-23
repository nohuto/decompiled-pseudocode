/*
 * XREFs of wcsncat_s @ 0x1403D8470
 * Callers:
 *     NtLockProductActivationKeys @ 0x1407B4270 (NtLockProductActivationKeys.c)
 *     PnprGetPluginDriverImagePath @ 0x1408AD87C (PnprGetPluginDriverImagePath.c)
 *     SddlpUuidFromString @ 0x140926BC8 (SddlpUuidFromString.c)
 *     ExpConvertArcName @ 0x14094F76C (ExpConvertArcName.c)
 *     ExpFindArcName @ 0x1409500E4 (ExpFindArcName.c)
 *     ExpTranslateEfiPath @ 0x14095240C (ExpTranslateEfiPath.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
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
LABEL_30:
      xHalTimerWatchdogStop();
      return 22;
    }
  }
  else if ( !Dst )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_30;
  }
  if ( !SizeInWords )
    goto LABEL_30;
  if ( MaxCount && !Src )
    goto LABEL_12;
  do
  {
    if ( !*Dst )
      break;
    ++Dst;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( SizeInWords )
  {
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
      if ( !MaxCount )
        goto LABEL_24;
      v10 = (char *)Src - (char *)Dst;
      do
      {
        v11 = *(wchar_t *)((char *)Dst + v10);
        *Dst++ = v11;
        if ( !v11 )
          break;
        if ( !--SizeInWords )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
LABEL_24:
        *Dst = 0;
    }
    if ( SizeInWords )
      return 0;
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
  }
  else
  {
LABEL_12:
    v7 = 22;
  }
  *v5 = 0;
  xHalTimerWatchdogStop();
  return v7;
}
