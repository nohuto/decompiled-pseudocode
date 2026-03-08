/*
 * XREFs of ?VidMmFreeFenceStorageSlot@@YAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C0017210
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C0017228 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 */

void __fastcall VidMmFreeFenceStorageSlot(struct VIDMM_MONITORED_FENCE_STORAGE *a1, bool a2)
{
  VIDMM_GLOBAL::FreeFenceStorageSlot(a1, a2);
}
