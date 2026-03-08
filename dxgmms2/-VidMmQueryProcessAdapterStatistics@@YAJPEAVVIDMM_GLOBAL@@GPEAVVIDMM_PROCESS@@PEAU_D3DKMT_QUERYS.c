/*
 * XREFs of ?VidMmQueryProcessAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@GPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C002CD40
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C00EE688 (-QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTIC.c)
 */

int __fastcall VidMmQueryProcessAdapterStatistics(
        struct VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        struct VIDMM_PROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *a4)
{
  return VIDMM_GLOBAL::QueryProcessAdapterStatistics(a1, a2, a3, a4);
}
