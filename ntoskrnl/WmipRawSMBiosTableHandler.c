/*
 * XREFs of WmipRawSMBiosTableHandler @ 0x14029AAF0
 * Callers:
 *     <none>
 * Callees:
 *     WmipGetSMBiosTableData @ 0x140725AEC (WmipGetSMBiosTableData.c)
 */

__int64 __fastcall WmipRawSMBiosTableHandler(_DWORD *a1)
{
  int v2; // eax
  unsigned int SMBiosTableData; // edx
  unsigned int v4; // eax

  if ( !a1 )
    return 3221225711LL;
  v2 = a1[1];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      SMBiosTableData = WmipGetSMBiosTableData(0LL);
      a1[3] = 0;
      return SMBiosTableData;
    }
    return 3221225711LL;
  }
  v4 = a1[3];
  a1[3] = 4;
  if ( v4 < 4 )
    return 3221225507LL;
  a1[4] = 0;
  return 0LL;
}
