void __fastcall VIDMM_GLOBAL::TransferAllocationDecommit(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3,
        struct _VIDMM_LOCAL_ALLOC *a4)
{
  unsigned __int64 *v4; // r10

  v4 = (unsigned __int64 *)((char *)a2 + 8);
  if ( a3 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 32LL) + 456LL),
      -(__int64)*v4);
  if ( a4 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 32LL) + 456LL), *v4);
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 32LL) + 448LL));
  }
}
