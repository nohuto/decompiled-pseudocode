/*
 * XREFs of RealGetProp @ 0x1C0045D80
 * Callers:
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1C00AC6AC (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 __fastcall RealGetProp(__int64 a1, __int16 a2, int a3)
{
  __int64 v6; // rcx
  _WORD *v7; // rax
  int v8; // ecx
  __int16 v10; // dx

  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
  {
    __int2c();
  }
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
  {
    __int2c();
  }
  v6 = *(_QWORD *)(a1 + 24);
  if ( !v6 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v7 = (_WORD *)(v6 + 8);
  v8 = *(_DWORD *)(v6 + 4);
  if ( !v8 )
    return 0LL;
  while ( 1 )
  {
    if ( v7[4] != a2 )
      goto LABEL_10;
    v10 = v7[5] & 1;
    if ( !a3 )
      break;
    if ( v10 )
      return *(_QWORD *)v7;
LABEL_10:
    v7 += 8;
    if ( !--v8 )
      return 0LL;
  }
  if ( v10 )
    goto LABEL_10;
  return *(_QWORD *)v7;
}
