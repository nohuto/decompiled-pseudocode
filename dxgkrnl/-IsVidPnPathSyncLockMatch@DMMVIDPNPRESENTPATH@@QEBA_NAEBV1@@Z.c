bool __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(DMMVIDPNTARGET **this, DMMVIDPNTARGET **a2)
{
  bool v4; // r14
  struct DMMVIDPNTARGETMODESET *v5; // rbp
  __int64 v6; // r15
  struct DMMVIDPNTARGETMODESET *v7; // rdi
  __int64 v8; // rbx
  struct DMMVIDPNTARGETMODESET *v9; // rsi
  __int64 v10; // r15
  struct DMMVIDPNTARGETMODESET *v11; // rbx
  __int64 v12; // r13
  int v13; // r15d
  int v14; // r14d

  v4 = 0;
  v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v6 = *((_QWORD *)v5 + 18);
  if ( !v6 )
    WdLogSingleEntry0(1LL);
  v7 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[12]);
  v8 = *((_QWORD *)v7 + 18);
  if ( !v8 )
    WdLogSingleEntry0(1LL);
  if ( !DMMVIDPNTARGETMODE::operator!=(v6, v8) )
  {
    v9 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[11]);
    v10 = *((_QWORD *)v9 + 18);
    if ( !v10 )
      WdLogSingleEntry0(1LL);
    v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[11]);
    v12 = *((_QWORD *)v11 + 18);
    if ( !v12 )
      WdLogSingleEntry0(1LL);
    v13 = *(_DWORD *)(v10 + 96);
    v14 = *(_DWORD *)(v12 + 96);
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v9 + 88));
    v4 = v13 == v14;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v7 + 88));
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v5 + 88));
  return v4;
}
