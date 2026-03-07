__int64 __fastcall VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(
        VIDMM_SEGMENT *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4,
        char a5)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // r12
  __int64 v9; // r15
  unsigned __int64 v10; // rsi
  int v11; // ebx
  __int64 v12; // rdx
  unsigned __int64 v13; // r14
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  char v17; // r15
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r10
  int (*v21)(VIDMM_SEGMENT *__hidden, struct _VIDMM_GLOBAL_ALLOC *, bool *, void *); // rax
  unsigned __int64 v22; // [rsp+20h] [rbp-88h]
  unsigned __int64 v23; // [rsp+28h] [rbp-80h]
  char v24[8]; // [rsp+30h] [rbp-78h]
  char v25[8]; // [rsp+38h] [rbp-70h]
  _QWORD v26[9]; // [rsp+60h] [rbp-48h] BYREF
  union _LARGE_INTEGER v27; // [rsp+B8h] [rbp+10h] BYREF
  char v28; // [rsp+C0h] [rbp+18h] BYREF
  char v29; // [rsp+C8h] [rbp+20h]

  v29 = a4;
  v5 = *((unsigned int *)a3 + 8);
  v7 = *((_QWORD *)a3 + 2);
  v9 = ~(v5 - 1);
  v10 = a2 & v9;
  if ( (a2 & (unsigned __int64)v9) < v7 || v10 - v7 <= *((_QWORD *)this + 48) )
  {
    return (unsigned int)-1073741801;
  }
  else
  {
    v11 = -1073741801;
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41184LL), Executive, 0, 0, 0LL);
    if ( !*((_QWORD *)this + 54) )
    {
      v12 = *((_QWORD *)this + 58);
      if ( v12 )
      {
        v13 = *((_QWORD *)this + 52) - v12;
        result = VIDMM_LINEAR_POOL::Allocate(
                   *((VIDMM_LINEAR_POOL **)this + 19),
                   v12,
                   1LL,
                   0LL,
                   v13,
                   *((_QWORD *)this + 52),
                   v29,
                   a5,
                   0LL,
                   &v27,
                   (void **)this + 57);
        v11 = result;
        if ( (int)result < 0 )
          return result;
        v10 = v13 & v9;
      }
    }
    v15 = v5;
    v16 = v9 & (v10 - v7) & ~*((_QWORD *)this + 50);
    v17 = a5;
    if ( v5 <= *((unsigned int *)this + 102) )
      v15 = *((unsigned int *)this + 102);
    if ( !(v7 % v15) )
      v11 = VIDMM_LINEAR_POOL::Allocate(
              *((VIDMM_LINEAR_POOL **)this + 19),
              v7,
              (unsigned int)v5,
              0LL,
              v16,
              v10,
              v29,
              a5,
              a3,
              (union _LARGE_INTEGER *)a3 + 24,
              (void **)a3 + 23);
    if ( v11 < 0 )
    {
      v18 = *((_QWORD *)this + 1);
      v19 = *(_QWORD *)(v18 + 24);
      if ( (*(_DWORD *)(344LL * *((unsigned int *)this + 95) + *(_QWORD *)(v19 + 2808) + 16) & 4) != 0 )
      {
        v20 = *((_QWORD *)this + 19);
        v26[1] = *((_QWORD *)this + 53);
        LOBYTE(v27.LowPart) = 0;
        v26[0] = v16;
        if ( !*(_BYTE *)(v19 + 2873)
          || (v21 = VIDMM_SEGMENT::ReserveOutsideRangeCB,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 744LL) + 152LL) != 1) )
        {
          v21 = VIDMM_SEGMENT::ReserveOutsideRangeNoDisplayingCB;
        }
        v11 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                v20,
                v16,
                v10,
                0,
                (__int64)v21,
                (__int64)this,
                (__int64)v26,
                (__int64)&v28,
                (__int64)&v27);
        if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 7056LL) & 0x80000) != 0 )
        {
          v11 = -1073741823;
        }
        else if ( v11 >= 0 )
        {
          v11 = VIDMM_LINEAR_POOL::Allocate(
                  *((VIDMM_LINEAR_POOL **)this + 19),
                  v7,
                  (unsigned int)v5,
                  0LL,
                  v16,
                  v10,
                  v29,
                  v17,
                  a3,
                  (union _LARGE_INTEGER *)a3 + 24,
                  (void **)a3 + 23);
          if ( v11 >= 0 )
            return (unsigned int)v11;
        }
        WdLogSingleEntry1(3LL, v11);
        VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(
          *((_QWORD *)this + 19),
          0LL,
          *((_QWORD *)this + 6),
          0LL,
          v22,
          v23,
          *(_QWORD *)v24,
          *(_QWORD *)v25);
      }
    }
  }
  return (unsigned int)v11;
}
