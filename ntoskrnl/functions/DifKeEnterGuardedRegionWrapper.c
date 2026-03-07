struct _KTHREAD *DifKeEnterGuardedRegionWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rbx
  int v6; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  struct _KTHREAD *result; // rax
  _QWORD *v10; // rdi
  _QWORD *j; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(258);
  v5 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v2 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v6 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v6 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v13 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v6 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v2, v1, v3, v4);
      goto LABEL_9;
    }
  }
  v13 = 0LL;
LABEL_10:
  for ( i = (__int64 *)v5[4]; i != v5 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int64 *))*(i - 1))(&v13);
  }
LABEL_17:
  result = KeGetCurrentThread();
  --result->SpecialApcDisable;
  if ( v5 )
  {
    v10 = v5 + 6;
    for ( j = (_QWORD *)v5[6]; j != v10; j = (_QWORD *)*j )
    {
      result = (struct _KTHREAD *)(j - 2);
      if ( j != (_QWORD *)16 )
        result = (struct _KTHREAD *)((__int64 (__fastcall *)(__int64 *))result->Header.WaitListHead.Flink)(&v13);
    }
  }
  return result;
}
