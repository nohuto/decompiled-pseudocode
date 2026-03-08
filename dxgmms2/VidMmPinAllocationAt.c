/*
 * XREFs of VidMmPinAllocationAt @ 0x1C002D2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@K_K@Z @ 0x1C00E6874 (-PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@K_K@Z.c)
 */

int __fastcall VidMmPinAllocationAt(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  return VIDMM_GLOBAL::PinAllocationAt(a1, a2, a3, a4);
}
