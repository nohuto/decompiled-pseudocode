__int64 (__fastcall **__fastcall DifMmFreePagesFromMdlWrapper(ULONG_PTR BugCheckParameter2))(_OWORD *)
{
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rbx
  int v8; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  __int64 (__fastcall **result)(_OWORD *); // rax
  _QWORD *v12; // rdi
  _QWORD *j; // rbx
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v14 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(338);
  v7 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v4 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v8 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v8 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v14 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v8 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v4, v3, v5, v6);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v14 = 0LL;
LABEL_10:
  *((_QWORD *)&v14 + 1) = BugCheckParameter2;
  for ( i = (__int64 *)v7[4]; i != v7 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v14);
  }
LABEL_17:
  result = (__int64 (__fastcall **)(_OWORD *))MiFreePagesFromMdl(BugCheckParameter2, 0);
  if ( v7 )
  {
    v12 = v7 + 6;
    for ( j = (_QWORD *)v7[6]; j != v12; j = (_QWORD *)*j )
    {
      result = (__int64 (__fastcall **)(_OWORD *))(j - 2);
      if ( j != (_QWORD *)16 )
        result = (__int64 (__fastcall **)(_OWORD *))result[1](&v14);
    }
  }
  return result;
}
