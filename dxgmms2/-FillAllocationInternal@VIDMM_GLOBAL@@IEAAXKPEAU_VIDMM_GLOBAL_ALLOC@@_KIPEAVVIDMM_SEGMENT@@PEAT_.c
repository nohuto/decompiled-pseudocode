void __fastcall VIDMM_GLOBAL::FillAllocationInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v8; // rsi
  __int64 v11; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  D3DGPU_VIRTUAL_ADDRESS v17; // rax
  UINT v18; // eax
  ADAPTER_RENDER *v19; // rcx
  ADAPTER_RENDER *v20; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // [rsp+20h] [rbp-198h]
  __int64 v26; // [rsp+40h] [rbp-178h]
  struct _DXGKARG_BUILDPAGINGBUFFER v27; // [rsp+50h] [rbp-168h] BYREF
  int v28; // [rsp+1C8h] [rbp+10h]

  v8 = a2;
  if ( (*((_BYTE *)this[5028] + 1616 * a2 + 444) & 0x10) != 0 )
  {
    VIDMM_GLOBAL::FillAllocationUsingGpuVa((VIDMM_GLOBAL *)this, a2, a3, a4, v25, a6, a7);
  }
  else
  {
    memset(&v27, 0, sizeof(v27));
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = a3;
      v14 = WdLogNewEntry5_WdTrace(v13);
      *(_QWORD *)(v14 + 32) = 0LL;
      *(_QWORD *)(v14 + 24) = a4;
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
      v16[3] = a6;
      v16[4] = a7->HighPart;
      v16[5] = a7->LowPart;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v8, v12, &v27);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, a3, &v27);
      v27.Operation = DXGK_OPERATION_FILL;
      if ( a3 )
        v17 = *(_QWORD *)(*((_QWORD *)a3 + 67) + 40LL);
      else
        v17 = 0LL;
      v27.Fill.FillPattern = 0;
      v27.UpdateContextAllocation.ContextAllocation = v17;
      v27.Fill.FillSize = a4;
      v18 = VIDMM_SEGMENT::DriverId(a6);
      v19 = this[2];
      v27.Transfer.Source.SegmentId = v18;
      v27.Transfer.Source.SegmentAddress.QuadPart = a7->QuadPart + *((_QWORD *)a6 + 3);
      v28 = ADAPTER_RENDER::DdiBuildPagingBuffer(
              v19,
              (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v27);
      if ( bTracingEnabled )
      {
        v20 = this[v8 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (byte_1C00769C1 & 8) != 0 )
        {
          LODWORD(v26) = 0;
          McTemplateK0pppxxq_EtwWriteTransfer(v23, v22, v24, CurrentProcessId, a3, v20, 0LL, a4, v26);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 898), a4, 0);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, a3, &v27, v28, 0, 0LL);
    }
    while ( v28 < 0 );
  }
}
