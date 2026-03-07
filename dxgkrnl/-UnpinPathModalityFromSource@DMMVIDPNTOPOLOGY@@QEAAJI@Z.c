__int64 __fastcall DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(DMMVIDPNTOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 i; // rbp
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  DMMVIDPNTARGET **Path; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v25; // rax
  DMMVIDPNTARGETMODESET *v26; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  for ( i = 0LL; ; ++i )
  {
    LODWORD(v26) = -1;
    v5 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (char *)(unsigned int)v2, i, (unsigned int *)&v26);
    v10 = v5;
    if ( v5 < 0 )
      break;
    if ( (_DWORD)v26 == -1 )
      return 0LL;
    Path = (DMMVIDPNTARGET **)DMMVIDPNTOPOLOGY::FindPath(this, v2, (int)v26);
    if ( !Path )
      WdLogSingleEntry0(1LL);
    v26 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(Path[11]);
    DMMVIDPNSOURCEMODESET::UnpinMode(v26, v12, v13, v14);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v26, 0LL);
    v26 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(Path[12]);
    DMMVIDPNTARGETMODESET::UnpinMode(v26, v15, v16, v17);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v26, 0LL);
    DMMVIDPNPRESENTPATH::UnpinContentScaling((DMMVIDPNPRESENTPATH *)Path, v18, v19, v20);
    DMMVIDPNPRESENTPATH::UnpinContentRotation((DMMVIDPNPRESENTPATH *)Path, v21, v22, v23);
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v25[3] = i;
  v25[4] = v2;
  v25[5] = this;
  v25[6] = v10;
  return (unsigned int)v10;
}
