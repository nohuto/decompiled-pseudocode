/*
 * XREFs of VidMmSetExistingSysMemStore @ 0x1C002D4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetExistingSysMemStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAX@Z @ 0x1C00E78C4 (-SetExistingSysMemStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAX@Z.c)
 */

__int64 __fastcall VidMmSetExistingSysMemStore(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2, void *a3)
{
  return VIDMM_GLOBAL::SetExistingSysMemStore(a1, a2, a3);
}
