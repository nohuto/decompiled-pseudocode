/*
 * XREFs of ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C00BE568
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C00BDE54 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 VIDMM_DMA_POOL::InitGlobals(void)
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // r9
  struct _ERESOURCE *v2; // rax
  NTSTATUS v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx

  qword_1C0076778 = (__int64)&VIDMM_DMA_POOL::_DmaPoolsListHead;
  VIDMM_DMA_POOL::_DmaPoolsListHead.Flink = &VIDMM_DMA_POOL::_DmaPoolsListHead;
  VIDMM_DMA_POOL::_MaxNbDmaBuffers = dword_1C00763B8;
  VIDMM_DMA_POOL::_MaxNbCddDmaBuffers = dword_1C00763BC;
  VIDMM_DMA_POOL::_MaxDmaBufferBytes = (unsigned int)dword_1C00763C0;
  VIDMM_DMA_POOL::_MaxAllocationListBytes = (unsigned int)dword_1C00763C4;
  VIDMM_DMA_POOL::_MaxPatchLocationListBytes = (unsigned int)dword_1C00763C4;
  v0 = (unsigned int)dword_1C00763C0 / 0x64uLL;
  VIDMM_DMA_POOL::_CriticalDmaBufferBytes = 95 * v0;
  VIDMM_DMA_POOL::_HighDmaBufferBytes = 85 * v0;
  VIDMM_DMA_POOL::_LowDmaBufferBytes = 75 * v0;
  v1 = (unsigned int)dword_1C00763C4 / 0x64uLL;
  VIDMM_DMA_POOL::_CriticalAllocationListBytes = 95 * v1;
  VIDMM_DMA_POOL::_CriticalPatchLocationListBytes = 95 * v1;
  VIDMM_DMA_POOL::_HighAllocationListBytes = 85 * v1;
  VIDMM_DMA_POOL::_HighPatchLocationListBytes = 85 * v1;
  VIDMM_DMA_POOL::_LowAllocationListBytes = 75 * v1;
  VIDMM_DMA_POOL::_LowPatchLocationListBytes = 75 * v1;
  v2 = (struct _ERESOURCE *)operator new(104LL, 0x39326956u, 64LL);
  VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = v2;
  if ( v2 )
  {
    v3 = ExInitializeResourceLite(v2);
    if ( v3 < 0 )
    {
      operator delete(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
      VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = 0LL;
      WdLogSingleEntry1(1LL, 273LL);
      DxgkLogInternalTriageEvent(v6, 0x40000LL);
      return (unsigned int)v3;
    }
    else
    {
      VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark = dword_1C00763C8;
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 264LL);
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225495LL;
  }
}
