/*
 * XREFs of ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00B4948
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00A1840 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

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
