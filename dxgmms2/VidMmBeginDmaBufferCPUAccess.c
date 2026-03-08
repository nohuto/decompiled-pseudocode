/*
 * XREFs of VidMmBeginDmaBufferCPUAccess @ 0x1C00013F0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C008A11C (-BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 */

void __fastcall VidMmBeginDmaBufferCPUAccess(VIDMM_DMA_POOL **a1, void **a2)
{
  VIDMM_DMA_POOL::BeginCPUAccess(a1[17], (struct _VIDMM_DMA_BUFFER *)a1, a2);
}
