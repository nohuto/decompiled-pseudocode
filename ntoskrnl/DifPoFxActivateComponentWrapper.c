/*
 * XREFs of DifPoFxActivateComponentWrapper @ 0x1405E6D10
 * Callers:
 *     <none>
 * Callees:
 *     PoFxActivateComponent @ 0x140305CE0 (PoFxActivateComponent.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

_QWORD *__fastcall DifPoFxActivateComponentWrapper(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  unsigned int v5; // r15d
  __int64 *APIThunkContextById; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  int v12; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD *result; // rax
  _QWORD **v16; // rdi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR v19; // [rsp+30h] [rbp-10h]
  __int64 retaddr; // [rsp+58h] [rbp+18h]

  v19 = 0LL;
  v18 = 0LL;
  v5 = BugCheckParameter3;
  APIThunkContextById = DifGetAPIThunkContextById(378);
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
      *(_QWORD *)&v18 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v12 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v8, v7, v9, v10);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v18 = 0LL;
LABEL_10:
  v19 = BugCheckParameter2;
  *((_QWORD *)&v18 + 1) = __PAIR64__(v5, a3);
  for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v18);
  }
LABEL_17:
  result = (_QWORD *)PoFxActivateComponent(BugCheckParameter2, v5, a3);
  if ( v11 )
  {
    v16 = (_QWORD **)(v11 + 6);
    for ( j = *v16; j != v16; j = (_QWORD *)*j )
    {
      result = j - 2;
      if ( j != (_QWORD *)16 )
        result = (_QWORD *)((__int64 (__fastcall *)(__int128 *))result[1])(&v18);
    }
  }
  return result;
}
