/*
 * XREFs of DifKeInitializeSemaphoreWrapper @ 0x1405E1270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifKeInitializeSemaphoreWrapper(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 *APIThunkContextById; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rsi
  int v12; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 *j; // rbx
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+30h] [rbp-10h]
  __int64 retaddr; // [rsp+58h] [rbp+18h]

  v18 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(265);
  v11 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v8 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v12 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v12 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v17 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v12 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v8, v7, v9, v10);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v17 = 0LL;
LABEL_10:
  v18 = a1;
  *((_QWORD *)&v17 + 1) = __PAIR64__(a2, a3);
  for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v17);
  }
LABEL_17:
  *(_BYTE *)a1 = 5;
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_BYTE *)(a1 + 2) = 8;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 24) = a3;
  if ( v11 )
  {
    for ( j = (__int64 *)v11[6]; j != v11 + 6; j = (__int64 *)*j )
    {
      result = (__int64)(j - 2);
      if ( j != (__int64 *)16 )
        result = (*(__int64 (__fastcall **)(__int128 *))(result + 8))(&v17);
    }
  }
  return result;
}
