/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1C0106E0C
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C0106CD8 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0002D10 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchIsTDRPending @ 0x1C0007920 (VidSchIsTDRPending.c)
 *     VidSchMarkDeviceAsError @ 0x1C0014AF0 (VidSchMarkDeviceAsError.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00196B8 (VidSchiSchedulerNodeToDriverEngine.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C002C894 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C008A11C (-BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C00ADAC8 (VidSchGetNewSubmissionFenceId.c)
 *     VidSchiAllocateDmaPacket @ 0x1C00ADBDC (VidSchiAllocateDmaPacket.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C00ADC80 (VidSchiSendToExecutionQueueWithWait.c)
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00E689C (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 *     ?FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00EFBD4 (-FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1C01060F8 (VidSchiDiscardQueuePacket.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSubmitRenderCommand(union _LARGE_INTEGER *a1, struct VIDMM_DEVICE *a2, __int64 a3)
{
  union _LARGE_INTEGER v3; // r15
  union _LARGE_INTEGER v4; // rsi
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rdi
  VIDMM_GLOBAL *v9; // rcx
  int v10; // eax
  int v11; // r12d
  VIDMM_DMA_POOL *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  UINT LowPart; // ecx
  unsigned int v16; // edx
  __int64 v17; // rax
  UINT v18; // ecx
  UINT v19; // ecx
  UINT v20; // ecx
  UINT v21; // eax
  DWORD v22; // r8d
  bool v23; // cl
  bool v24; // cf
  ADAPTER_RENDER *v25; // rcx
  union _LARGE_INTEGER *DmaPacket; // r14
  union _LARGE_INTEGER v27; // rax
  union _LARGE_INTEGER v28; // rdx
  LONG v29; // ecx
  LONG v30; // ecx
  DWORD v31; // ecx
  __int64 HighPart; // rax
  void (__fastcall *v33)(_QWORD); // rax
  signed __int32 v35[8]; // [rsp+0h] [rbp-99h] BYREF
  struct _DXGKARG_PATCH v36; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v37; // [rsp+100h] [rbp+67h] BYREF
  union _LARGE_INTEGER v38; // [rsp+108h] [rbp+6Fh] BYREF
  void *v39; // [rsp+110h] [rbp+77h] BYREF
  union _LARGE_INTEGER v40; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = a1[11];
  v4 = a1[35];
  v37 = 0;
  v40.QuadPart = 0LL;
  v6 = *(_QWORD *)(v3.QuadPart + 104);
  v7 = *(_QWORD *)(v3.QuadPart + 96);
  v8 = *(_QWORD *)(v6 + 32);
  if ( (*(_BYTE *)(v8 + 3036) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v6 + 32))
    || *(_BYTE *)(v6 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0) )
  {
    v11 = -1073741823;
    goto LABEL_24;
  }
  v10 = VIDMM_GLOBAL::PrepareDmaBuffer(v9, a2, (struct _VIDMM_DMA_BUFFER *)v4.QuadPart, a1[41].HighPart, &v37, &v40);
  v11 = v10;
  if ( v10 < 0 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(
      3LL,
      v8,
      (union _LARGE_INTEGER)v3.QuadPart,
      a1,
      v10);
    VidSchMarkDeviceAsError(v6);
LABEL_24:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1, (__int64)a2, a3);
    return (unsigned int)v11;
  }
  v12 = *(VIDMM_DMA_POOL **)(v4.QuadPart + 136);
  v38.QuadPart = 0LL;
  v39 = 0LL;
  VIDMM_DMA_POOL::BeginCPUAccess(v12, (struct _VIDMM_DMA_BUFFER *)v4.QuadPart, &v39);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  a1[6].HighPart = 7;
  VidSchGetNewSubmissionFenceId(v8, (__int64)a1, *(unsigned __int16 *)(v7 + 4), (__int64 *)&v38);
  _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer((_VIDSCH_QUEUE_PACKET *)a1);
  v13 = *(_QWORD *)(v3.QuadPart + 56);
  if ( ((*(_DWORD *)(v13 + 224) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 16LL) + 2848LL) & 1) == 0)
    && ((*(_DWORD *)(v4.QuadPart + 28) & 4) == 0
     || (v14 = *(_QWORD *)(**(_QWORD **)(v4.QuadPart + 136) + 40LL),
         _InterlockedOr(v35, 0),
         *(_QWORD *)(v4.QuadPart + 152) != v14))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 768LL) + 7056LL) & 1) != 0 )
  {
    LowPart = a1[40].LowPart;
    v16 = *(unsigned __int16 *)(v7 + 4);
    *(&v36.DmaBufferSegmentId + 1) = 0;
    *(&v36.DmaBufferSubmissionEndOffset + 1) = 0;
    *(&v36.DmaBufferPrivateDataSubmissionEndOffset + 1) = 0;
    *(&v36.AllocationListSize + 1) = 0;
    v36.hDevice = *(HANDLE *)(v3.QuadPart + 64);
    v36.DmaBufferSegmentId = v37;
    v36.DmaBufferPhysicalAddress = v40;
    v36.DmaBufferSize = *(_DWORD *)(v4.QuadPart + 40);
    v36.pDmaBuffer = v39;
    v36.pDmaBufferPrivateData = *(void **)(v4.QuadPart + 128);
    v17 = *(_QWORD *)(v4.QuadPart + 136);
    v36.DmaBufferSubmissionStartOffset = LowPart;
    v36.DmaBufferSubmissionEndOffset = a1[40].HighPart + LowPart;
    v18 = *(_DWORD *)(v17 + 88);
    v36.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v4.QuadPart + 112);
    v36.AllocationListSize = a1[41].HighPart;
    v36.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v4.QuadPart + 120);
    LODWORD(v17) = *(_DWORD *)(v4.QuadPart + 52);
    v36.DmaBufferPrivateDataSize = v18;
    v19 = a1[43].LowPart;
    v36.PatchLocationListSize = v17;
    LODWORD(v17) = a1[42].LowPart;
    v36.DmaBufferPrivateDataSubmissionStartOffset = v19;
    v20 = a1[43].HighPart + v19;
    v36.PatchLocationListSubmissionStart = v17;
    v36.PatchLocationListSubmissionLength = a1[42].HighPart;
    v36.DmaBufferPrivateDataSubmissionEndOffset = v20;
    v36.SubmissionFenceId = v38.LowPart;
    v21 = VidSchiSchedulerNodeToDriverEngine(v8, v16);
    v22 = a1[9].LowPart;
    v23 = (*(_BYTE *)(v3.QuadPart + 112) & 2) == 0;
    v36.EngineOrdinal = v21;
    v24 = (v22 & 0x8000) == 0 && v23;
    v25 = *(ADAPTER_RENDER **)(v8 + 8);
    v36.Flags.Value = ((v22 & 0x20 | (v22 >> 1) & 0x40) >> 4) | (v24 ? 0 : 8);
    v11 = ADAPTER_RENDER::DdiPatch(v25, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v36);
    if ( v11 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
        0LL,
        281LL,
        3LL,
        v8,
        (union _LARGE_INTEGER)v3.QuadPart,
        a1);
      __debugbreak();
    }
    VIDMM_DMA_POOL::FlushPendingCPUAccess(
      *(VIDMM_DMA_POOL **)(v4.QuadPart + 136),
      (struct _VIDMM_DMA_BUFFER *)v4.QuadPart);
  }
  DmaPacket = (union _LARGE_INTEGER *)VidSchiAllocateDmaPacket(v7);
  DmaPacket[7].QuadPart = (LONGLONG)a1;
  DmaPacket->LowPart = 912353622;
  DmaPacket[6] = v3;
  DmaPacket[8] = v4;
  v27.QuadPart = MEMORY[0xFFFFF78000000320];
  DmaPacket[11].HighPart = 0;
  v28 = DmaPacket[7];
  DmaPacket[10] = v27;
  DmaPacket[9].LowPart = 7;
  v27.LowPart = (*(_DWORD *)(v28.QuadPart + 72) >> 3) & 4;
  DmaPacket[11].HighPart = v27.LowPart;
  v29 = v27.LowPart | (*(_DWORD *)(v28.QuadPart + 72) >> 4) & 8;
  DmaPacket[11].HighPart = v29;
  v27.LowPart = v29 | (*(_DWORD *)(v28.QuadPart + 72) >> 8) & 0x100;
  DmaPacket[11].HighPart = v27.LowPart;
  v30 = v27.LowPart | (4 * (*(_DWORD *)(v28.QuadPart + 72) & 4));
  DmaPacket[11].HighPart = v30;
  v24 = a1[16].LowPart != 0;
  DmaPacket[13] = v38;
  DmaPacket[11].LowPart = 0;
  v28.LowPart = v30 | (v24 ? 0x4000 : 0);
  DmaPacket[11].HighPart = v28.LowPart;
  DmaPacket[12].LowPart = a1[14].LowPart;
  DmaPacket[15].QuadPart = (LONGLONG)v39;
  DmaPacket[16].LowPart = v37;
  DmaPacket[17] = v40;
  DmaPacket[18].LowPart = a1[40].LowPart;
  DmaPacket[18].HighPart = a1[40].LowPart + a1[40].HighPart;
  DmaPacket[19].LowPart = a1[43].LowPart;
  DmaPacket[19].HighPart = a1[43].LowPart + a1[43].HighPart;
  DmaPacket[20].LowPart = a1[41].LowPart;
  DmaPacket[20].HighPart = a1[41].HighPart;
  DmaPacket[21].LowPart = a1[42].LowPart;
  DmaPacket[21].HighPart = a1[42].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v4.QuadPart + 160);
  DmaPacket[11].HighPart = v28.LowPart | ((a1[9].LowPart & 0x100 | 0x200) >> 8);
  v31 = a1[9].LowPart;
  if ( (v31 & 1) != 0 )
  {
    HighPart = (unsigned int)a1[48].HighPart;
    if ( (_DWORD)HighPart != -1 && (v31 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 8 * HighPart + 3200) + 44328LL) != -1 )
      {
        v33 = *(void (__fastcall **)(_QWORD))(v8 + 3056);
        if ( v33 )
          v33(*(_QWORD *)(v8 + 3120));
      }
      DmaPacket[11].HighPart |= 0x800u;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  return (unsigned int)v11;
}
