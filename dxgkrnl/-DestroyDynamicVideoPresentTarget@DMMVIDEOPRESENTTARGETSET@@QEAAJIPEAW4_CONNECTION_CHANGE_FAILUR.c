/*
 * XREFs of ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AE888
 * Callers:
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AD218 (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0003074 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C00268CC (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledDeviceUsage @ 0x1C0026958 (Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledDeviceUsage.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C006958C (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C0069610 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0069660 (-RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C01DCDA0 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::DestroyDynamicVideoPresentTarget(
        VIDPN_MGR **this,
        unsigned int a2,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a3)
{
  __int64 v4; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  DMMVIDEOPRESENTTARGET *v7; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGADAPTER *v14; // rax
  DMMVIDEOPRESENTTARGET *v15; // rcx
  DMMVIDEOPRESENTTARGET *v16; // rcx

  v4 = a2;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, a2);
  v7 = TargetById;
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
    v10 = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v4, v10, -1073741811LL, 2LL);
    return 3221225485LL;
  }
  if ( (unsigned int)Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledDeviceUsage() )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v7, v11, v12, v13);
    v14 = VIDPN_MGR::GetContainingAdapter(this[11]);
    DMMVIDEOPRESENTTARGET::SetPowerState(v7, v14, 0);
  }
  v15 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v7 + 66);
  if ( v15 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v15, v7);
  v16 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v7 + 59);
  if ( v16 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v16, v7);
  DMMVIDEOPRESENTTARGETSET::RemoveTarget((DMMVIDEOPRESENTTARGETSET *)this, v7);
  return 0LL;
}
