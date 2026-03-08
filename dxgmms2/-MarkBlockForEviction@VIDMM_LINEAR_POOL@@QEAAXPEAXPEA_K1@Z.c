/*
 * XREFs of ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C00B0924
 * Callers:
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0093E58 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C00B0A20 (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::MarkBlockForEviction(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  _QWORD *v17; // r10
  __int64 v18; // r8
  unsigned __int64 v19; // r11
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  struct _VIDMM_POOL_BLOCK *v23; // [rsp+70h] [rbp+8h] BYREF
  struct _VIDMM_POOL_BLOCK *v24; // [rsp+78h] [rbp+10h] BYREF

  v23 = 0LL;
  *((_BYTE *)a2 + 56) = 4;
  if ( *((_DWORD *)this + 4) >= (unsigned int)(*((_DWORD *)this + 4) + 1) )
  {
    WdLogSingleEntry1(1LL, 2196LL);
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
  }
  ++*((_DWORD *)this + 4);
  v8 = (_QWORD *)((char *)a2 + 24);
  v9 = *((_QWORD *)a2 + 3);
  if ( *(struct _VIDMM_POOL_BLOCK **)(v9 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
    goto LABEL_13;
  v10 = (_QWORD *)*((_QWORD *)a2 + 4);
  if ( (_QWORD *)*v10 != v8 )
    goto LABEL_13;
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v23, &v24);
  if ( !v23 )
  {
    v13 = (_QWORD *)((char *)this + 40);
    v14 = *((_QWORD *)this + 5);
    if ( *(VIDMM_LINEAR_POOL **)(v14 + 8) == (VIDMM_LINEAR_POOL *)((char *)this + 40) )
    {
      *v8 = v14;
      *((_QWORD *)a2 + 4) = v13;
      *(_QWORD *)(v14 + 8) = v8;
      *v13 = v8;
      goto LABEL_8;
    }
LABEL_13:
    __fastfail(3u);
  }
  v11 = (char *)v23 + 24;
  v12 = *((_QWORD *)v23 + 3);
  if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
    goto LABEL_13;
  *v8 = v12;
  v13 = (_QWORD *)((char *)this + 40);
  *((_QWORD *)a2 + 4) = v11;
  *(_QWORD *)(v12 + 8) = v8;
  *(_QWORD *)v11 = v8;
LABEL_8:
  if ( a3 || a4 )
  {
    v16 = *(_QWORD *)a2;
    v17 = (_QWORD *)*((_QWORD *)a2 + 4);
    v18 = *(_QWORD *)a2 + *((_QWORD *)a2 + 1);
    while ( v17 != v13 )
    {
      v19 = *(v17 - 3);
      v20 = *(v17 - 2);
      v17 = (_QWORD *)v17[1];
      if ( v19 + v20 != v16 )
        break;
      v16 = v19;
    }
    v21 = (_QWORD *)*v8;
    while ( v21 != v13 )
    {
      v22 = v21 - 3;
      v21 = (_QWORD *)*v21;
      if ( *v22 != v18 )
        break;
      v18 = *v22 + v22[1];
    }
    *a3 = v18 - v16;
    *a4 = v16;
  }
}
