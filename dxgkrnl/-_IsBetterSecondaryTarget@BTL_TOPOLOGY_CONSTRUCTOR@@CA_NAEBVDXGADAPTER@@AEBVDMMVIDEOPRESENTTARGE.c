/*
 * XREFs of ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C03BDE40
 * Callers:
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C03BC994 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C03BDB9C (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C03BDC38 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 * Callees:
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C03BDD8C (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

bool __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(
        const struct DXGADAPTER *a1,
        const struct DMMVIDEOPRESENTTARGET *a2,
        const struct DMMVIDEOPRESENTTARGET *a3)
{
  __int64 v5; // rax
  char v6; // al
  unsigned int v8; // eax
  bool v9; // cf
  bool v10; // cc
  unsigned int v11; // eax
  int VotPreference; // eax
  int v13; // r11d

  if ( !a3 )
    return 1;
  v5 = *((_QWORD *)a3 + 14);
  if ( *((_QWORD *)a2 + 14) )
  {
    if ( !v5 )
      return 1;
    v6 = *((_BYTE *)a3 + 412);
    if ( *((_BYTE *)a2 + 412) )
    {
      if ( !v6 )
        return 0;
    }
    else if ( v6 )
    {
      return 1;
    }
    v8 = *((_DWORD *)a2 + 31);
    v9 = v8 < *((_DWORD *)a3 + 31);
    v10 = v8 <= *((_DWORD *)a3 + 31);
  }
  else
  {
    if ( v5 )
      return 0;
    v11 = *((_DWORD *)a2 + 32);
    v9 = v11 < *((_DWORD *)a3 + 32);
    v10 = v11 <= *((_DWORD *)a3 + 32);
  }
  if ( v9 )
    return 1;
  if ( v10 )
  {
    BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference((__int64)a1, *((_DWORD *)a2 + 21), *((_DWORD *)a2 + 25), 0);
    VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                      (__int64)a1,
                      *((_DWORD *)a3 + 21),
                      *((_DWORD *)a3 + 25),
                      0);
    return v13 < VotPreference;
  }
  return 0;
}
