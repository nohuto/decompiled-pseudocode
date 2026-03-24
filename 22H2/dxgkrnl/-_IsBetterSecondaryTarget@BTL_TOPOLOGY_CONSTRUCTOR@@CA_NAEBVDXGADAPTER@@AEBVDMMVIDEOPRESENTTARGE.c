/*
 * XREFs of ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C02F0208
 * Callers:
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02EEBF0 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C02EFF54 (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C02EFFFC (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 * Callees:
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C02F015C (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

bool __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(
        const struct DXGADAPTER *a1,
        const struct DMMVIDEOPRESENTTARGET *a2,
        const struct DMMVIDEOPRESENTTARGET *a3)
{
  __int64 v4; // rax
  char v5; // al
  unsigned int v7; // eax
  bool v8; // cf
  bool v9; // cc
  unsigned int v10; // eax
  __int64 v11; // r11
  int VotPreference; // eax
  int v13; // r10d

  if ( !a3 )
    return 1;
  v4 = *((_QWORD *)a3 + 14);
  if ( *((_QWORD *)a2 + 14) )
  {
    if ( !v4 )
      return 1;
    v5 = *((_BYTE *)a3 + 412);
    if ( !*((_BYTE *)a2 + 412) )
    {
      if ( v5 )
        return 1;
      goto LABEL_8;
    }
    if ( v5 )
    {
LABEL_8:
      v7 = *((_DWORD *)a2 + 31);
      v8 = v7 < *((_DWORD *)a3 + 31);
      v9 = v7 <= *((_DWORD *)a3 + 31);
      goto LABEL_9;
    }
    return 0;
  }
  if ( v4 )
    return 0;
  v10 = *((_DWORD *)a2 + 32);
  v8 = v10 < *((_DWORD *)a3 + 32);
  v9 = v10 <= *((_DWORD *)a3 + 32);
LABEL_9:
  if ( v8 )
    return 1;
  if ( !v9 )
    return 0;
  BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference((__int64)a1, *((_DWORD *)a2 + 21), *((_DWORD *)a2 + 24), 0);
  VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                    (__int64)a1,
                    *(_DWORD *)(v11 + 84),
                    *(_DWORD *)(v11 + 96),
                    0);
  return v13 < VotPreference;
}
