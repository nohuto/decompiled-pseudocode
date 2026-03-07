void __fastcall VidMmUnmapGpuVA(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3)
{
  VIDMM_GLOBAL::UnmapGpuVA(a1, a2, a3, 0, 0);
}
