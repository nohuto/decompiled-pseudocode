/*
 * XREFs of ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C017A654
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C017A1D0 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference(__int64 a1)
{
  int v1; // eax

  if ( !*(_QWORD *)(a1 + 2920) )
    return 0LL;
  v1 = *(_DWORD *)(a1 + 436);
  if ( (v1 & 0x20) != 0 )
    return 3LL;
  else
    return (v1 & 8) != 0 ? 2 : 4;
}
