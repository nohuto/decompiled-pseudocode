/*
 * XREFs of ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00E0A58
 * Callers:
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E9808 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00018EC (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C002E980 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0089FF0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C008A1D0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C008A6D4 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::BuildInitContextAllocation(ADAPTER_RENDER **this, __int64 **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 GpuVirtualAddress; // rax
  ADAPTER_RENDER *v7; // rcx
  int v8; // ebp
  ADAPTER_RENDER *v9; // r14
  HANDLE CurrentProcessId; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+40h] [rbp-168h]
  struct _DXGKARG_BUILDPAGINGBUFFER v15; // [rsp+50h] [rbp-158h] BYREF

  v4 = **a2;
  v5 = *(_DWORD *)(v4 + 68) & 0x3F;
  memset(&v15, 0, sizeof(v15));
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v5, (struct _VIDMM_GLOBAL_ALLOC *)v4, &v15);
    v15.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
    v15.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(v4 + 536) + 40LL);
    v15.Transfer.TransferOffset = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v4 + 120));
    v15.Transfer.TransferSize = *(_QWORD *)(v4 + 128) + *(_QWORD *)(*(_QWORD *)(v4 + 120) + 24LL);
    if ( (*(_DWORD *)(v4 + 72) & 0x80u) != 0 )
    {
      if ( (**(_DWORD **)(v4 + 536) & 8) != 0 )
        v15.MapApertureSegment.OffsetInPages = *(_QWORD *)(v4 + 392);
      else
        v15.MapApertureSegment.OffsetInPages = *(_QWORD *)(*(_QWORD *)(v4 + 88) + 16LL);
    }
    GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress((VIDMM_ALLOC *)a2, v5);
    v7 = this[2];
    v15.Transfer.Source.SegmentAddress.QuadPart = GpuVirtualAddress;
    v8 = ADAPTER_RENDER::DdiBuildPagingBuffer(v7, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v15);
    if ( bTracingEnabled )
    {
      v9 = this[v5 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (byte_1C00769C1 & 8) != 0 )
      {
        LODWORD(v14) = 8;
        McTemplateK0pppxxq_EtwWriteTransfer(v12, v11, v13, CurrentProcessId, v4, v9, 0LL, 0LL, v14);
      }
    }
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
      (VIDMM_GLOBAL *)this,
      v5,
      (struct _VIDMM_GLOBAL_ALLOC *)v4,
      &v15,
      v8,
      0,
      0LL);
  }
  while ( v8 < 0 );
}
