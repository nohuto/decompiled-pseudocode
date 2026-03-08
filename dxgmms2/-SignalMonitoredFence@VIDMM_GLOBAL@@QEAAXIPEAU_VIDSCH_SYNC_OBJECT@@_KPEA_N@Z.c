/*
 * XREFs of ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00E7D9C
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00A7930 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C002C9D8 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 *     VidSchGetDriverPagingHwQueue @ 0x1C003FF8C (VidSchGetDriverPagingHwQueue.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0089FF0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C008A1D0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C008A414 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?GetPagingProcessGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1C00F0E90 (-GetPagingProcessGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FEN.c)
 */

void __fastcall VIDMM_GLOBAL::SignalMonitoredFence(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDSCH_SYNC_OBJECT *a3,
        UINT64 a4,
        bool *a5)
{
  __int64 v6; // r14
  char v8; // si
  struct _VIDMM_GLOBAL_ALLOC *v9; // r8
  VIDMM_FENCE_STORAGE_PAGE *v10; // rcx
  D3DGPU_VIRTUAL_ADDRESS PagingProcessGpuVA; // rax
  __int64 v12; // r9
  ADAPTER_RENDER *v13; // r9
  int v14; // eax
  int v15; // r12d
  _DXGKARG_SIGNALMONITOREDFENCE v16; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v17; // [rsp+90h] [rbp-70h] BYREF

  v6 = a2;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 55LL)
    && !*((_BYTE *)this + 7088)
    && *((_QWORD *)this + a2 + 143)
    && (*(_DWORD *)(*((_QWORD *)this + a2 + 79) + 32LL) & 4) != 0
    && *((_QWORD *)this + a2 + 813) )
  {
    if ( *((struct _VIDSCH_SYNC_OBJECT **)this + a2 + 749) == a3 )
    {
      v8 = 1;
      if ( *((_BYTE *)this + a2 + 4641) )
      {
        *a5 = 1;
        return;
      }
      *((_BYTE *)this + a2 + 4641) = 1;
    }
    else
    {
      v8 = 0;
    }
    memset(&v17, 0, sizeof(v17));
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v6, v9, &v17);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v6, 0LL, &v17);
      v10 = (VIDMM_FENCE_STORAGE_PAGE *)*((_QWORD *)a3 + 7);
      v16.DmaBufferGpuVirtualAddress = v17.DmaBufferGpuVirtualAddress;
      v16.DmaBufferPrivateDataSize = v17.DmaBufferPrivateDataSize;
      v16.DmaSize = v17.DmaSize;
      *((_DWORD *)&v16.KernelSubmissionType + 1) = 0;
      *(&v16.DmaSize + 1) = 0;
      v16.MonitoredFenceGpuVa = 0LL;
      v17.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE;
      PagingProcessGpuVA = VIDMM_FENCE_STORAGE_PAGE::GetPagingProcessGpuVA(
                             v10,
                             this,
                             (struct _VIDSCH_SYNC_OBJECT *)((char *)a3 + 56),
                             v6);
      v12 = *((_QWORD *)this + 2);
      v16.MonitoredFenceGpuVa = PagingProcessGpuVA;
      v17.UpdateContextAllocation.ContextAllocation = PagingProcessGpuVA;
      v16.MonitoredFenceCpuVa = (void *)*((_QWORD *)a3 + 8);
      v16.MultipassOffset = v17.MultipassOffset;
      v16.pDmaBuffer = v17.pDmaBuffer;
      v16.pDmaBufferPrivateData = v17.pDmaBufferPrivateData;
      v16.MonitoredFenceValue = a4;
      v17.Fill.FillSize = a4;
      v16.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_BUILD_PAGING_BUFFER;
      v16.hHwQueue = (HANDLE)VidSchGetDriverPagingHwQueue(*(_QWORD *)(v12 + 744), v6);
      v14 = ADAPTER_RENDER::DdiSignalMonitoredFence(v13, v17.hSystemContext, &v16);
      v17.DmaBufferPrivateDataSize = v16.DmaBufferPrivateDataSize;
      v15 = v14;
      v17.DmaSize = v16.DmaSize;
      v17.MultipassOffset = v16.MultipassOffset;
      v17.pDmaBuffer = v16.pDmaBuffer;
      v17.pDmaBufferPrivateData = v16.pDmaBufferPrivateData;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v6, 0LL, &v17, v14, 0, 0LL);
    }
    while ( v15 == -1071775743 );
    *a5 = v15 >= 0;
    if ( v8 )
      *((_BYTE *)this + v6 + 4641) = 0;
  }
  else
  {
    *a5 = 0;
  }
}
