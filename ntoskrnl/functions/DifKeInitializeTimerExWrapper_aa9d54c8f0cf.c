__int64 __fastcall DifKeInitializeTimerExWrapper(__int64 a1, int a2)
{
  __int64 *APIThunkContextById; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rsi
  int v10; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  __int64 result; // rax
  __int64 *j; // rbx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v15 = 0LL;
  v16 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(267);
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
      *(_QWORD *)&v15 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v10 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v6, v5, v7, v8);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v15 = 0LL;
LABEL_10:
  v16 = a1;
  DWORD2(v15) = a2;
  for ( i = (__int64 *)v9[4]; i != v9 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v15);
  }
LABEL_17:
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)a1 = a2 + 8;
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 60) = 0;
  *(_WORD *)(a1 + 56) = 0;
  if ( v9 )
  {
    for ( j = (__int64 *)v9[6]; j != v9 + 6; j = (__int64 *)*j )
    {
      result = (__int64)(j - 2);
      if ( j != (__int64 *)16 )
        result = (*(__int64 (__fastcall **)(__int128 *))(result + 8))(&v15);
    }
  }
  return result;
}
