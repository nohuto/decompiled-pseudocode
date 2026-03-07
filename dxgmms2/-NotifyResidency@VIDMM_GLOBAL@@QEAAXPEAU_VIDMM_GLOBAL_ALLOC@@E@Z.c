void __fastcall VIDMM_GLOBAL::NotifyResidency(
        ADAPTER_RENDER **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v7; // r8
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rax
  int v11; // ebx
  VIDMM_GLOBAL *v12; // rcx
  struct _DXGKARG_BUILDPAGINGBUFFER v13; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a3;
  if ( ((_BYTE)this[5117] & 0x40) == 0 && (**((_DWORD **)a2 + 67) & 0x8000) != 0 )
  {
    memset(&v13, 0, sizeof(v13));
    if ( g_IsInternalReleaseOrDbg )
    {
      v8 = WdLogNewEntry5_WdTrace(v6);
      *(_QWORD *)(v8 + 24) = a2;
      *(_QWORD *)(v8 + 32) = v4;
    }
    v9 = *((_DWORD *)a2 + 17) & 0x3F;
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v9, v7, &v13);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v9, a2, &v13);
      v10 = *((_QWORD *)a2 + 67);
      v13.Operation = DXGK_OPERATION_NOTIFY_RESIDENCY;
      v13.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(v10 + 40);
      if ( (_BYTE)v4 )
      {
        v13.Transfer.Source.SegmentId |= 1u;
        v13.Transfer.TransferOffset = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)a2 + 15));
        v13.Transfer.TransferSize = *((_QWORD *)a2 + 16);
      }
      else
      {
        v13.Transfer.Source.SegmentId &= ~1u;
        v13.Transfer.TransferOffset = 0;
        v13.Transfer.TransferSize = 0LL;
      }
      v11 = ADAPTER_RENDER::DdiBuildPagingBuffer(
              this[2],
              (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v13);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v9, a2, &v13, v11, 0, 0LL);
    }
    while ( v11 < 0 );
    if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled((VIDMM_GLOBAL *)this) )
      VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency(v12, &v13, a2);
  }
}
