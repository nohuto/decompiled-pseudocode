__int64 __fastcall DifMmAllocateContiguousMemoryExWrapper(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        void **BugCheckParameter2,
        int a8,
        int a9,
        __int64 *a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *APIThunkContextById; // r15
  int v19; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // r14
  __int64 result; // rax
  __int64 *v23; // rbx
  _QWORD v24[10]; // [rsp+58h] [rbp-49h] BYREF
  __int64 retaddr; // [rsp+D0h] [rbp+2Fh]

  memset(v24, 0, sizeof(v24));
  APIThunkContextById = DifGetAPIThunkContextById(324);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v19 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v19 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v24[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v19 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v15, v14, v16, v17);
      goto LABEL_9;
    }
  }
  v24[0] = 0LL;
LABEL_10:
  v24[4] = __PAIR64__(a5, a6);
  v24[3] = BugCheckParameter2;
  v24[2] = __PAIR64__(a8, a9);
  v24[1] = a10;
  v24[8] = a1;
  v24[7] = a2;
  v24[6] = a3;
  v24[5] = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v24);
  }
LABEL_17:
  result = MmAllocateContiguousMemoryEx(a1, a2, a3, a4, a5, a6, BugCheckParameter2, a8, a9, a10);
  LODWORD(v24[9]) = result;
  if ( APIThunkContextById )
  {
    v23 = (__int64 *)APIThunkContextById[6];
    if ( v23 != APIThunkContextById + 6 )
    {
      do
      {
        if ( v23 != (__int64 *)16 )
          ((void (__fastcall *)(_QWORD *))*(v23 - 1))(v24);
        v23 = (__int64 *)*v23;
      }
      while ( v23 != APIThunkContextById + 6 );
      return LODWORD(v24[9]);
    }
  }
  return result;
}
