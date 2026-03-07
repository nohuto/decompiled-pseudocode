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
