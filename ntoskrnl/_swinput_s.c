/*
 * XREFs of _swinput_s @ 0x1403DCB80
 * Callers:
 *     _snwscanf_s @ 0x1403D9280 (_snwscanf_s.c)
 *     swscanf_s @ 0x1403DA110 (swscanf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _winput_s @ 0x1403DCC54 (_winput_s.c)
 */

__int64 __fastcall swinput_s(char *a1, unsigned __int64 a2, __int64 a3)
{
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( a1 && a3 && a2 <= 0x3FFFFFFF )
  {
    File._base = a1;
    File._ptr = a1;
    File._cnt = 2 * a2;
    File._flag = 73;
    return winput_s(&File);
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
