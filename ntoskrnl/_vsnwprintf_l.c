/*
 * XREFs of _vsnwprintf_l @ 0x1403D2E50
 * Callers:
 *     _vsnwprintf @ 0x1403D2E30 (_vsnwprintf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1403D67F0 (_flsbuf.c)
 *     _woutput_l @ 0x1403D6800 (_woutput_l.c)
 */

int __cdecl vsnwprintf_l(wchar_t *DstBuf, size_t MaxCount, const wchar_t *Format, _locale_t Locale, va_list ArgList)
{
  int v6; // edi
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( Format && (!MaxCount || DstBuf) )
  {
    File._flag = 66;
    File._base = (char *)DstBuf;
    File._ptr = (char *)DstBuf;
    if ( MaxCount <= 0x3FFFFFFF )
      File._cnt = 2 * MaxCount;
    else
      File._cnt = 0x7FFFFFFF;
    v6 = woutput_l(&File, Format, Locale, ArgList);
    if ( DstBuf )
    {
      if ( --File._cnt < 0 )
      {
        flsbuf(0, &File);
        ptr = File._ptr;
      }
      else
      {
        *File._ptr = 0;
        ptr = ++File._ptr;
      }
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *ptr = 0;
    }
    return v6;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
