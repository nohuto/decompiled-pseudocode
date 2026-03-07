__int64 __fastcall VIDMM_SEGMENT::ReserveVPRResource(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // r15
  __int64 v9; // rsi
  VIDMM_GLOBAL *v10; // rcx
  VIDMM_GLOBAL *v11; // rcx
  bool (__fastcall *v12)(struct _VIDMM_GLOBAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v13; // rcx
  int v14; // eax
  __int64 v15; // r10
  VIDMM_GLOBAL *v16; // rcx
  VIDMM_GLOBAL *v17; // rcx
  bool (__fastcall *MoveableResourceCallback)(struct _VIDMM_GLOBAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v19; // rcx
  int v20; // eax
  unsigned __int8 v22[8]; // [rsp+20h] [rbp-99h]
  unsigned __int64 v23; // [rsp+28h] [rbp-91h]
  __int64 v24; // [rsp+30h] [rbp-89h]
  __int64 v25; // [rsp+38h] [rbp-81h]
  _QWORD v26[22]; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int64 v27; // [rsp+120h] [rbp+67h]
  char v28; // [rsp+120h] [rbp+67h]
  unsigned int v29; // [rsp+128h] [rbp+6Fh]

  v4 = *((_QWORD *)this + 53);
  v6 = *((_QWORD *)this + 52);
  v27 = *((_QWORD *)a2 + 2);
  v29 = *((_DWORD *)a2 + 8);
  LODWORD(v9) = VIDMM_LINEAR_POOL::Allocate(
                  *((VIDMM_LINEAR_POOL **)this + 19),
                  v27,
                  v29,
                  0LL,
                  v6,
                  v4,
                  a3,
                  a4,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 24,
                  (void **)a2 + 23);
  if ( (int)v9 < 0 )
  {
    VIDMM_SEGMENT::TrimOfferLists(this, 1LL, v27, *((unsigned int *)a2 + 8));
    LODWORD(v9) = VIDMM_LINEAR_POOL::Allocate(
                    *((VIDMM_LINEAR_POOL **)this + 19),
                    v27,
                    v29,
                    0LL,
                    v6,
                    v4,
                    a3,
                    a4,
                    a2,
                    (union _LARGE_INTEGER *)a2 + 24,
                    (void **)a2 + 23);
    if ( (int)v9 < 0 )
    {
      v9 = v27;
      if ( v27 + *((_QWORD *)this + 55) < *((_QWORD *)this + 54)
                                        * (unsigned __int64)(unsigned int)dword_1C0076578
                                        / (unsigned int)dword_1C007657C )
      {
        v15 = v6;
        v16 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
        v28 = 0;
        if ( (*(_DWORD *)(344LL * *((unsigned int *)this + 95) + *(_QWORD *)(*((_QWORD *)v16 + 3) + 2808LL) + 16) & 4) != 0 )
        {
          VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v16);
          memset(v26, 0, 0x78uLL);
          v17 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
          v26[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
          v26[0] = v6;
          v26[1] = v4;
          LODWORD(v26[2]) = 1;
          MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v17);
          v19 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
          LODWORD(v26[8]) |= 4u;
          v26[4] = MoveableResourceCallback;
          v26[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
          v26[7] = VIDMM_SEGMENT::GetAlignmentCB;
          VIDMM_LINEAR_POOL::DefragmentRange(v19, (struct VIDMM_DEFRAGMENT_ARGS *)v26);
          v28 = 1;
          LODWORD(v9) = VIDMM_LINEAR_POOL::Allocate(
                          *((VIDMM_LINEAR_POOL **)this + 19),
                          v9,
                          v29,
                          0LL,
                          v6,
                          v4,
                          a3,
                          a4,
                          a2,
                          (union _LARGE_INTEGER *)a2 + 24,
                          (void **)a2 + 23);
          if ( (int)v9 >= 0 )
            return (unsigned int)v9;
          v15 = v26[9];
        }
        v20 = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, v15, a2, a3, a4);
        v9 = v20;
        if ( v20 < 0 && v28 )
          goto LABEL_13;
      }
      else
      {
        LODWORD(v9) = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, *((_QWORD *)this + 52), a2, a3, a4);
        if ( (int)v9 < 0 )
        {
          v10 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
          if ( (*(_DWORD *)(344LL * *((unsigned int *)this + 95) + *(_QWORD *)(*((_QWORD *)v10 + 3) + 2808LL) + 16) & 4) != 0 )
          {
            VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v10);
            memset(v26, 0, 0x78uLL);
            v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
            v26[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
            v26[0] = v6;
            v26[1] = v4;
            LODWORD(v26[2]) = 1;
            v12 = VIDMM_GLOBAL::GetMoveableResourceCallback(v11);
            v13 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
            LODWORD(v26[8]) |= 4u;
            v26[4] = v12;
            v26[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
            v26[7] = VIDMM_SEGMENT::GetAlignmentCB;
            VIDMM_LINEAR_POOL::DefragmentRange(v13, (struct VIDMM_DEFRAGMENT_ARGS *)v26);
            v14 = VIDMM_LINEAR_POOL::Allocate(
                    *((VIDMM_LINEAR_POOL **)this + 19),
                    v27,
                    v29,
                    0LL,
                    v6,
                    v4,
                    a3,
                    a4,
                    a2,
                    (union _LARGE_INTEGER *)a2 + 24,
                    (void **)a2 + 23);
            v9 = v14;
            if ( v14 < 0 )
            {
LABEL_13:
              WdLogSingleEntry1(3LL, v9);
              VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(
                *((_QWORD *)this + 19),
                v6,
                v4,
                1LL,
                *(_QWORD *)v22,
                v23,
                v24,
                v25);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v9;
}
