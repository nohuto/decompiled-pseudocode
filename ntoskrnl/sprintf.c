/*
 * XREFs of sprintf @ 0x1403D50E0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1403D67F0 (_flsbuf.c)
 *     _output_l @ 0x1403D7270 (_output_l.c)
 */

int sprintf(char *Dest, const char *Format, ...)
{
  int v2; // eax
  bool v3; // sf
  int v4; // ebx
  FILE File; // [rsp+38h] [rbp-40h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va, Format);
  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( Format && Dest )
  {
    File._base = Dest;
    File._ptr = Dest;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v2 = output_l(&File, Format, 0LL, (__int64 *)va);
    v3 = --File._cnt < 0;
    v4 = v2;
    if ( v3 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v4;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
