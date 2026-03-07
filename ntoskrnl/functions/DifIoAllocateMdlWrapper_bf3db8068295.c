__int64 __fastcall DifIoAllocateMdlWrapper(
        __int64 a1,
        unsigned int a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall *a7)(__int64, _QWORD, __int64, __int64, __int64, __int64))
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v20; // rdi
  _QWORD *v21; // rbx
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h]
  __int128 v24; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(139);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v16 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v16 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v22 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v16 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v12, v11, v14, v15);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v22 = 0LL;
LABEL_10:
  *(_QWORD *)&v23 = a5;
  *((_QWORD *)&v22 + 1) = a6;
  *(_QWORD *)&v24 = a1;
  HIDWORD(v23) = a2;
  BYTE9(v23) = a3;
  BYTE8(v23) = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v22);
  }
LABEL_17:
  LOBYTE(v15) = a4;
  LOBYTE(v14) = a3;
  result = a7(a1, a2, v14, v15, a5, a6);
  *((_QWORD *)&v24 + 1) = result;
  if ( APIThunkContextById )
  {
    v20 = (_QWORD **)(APIThunkContextById + 6);
    v21 = *v20;
    if ( *v20 != v20 )
    {
      do
      {
        if ( v21 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v21 - 1))(&v22);
        v21 = (_QWORD *)*v21;
      }
      while ( v21 != v20 );
      return *((_QWORD *)&v24 + 1);
    }
  }
  return result;
}
