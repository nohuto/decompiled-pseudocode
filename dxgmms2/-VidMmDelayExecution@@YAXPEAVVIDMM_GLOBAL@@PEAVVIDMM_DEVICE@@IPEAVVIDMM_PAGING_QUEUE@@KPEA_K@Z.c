/*
 * XREFs of ?VidMmDelayExecution@@YAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@IPEAVVIDMM_PAGING_QUEUE@@KPEA_K@Z @ 0x1C002CAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DelayExecution@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@IPEAVVIDMM_PAGING_QUEUE@@KPEA_K@Z @ 0x1C00E1930 (-DelayExecution@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@IPEAVVIDMM_PAGING_QUEUE@@KPEA_K@Z.c)
 */

void __fastcall VidMmDelayExecution(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        struct VIDMM_PAGING_QUEUE *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  VIDMM_GLOBAL::DelayExecution(a1, a2, a3, a4, a5, a6);
}
