/*
 * XREFs of ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00E4970
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C008CD80 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0093850 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00EDCE8 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInAperture(VIDMM_WORKER_THREAD **this, __int64 **a2, bool *a3, __int64 ***a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v8; // rbx

  v8 = (struct _VIDMM_GLOBAL_ALLOC *)**a2;
  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, &EventPerformanceWarning, (__int64)a3, 22);
  if ( *((_QWORD *)v8 + 15) )
  {
    VIDMM_WORKER_THREAD::SuspendAccessToAllocation(*this, v8);
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)this, a2, 0LL);
  }
  return VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64)a2, 2LL, 0, a3, a4, 0, -1LL);
}
