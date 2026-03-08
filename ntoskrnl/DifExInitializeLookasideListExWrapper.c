/*
 * XREFs of DifExInitializeLookasideListExWrapper @ 0x1405D69C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifExInitializeLookasideListExWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        __int16 a8,
        int a9,
        __int64 (__fastcall *a10)(__int64, __int64, __int64, _QWORD, unsigned int, __int64, int, __int16, int))
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v23; // rdi
  _QWORD *v24; // rbx
  _QWORD v25[10]; // [rsp+58h] [rbp-49h] BYREF
  __int64 retaddr; // [rsp+D0h] [rbp+2Fh]

  memset(v25, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(43);
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
      v25[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v19 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v15, v14, v17, v18);
      goto LABEL_9;
    }
  }
  v25[0] = 0LL;
LABEL_10:
  v25[4] = __PAIR64__(a4, a5);
  v25[3] = a6;
  LODWORD(v25[2]) = a7;
  WORD2(v25[1]) = a8;
  LODWORD(v25[1]) = a9;
  v25[7] = a1;
  v25[6] = a2;
  v25[5] = a3;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v25);
  }
LABEL_17:
  result = a10(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  LODWORD(v25[8]) = result;
  if ( APIThunkContextById )
  {
    v23 = (_QWORD **)(APIThunkContextById + 6);
    v24 = *v23;
    if ( *v23 != v23 )
    {
      do
      {
        if ( v24 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v24 - 1))(v25);
        v24 = (_QWORD *)*v24;
      }
      while ( v24 != v23 );
      return LODWORD(v25[8]);
    }
  }
  return result;
}
