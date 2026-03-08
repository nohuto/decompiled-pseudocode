/*
 * XREFs of VidMmPinAllocation @ 0x1C0017EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1C00B4340 (-PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE.c)
 */

__int64 __fastcall VidMmPinAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        unsigned int *a4,
        union _LARGE_INTEGER *a5,
        unsigned __int64 *a6)
{
  return VIDMM_GLOBAL::PinAllocation(a1, a2, a3, a4, a5, a6);
}
