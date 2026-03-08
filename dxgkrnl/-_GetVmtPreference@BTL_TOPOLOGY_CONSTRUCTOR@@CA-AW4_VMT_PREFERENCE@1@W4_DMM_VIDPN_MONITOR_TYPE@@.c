/*
 * XREFs of ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C03BDD40
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C017A1D0 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
      return 1LL;
    v2 = v1 - 1;
    if ( !v2 )
      return 2LL;
    v3 = v2 - 1;
    if ( !v3 )
      return 4LL;
    v4 = v3 - 1;
    if ( !v4 )
      return 5LL;
    if ( v4 == 1 )
      return 3LL;
  }
  return 6LL;
}
