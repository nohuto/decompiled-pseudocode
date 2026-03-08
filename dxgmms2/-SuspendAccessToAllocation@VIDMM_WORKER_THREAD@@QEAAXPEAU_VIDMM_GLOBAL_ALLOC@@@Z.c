/*
 * XREFs of ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00EDCE8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C00AEEA0 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00B59CC (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00E4970 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0093A84 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00EC4C8 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

void __fastcall VIDMM_WORKER_THREAD::SuspendAccessToAllocation(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _KTHREAD **v2; // r14
  _QWORD **v4; // r15
  _QWORD *i; // rbx
  VIDMM_DEVICE **j; // rdi

  v2 = (struct _KTHREAD **)((char *)a2 + 296);
  v4 = (_QWORD **)((char *)a2 + 272);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    for ( j = (VIDMM_DEVICE **)*(i - 2); j != i - 2; j = (VIDMM_DEVICE **)*j )
    {
      if ( (*((_DWORD *)j - 3) & 3) == 2 )
      {
        if ( !*((_QWORD *)*(j - 4) + 24) )
        {
          DXGFASTMUTEX::Release(v2);
          VIDMM_DEVICE::PartiallySuspend((VIDMM_GLOBAL **)*(j - 4));
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v2);
        }
        VIDMM_GLOBAL::FaultOneAllocation(*this, j - 5);
      }
    }
  }
  DXGFASTMUTEX::Release(v2);
}
