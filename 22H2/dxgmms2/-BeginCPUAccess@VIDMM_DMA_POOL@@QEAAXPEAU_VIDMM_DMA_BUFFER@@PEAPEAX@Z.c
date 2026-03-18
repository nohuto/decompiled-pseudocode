/*
 * XREFs of ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C009208C
 * Callers:
 *     VidMmBeginDmaBufferCPUAccess @ 0x1C0004EC0 (VidMmBeginDmaBufferCPUAccess.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0091F60 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C00F03E0 (-WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1C0105C98 (VidSchiDiscardQueuePacket.c)
 *     VidSchiSubmitPagingCommand @ 0x1C01064F4 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C01069AC (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::BeginCPUAccess(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2, void **a3)
{
  void *v3; // rcx

  if ( *((_DWORD *)this + 9) )
    v3 = *(void **)(*((_QWORD *)a2 + 7) + 392LL);
  else
    v3 = (void *)*((_QWORD *)a2 + 9);
  *a3 = v3;
}
