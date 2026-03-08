/*
 * XREFs of VidMmQueryAllocationSizeInSegment @ 0x1C0018B30
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAllocationSizeInSegment@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00E6BA4 (-QueryAllocationSizeInSegment@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

unsigned __int64 __fastcall VidMmQueryAllocationSizeInSegment(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryAllocationSizeInSegment(a1, a2);
}
