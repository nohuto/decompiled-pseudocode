/*
 * XREFs of ?VidMmGetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@PEAK1@Z @ 0x1C002CC40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXPEAK0@Z @ 0x1C00E3C64 (-GetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXPEAK0@Z.c)
 */

void __fastcall VidMmGetMemoryBudgetTarget(struct VIDMM_GLOBAL *a1, unsigned int *a2, unsigned int *a3)
{
  VIDMM_GLOBAL::GetMemoryBudgetTarget(a1, a2, a3);
}
