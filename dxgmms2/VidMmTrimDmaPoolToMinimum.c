/*
 * XREFs of VidMmTrimDmaPoolToMinimum @ 0x1C002D550
 * Callers:
 *     <none>
 * Callees:
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C00F04E0 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 */

void __fastcall VidMmTrimDmaPoolToMinimum(VIDMM_DMA_POOL *a1)
{
  VIDMM_DMA_POOL::TrimPool(a1, 1u);
}
