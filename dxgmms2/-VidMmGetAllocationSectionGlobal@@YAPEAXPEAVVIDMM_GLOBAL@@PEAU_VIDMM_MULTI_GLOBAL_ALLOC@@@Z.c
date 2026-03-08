/*
 * XREFs of ?VidMmGetAllocationSectionGlobal@@YAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C002CC20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllocationSectionGlobal@VIDMM_GLOBAL@@QEAAPEAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00E3BBC (-GetAllocationSectionGlobal@VIDMM_GLOBAL@@QEAAPEAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 */

void *__fastcall VidMmGetAllocationSectionGlobal(struct VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  return VIDMM_GLOBAL::GetAllocationSectionGlobal(a1, a2);
}
