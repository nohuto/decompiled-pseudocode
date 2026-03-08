/*
 * XREFs of _soutput_s @ 0x1403DAF04
 * Callers:
 *     _vsnprintf_s @ 0x1403D90C0 (_vsnprintf_s.c)
 *     vsprintf_s @ 0x1403D9BD0 (vsprintf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1403D67F0 (_flsbuf.c)
 *     _output_s @ 0x1403DA5B8 (_output_s.c)
 */

__int64 __fastcall soutput_s(char *a1, unsigned __int64 a2, char *a3, unsigned __int16 *a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // ecx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( !a2 )
    goto LABEL_17;
  if ( a2 != -1LL )
  {
    if ( a2 <= 0x7FFFFFFF )
    {
      File._cnt = a2;
      goto LABEL_6;
    }
LABEL_17:
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
  File._cnt = 0x7FFFFFFF;
LABEL_6:
  File._base = a1;
  File._ptr = a1;
  File._flag = 66;
  LODWORD(result) = output_s(&File, a3, a4);
  a1[a2 - 1] = 0;
  v7 = result;
  if ( (int)result < 0 )
  {
    if ( File._cnt < 0 )
      return 4294967294LL;
    if ( a1 )
      *a1 = 0;
    return (unsigned int)result;
  }
  if ( --File._cnt >= 0 )
  {
    *File._ptr = 0;
    return (unsigned int)result;
  }
  v8 = flsbuf(0, &File);
  v9 = -2;
  if ( v8 != -1 )
    return v7;
  return v9;
}
