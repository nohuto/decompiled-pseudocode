/*
 * XREFs of ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00C3560
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0018D80 (memset.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ @ 0x1C00AEC14 (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00C3A98 (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00CCE50 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00CD260 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00CDE5C (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00CE0DC (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::Defragment(VIDMM_MEMORY_SEGMENT *this, unsigned __int64 a2, unsigned __int64 a3)
{
  VIDMM_GLOBAL *v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  VIDMM_LINEAR_POOL *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  _QWORD v17[20]; // [rsp+50h] [rbp-49h] BYREF
  char v18; // [rsp+100h] [rbp+67h] BYREF
  char v19; // [rsp+108h] [rbp+6Fh] BYREF

  memset(v17, 0, 0x78uLL);
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v17[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
  v17[4] = VIDMM_GLOBAL::GetMoveableResourceCallback(v6);
  v7 = a2;
  v17[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
  v17[6] = VIDMM_SEGMENT::IsDisplayingResourceCB;
  v17[7] = VIDMM_SEGMENT::GetAlignmentCB;
  LODWORD(v17[8]) = LODWORD(v17[8]) ^ (LOBYTE(v17[8]) ^ (unsigned __int8)(*(_DWORD *)(v8 + 7048) >> 17)) & 2 | 1;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v9 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
      v18 = 0;
      v17[0] = v7;
      v17[1] = a3;
      VIDMM_LINEAR_POOL::DefragmentRange(v9, (struct VIDMM_DEFRAGMENT_ARGS *)v17);
      if ( *((_BYTE *)this + 472) )
      {
        v10 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                *((_QWORD *)this + 19),
                v7,
                v17[1],
                0,
                (__int64)VIDMM_SEGMENT::MoveOneResource,
                (__int64)this,
                0LL,
                (__int64)&v19,
                (__int64)&v18);
        v14 = v10;
        *((_BYTE *)this + 472) = 0;
        if ( v10 < 0 )
          break;
      }
      v7 = v17[10];
      if ( v17[11] )
      {
        v15 = VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(
                this,
                a2,
                a3,
                (const struct VIDMM_DISPLAYING_BLOCK *)&v17[11]);
        v17[11] = 0LL;
        v7 = v15;
      }
      if ( v7 == a3 )
        goto LABEL_9;
    }
    v16 = WdLogNewEntry5_WdAssertion(v12, v11, v13);
    *(_QWORD *)(v16 + 24) = v14;
    WdLogEvent5_WdAssertion(v16);
    VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD *)this + 19), v7, a3, 0LL);
  }
LABEL_9:
  VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(*((VIDMM_LINEAR_POOL **)this + 19), 0LL, *((_QWORD *)this + 6));
}
