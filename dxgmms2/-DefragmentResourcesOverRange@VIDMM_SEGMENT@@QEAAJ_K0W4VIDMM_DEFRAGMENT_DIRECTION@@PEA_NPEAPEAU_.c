__int64 __fastcall VIDMM_SEGMENT::DefragmentResourcesOverRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  VIDMM_GLOBAL *v10; // rcx
  bool (__fastcall *MoveableResourceCallback)(struct _VIDMM_GLOBAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v12; // rcx
  bool v14; // dl
  __int64 v15; // r11
  VIDMM_GLOBAL *v16; // r10
  __int64 v17; // rax
  bool v18; // si
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // rdi
  unsigned __int64 v22; // r8
  void *v23; // [rsp+28h] [rbp-81h]
  unsigned __int8 v24[8]; // [rsp+30h] [rbp-79h]
  unsigned __int8 v25[8]; // [rsp+38h] [rbp-71h]
  __int64 v26; // [rsp+40h] [rbp-69h]
  _QWORD v27[16]; // [rsp+58h] [rbp-51h] BYREF

  VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(*(VIDMM_GLOBAL **)(a1 + 8));
  memset(v27, 0, 0x78uLL);
  v10 = *(VIDMM_GLOBAL **)(a1 + 8);
  v27[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
  v27[0] = a2;
  v27[1] = a3;
  LODWORD(v27[2]) = a4;
  MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v10);
  v12 = *(VIDMM_LINEAR_POOL **)(a1 + 152);
  LODWORD(v27[8]) |= 4u;
  v27[4] = MoveableResourceCallback;
  v27[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
  v27[6] = VIDMM_SEGMENT::IsDisplayingResourceCB;
  v27[7] = VIDMM_SEGMENT::GetAlignmentCB;
  VIDMM_LINEAR_POOL::DefragmentRange(v12, (struct VIDMM_DEFRAGMENT_ARGS *)v27);
  if ( !*(_BYTE *)(a1 + 472) )
    return 0LL;
  *(_BYTE *)(a1 + 472) = 0;
  v14 = a2 == *(_QWORD *)(a1 + 416) && a3 == *(_QWORD *)(a1 + 424);
  v15 = *(unsigned int *)(a1 + 380);
  v16 = *(VIDMM_GLOBAL **)(a1 + 8);
  v17 = *(_QWORD *)(*((_QWORD *)v16 + 3) + 2808LL);
  v18 = (*(_DWORD *)(v17 + 344 * v15 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v17 + 344 * v15 + 16) & 8) != 0 && v14 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v16, v15, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 380));
    LOBYTE(v19) = 1;
    VIDMM_GLOBAL::SetVPRPaging(*(VIDMM_GLOBAL **)(a1 + 8), v19, v20);
  }
  v21 = (int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
               *(_QWORD *)(a1 + 152),
               a2,
               a3,
               a4,
               (__int64)VIDMM_SEGMENT::MoveOneResource,
               a1,
               0LL,
               a6,
               a5);
  if ( v18 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 380), 0, 0LL, 0LL, 0, 1u);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 380));
    VIDMM_GLOBAL::SetVPRPaging(*(VIDMM_GLOBAL **)(a1 + 8), 0LL, v22);
  }
  if ( (int)v21 < 0 )
  {
    WdLogSingleEntry1(3LL, v21);
    VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(
      *(_QWORD *)(a1 + 152),
      a2,
      a3,
      a4,
      v23,
      *(_QWORD *)v24,
      *(_QWORD *)v25,
      v26);
  }
  return (unsigned int)v21;
}
