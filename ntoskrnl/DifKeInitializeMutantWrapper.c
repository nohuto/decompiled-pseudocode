/*
 * XREFs of DifKeInitializeMutantWrapper @ 0x1405E1040
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x1402D981C (KiInitializeMutant.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

char __fastcall DifKeInitializeMutantWrapper(__int64 a1, char a2)
{
  __int64 *APIThunkContextById; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rdi
  int v10; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD *v13; // rax
  _QWORD **v14; // rdi
  _QWORD *j; // rbx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v17 = 0LL;
  v18 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(263);
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
      *(_QWORD *)&v17 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v10 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v6, v5, v7, v8);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v17 = 0LL;
LABEL_10:
  v18 = a1;
  BYTE8(v17) = a2;
  for ( i = (__int64 *)v9[4]; i != v9 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v17);
  }
LABEL_17:
  LOBYTE(v13) = KiInitializeMutant(a1, a2, 0, 0);
  if ( v9 )
  {
    v14 = (_QWORD **)(v9 + 6);
    for ( j = *v14; j != v14; j = (_QWORD *)*j )
    {
      v13 = j - 2;
      if ( j != (_QWORD *)16 )
        LOBYTE(v13) = ((__int64 (__fastcall *)(__int128 *))v13[1])(&v17);
    }
  }
  return (char)v13;
}
