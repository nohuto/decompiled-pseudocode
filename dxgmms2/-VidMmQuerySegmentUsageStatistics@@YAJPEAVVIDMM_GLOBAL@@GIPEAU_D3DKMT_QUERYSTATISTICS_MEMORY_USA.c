__int64 __fastcall VidMmQuerySegmentUsageStatistics(
        struct VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        unsigned int a3,
        struct _D3DKMT_QUERYSTATISTICS_MEMORY_USAGE *a4)
{
  return VIDMM_GLOBAL::QuerySegmentUsageStatistics(a1, a2, a3, a4);
}
