// write access to const memory has been detected, the output may be wrong!
struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiDiscardQueuePacket(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r14
  _DWORD *v8; // rsi
  bool v9; // zf
  UINT v10; // ecx
  UINT v11; // eax
  __int64 v12; // rcx
  UINT v13; // eax
  void *v14; // rax
  UINT *v15; // rcx
  UINT v16; // eax
  UINT v17; // ecx
  const D3DDDI_PATCHLOCATIONLIST *v18; // rax
  __int64 v19; // r12
  int v20; // eax
  _DXGKARG_CANCELCOMMAND v22; // [rsp+38h] [rbp-39h] BYREF

  v3 = *((_QWORD *)a1 + 11);
  v5 = *((_QWORD *)a1 + 35);
  v6 = *(_QWORD *)(v3 + 96);
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 104) + 32LL);
  if ( !*(_BYTE *)(v7 + 46) )
    goto LABEL_13;
  memset(&v22, 0, sizeof(v22));
  v8 = (_DWORD *)((char *)a1 + 72);
  v9 = (*((_DWORD *)a1 + 18) & 0x8000000) == 0;
  v22.hContext = *(HANDLE *)(v3 + 64);
  if ( v9 )
  {
    if ( !v5 )
      goto LABEL_17;
    v15 = *(UINT **)(v5 + 136);
    v22.DmaBufferSize = *(_DWORD *)(v5 + 40);
    v22.pDmaBufferPrivateData = *(void **)(v5 + 128);
    v22.DmaBufferPrivateDataSize = v15[22];
    VIDMM_DMA_POOL::BeginCPUAccess((VIDMM_DMA_POOL *)v15, (struct _VIDMM_DMA_BUFFER *)v5, &v22.pDmaBuffer);
    v16 = *((_DWORD *)a1 + 81);
    v17 = *((_DWORD *)a1 + 86);
    v22.DmaBufferSubmissionStartOffset = 0;
    v22.DmaBufferSubmissionEndOffset = v16;
    v22.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v5 + 112);
    v22.AllocationListSize = *((_DWORD *)a1 + 83);
    v18 = *(const D3DDDI_PATCHLOCATIONLIST **)(v5 + 120);
    v22.DmaBufferPrivateDataSubmissionStartOffset = v17;
    v22.PatchLocationListSubmissionStart = 0;
    v22.pPatchLocationList = v18;
    v22.PatchLocationListSize = *(_DWORD *)(v5 + 52);
    v22.PatchLocationListSubmissionLength = v22.PatchLocationListSize;
    v22.DmaBufferPrivateDataSubmissionEndOffset = v22.DmaBufferPrivateDataSize + v17;
  }
  else
  {
    v10 = *((_DWORD *)a1 + 81);
    v22.DmaBufferVirtualAddress = *((_QWORD *)a1 + 39);
    v11 = *((_DWORD *)a1 + 88);
    v22.DmaBufferSize = v10;
    v22.DmaBufferSubmissionEndOffset = v10;
    v12 = *((_QWORD *)a1 + 36);
    v22.DmaBufferUmdPrivateDataSize = v11;
    v13 = *((_DWORD *)a1 + 87);
    v22.DmaBufferPrivateDataSubmissionEndOffset = v13;
    if ( v12 )
    {
      v22.DmaBufferPrivateDataSize = *(_DWORD *)(v12 + 8);
      v14 = (void *)(v12 + 16);
    }
    else if ( v5 )
    {
      v22.DmaBufferPrivateDataSize = v13;
      v14 = *(void **)(v5 + 128);
    }
    else
    {
      v22.DmaBufferPrivateDataSize = 0;
      v14 = 0LL;
    }
    v22.pDmaBufferPrivateData = v14;
  }
  v19 = v7 + 8;
  v20 = ADAPTER_RENDER::DdiCancelCommand(
          *(ADAPTER_RENDER **)(v7 + 8),
          (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v22);
  if ( v20 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 9LL, v20, &v22, a1);
    __debugbreak();
LABEL_13:
    v19 = v7 + 8;
    v8 = (_DWORD *)((char *)a1 + 72);
  }
  if ( v5 && !*((_DWORD *)a1 + 12) )
    VIDMM_GLOBAL::UnreferenceDmaBuffer(*(VIDMM_GLOBAL **)(*(_QWORD *)v19 + 768LL), (struct _VIDMM_DMA_BUFFER *)v5, 0);
LABEL_17:
  if ( (*v8 & 0x100) != 0 )
  {
    VIDMM_DMA_POOL::ReleaseBuffer(
      *(VIDMM_DMA_POOL **)(v5 + 136),
      (struct _VIDMM_DMA_BUFFER *)v5,
      *((_DWORD *)a1 + 12) == 8);
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v3 + 376));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v6 + 408));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1640));
    *(_QWORD *)(v3 + 352) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 320), 0, 0);
    *(_QWORD *)(v6 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v6 + 240), 0, 0);
    *(_QWORD *)(v7 + 1448) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1416), 0, 0);
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1688));
  }
  *((_DWORD *)a1 + 20) |= 0x20u;
  if ( *((_QWORD *)a1 + 33) )
    VidSchiFreeHistoryBufferStorage(a1);
  return VidSchiProcessCompletedQueuePacket(a1, a2, a3);
}
