void __fastcall VIDMM_GLOBAL::UpdateContextAllocation(
        ADAPTER_RENDER **this,
        D3DGPU_VIRTUAL_ADDRESS a2,
        SIZE_T a3,
        SIZE_T a4,
        UINT a5)
{
  struct _VIDMM_GLOBAL_ALLOC *v9; // r8
  unsigned int v10; // ebx
  int i; // esi
  ADAPTER_RENDER *v12; // rcx
  struct _DXGKARG_BUILDPAGINGBUFFER v13; // [rsp+40h] [rbp-158h] BYREF

  memset(&v13, 0, sizeof(v13));
  v10 = 0;
  for ( i = -1071775743; v10 < *((_DWORD *)this + 1754); ++v10 )
  {
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v10, v9, &v13);
    while ( i == -1071775743 )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v10, 0LL, &v13);
      v12 = this[2];
      v13.Operation = DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION;
      v13.UpdateContextAllocation.ContextAllocation = a2;
      v13.Fill.FillSize = a3;
      v13.Transfer.TransferSize = a4;
      v13.Transfer.Source.SegmentId = a5;
      i = ADAPTER_RENDER::DdiBuildPagingBuffer(v12, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v13);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v10, 0LL, &v13, i, 0, 0LL);
    }
  }
}
