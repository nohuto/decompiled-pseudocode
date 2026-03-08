/*
 * XREFs of VidSchiSubmitPagingCommand @ 0x1C0106954
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C0106CD8 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C0007920 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00196B8 (VidSchiSchedulerNodeToDriverEngine.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C002C894 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C008A11C (-BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 *     VidSchGetDriverPagingContext @ 0x1C008A47C (VidSchGetDriverPagingContext.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C00ADAC8 (VidSchGetNewSubmissionFenceId.c)
 *     VidSchiAllocateDmaPacket @ 0x1C00ADBDC (VidSchiAllocateDmaPacket.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C00ADC80 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiDiscardQueuePacket @ 0x1C01060F8 (VidSchiDiscardQueuePacket.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSubmitPagingCommand(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  _QWORD *DmaPacket; // rbx
  void (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // r15
  void *v11; // r12
  unsigned int v12; // edx
  unsigned int v13; // eax
  _QWORD *v14; // rcx
  void *DriverPagingContext; // rax
  UINT v16; // edx
  UINT v17; // ecx
  void *v18; // rax
  UINT v19; // ecx
  __int64 v20; // r11
  UINT v21; // r10d
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  _DXGKARG_PATCH v25; // [rsp+30h] [rbp-59h] BYREF
  void *v26; // [rsp+F0h] [rbp+67h] BYREF
  ADAPTER_RENDER *v27; // [rsp+F8h] [rbp+6Fh]

  v3 = *((_QWORD *)a1 + 11);
  v5 = *(_QWORD *)(v3 + 104);
  v6 = *(_QWORD *)(v3 + 96);
  v7 = *(_QWORD *)(v5 + 32);
  if ( (*(_BYTE *)(v7 + 3036) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v5 + 32))
    || *(_BYTE *)(v5 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
  {
    VidSchiDiscardQueuePacket(a1, a2, a3);
  }
  else
  {
    DmaPacket = VidSchiAllocateDmaPacket(v6);
    VidSchGetNewSubmissionFenceId(v7, (__int64)a1, *(unsigned __int16 *)(v6 + 4), DmaPacket + 13);
    *(_DWORD *)DmaPacket = 912353622;
    *((_DWORD *)DmaPacket + 22) = 1;
    DmaPacket[10] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)DmaPacket + 23) = 0;
    *((_DWORD *)DmaPacket + 18) = 7;
    DmaPacket[7] = a1;
    DmaPacket[6] = v3;
    *((_DWORD *)DmaPacket + 23) = *((_DWORD *)a1 + 32) != 0 ? 0x4000 : 0;
    *(_BYTE *)(v7 + 54) = 1;
    if ( *(_DWORD *)(v6 + 11272) != -1 )
    {
      v9 = *(void (__fastcall **)(_QWORD))(v7 + 3056);
      if ( v9 )
        v9(*(_QWORD *)(v7 + 3120));
    }
    *(_BYTE *)(v7 + 54) = 0;
    *((_DWORD *)DmaPacket + 23) |= 0x400u;
    v10 = *((_QWORD *)a1 + 35);
    DmaPacket[8] = v10;
    v26 = 0LL;
    VIDMM_DMA_POOL::BeginCPUAccess(*(VIDMM_DMA_POOL **)(v10 + 136), (struct _VIDMM_DMA_BUFFER *)v10, &v26);
    v11 = v26;
    v27 = *(ADAPTER_RENDER **)(v7 + 8);
    if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 2808LL) + 344LL * *(unsigned __int16 *)(v6 + 6) + 48) )
    {
      v12 = *((_DWORD *)a1 + 87);
      *(&v25.DmaBufferSegmentId + 1) = 0;
      *(&v25.DmaBufferSubmissionEndOffset + 1) = 0;
      memset(&v25.DmaBufferPrivateDataSubmissionEndOffset + 1, 0, 20);
      v13 = VidSchiSchedulerNodeToDriverEngine(v7, v12);
      DriverPagingContext = (void *)VidSchGetDriverPagingContext(v14, v13, *((_BYTE *)a1 + 352));
      v16 = *((_DWORD *)a1 + 83);
      v25.DmaBufferSegmentId = *((_DWORD *)a1 + 80);
      v25.DmaBufferPhysicalAddress.QuadPart = *((_QWORD *)a1 + 39);
      v25.DmaBufferSize = *(_DWORD *)(v10 + 40);
      v17 = *((_DWORD *)a1 + 81);
      v25.hDevice = DriverPagingContext;
      v18 = *(void **)(v10 + 128);
      v25.DmaBufferSubmissionStartOffset = v17;
      v19 = *((_DWORD *)a1 + 82) + v17;
      v25.pDmaBufferPrivateData = v18;
      v25.DmaBufferSubmissionEndOffset = v19;
      v25.pDmaBuffer = v11;
      v25.DmaBufferPrivateDataSize = *(_DWORD *)(v20 + 88);
      v25.DmaBufferPrivateDataSubmissionStartOffset = v16;
      v25.DmaBufferPrivateDataSubmissionEndOffset = *((_DWORD *)a1 + 84) + v16;
      memset(&v25.pPatchLocationList, 0, 20);
      v25.SubmissionFenceId = *((_DWORD *)DmaPacket + 26);
      v25.EngineOrdinal = v21;
      v25.Flags.Value = 1;
      v22 = ADAPTER_RENDER::DdiPatch(v27, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v25);
      if ( v22 < 0 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 25LL, v10, &v25, v22);
      }
    }
    DmaPacket[15] = v11;
    if ( *(_BYTE *)(344LL * *(unsigned __int16 *)(v6 + 6)
                  + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL) + 2808LL)
                  + 48) )
    {
      *((_DWORD *)DmaPacket + 23) |= 0x2000u;
      v23 = *(_QWORD *)(*((_QWORD *)a1 + 35) + 96LL);
      DmaPacket[22] = v23;
      DmaPacket[22] = v23 + *((unsigned int *)a1 + 81);
      *((_DWORD *)DmaPacket + 37) = *((_DWORD *)a1 + 82);
      DmaPacket[24] = *(_QWORD *)(*((_QWORD *)a1 + 35) + 128LL);
    }
    else
    {
      *((_DWORD *)DmaPacket + 32) = *((_DWORD *)a1 + 80);
      DmaPacket[17] = *((_QWORD *)a1 + 39);
      *((_DWORD *)DmaPacket + 36) = *((_DWORD *)a1 + 81);
      *((_DWORD *)DmaPacket + 37) = *((_DWORD *)a1 + 82) + *((_DWORD *)a1 + 81);
    }
    *((_DWORD *)DmaPacket + 38) = *((_DWORD *)a1 + 83);
    *((_DWORD *)DmaPacket + 39) = *((_DWORD *)a1 + 83) + *((_DWORD *)a1 + 84);
    DmaPacket[14] = *(_QWORD *)(v10 + 160);
    v24 = *((_DWORD *)a1 + 28);
    DmaPacket[25] = 0LL;
    *((_DWORD *)DmaPacket + 24) = v24;
    *((_DWORD *)DmaPacket + 23) ^= (*((_DWORD *)DmaPacket + 23) ^ (*((_DWORD *)a1 + 68) >> 8)) & 1;
    *((_DWORD *)DmaPacket + 52) = *((_DWORD *)a1 + 85);
    *((_DWORD *)DmaPacket + 53) = *((_DWORD *)a1 + 86);
    VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  }
}
