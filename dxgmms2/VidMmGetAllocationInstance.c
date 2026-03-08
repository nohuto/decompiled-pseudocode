/*
 * XREFs of VidMmGetAllocationInstance @ 0x1C0018A40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllocationInstance@VIDMM_GLOBAL@@QEAAKPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00C4286 (-GetAllocationInstance@VIDMM_GLOBAL@@QEAAKPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

unsigned int __fastcall VidMmGetAllocationInstance(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::GetAllocationInstance(a1, a2);
}
