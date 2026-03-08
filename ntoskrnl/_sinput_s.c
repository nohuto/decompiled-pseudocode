/*
 * XREFs of _sinput_s @ 0x1403DC714
 * Callers:
 *     _snscanf_s @ 0x1403D9160 (_snscanf_s.c)
 *     sscanf_s @ 0x1403D9C20 (sscanf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _input_s @ 0x1403DBE54 (_input_s.c)
 */

__int64 __fastcall sinput_s(char *a1, unsigned __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  FILE v5; // [rsp+30h] [rbp-38h] BYREF

  *(&v5._cnt + 1) = 0;
  memset(&v5._file, 0, 20);
  if ( a1 && a3 && a2 <= 0x7FFFFFFF )
  {
    v5._flag = 73;
    v5._base = a1;
    v5._ptr = a1;
    v5._cnt = a2;
    return input_s(&v5, a3, a4);
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
