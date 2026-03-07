int __fastcall VidMmQueryProcessAdapterStatistics(
        struct VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        struct VIDMM_PROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *a4)
{
  return VIDMM_GLOBAL::QueryProcessAdapterStatistics(a1, a2, a3, a4);
}
