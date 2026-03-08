/*
 * XREFs of ?VidMmWaitOnAllocationDmaReferences@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C0012650
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C00AB90C (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 */

__int64 __fastcall VidMmWaitOnAllocationDmaReferences(
        struct VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned int a4)
{
  return VIDMM_GLOBAL::WaitOnAllocationDmaReferences(a1, a2, a3, a4);
}
