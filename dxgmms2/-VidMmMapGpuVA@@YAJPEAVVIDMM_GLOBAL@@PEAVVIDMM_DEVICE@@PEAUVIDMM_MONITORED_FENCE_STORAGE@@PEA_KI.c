__int64 __fastcall VidMmMapGpuVA(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        unsigned __int64 *a4,
        unsigned int a5)
{
  return VIDMM_GLOBAL::MapGpuVA(a1, a2, 0LL, a3, a4, a5, 0);
}
