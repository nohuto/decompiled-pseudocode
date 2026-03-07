__int64 __fastcall VidMmEvictionTest(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a4)
{
  return VIDMM_GLOBAL::EvictionTest(a1, a2, a3, a4);
}
