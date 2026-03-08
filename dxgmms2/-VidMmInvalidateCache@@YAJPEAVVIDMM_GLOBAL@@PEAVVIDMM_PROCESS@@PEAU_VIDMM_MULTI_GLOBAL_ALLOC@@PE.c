/*
 * XREFs of ?VidMmInvalidateCache@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_VIDMM_MULTI_ALLOC@@_K4@Z @ 0x1C002CC80
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_VIDMM_MULTI_ALLOC@@_K3@Z @ 0x1C00E3F54 (-InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_VIDMM.c)
 */

__int64 __fastcall VidMmInvalidateCache(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_PROCESS *a2,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a3,
        struct _VIDMM_MULTI_ALLOC *a4,
        unsigned __int64 a5,
        unsigned __int64 Length)
{
  return VIDMM_GLOBAL::InvalidateCache(a1, a2, a3, a4, a5, Length);
}
