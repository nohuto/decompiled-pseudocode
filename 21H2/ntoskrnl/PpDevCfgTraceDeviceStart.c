/*
 * XREFs of PpDevCfgTraceDeviceStart @ 0x1407409D4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 * Callees:
 *     PiDevCfgLogDeviceStarted @ 0x14073AF94 (PiDevCfgLogDeviceStarted.c)
 */

void __fastcall PpDevCfgTraceDeviceStart(_DWORD *a1)
{
  int v1; // eax
  bool v2; // al

  v1 = a1[75];
  if ( v1 >= 770 )
  {
    if ( v1 <= 775 )
    {
      v2 = (a1[99] & 0x6000) != 0;
      goto LABEL_4;
    }
    if ( v1 == 776 )
      goto LABEL_7;
  }
  if ( (a1[99] & 0x2000) == 0 || a1[101] != 56 )
  {
    v2 = 1;
LABEL_4:
    if ( !v2 )
      return;
LABEL_7:
    a1[176] &= ~1u;
    PiDevCfgLogDeviceStarted((__int64)a1);
  }
}
