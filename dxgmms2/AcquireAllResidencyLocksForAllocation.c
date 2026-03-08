/*
 * XREFs of AcquireAllResidencyLocksForAllocation @ 0x1C00E054C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall AcquireAllResidencyLocksForAllocation(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD **)(a2 + 272);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a2 + 296));
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(*(i - 6) + 16LL)
                                                            + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL))
                                                + 360LL));
}
