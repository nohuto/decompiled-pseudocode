/*
 * XREFs of VidMmSetAllocationPriority @ 0x1C002D460
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00E78AC (-SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 */

void __fastcall VidMmSetAllocationPriority(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2, unsigned int a3)
{
  VIDMM_GLOBAL::SetAllocationPriority(a1, a2, a3);
}
