/*
 * XREFs of VidMmGetNextBuffersContractedSize @ 0x1C001BB20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextBuffersContractedSize@VIDMM_DMA_POOL@@QEAAXPEA_KPEAI1@Z @ 0x1C00EFC00 (-GetNextBuffersContractedSize@VIDMM_DMA_POOL@@QEAAXPEA_KPEAI1@Z.c)
 */

void __fastcall VidMmGetNextBuffersContractedSize(
        VIDMM_DMA_POOL *a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  VIDMM_DMA_POOL::GetNextBuffersContractedSize(a1, a2, a3, a4);
}
