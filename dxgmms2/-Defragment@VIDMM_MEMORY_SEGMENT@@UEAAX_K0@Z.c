void __fastcall VIDMM_MEMORY_SEGMENT::Defragment(VIDMM_MEMORY_SEGMENT *this, unsigned __int64 a2, unsigned __int64 a3)
{
  VIDMM_GLOBAL *v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // r9
  VIDMM_LINEAR_POOL *v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD v14[16]; // [rsp+50h] [rbp-39h] BYREF
  char v15; // [rsp+F0h] [rbp+67h] BYREF
  char v16; // [rsp+F8h] [rbp+6Fh] BYREF

  memset(v14, 0, 0x78uLL);
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v14[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
  v14[4] = VIDMM_GLOBAL::GetMoveableResourceCallback(v6);
  v7 = a2;
  v14[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
  v14[6] = VIDMM_SEGMENT::IsDisplayingResourceCB;
  v14[7] = VIDMM_SEGMENT::GetAlignmentCB;
  LODWORD(v14[8]) = LODWORD(v14[8]) ^ (LOBYTE(v14[8]) ^ (unsigned __int8)(*(_DWORD *)(v8 + 7056) >> 17)) & 2 | 1;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v9 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
      v15 = 0;
      v14[0] = v7;
      v14[1] = a3;
      VIDMM_LINEAR_POOL::DefragmentRange(v9, (struct VIDMM_DEFRAGMENT_ARGS *)v14);
      if ( *((_BYTE *)this + 472) )
      {
        v10 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                *((_QWORD *)this + 19),
                v7,
                v14[1],
                0,
                (__int64)VIDMM_SEGMENT::MoveOneResource,
                (__int64)this,
                0LL,
                (__int64)&v16,
                (__int64)&v15);
        *((_BYTE *)this + 472) = 0;
        if ( v10 < 0 )
          break;
      }
      v7 = v14[10];
      if ( v14[11] )
      {
        v11 = VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(
                this,
                a2,
                a3,
                (const struct VIDMM_DISPLAYING_BLOCK *)&v14[11]);
        v14[11] = 0LL;
        v7 = v11;
      }
      if ( v7 == a3 )
        goto LABEL_9;
    }
    v12 = v10;
    WdLogSingleEntry1(1LL, v10);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD *)this + 19), v7, a3, 0LL, v12, 0LL, 0LL, 0LL);
  }
LABEL_9:
  VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(*((VIDMM_LINEAR_POOL **)this + 19), 0LL, *((_QWORD *)this + 6));
}
