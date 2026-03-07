__int64 __fastcall VidMmBeginCPUAccess(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        void **a7)
{
  return VIDMM_GLOBAL::BeginCPUAccess(a1, a2, a3, a4, a5, a6, a7);
}
