/*
 * XREFs of _FindProp @ 0x1C0090D48
 * Callers:
 *     RealInternalSetProp @ 0x1C0149FC0 (RealInternalSetProp.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0029368 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 */

__int64 __fastcall FindProp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int16 v5; // di
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rcx

  v4 = a3;
  v5 = a2;
  LockRefactorStagingAssertOwned((struct _KTHREAD **)a1, a2, a3, a4);
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
    return 0LL;
  if ( !v5 )
    return 0LL;
  v8 = *(_DWORD *)(v7 + 4);
  v9 = v7 + 8;
  if ( !v8 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_WORD *)(v9 + 8) != v5 )
      goto LABEL_5;
    if ( v4 )
      break;
    if ( (*(_BYTE *)(v9 + 10) & 1) == 0 )
      return v9;
LABEL_5:
    v9 += 16LL;
    if ( !--v8 )
      return 0LL;
  }
  if ( (*(_BYTE *)(v9 + 10) & 1) == 0 )
    goto LABEL_5;
  return v9;
}
