__int64 __fastcall VIDMM_DMA_POOL::NeedToBeTrimmed(VIDMM_DMA_POOL *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-18h]

  if ( (*((_DWORD *)this + 8) & 8) == 0 )
  {
    if ( *((int *)this + 32) <= VIDMM_DMA_POOL::_FairDmaBufferBytes )
      v3 = VIDMM_DMA_POOL::_CriticalDmaBufferBytes;
    else
      v3 = VIDMM_DMA_POOL::_HighDmaBufferBytes;
    if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > v3 )
    {
      if ( !bTracingEnabled || (byte_1C00769C1 & 1) == 0 )
        return 1LL;
      v7 = 0;
LABEL_22:
      McTemplateK0pq_EtwWriteTransfer(
        (__int64)this,
        &EventDmaPoolTrimmingPolicy,
        a3,
        *(_QWORD *)(*((_QWORD *)this + 2) + 24LL),
        v7);
      return 1LL;
    }
    if ( *((int *)this + 33) <= VIDMM_DMA_POOL::_FairAllocationListBytes )
      v4 = VIDMM_DMA_POOL::_CriticalAllocationListBytes;
    else
      v4 = VIDMM_DMA_POOL::_HighAllocationListBytes;
    if ( VIDMM_DMA_POOL::_TotalAllocationListBytes > v4 )
    {
      if ( !bTracingEnabled || (byte_1C00769C1 & 1) == 0 )
        return 1LL;
      v7 = 1;
      goto LABEL_22;
    }
    v5 = VIDMM_DMA_POOL::_HighPatchLocationListBytes;
    if ( *((int *)this + 34) <= VIDMM_DMA_POOL::_FairPatchLocationListBytes )
      v5 = VIDMM_DMA_POOL::_CriticalPatchLocationListBytes;
    if ( VIDMM_DMA_POOL::_TotalPatchLocationListBytes > v5 )
    {
      if ( !bTracingEnabled || (byte_1C00769C1 & 1) == 0 )
        return 1LL;
      v7 = 2;
      goto LABEL_22;
    }
  }
  return 0LL;
}
