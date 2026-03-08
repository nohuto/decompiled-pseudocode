/*
 * XREFs of DifExAllocatePoolWithQuotaWrapper @ 0x1405D55C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifExAllocatePoolWithQuotaWrapper(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 (__fastcall *a9)(_QWORD, __int64, __int64, _QWORD, unsigned int, __int64, int, __int64))
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
  _QWORD *v23; // rbx
  _QWORD v24[10]; // [rsp+58h] [rbp-41h] BYREF
  __int64 retaddr; // [rsp+D0h] [rbp+37h]

  memset(v24, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(24);
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
    if ( ((unsigned __int8)v18 & (unsigned __int8)v14) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v24[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v18 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v14, v13, v16, v17);
      goto LABEL_9;
    }
  }
  v24[0] = 0LL;
LABEL_10:
  v24[4] = __PAIR64__(a4, a5);
  v24[3] = a6;
  LODWORD(v24[2]) = a7;
  v24[1] = a8;
  LODWORD(v24[7]) = a1;
  v24[6] = a2;
  v24[5] = a3;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v24);
  }
LABEL_17:
  result = a9(a1, a2, a3, a4, a5, a6, a7, a8);
  v24[8] = result;
  if ( APIThunkContextById )
  {
    v22 = (_QWORD **)(APIThunkContextById + 6);
    v23 = *v22;
    if ( *v22 != v22 )
    {
      do
      {
        if ( v23 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v23 - 1))(v24);
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != v22 );
      return v24[8];
    }
  }
  return result;
}
