__int64 __fastcall VidMmQueryVideoMemoryInfo(
        VIDMM_GLOBAL *a1,
        struct VIDMM_PROCESS *a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  return VIDMM_GLOBAL::QueryVideoMemoryInfo(a1, a2, a3, a4, a5, a6, a7, a8);
}
