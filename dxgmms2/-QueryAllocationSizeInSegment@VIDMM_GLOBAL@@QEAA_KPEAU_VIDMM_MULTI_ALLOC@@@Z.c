/*
 * XREFs of ?QueryAllocationSizeInSegment@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00E6BA4
 * Callers:
 *     VidMmQueryAllocationSizeInSegment @ 0x1C0018B30 (VidMmQueryAllocationSizeInSegment.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_GLOBAL::QueryAllocationSizeInSegment(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2)
{
  return *(_QWORD *)(**(_QWORD **)a2 + 16LL);
}
