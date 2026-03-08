/*
 * XREFs of VidMmFreeDeferredMapping @ 0x1C001BB00
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00E3954 (-FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VidMmFreeDeferredMapping(struct _VIDMM_LOCAL_ALLOC *a1)
{
  VIDMM_GLOBAL::FreeDeferredMapping(a1);
}
