char __fastcall DifCcFastCopyWriteWrapper(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 *APIThunkContextById; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  int v14; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD *v17; // rax
  _QWORD **v18; // rdi
  _QWORD *j; // rbx
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+38h] [rbp-28h] BYREF
  __int128 v23; // [rsp+48h] [rbp-18h]
  __int64 retaddr; // [rsp+88h] [rbp+28h]

  v4 = a2;
  v22 = 0LL;
  v23 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(3);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v10 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v14 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v14 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v22 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v14 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v10, v9, v11, v12);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v22 = 0LL;
LABEL_10:
  *((_QWORD *)&v23 + 1) = a1;
  *(_QWORD *)&v23 = __PAIR64__(v4, a3);
  *((_QWORD *)&v22 + 1) = a4;
  for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v22);
  }
LABEL_17:
  v21 = v4;
  LOBYTE(v17) = CcCopyWriteEx(a1, &v21, a3, 1, a4, 0LL);
  if ( v13 )
  {
    v18 = (_QWORD **)(v13 + 6);
    for ( j = *v18; j != v18; j = (_QWORD *)*j )
    {
      v17 = j - 2;
      if ( j != (_QWORD *)16 )
        LOBYTE(v17) = ((__int64 (__fastcall *)(__int128 *))v17[1])(&v22);
    }
  }
  return (char)v17;
}
