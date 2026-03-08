/*
 * XREFs of VidMmIsAllocationTerminated @ 0x1C002D250
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllocationTerminated@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00E467C (-IsAllocationTerminated@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

unsigned __int8 __fastcall VidMmIsAllocationTerminated(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::IsAllocationTerminated(a1, a2);
}
