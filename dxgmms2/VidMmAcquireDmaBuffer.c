/*
 * XREFs of VidMmAcquireDmaBuffer @ 0x1C0016FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00B22D8 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 */

__int64 __fastcall VidMmAcquireDmaBuffer(
        VIDMM_DMA_POOL *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        struct _VIDMM_DMA_BUFFER **a4)
{
  return VIDMM_DMA_POOL::AcquireBuffer(a1, a4, a2, a3);
}
