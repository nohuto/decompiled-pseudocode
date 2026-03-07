void __fastcall VidMmBeginDmaBufferCPUAccess(VIDMM_DMA_POOL **a1, void **a2)
{
  VIDMM_DMA_POOL::BeginCPUAccess(a1[17], (struct _VIDMM_DMA_BUFFER *)a1, a2);
}
