/*
 * XREFs of VidMmTerminateAllocation @ 0x1C0015320
 * Callers:
 *     <none>
 * Callees:
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00AE490 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 */

void __fastcall VidMmTerminateAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  VIDMM_GLOBAL::TerminateAllocation(a1, a2, a3, a4, a5);
}
