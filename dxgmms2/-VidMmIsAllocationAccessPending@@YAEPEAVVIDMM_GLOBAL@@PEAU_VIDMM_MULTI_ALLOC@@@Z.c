/*
 * XREFs of ?VidMmIsAllocationAccessPending@@YAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0018140
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllocationAccessPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00B47B8 (-IsAllocationAccessPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

unsigned __int8 __fastcall VidMmIsAllocationAccessPending(struct VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::IsAllocationAccessPending(a1, a2);
}
