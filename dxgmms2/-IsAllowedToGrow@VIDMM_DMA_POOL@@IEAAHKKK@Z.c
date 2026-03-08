/*
 * XREFs of ?IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z @ 0x1C00EFC78
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00B22D8 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EF24 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::IsAllowedToGrow(
        VIDMM_DMA_POOL *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  bool v13; // cc
  bool v14; // cc
  bool v15; // cc

  v5 = a2 + *((_DWORD *)this + 32);
  v6 = a3 + *((_DWORD *)this + 33);
  v7 = VIDMM_DMA_POOL::_TotalDmaBufferBytes + a2;
  v8 = VIDMM_DMA_POOL::_TotalAllocationListBytes + a3;
  v9 = a4 + *((_DWORD *)this + 34);
  v10 = VIDMM_DMA_POOL::_TotalPatchLocationListBytes + a4;
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
    return 0LL;
  v11 = *((_QWORD *)this + 2);
  v12 = VIDMM_DMA_POOL::_MaxNbDmaBuffers;
  if ( *(_DWORD *)(*(_QWORD *)(v11 + 24) + 464LL) == 2 )
    v12 = VIDMM_DMA_POOL::_MaxNbCddDmaBuffers;
  if ( *((_DWORD *)this + 23) >= (unsigned int)v12 )
  {
    if ( !bTracingEnabled || (byte_1C00769C1 & 1) == 0 )
      return 0LL;
    goto LABEL_27;
  }
  if ( (int)v5 <= VIDMM_DMA_POOL::_FairDmaBufferBytes )
    v13 = v7 <= VIDMM_DMA_POOL::_HighDmaBufferBytes;
  else
    v13 = v7 <= VIDMM_DMA_POOL::_LowDmaBufferBytes;
  if ( !v13 )
  {
    if ( !bTracingEnabled || (byte_1C00769C1 & 1) == 0 )
      return 0LL;
    goto LABEL_27;
  }
  if ( (int)v6 <= VIDMM_DMA_POOL::_FairAllocationListBytes )
    v14 = v8 <= VIDMM_DMA_POOL::_HighAllocationListBytes;
  else
    v14 = v8 <= VIDMM_DMA_POOL::_LowAllocationListBytes;
  if ( !v14 )
  {
    if ( !bTracingEnabled || (byte_1C00769C1 & 1) == 0 )
      return 0LL;
    goto LABEL_27;
  }
  if ( (int)v9 <= VIDMM_DMA_POOL::_FairPatchLocationListBytes )
    v15 = v10 <= VIDMM_DMA_POOL::_HighPatchLocationListBytes;
  else
    v15 = v10 <= VIDMM_DMA_POOL::_LowPatchLocationListBytes;
  if ( !v15 )
  {
    if ( !bTracingEnabled || (byte_1C00769C1 & 1) == 0 )
      return 0LL;
LABEL_27:
    McTemplateK0pq_EtwWriteTransfer(v12, &EventDmaPoolTrimmingPolicy, v9);
    return 0LL;
  }
  return 1LL;
}
