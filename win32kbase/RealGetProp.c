/*
 * XREFs of RealGetProp @ 0x1C008F240
 * Callers:
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1C008F1DC (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RealGetProp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int16 v5; // bx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _WORD *v14; // rax
  int v15; // ecx
  __int16 v17; // dx
  __int64 v18; // rax
  __int64 v19; // rax

  v4 = a3;
  v5 = a2;
  if ( !gbInDestroyHandleTableObjects )
  {
    v7 = SGDGetUserSessionState(a1, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 8)) != 1 )
    {
      v18 = SGDGetUserSessionState(a1, a2, a3, a4);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 8))
        || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8) )
      {
        __int2c();
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  if ( !gbInDestroyHandleTableObjects )
  {
    v8 = SGDGetUserSessionState(a1, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 8)) != 1 )
    {
      v19 = SGDGetUserSessionState(v10, v9, v11, v12);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 8))
        || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8) )
      {
        __int2c();
      }
    }
  }
  v13 = *(_QWORD *)(a1 + 24);
  if ( !v13 )
    return 0LL;
  if ( !v5 )
    return 0LL;
  v14 = (_WORD *)(v13 + 8);
  v15 = *(_DWORD *)(v13 + 4);
  if ( !v15 )
    return 0LL;
  while ( 1 )
  {
    if ( v14[4] != v5 )
      goto LABEL_10;
    v17 = v14[5] & 1;
    if ( !v4 )
      break;
    if ( v17 )
      return *(_QWORD *)v14;
LABEL_10:
    v14 += 8;
    if ( !--v15 )
      return 0LL;
  }
  if ( v17 )
    goto LABEL_10;
  return *(_QWORD *)v14;
}
