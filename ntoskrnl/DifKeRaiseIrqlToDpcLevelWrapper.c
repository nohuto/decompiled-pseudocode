unsigned __int8 DifKeRaiseIrqlToDpcLevelWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rdi
  __int64 v6; // rbp
  int v7; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  _QWORD **v12; // rdi
  _QWORD *v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v15 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(280);
  v5 = APIThunkContextById;
  LODWORD(v6) = 4;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v2 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v7 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v7 & 0x18) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_12;
LABEL_10:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v2, v1, v3, v4);
    goto LABEL_11;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_11:
  *(_QWORD *)&v15 = ReturnAddressForWrappers;
LABEL_12:
  for ( i = (__int64 *)v5[4]; i != v5 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v15);
  }
LABEL_17:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql != 2 )
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  BYTE8(v15) = CurrentIrql;
  if ( v5 )
  {
    v12 = (_QWORD **)(v5 + 6);
    v13 = *v12;
    if ( *v12 != v12 )
    {
      do
      {
        if ( v13 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v13 - 1))(&v15);
        v13 = (_QWORD *)*v13;
      }
      while ( v13 != v12 );
      return BYTE8(v15);
    }
  }
  return CurrentIrql;
}
