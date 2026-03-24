/*
 * XREFs of ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C008ADEC
 * Callers:
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0060864 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006C260 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00011A4 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001CF0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C0024390 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0063C58 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0063E34 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006E840 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0074148 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C0086618 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitContextAllocation(
        ADAPTER_RENDER **this,
        __int64 **a2,
        char a3,
        bool *a4,
        __int64 ***a5)
{
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  D3DGPU_VIRTUAL_ADDRESS v18; // rax
  __int64 GpuVirtualAddress; // rax
  ADAPTER_RENDER *v20; // rcx
  int v21; // r12d
  ADAPTER_RENDER *v22; // rdi
  HANDLE CurrentProcessId; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v29; // rax
  int v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+38h] [rbp-D0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v32; // [rsp+58h] [rbp-B0h] BYREF

  *a5 = 0LL;
  v9 = **a2;
  v10 = *(_DWORD *)(v9 + 76) & 0x3F;
  memset(&v32, 0, sizeof(v32));
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v9;
  if ( a3 && (v13 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, a2, 0, 0, a4, a5, 0, -1LL), v16 = v13, v13 < 0) )
  {
    v29 = WdLogNewEntry5_WdEvent(v15, v14);
    *(_QWORD *)(v29 + 24) = a2;
    *(_QWORD *)(v29 + 32) = v16;
    WdLogEvent5_WdEvent(v29);
    return (unsigned int)v16;
  }
  else
  {
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v10, v12, &v32);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v32);
      v32.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
      v17 = *(_QWORD *)(v9 + 40);
      if ( v17 )
        v18 = *(_QWORD *)(v17 + 16);
      else
        v18 = *(_QWORD *)(v9 + 48);
      v32.UpdateContextAllocation.ContextAllocation = v18;
      v32.Transfer.TransferOffset = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v9 + 128));
      v32.Transfer.TransferSize = *(_QWORD *)(v9 + 136) + *(_QWORD *)(*(_QWORD *)(v9 + 128) + 24LL);
      if ( (*(_DWORD *)(v9 + 80) & 0x80u) != 0 )
      {
        if ( (**(_DWORD **)(v9 + 496) & 8) != 0 )
          v32.MapApertureSegment.OffsetInPages = *(_QWORD *)(v9 + 360);
        else
          v32.MapApertureSegment.OffsetInPages = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 16LL);
      }
      GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress((VIDMM_ALLOC *)a2, v10);
      v20 = this[2];
      v32.Transfer.Source.SegmentAddress.QuadPart = GpuVirtualAddress;
      v21 = ADAPTER_RENDER::DdiBuildPagingBuffer(v20, &v32);
      if ( bTracingEnabled )
      {
        v22 = this[v10 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          v31 = 0LL;
          v30 = (int)v22;
          McTemplateK0pppxxq_EtwWriteTransfer(v25, v24, v26, CurrentProcessId, v9);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 897), 0LL, 8);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v32,
        v21,
        v27 & v30,
        (_DWORD *)(v27 & v31));
    }
    while ( v21 < 0 );
    return 0LL;
  }
}
