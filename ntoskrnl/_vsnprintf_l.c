/*
 * XREFs of _vsnprintf_l @ 0x1403D2F70
 * Callers:
 *     _vsnprintf @ 0x1403D2F50 (_vsnprintf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1403D67F0 (_flsbuf.c)
 *     _output_l @ 0x1403D7270 (_output_l.c)
 */

int __cdecl vsnprintf_l(char *DstBuf, size_t MaxCount, const char *Format, _locale_t Locale, va_list ArgList)
{
  int v6; // edi
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( !Format )
    goto LABEL_11;
  if ( !MaxCount )
  {
LABEL_5:
    File._cnt = MaxCount;
    goto LABEL_6;
  }
  if ( !DstBuf )
  {
LABEL_11:
    xHalTimerWatchdogStop();
    return -1;
  }
  File._cnt = 0x7FFFFFFF;
  if ( MaxCount <= 0x7FFFFFFF )
    goto LABEL_5;
LABEL_6:
  File._flag = 66;
  File._base = DstBuf;
  File._ptr = DstBuf;
  v6 = output_l(&File, Format, Locale, ArgList);
  if ( DstBuf )
  {
    if ( --File._cnt < 0 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
  }
  return v6;
}
