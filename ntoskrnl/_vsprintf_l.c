/*
 * XREFs of _vsprintf_l @ 0x1403D5C68
 * Callers:
 *     vsprintf @ 0x1403D5D00 (vsprintf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1403D67F0 (_flsbuf.c)
 *     _output_l @ 0x1403D7270 (_output_l.c)
 */

int __cdecl vsprintf_l(char *DstBuf, const char *Format, _locale_t a3, va_list ArgList)
{
  int v4; // eax
  bool v5; // sf
  int v6; // ebx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( Format && DstBuf )
  {
    File._base = DstBuf;
    File._ptr = DstBuf;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v4 = output_l(&File, Format, a3, ArgList);
    v5 = --File._cnt < 0;
    v6 = v4;
    if ( v5 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v6;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
