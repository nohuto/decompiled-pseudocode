void __fastcall VidMmEvictAllocation(
        struct VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a3,
        struct _D3DKMT_EVICTION_CRITERIA *a4)
{
  VIDMM_GLOBAL::VidMmEvictAllocation(a1, a2, a3, a4);
}
