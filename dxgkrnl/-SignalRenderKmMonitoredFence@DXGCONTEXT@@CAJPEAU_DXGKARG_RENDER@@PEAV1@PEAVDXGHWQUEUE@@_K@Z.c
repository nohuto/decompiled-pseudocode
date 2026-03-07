__int64 __fastcall DXGCONTEXT::SignalRenderKmMonitoredFence(
        struct _DXGKARG_RENDER *a1,
        struct DXGCONTEXT *a2,
        struct DXGHWQUEUE *a3,
        D3DGPU_VIRTUAL_ADDRESS a4)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  ADAPTER_RENDER *v8; // rcx
  void *v9; // rax
  void *v10; // rdx
  __int64 result; // rax
  _DXGKARG_SIGNALMONITOREDFENCE v12; // [rsp+20h] [rbp-50h] BYREF

  v4 = *((_QWORD *)a2 + 2);
  v7 = *((_QWORD *)a3 + 11);
  v8 = *(ADAPTER_RENDER **)(v4 + 16);
  LODWORD(v4) = a1->DmaBufferPrivateDataSize;
  *((_DWORD *)&v12.KernelSubmissionType + 1) = 0;
  *(&v12.DmaSize + 1) = 0;
  v12.DmaBufferPrivateDataSize = v4;
  v12.DmaSize = a1->DmaSize;
  v12.MultipassOffset = a1->MultipassOffset;
  v12.pDmaBuffer = a1->pDmaBuffer;
  v12.pDmaBufferPrivateData = a1->pDmaBufferPrivateData;
  v12.DmaBufferGpuVirtualAddress = a4;
  v12.MonitoredFenceGpuVa = *(_QWORD *)(v7 + 48);
  v9 = *(void **)(v7 + 64);
  v10 = (void *)*((_QWORD *)a2 + 23);
  v12.MonitoredFenceCpuVa = v9;
  v12.MonitoredFenceValue = *((_QWORD *)a3 + 12);
  v12.hHwQueue = (HANDLE)*((_QWORD *)a3 + 4);
  v12.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_RENDERGDI;
  result = ADAPTER_RENDER::DdiSignalMonitoredFence(v8, v10, &v12);
  a1->DmaBufferPrivateDataSize = v12.DmaBufferPrivateDataSize;
  a1->DmaSize = v12.DmaSize;
  a1->MultipassOffset = v12.MultipassOffset;
  a1->pDmaBuffer = v12.pDmaBuffer;
  a1->pDmaBufferPrivateData = v12.pDmaBufferPrivateData;
  return result;
}
