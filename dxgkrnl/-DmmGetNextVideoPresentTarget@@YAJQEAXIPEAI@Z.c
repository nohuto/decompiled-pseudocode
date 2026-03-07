__int64 __fastcall DmmGetNextVideoPresentTarget(DXGADAPTER *a1, int a2, unsigned int *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  unsigned int v11; // edi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a3 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v6 = *((_QWORD *)a1 + 365);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v7 = *(_QWORD *)(v6 + 104);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v14, v7);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 120) + 72LL));
  v8 = *(_QWORD **)(v7 + 120);
  if ( a2 == -1 )
  {
    v9 = (_QWORD *)v8[3];
    if ( v9 == v8 + 3 )
      NextTarget = 0LL;
    else
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v9 - 1);
  }
  else
  {
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*(DMMVIDEOPRESENTTARGETSET **)(v7 + 120), a2);
    if ( !TargetById )
    {
      v11 = -1071774971;
      goto LABEL_12;
    }
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v8, TargetById);
  }
  if ( NextTarget )
  {
    *a3 = *((_DWORD *)NextTarget + 6);
    v11 = 0;
  }
  else
  {
    v11 = -1073741275;
  }
LABEL_12:
  if ( v8 )
    ReferenceCounted::Release((ReferenceCounted *)(v8 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
  return v11;
}
