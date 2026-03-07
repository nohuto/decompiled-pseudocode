__int64 __fastcall DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(DMMVIDPNTARGET **this, struct _D3DDDI_RATIONAL *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  __int64 v4; // rax
  unsigned int v5; // ebx
  struct DMMVIDPNTARGETMODESET *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v4 = *((_QWORD *)v7 + 18);
  if ( v4 )
  {
    v5 = 0;
    *v3 = *(_QWORD *)(v4 + 152);
  }
  else
  {
    v5 = 1075708679;
    WdLogSingleEntry2(2LL, v2, 1075708679LL);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v7, 0LL);
  return v5;
}
