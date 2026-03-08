/*
 * XREFs of ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C03BDD8C
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C017A1D0 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C03BDE40 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(__int64 a1, unsigned int a2, int a3, char a4)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  __int64 result; // rax

  if ( a2 > 5 )
  {
    switch ( a2 )
    {
      case 0xAu:
        return 4LL;
      case 0xBu:
        return 2LL;
      case 0xEu:
        return 12LL;
      case 0xFu:
        return a4 != 0 ? 8 : 3;
      default:
        result = 1LL;
        if ( a2 != 0x80000000 )
          return 13LL;
        break;
    }
  }
  else if ( a2 == 5 )
  {
    return 5LL;
  }
  else
  {
    if ( a2 )
    {
      v4 = a2 - 1;
      if ( !v4 )
        return 10LL;
      v5 = v4 - 1;
      if ( !v5 )
        return 11LL;
      v6 = v5 - 1;
      if ( !v6 )
        return 9LL;
      if ( v6 != 1 )
        return 13LL;
      if ( *(_DWORD *)(a1 + 412) != 4098 || a3 != 3 )
        return 6LL;
    }
    return 7LL;
  }
  return result;
}
