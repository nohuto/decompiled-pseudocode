__int64 __fastcall VidMmQuerySegmentStatistics(
        struct VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        unsigned int a3,
        struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *a4)
{
  return VIDMM_GLOBAL::QuerySegmentStatistics(a1, a2, a3, a4);
}
