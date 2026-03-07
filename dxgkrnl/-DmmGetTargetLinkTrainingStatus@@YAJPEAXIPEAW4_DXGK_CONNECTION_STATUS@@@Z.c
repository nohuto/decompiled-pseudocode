__int64 __fastcall DmmGetTargetLinkTrainingStatus(PERESOURCE *a1, unsigned int a2, enum _DXGK_CONNECTION_STATUS *a3)
{
  __int64 v4; // rdi
  __int64 Flink; // rbx
  __int64 v7; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v9; // edi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    WdLogSingleEntry0(1LL);
  Flink = (__int64)a1[365][1].SystemResourcesList.Flink;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v11, Flink);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Flink + 120) + 72LL));
  v7 = *(_QWORD *)(Flink + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v7, v4);
  if ( TargetById )
  {
    *(_DWORD *)a3 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(TargetById, 0LL);
    v9 = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v4);
    v9 = -1073741811;
  }
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
  return v9;
}
