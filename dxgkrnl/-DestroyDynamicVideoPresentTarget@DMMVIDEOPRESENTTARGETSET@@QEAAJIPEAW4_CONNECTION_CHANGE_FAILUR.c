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
