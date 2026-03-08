/*
 * XREFs of VidMmEndCPUAccess @ 0x1C0017130
 * Callers:
 *     <none>
 * Callees:
 *     ?EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C00B2C58 (-EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z.c)
 */

__int64 __fastcall VidMmEndCPUAccess(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2, unsigned int a3, unsigned int a4)
{
  struct _VIDMM_REGION *v5; // [rsp+20h] [rbp-18h]

  return VIDMM_GLOBAL::EndCPUAccess(a1, a2, a3, a4, v5);
}
