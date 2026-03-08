/*
 * XREFs of ?VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C00120F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C00AACC8 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 */

__int64 __fastcall VidMmAllocateFenceStorageSlot(
        struct VIDMM_MONITORED_FENCE_STORAGE *a1,
        bool a2,
        bool a3,
        bool a4,
        unsigned __int64 a5,
        bool a6)
{
  return VIDMM_GLOBAL::AllocateFenceStorageSlot(a1, a2, a3, a4, a5, a6);
}
