/*
 * XREFs of VidMmQueryVideoMemoryInfo @ 0x1C002D320
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C00E6D78 (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 */

__int64 __fastcall VidMmQueryVideoMemoryInfo(
        VIDMM_GLOBAL *a1,
        struct VIDMM_PROCESS *a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  return VIDMM_GLOBAL::QueryVideoMemoryInfo(a1, a2, a3, a4, a5, a6, a7, a8);
}
