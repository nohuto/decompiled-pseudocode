/*
 * XREFs of CcInsertIntoCleanSharedCacheMapList @ 0x1402DC58C
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14021A220 (CcAcquireByteRangeForWrite.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 */

_QWORD *__fastcall CcInsertIntoCleanSharedCacheMapList(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  bool v9; // zf
  __int64 *v10; // rax
  __int64 *v11; // r8
  __int64 v12; // rcx
  __int64 **v13; // rdx
  __int64 **v14; // rdx
  _QWORD *result; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx

  v2 = *(_QWORD *)(a1 + 536);
  v3 = v2 + 624;
  v4 = v2 + 640;
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && !*(_DWORD *)(a1 + 4) && !*(_DWORD *)(a1 + 112) )
  {
    DbgPrint("CC: SharedCacheMap->OpenCount == 0 && DirtyPages == 0 && going onto CleanList!\n");
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v5 = (_QWORD *)(a1 + 120);
    v6 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(v6 + 8) != a1 + 120 )
      goto LABEL_23;
    v7 = *(_QWORD **)(a1 + 128);
    if ( (_QWORD *)*v7 != v5 )
      goto LABEL_23;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(_QWORD **)(v4 + 8);
    if ( *v8 != v4 )
      goto LABEL_23;
    v9 = CcEnablePerVolumeLazyWriter == 0;
    *v5 = v4;
    *(_QWORD *)(a1 + 128) = v8;
    *v8 = v5;
    *(_QWORD *)(v4 + 8) = v5;
    if ( !v9 )
    {
      v10 = (__int64 *)(a1 + 584);
      v11 = *(__int64 **)(a1 + 584);
      v12 = *(_QWORD *)(a1 + 600) + 624LL;
      if ( v11[1] != a1 + 584 )
        goto LABEL_23;
      v13 = *(__int64 ***)(a1 + 592);
      if ( *v13 != v10 )
        goto LABEL_23;
      *v13 = v11;
      v11[1] = (__int64)v13;
      v14 = *(__int64 ***)(v12 + 8);
      if ( *v14 != (__int64 *)v12 )
        goto LABEL_23;
      *v10 = v12;
      *(_QWORD *)(a1 + 592) = v14;
      *v14 = v10;
      *(_QWORD *)(v12 + 8) = v10;
    }
  }
  result = (_QWORD *)(a1 + 136);
  v16 = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)(v16 + 8) != a1 + 136 )
    goto LABEL_23;
  v17 = *(_QWORD **)(a1 + 144);
  if ( (_QWORD *)*v17 != result )
    goto LABEL_23;
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  v18 = *(_QWORD **)(v3 + 8);
  if ( *v18 != v3 )
    goto LABEL_23;
  v9 = CcEnablePerVolumeLazyWriter == 0;
  *result = v3;
  *(_QWORD *)(a1 + 144) = v18;
  *v18 = result;
  *(_QWORD *)(v3 + 8) = result;
  if ( v9 )
    return result;
  v19 = *(_QWORD *)(a1 + 600);
  v20 = (_QWORD *)(a1 + 568);
  result = (_QWORD *)(v19 + 608);
  v21 = *v20;
  if ( *(_QWORD **)(*v20 + 8LL) != v20
    || (v22 = (_QWORD *)v20[1], (_QWORD *)*v22 != v20)
    || (*v22 = v21, *(_QWORD *)(v21 + 8) = v22, v23 = (_QWORD *)result[1], (_QWORD *)*v23 != result) )
  {
LABEL_23:
    __fastfail(3u);
  }
  *v20 = result;
  v20[1] = v23;
  *v23 = v20;
  result[1] = v20;
  return result;
}
