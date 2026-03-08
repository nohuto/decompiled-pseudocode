/*
 * XREFs of VidMmQueryAllocationSizeInSystemMemory @ 0x1C00171F0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAllocationSizeInSystemMemory@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@E@Z @ 0x1C00B3034 (-QueryAllocationSizeInSystemMemory@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@E@Z.c)
 */

unsigned __int64 __fastcall VidMmQueryAllocationSizeInSystemMemory(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned __int8 a3)
{
  return VIDMM_GLOBAL::QueryAllocationSizeInSystemMemory(a1, a2, a3);
}
