/*
 * XREFs of ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00B08E4
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00AFB74 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z @ 0x1C00AFD74 (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00B06A8 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C0101824 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C0101AEC (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C01024D4 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C0102A94 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C0102DC4 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::FreeBlock(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2)
{
  char *v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rdx

  if ( *(_BYTE *)this )
  {
    v2 = (char *)this + 88;
    *((_BYTE *)a2 + 56) = 1;
    v3 = (_QWORD *)((char *)a2 + 24);
    v4 = *(_QWORD *)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
      __fastfail(3u);
    *v3 = v4;
    v3[1] = v2;
    *(_QWORD *)(v4 + 8) = v3;
    *(_QWORD *)v2 = v3;
  }
  else
  {
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), a2);
  }
}
