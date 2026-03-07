void __fastcall VidMmUnmapPagingProcessGpuVA(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        unsigned int a3)
{
  VIDMM_GLOBAL::UnmapGpuVA(a1, 0LL, a2, a3, 1);
}
