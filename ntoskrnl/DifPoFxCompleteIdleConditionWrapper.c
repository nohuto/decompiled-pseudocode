_QWORD *__fastcall DifPoFxCompleteIdleConditionWrapper(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // ebp
  __int64 *APIThunkContextById; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rdi
  int v10; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD *result; // rax
  _QWORD **v14; // rdi
  _QWORD *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v17; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  v3 = BugCheckParameter3;
  APIThunkContextById = DifGetAPIThunkContextById(380);
  v9 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v6 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v10 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v10 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v16 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v10 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v6, v5, v7, v8);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v16 = 0LL;
LABEL_10:
  v17 = BugCheckParameter2;
  DWORD2(v16) = v3;
  for ( i = (__int64 *)v9[4]; i != v9 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v16);
  }
LABEL_17:
  result = (_QWORD *)PoFxCompleteIdleCondition(BugCheckParameter2, v3);
  if ( v9 )
  {
    v14 = (_QWORD **)(v9 + 6);
    for ( j = *v14; j != v14; j = (_QWORD *)*j )
    {
      result = j - 2;
      if ( j != (_QWORD *)16 )
        result = (_QWORD *)((__int64 (__fastcall *)(__int128 *))result[1])(&v16);
    }
  }
  return result;
}
