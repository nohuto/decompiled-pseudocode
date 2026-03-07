__int64 __fastcall DifExInitializePagedLookasideListWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int16 a7,
        int a8,
        __int64 (__fastcall *a9)(__int64, __int64, __int64, _QWORD, __int64, int, __int16, int))
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v22; // rdi
  _QWORD *j; // rbx
  _QWORD v25[8]; // [rsp+58h] [rbp-31h] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+37h]

  memset(v25, 0, sizeof(v25));
  APIThunkContextById = DifGetAPIThunkContextById(45);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v18 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v18 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v25[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v18 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v14, v13, v16, v17);
      goto LABEL_9;
    }
  }
  v25[0] = 0LL;
LABEL_10:
  v25[3] = a5;
  LODWORD(v25[2]) = a6;
  WORD2(v25[1]) = a7;
  LODWORD(v25[1]) = a8;
  v25[7] = a1;
  v25[6] = a2;
  v25[5] = a3;
  LODWORD(v25[4]) = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v25);
  }
LABEL_17:
  result = a9(a1, a2, a3, a4, a5, a6, a7, a8);
  if ( APIThunkContextById )
  {
    v22 = (_QWORD **)(APIThunkContextById + 6);
    for ( j = *v22; j != v22; j = (_QWORD *)*j )
    {
      result = (__int64)(j - 2);
      if ( j != (_QWORD *)16 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(result + 8))(v25);
    }
  }
  return result;
}
