/*
 * XREFs of VidMmSetExistingSysMemPages @ 0x1C002D480
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmSetExistingSysMemPages@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IIIPEA_K@Z @ 0x1C00EA860 (-VidMmSetExistingSysMemPages@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IIIPEA_K@Z.c)
 */

__int64 __fastcall VidMmSetExistingSysMemPages(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  return VIDMM_GLOBAL::VidMmSetExistingSysMemPages(a1, a2, a3, a4, a5, a6);
}
