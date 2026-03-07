__int64 __fastcall DifIoBuildDeviceIoControlRequestWrapper(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 (__fastcall *a11)(_QWORD, __int64, __int64, _QWORD, __int64, int, char, __int64, __int64, __int64))
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v24; // rdi
  _QWORD *v25; // rbx
  _QWORD v27[12]; // [rsp+68h] [rbp-59h] BYREF
  __int64 retaddr; // [rsp+F0h] [rbp+2Fh]

  memset(v27, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(145);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v20 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v20 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v27[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v20 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v16, v15, v18, v19);
      goto LABEL_9;
    }
  }
  v27[0] = 0LL;
LABEL_10:
  v27[5] = a5;
  HIDWORD(v27[4]) = a6;
  LOBYTE(v27[4]) = a7;
  v27[3] = a8;
  v27[2] = a9;
  v27[1] = a10;
  LODWORD(v27[9]) = a1;
  v27[8] = a2;
  v27[7] = a3;
  LODWORD(v27[6]) = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v27);
  }
LABEL_17:
  result = a11(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v27[10] = result;
  if ( APIThunkContextById )
  {
    v24 = (_QWORD **)(APIThunkContextById + 6);
    v25 = *v24;
    if ( *v24 != v24 )
    {
      do
      {
        if ( v25 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v25 - 1))(v27);
        v25 = (_QWORD *)*v25;
      }
      while ( v25 != v24 );
      return v27[10];
    }
  }
  return result;
}
