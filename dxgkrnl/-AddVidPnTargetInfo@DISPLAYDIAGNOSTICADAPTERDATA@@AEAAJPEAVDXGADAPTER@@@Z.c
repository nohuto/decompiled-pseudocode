__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  VIDPNTARGETINFO *VidPnTargetInfo; // rax
  unsigned int v10; // edi
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry1(1LL, 1246LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1246LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 365) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v11, v5);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 120) + 72LL));
  v6 = *(_QWORD **)(v5 + 120);
  v7 = (_QWORD *)v6[3];
  if ( v7 == v6 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v7 - 1)) == 0LL )
  {
LABEL_12:
    v10 = 0;
    goto LABEL_13;
  }
  while ( !*((_QWORD *)NextTarget + 14) )
  {
LABEL_11:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v6, NextTarget);
    if ( !NextTarget )
      goto LABEL_12;
  }
  VidPnTargetInfo = DISPLAYDIAGNOSTICADAPTERDATA::GetVidPnTargetInfo(this, *((_DWORD *)this + 489));
  if ( VidPnTargetInfo )
  {
    if ( VIDPNTARGETINFO::Initialize(VidPnTargetInfo, a2, NextTarget) >= 0 )
      ++*((_DWORD *)this + 489);
    goto LABEL_11;
  }
  WdLogSingleEntry1(2LL, 1268LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"No memory available for adding a new display target",
    1268LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v10 = -1073741801;
LABEL_13:
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
  return v10;
}
