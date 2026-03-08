/*
 * XREFs of VidMmResizeBuffersInPool @ 0x1C002D440
 * Callers:
 *     <none>
 * Callees:
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00F0324 (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 */

__int64 __fastcall VidMmResizeBuffersInPool(VIDMM_DMA_POOL *a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  return VIDMM_DMA_POOL::ResizeBuffersInPool(a1, a2, a3, a4);
}
