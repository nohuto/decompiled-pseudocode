/*
 * XREFs of DifExReleaseResourceLiteWrapper @ 0x1405D78E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

void __fastcall DifExReleaseResourceLiteWrapper(PERESOURCE Resource)
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
  _QWORD *v11; // rdi
  _QWORD *j; // rbx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v13 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(66);
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
      *(_QWORD *)&v13 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v8 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v4, v3, v5, v6);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v13 = 0LL;
LABEL_10:
  *((_QWORD *)&v13 + 1) = Resource;
  for ( i = (__int64 *)v7[4]; i != v7 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v13);
  }
LABEL_17:
  ExReleaseResourceLite(Resource);
  if ( v7 )
  {
    v11 = v7 + 6;
    for ( j = (_QWORD *)v7[6]; j != v11; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v13);
    }
  }
}
