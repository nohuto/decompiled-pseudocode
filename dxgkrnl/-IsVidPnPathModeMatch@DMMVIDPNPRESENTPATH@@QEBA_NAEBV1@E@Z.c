bool __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(DMMVIDPNTARGET **this, DMMVIDPNTARGET **a2, char a3)
{
  unsigned int *v4; // rbx
  bool v7; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v8; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v9; // eax
  struct DMMVIDPNTARGETMODESET *v11; // rbx
  __int64 v12; // r15
  struct DMMVIDPNTARGETMODESET *v13; // rdi
  __int64 v14; // r12
  struct DMMVIDPNTARGETMODESET *v15; // rbp
  __int64 v16; // r12
  struct DMMVIDPNTARGETMODESET *v17; // rsi
  __int64 v18; // r15

  v4 = (unsigned int *)this + 29;
  v7 = 0;
  if ( !DMMVIDPNPRESENTPATH::IsFunctional((DMMVIDPNPRESENTPATH *)this)
    || (v8 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*v4),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v8)) )
  {
    WdLogSingleEntry0(1LL);
  }
  if ( !DMMVIDPNPRESENTPATH::IsFunctional((DMMVIDPNPRESENTPATH *)a2)
    || (v9 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*v4),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v9)) )
  {
    WdLogSingleEntry0(1LL);
  }
  if ( !a3 && *v4 != *((_DWORD *)a2 + 29) || *((_DWORD *)this + 28) != *((_DWORD *)a2 + 28) )
    return 0;
  v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v12 = *((_QWORD *)v11 + 18);
  if ( !v12 )
    WdLogSingleEntry0(1LL);
  v13 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[12]);
  v14 = *((_QWORD *)v13 + 18);
  if ( !v14 )
    WdLogSingleEntry0(1LL);
  if ( !DMMVIDPNTARGETMODE::operator!=(v12, v14) )
  {
    v15 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[11]);
    v16 = *((_QWORD *)v15 + 18);
    if ( !v16 )
      WdLogSingleEntry0(1LL);
    v17 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[11]);
    v18 = *((_QWORD *)v17 + 18);
    if ( !v18 )
      WdLogSingleEntry0(1LL);
    v7 = DMMVIDPNSOURCEMODE::operator==(v16, v18);
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v17 + 88));
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v15 + 88));
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v13 + 88));
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
  return v7;
}
