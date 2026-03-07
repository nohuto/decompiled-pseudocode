__int64 __fastcall VidMmQueryProcessStatistics(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *a3)
{
  return VIDMM_GLOBAL::QueryProcessStatistics(a1, a2, a3);
}
