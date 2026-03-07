__int64 __fastcall VidMmQueryProcessSegmentGroupStatistics(
        struct VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION *a5)
{
  return VIDMM_GLOBAL::QueryProcessSegmentGroupStatistics(a1, a2, a3, a4, a5);
}
