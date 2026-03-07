__int64 __fastcall VidMmOpenAllocation(
        VIDMM_GLOBAL *a1,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a3,
        unsigned int a4,
        void *a5,
        int a6,
        struct DXGALLOCATION *a7,
        struct _VIDMM_MULTI_ALLOC **a8,
        unsigned int *a9,
        unsigned __int8 *a10)
{
  return VIDMM_GLOBAL::OpenAllocation(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
