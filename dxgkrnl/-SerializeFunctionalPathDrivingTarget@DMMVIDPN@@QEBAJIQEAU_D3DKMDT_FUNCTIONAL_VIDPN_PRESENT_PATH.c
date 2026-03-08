/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03B49D0
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C017AB4C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03B53C0 (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v3; // rsi
  _QWORD *v6; // r8
  __int64 v7; // r9
  int PathSourceFromTarget; // eax
  __int64 v9; // rdi
  DMMVIDPNPRESENTPATH *Path; // rbp
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rbp

  v3 = a2;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  memset(a3, 0, 0x1F0uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                           (DMMVIDPN *)((char *)this + 96),
                           (_QWORD *)(unsigned int)v3,
                           v6,
                           v7);
  if ( PathSourceFromTarget == -1 )
  {
    v9 = *((_QWORD *)this + 6);
    if ( !*(_QWORD *)(v9 + 8) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry3(7LL, v3, *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), this);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v3);
    if ( !Path )
      WdLogSingleEntry0(1LL);
    v12 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v13 = v12;
    if ( v12 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v14 = *((_QWORD *)this + 6);
      if ( !*(_QWORD *)(v14 + 8) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry4(3LL, v3, *(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL), this, v13);
      return (unsigned int)v13;
    }
  }
}
