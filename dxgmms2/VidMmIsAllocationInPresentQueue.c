/*
 * XREFs of VidMmIsAllocationInPresentQueue @ 0x1C002D230
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C00E44EC (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 */

unsigned __int8 __fastcall VidMmIsAllocationInPresentQueue(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3)
{
  return VIDMM_GLOBAL::IsAllocationInPresentQueue(a1, a2, a3);
}
