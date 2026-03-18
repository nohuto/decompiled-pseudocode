/*
 * XREFs of ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03B3158
 * Callers:
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03B1AE8 (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C00025BC (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007124 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C0027038 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C006A1BC (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C006A240 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C006A290 (-RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C01E9D30 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::DestroyDynamicVideoPresentTarget(
        VIDPN_MGR **this,
        unsigned int a2,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a3)
{
  __int64 v4; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  DMMVIDEOPRESENTTARGET *v10; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v13; // rax
  struct DXGADAPTER *v14; // rax
  DMMVIDEOPRESENTTARGET *v15; // rcx
  DMMVIDEOPRESENTTARGET *v16; // rcx

  v4 = a2;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, a2);
  v10 = TargetById;
  if ( !TargetById )
  {
    *(_DWORD *)a3 = 1;
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v4, ContainingAdapter, -1073741811LL, 1LL);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 59) )
  {
    *(_DWORD *)a3 = 5;
    v13 = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v4, v13, -1073741811LL, 2LL);
    return 3221225485LL;
  }
  DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(TargetById, v7, v8, v9);
  v14 = VIDPN_MGR::GetContainingAdapter(this[11]);
  DMMVIDEOPRESENTTARGET::SetPowerState(v10, v14, 0);
  v15 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v10 + 66);
  if ( v15 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v15, v10);
  v16 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v10 + 59);
  if ( v16 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v16, v10);
  DMMVIDEOPRESENTTARGETSET::RemoveTarget((DMMVIDEOPRESENTTARGETSET *)this, v10);
  return 0LL;
}
