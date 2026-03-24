/*
 * XREFs of VidMmQueryAllocationSizeInSegment @ 0x1C0016320
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAllocationSizeInSegment@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00B13D4 (-QueryAllocationSizeInSegment@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

unsigned __int64 __fastcall VidMmQueryAllocationSizeInSegment(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryAllocationSizeInSegment(a1, a2);
}
