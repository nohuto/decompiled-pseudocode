__int64 __fastcall VIDMM_SEGMENT::ReserveOutsideRangeNoDisplayingCB(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        unsigned __int64 *a4)
{
  int Outside; // edi
  unsigned __int8 v8; // r9
  unsigned __int8 v9; // r9
  int v10; // eax
  struct _VIDMM_POOL_BLOCK *v11; // rdx

  Outside = 0;
  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB((_VIDMM_GLOBAL_ALLOC_NONPAGED **)a2) )
  {
    Outside = VIDMM_LINEAR_POOL::AllocateOutside(
                this[19],
                *((_QWORD *)a2 + 2),
                *((_DWORD *)a2 + 8),
                v8,
                *a4,
                a4[1],
                1,
                0,
                a2,
                (union _LARGE_INTEGER *)a2 + 24,
                (void **)a2 + 23);
    if ( Outside >= 0
      || (v10 = VIDMM_LINEAR_POOL::AllocateOutside(
                  this[19],
                  *((_QWORD *)a2 + 2),
                  *((_DWORD *)a2 + 8),
                  v9,
                  *a4,
                  a4[1],
                  0,
                  1,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 24,
                  (void **)a2 + 23),
          Outside = v10,
          v10 >= 0) )
    {
      v11 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)a2 + 17);
      *((_QWORD *)a2 + 25) = this;
      VIDMM_LINEAR_POOL::Free(this[19], v11);
      *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 23);
      *((_BYTE *)this + 472) = 1;
      if ( _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*((_VIDMM_GLOBAL_ALLOC_NONPAGED **)a2 + 67)) )
        VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(this[1]);
    }
    else
    {
      WdLogSingleEntry1(3LL, v10);
    }
  }
  return (unsigned int)Outside;
}
