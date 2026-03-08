/*
 * XREFs of ?SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00E78AC
 * Callers:
 *     VidMmSetAllocationPriority @ 0x1C002D460 (VidMmSetAllocationPriority.c)
 * Callees:
 *     ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1C00E7A48 (-SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetAllocationPriority(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2, unsigned int a3)
{
  VIDMM_GLOBAL::SetOneAllocationPriority(this, a2, a3);
}
