bool __fastcall DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(DMMVIDPNTARGET **this)
{
  struct DMMVIDPNTARGETMODESET *v1; // rax
  __int64 v2; // r8
  DMMVIDPNTARGET *v3; // rcx
  struct DMMVIDPNTARGETMODESET *v4; // rax
  bool v5; // bl
  __int64 v6; // rdx
  struct DMMVIDPNTARGETMODESET *v8; // [rsp+30h] [rbp+8h] BYREF
  struct DMMVIDPNTARGETMODESET *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[11]);
  v3 = *(DMMVIDPNTARGET **)(v2 + 96);
  v9 = v1;
  v4 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v3);
  v5 = 0;
  v8 = v4;
  if ( *(_QWORD *)(v6 + 144) )
    v5 = *((_QWORD *)v4 + 18) != 0LL;
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v8, 0LL);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v9, 0LL);
  return v5;
}
