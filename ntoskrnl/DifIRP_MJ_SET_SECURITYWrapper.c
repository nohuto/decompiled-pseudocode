/*
 * XREFs of DifIRP_MJ_SET_SECURITYWrapper @ 0x1405DA320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifIRP_MJ_SET_SECURITYWrapper(__int64 a1, __int64 a2)
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
  __int64 result; // rax
  _QWORD **v14; // rdi
  _QWORD *v15; // rbx
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h]
  __int64 retaddr; // [rsp+58h] [rbp+18h]

  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(268435477);
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
      *(_QWORD *)&v16 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v10 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v6, v5, v7, v8);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v16 = 0LL;
LABEL_10:
  *(_QWORD *)&v17 = a1;
  *((_QWORD *)&v16 + 1) = a2;
  for ( i = (__int64 *)v9[4]; i != v9 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v16);
  }
LABEL_17:
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) + 64LL)
                                                       + 8LL * **(unsigned __int8 **)(a2 + 184)
                                                       + 32))(
             a1,
             a2);
  DWORD2(v17) = result;
  if ( v9 )
  {
    v14 = (_QWORD **)(v9 + 6);
    v15 = *v14;
    if ( *v14 != v14 )
    {
      do
      {
        if ( v15 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v15 - 1))(&v16);
        v15 = (_QWORD *)*v15;
      }
      while ( v15 != v14 );
      return DWORD2(v17);
    }
  }
  return result;
}
