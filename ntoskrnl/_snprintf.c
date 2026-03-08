/*
 * XREFs of _snprintf @ 0x1403D39D0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1403D67F0 (_flsbuf.c)
 *     _output_l @ 0x1403D7270 (_output_l.c)
 */

int snprintf(char *Dest, size_t Count, const char *Format, ...)
{
  int v4; // edi
  FILE File; // [rsp+38h] [rbp-38h] BYREF
  va_list va; // [rsp+A8h] [rbp+38h] BYREF

  va_start(va, Format);
  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( Format && (!Count || Dest) )
  {
    File._flag = 66;
    File._base = Dest;
    File._ptr = Dest;
    if ( Count > 0x7FFFFFFF )
      LODWORD(Count) = 0x7FFFFFFF;
    File._cnt = Count;
    v4 = output_l(&File, Format, 0LL, (__int64 *)va);
    if ( Dest )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
    }
    return v4;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
