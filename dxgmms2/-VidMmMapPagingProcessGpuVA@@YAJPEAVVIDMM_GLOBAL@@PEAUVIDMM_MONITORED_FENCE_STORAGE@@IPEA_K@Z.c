__int64 __fastcall VidMmMapPagingProcessGpuVA(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        char a3,
        unsigned __int64 *a4)
{
  return VIDMM_GLOBAL::MapGpuVA(a1, 0LL, 0LL, a2, a4, 1 << a3, 1);
}
