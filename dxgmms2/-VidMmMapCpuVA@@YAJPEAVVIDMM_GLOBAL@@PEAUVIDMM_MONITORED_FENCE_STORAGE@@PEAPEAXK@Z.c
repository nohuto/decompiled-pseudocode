int __fastcall VidMmMapCpuVA(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        void **a3,
        unsigned int a4)
{
  return VIDMM_GLOBAL::MapCpuVA(a1, a2, a3, a4);
}
