/*
 * XREFs of PpDevCfgTraceDeviceStart @ 0x140879680
 * Callers:
 *     PipSetDevNodeState @ 0x14022AEA4 (PipSetDevNodeState.c)
 * Callees:
 *     PiDevCfgLogDeviceStarted @ 0x140879E9C (PiDevCfgLogDeviceStarted.c)
 */

__int64 __fastcall PpDevCfgTraceDeviceStart(_DWORD *a1)
{
  bool v1; // zf
  __int64 result; // rax

  if ( a1[75] == 771
    || a1[75] == 772
    || a1[75] == 773
    || a1[75] == 774
    || a1[75] == 775
    || a1[75] == 776
    || a1[75] == 777 )
  {
    v1 = (a1[99] & 0x6000) == 0;
  }
  else
  {
    if ( a1[75] == 778 || (a1[99] & 0x2000) == 0 )
      goto LABEL_12;
    v1 = a1[101] == 56;
  }
  if ( !v1 )
  {
LABEL_12:
    a1[176] &= ~1u;
    return PiDevCfgLogDeviceStarted();
  }
  return result;
}
