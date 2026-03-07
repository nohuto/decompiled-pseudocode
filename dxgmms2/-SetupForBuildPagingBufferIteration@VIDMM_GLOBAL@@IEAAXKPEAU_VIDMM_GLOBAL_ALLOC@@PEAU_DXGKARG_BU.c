// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4)
{
  __int64 v4; // r14
  __int64 v8; // r9
  void *v9; // rax
  void *v10; // rdx

  v4 = a2;
  if ( a3 && (**((_DWORD **)a3 + 67) & 0x10000000) != 0 )
  {
    a4->pDmaBuffer = 0LL;
    a4->pDmaBufferPrivateData = 0LL;
    a4->DmaSize = 0;
    a4->DmaBufferPrivateDataSize = 0;
    *((_QWORD *)this + a2 + 335) = 0LL;
    *((_QWORD *)this + a2 + 399) = 0LL;
  }
  else
  {
    v8 = *((_QWORD *)this + a2 + 79);
    if ( (*(_DWORD *)(v8 + 32) & 4) == 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 29LL, v8, a3, 0LL);
    }
    if ( a3 )
      VIDMM_GLOBAL::AddGlobalAllocReferenceToDmaBuffer(this, v4, a3);
    VIDMM_DMA_POOL::BeginCPUAccess(
      *((VIDMM_DMA_POOL **)this + v4 + 79),
      *((struct _VIDMM_DMA_BUFFER **)this + v4 + 143),
      (void **)this + v4 + 335);
    v9 = (void *)(*((_QWORD *)this + v4 + 335) + *((unsigned int *)this + v4 + 414));
    *((_QWORD *)this + v4 + 335) = v9;
    a4->pDmaBuffer = v9;
    v10 = (void *)(*((unsigned int *)this + v4 + 542) + *(_QWORD *)(*((_QWORD *)this + v4 + 143) + 128LL));
    *((_QWORD *)this + v4 + 399) = v10;
    a4->pDmaBufferPrivateData = v10;
    a4->DmaSize = *((_DWORD *)this + v4 + 29) - *((_DWORD *)this + v4 + 414);
    a4->DmaBufferPrivateDataSize = *((_DWORD *)this + v4 + 93) - *((_DWORD *)this + v4 + 542);
    a4->DmaBufferGpuVirtualAddress = *(_QWORD *)(*((_QWORD *)this + v4 + 143) + 96LL);
    a4->DmaBufferWriteOffset = *((_DWORD *)this + v4 + 414);
  }
}
