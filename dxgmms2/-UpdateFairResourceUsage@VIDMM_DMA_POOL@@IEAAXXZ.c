void __fastcall VIDMM_DMA_POOL::UpdateFairResourceUsage(VIDMM_DMA_POOL *this)
{
  __int64 v1; // rax

  if ( VIDMM_DMA_POOL::_NbActiveDmaPools <= 1 )
  {
    VIDMM_DMA_POOL::_FairDmaBufferBytes = VIDMM_DMA_POOL::_HighDmaBufferBytes;
    VIDMM_DMA_POOL::_FairAllocationListBytes = VIDMM_DMA_POOL::_HighAllocationListBytes;
    v1 = VIDMM_DMA_POOL::_HighPatchLocationListBytes;
  }
  else
  {
    VIDMM_DMA_POOL::_FairDmaBufferBytes = VIDMM_DMA_POOL::_MaxDmaBufferBytes / (VIDMM_DMA_POOL::_NbActiveDmaPools - 1);
    VIDMM_DMA_POOL::_FairAllocationListBytes = VIDMM_DMA_POOL::_MaxAllocationListBytes
                                             / (VIDMM_DMA_POOL::_NbActiveDmaPools - 1);
    v1 = VIDMM_DMA_POOL::_MaxPatchLocationListBytes / (VIDMM_DMA_POOL::_NbActiveDmaPools - 1);
  }
  VIDMM_DMA_POOL::_FairPatchLocationListBytes = v1;
}
