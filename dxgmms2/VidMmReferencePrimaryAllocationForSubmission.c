/*
 * XREFs of VidMmReferencePrimaryAllocationForSubmission @ 0x1C0016EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0DA4 (-ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_A.c)
 */

__int64 __fastcall VidMmReferencePrimaryAllocationForSubmission(
        struct VIDMM_DEVICE *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_ALLOC **a3)
{
  return VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(a1, a1, a2, a3);
}
