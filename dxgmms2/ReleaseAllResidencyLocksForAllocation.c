/*
 * XREFs of ReleaseAllResidencyLocksForAllocation @ 0x1C00E7124
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ReleaseAllResidencyLocksForAllocation(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  __int64 v6; // rcx

  v2 = (_QWORD *)(a2 + 272);
  for ( i = *(_QWORD **)(a2 + 272); i != v2; i = (_QWORD *)*i )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(i - 6) + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL)) + 360LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(a2 + 296));
}
