__int64 __fastcall VIDMM_GLOBAL::InitContextAllocation(
        ADAPTER_RENDER **this,
        __int64 **a2,
        char a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v12; // r8
  int v13; // eax
  unsigned int v14; // edi
  LARGE_INTEGER v15; // rax
  ADAPTER_RENDER *v16; // rcx
  int v17; // edi
  ADAPTER_RENDER *v18; // r12
  HANDLE CurrentProcessId; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // [rsp+48h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v25; // [rsp+58h] [rbp-B0h] BYREF

  *a5 = 0LL;
  v9 = **a2;
  v10 = *(_DWORD *)(v9 + 68) & 0x3F;
  memset(&v25, 0, sizeof(v25));
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v9;
  if ( a3 && (v13 = VIDMM_GLOBAL::PageInOneAllocation(this, a2, 0LL, 0LL, a4, a5, 0, -1LL), v14 = v13, v13 < 0) )
  {
    WdLogSingleEntry2(4LL, a2, v13);
    return v14;
  }
  else
  {
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v10, v12, &v25);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v25);
      v25.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
      v25.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(v9 + 536) + 40LL);
      v25.Transfer.TransferOffset = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v9 + 120));
      v25.Transfer.TransferSize = *(_QWORD *)(v9 + 128) + *(_QWORD *)(*(_QWORD *)(v9 + 120) + 24LL);
      if ( (*(_DWORD *)(v9 + 72) & 0x80u) != 0 )
      {
        if ( (**(_DWORD **)(v9 + 536) & 8) != 0 )
          v25.MapApertureSegment.OffsetInPages = *(_QWORD *)(v9 + 392);
        else
          v25.MapApertureSegment.OffsetInPages = *(_QWORD *)(*(_QWORD *)(v9 + 88) + 16LL);
      }
      v15.QuadPart = VIDMM_ALLOC::GetGpuVirtualAddress((VIDMM_ALLOC *)a2, v10);
      v16 = this[2];
      v25.Transfer.Source.SegmentAddress = v15;
      v17 = ADAPTER_RENDER::DdiBuildPagingBuffer(
              v16,
              (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v25);
      if ( bTracingEnabled )
      {
        v18 = this[v10 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (byte_1C00769C1 & 8) != 0 )
        {
          LODWORD(v24) = 8;
          McTemplateK0pppxxq_EtwWriteTransfer(v21, v20, v22, CurrentProcessId, v9, v18, 0LL, 0LL, v24);
        }
      }
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v25,
        v17,
        0,
        0LL);
    }
    while ( v17 < 0 );
    return 0LL;
  }
}
