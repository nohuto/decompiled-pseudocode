/*
 * XREFs of VidMmIsAllocationCPUVisible @ 0x1C0018B00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllocationCPUVisible@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00E4430 (-IsAllocationCPUVisible@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 */

unsigned __int8 __fastcall VidMmIsAllocationCPUVisible(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  return VIDMM_GLOBAL::IsAllocationCPUVisible(a1, a2);
}
