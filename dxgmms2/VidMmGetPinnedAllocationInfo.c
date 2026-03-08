/*
 * XREFs of VidMmGetPinnedAllocationInfo @ 0x1C0001260
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPinnedAllocationInfo@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1C0086634 (-GetPinnedAllocationInfo@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGE.c)
 */

void __fastcall VidMmGetPinnedAllocationInfo(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  VIDMM_GLOBAL::GetPinnedAllocationInfo(a1, a2, a3, a4, a5);
}
