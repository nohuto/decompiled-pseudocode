/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x1C000DED0
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000DDC0 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C003C650 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000E3C0 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrVSync @ 0x1C000E890 (VidSchiProcessIsrVSync.c)
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C000FEB4 (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000FF30 (VidSchiProcessIsrPreemptedPacket.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C002A18C (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     LogPageFaultInformation @ 0x1C002CEE8 (LogPageFaultInformation.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C002EA44 (McTemplateK0qq_EtwWriteTransfer.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C0030180 (VidSchiProcessIsrFaultedPacket.c)
 *     ?VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z @ 0x1C0039878 (-VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z.c)
 *     VidSchiProcessIsrGpuEngineTimeout @ 0x1C003B330 (VidSchiProcessIsrGpuEngineTimeout.c)
 *     VidSchiProcessIsrHwQueuePageFaulted @ 0x1C003B3B4 (VidSchiProcessIsrHwQueuePageFaulted.c)
 *     VidSchiProcessIsrMonitoredFenceSignaled @ 0x1C003B538 (VidSchiProcessIsrMonitoredFenceSignaled.c)
 *     VidSchiProcessIsrSchedulingLogFull @ 0x1C003B5BC (VidSchiProcessIsrSchedulingLogFull.c)
 *     VidSchiProcessIsrSuspendContextCompleted @ 0x1C003B640 (VidSchiProcessIsrSuspendContextCompleted.c)
 */

void __fastcall VidSchDdiNotifyInterruptWorker(__int64 a1, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 SubmissionFenceId; // rsi
  __int64 InterruptType; // rdx
  unsigned int v8; // r14d
  __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 *v17; // rbx
  __int64 v18; // rbx
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 *v21; // rbp
  int v22; // ebx
  UINT PhysicalAdapterMask; // r8d
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 *v31; // rbx
  __int64 v32; // rbx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 *v38; // r15
  __int64 v39; // r15
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  PSLIST_ENTRY v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  UINT ProcessingTime; // eax
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // eax
  union _SLIST_HEADER *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // ebp
  PSLIST_ENTRY v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  PSLIST_ENTRY v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // r8
  unsigned int v63; // [rsp+60h] [rbp+8h] BYREF
  __int64 v64; // [rsp+68h] [rbp+10h]

  SubmissionFenceId = *(_QWORD *)(a1 + 624);
  v63 = 0;
  InterruptType = (unsigned int)a2->InterruptType;
  v8 = a3;
  v9 = a1;
  if ( (unsigned int)InterruptType > 0xA
    || (v10 = 1160, !_bittest(&v10, InterruptType))
    || (*(_DWORD *)(SubmissionFenceId + 36) & 0x10) == 0 )
  {
    v64 = v4;
    switch ( (_DWORD)InterruptType )
    {
      case 1:
        if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) == 0 )
          return;
        v15 = a2->DmaCompleted.NodeOrdinal
            + *(unsigned __int8 *)(a2->DmaCompleted.EngineOrdinal + SubmissionFenceId + 80);
        v16 = v15;
        if ( (_DWORD)a3 )
        {
          if ( _bittest64(*(const signed __int64 **)(SubmissionFenceId + 584), v15) )
            return;
        }
        v17 = *(__int64 **)(SubmissionFenceId + 624);
        if ( (unsigned int)v15 < *(_DWORD *)(SubmissionFenceId + 696) )
          v17 += v15;
        v18 = *v17;
        if ( *(_DWORD *)(v18 + 16) == 1 )
          return;
        if ( (_DWORD)a3 && *(_DWORD *)(v18 + 16) == 2 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v15);
          v27[3] = 281LL;
          v27[4] = 16LL;
          v27[5] = SubmissionFenceId;
          v27[6] = *(unsigned __int16 *)(v18 + 4);
          v27[7] = 0LL;
          v19 = WdLogEvent5_WdCriticalError(v27);
          __debugbreak();
        }
        else
        {
          SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
          v9 = *(unsigned int *)(v18 + 64);
          v4 = *(_QWORD *)(v18 + 24);
          v63 = SubmissionFenceId;
          if ( (_DWORD)SubmissionFenceId == (_DWORD)v9 || (_DWORD)SubmissionFenceId == *(_DWORD *)(v18 + 72) )
            goto LABEL_23;
          v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 152), 0, 0);
          if ( v19 >= (unsigned int)v9 )
          {
            if ( (unsigned int)SubmissionFenceId <= v19 && (unsigned int)SubmissionFenceId >= (unsigned int)v9 )
            {
LABEL_23:
              VidSchiProcessIsrCompletedPacket(v18, (unsigned int)SubmissionFenceId, a3, a2);
              return;
            }
            goto LABEL_58;
          }
        }
        if ( (unsigned int)SubmissionFenceId <= v19 || (unsigned int)SubmissionFenceId >= (unsigned int)v9 )
          goto LABEL_23;
LABEL_58:
        if ( *(_BYTE *)(v4 + 53) )
        {
          *(_DWORD *)(v18 + 2024) = 1;
          *(_BYTE *)(v18 + 2017) = 1;
          return;
        }
        v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v16);
        v28[3] = 281LL;
        v28[4] = 1LL;
        v28[5] = SubmissionFenceId;
        v28[6] = v9;
        v28[7] = *(_QWORD *)(v4 + 16);
        WdLogEvent5_WdCriticalError(v28);
        __debugbreak();
        goto LABEL_61;
      case 0xB:
LABEL_61:
        if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) != 0 )
        {
          v29 = a2->DmaCompleted.SubmissionFenceId
              + *(unsigned __int8 *)(a2->DmaCompleted.NodeOrdinal + SubmissionFenceId + 80);
          v30 = v29;
          if ( !v8 || !_bittest64(*(const signed __int64 **)(SubmissionFenceId + 584), v29) )
          {
            v31 = *(__int64 **)(SubmissionFenceId + 624);
            if ( (unsigned int)v29 < *(_DWORD *)(SubmissionFenceId + 696) )
              v31 += v29;
            v32 = *v31;
            if ( *(_DWORD *)(v32 + 16) != 1 )
            {
              if ( v8 && *(_DWORD *)(v32 + 16) == 2 )
              {
                v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v29);
                v33[3] = 281LL;
                v33[4] = 16LL;
                v33[5] = SubmissionFenceId;
                v33[6] = *(unsigned __int16 *)(v32 + 4);
                v33[7] = 0LL;
                WdLogEvent5_WdCriticalError(v33);
                __debugbreak();
              }
              VidSchiProcessIsrMonitoredFenceSignaled(v32, v30);
            }
          }
        }
        return;
      case 2:
        if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) == 0 )
          return;
        v20 = a2->DmaCompleted.EngineOrdinal
            + *(unsigned __int8 *)(a2->DmaPreempted.EngineOrdinal + SubmissionFenceId + 80);
        if ( (_DWORD)a3 )
        {
          if ( _bittest64(*(const signed __int64 **)(SubmissionFenceId + 584), v20) )
            return;
        }
        v21 = *(__int64 **)(SubmissionFenceId + 624);
        if ( (unsigned int)v20 < *(_DWORD *)(SubmissionFenceId + 696) )
          v21 += v20;
        v9 = *v21;
        if ( *(_DWORD *)(v9 + 16) == 1 )
          return;
        if ( !(_DWORD)a3 || *(_DWORD *)(v9 + 16) != 2 )
        {
          if ( (unsigned int)VidSchiVerifyDriverReportedFenceId(
                               (struct _VIDSCH_NODE *)v9,
                               a2->DmaCompleted.SubmissionFenceId,
                               1,
                               0LL)
            && (unsigned int)VidSchiVerifyDriverReportedFenceId(
                               (struct _VIDSCH_NODE *)v9,
                               a2->DmaCompleted.NodeOrdinal,
                               0,
                               &v63) )
          {
            do
            {
              v22 = VidSchiProcessIsrCompletedPacket(v9, v63, v8, a2);
              VidSchiProcessIsrPreemptedPacket(v9, a2->DmaCompleted.SubmissionFenceId, v8, a2);
            }
            while ( v22 );
          }
          return;
        }
        v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v20);
        v34[3] = 281LL;
        v34[4] = 16LL;
        v34[5] = SubmissionFenceId;
        v34[6] = *(unsigned __int16 *)(v9 + 4);
        v34[7] = 0LL;
        WdLogEvent5_WdCriticalError(v34);
        __debugbreak();
        break;
      case 4:
        break;
      case 9:
LABEL_73:
        if ( (*(_DWORD *)(SubmissionFenceId + 36) & 4) == 0 )
          return;
        VidSchiValidatePageFaultFlags(a2->DmaPageFaulted.PageFaultFlags);
        v36 = a2->MiracastEncodeChunkCompleted.PrivateDataDriverSize
            + *(unsigned __int8 *)(a2->DmaPageFaulted.EngineOrdinal + SubmissionFenceId + 80);
        v37 = v36;
        if ( v8 && _bittest64(*(const signed __int64 **)(SubmissionFenceId + 584), v36) )
        {
          LogPageFaultInformation(1LL, v9, a2);
          return;
        }
        v38 = *(__int64 **)(SubmissionFenceId + 624);
        if ( (unsigned int)v36 < *(_DWORD *)(SubmissionFenceId + 696) )
          v38 += v36;
        v39 = *v38;
        LOBYTE(v36) = (*(_BYTE *)(v39 + 12) & 2) != 0;
        if ( ((unsigned __int8)v36 & ((a2->Reserved.Reserved[6] & 2) == 0)) != 0 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v37);
          v40[3] = 281LL;
          v40[4] = 13LL;
          v40[5] = (*(_DWORD *)(v39 + 12) >> 1) & 1;
          v40[6] = a2->HwQueuePageFaulted.NodeOrdinal;
          v40[7] = a2->HwQueuePageFaulted.EngineOrdinal;
          WdLogEvent5_WdCriticalError(v40);
          __debugbreak();
        }
        if ( *(_DWORD *)(v39 + 16) == 1 )
        {
          LogPageFaultInformation(2LL, v9, a2);
          return;
        }
        if ( v8 && *(_DWORD *)(v39 + 16) == 2 )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v37);
          v41[3] = 281LL;
          v41[4] = 16LL;
          v41[5] = SubmissionFenceId;
          v41[6] = *(unsigned __int16 *)(v39 + 4);
          v41[7] = 0LL;
          WdLogEvent5_WdCriticalError(v41);
          __debugbreak();
        }
        if ( (a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime & 2) == 0 )
        {
          if ( (unsigned int)VidSchiVerifyDriverReportedFenceId(
                               (struct _VIDSCH_NODE *)v39,
                               a2->DmaCompleted.SubmissionFenceId,
                               0,
                               &v63) )
          {
            VidSchiProcessIsrCompletedPacket(v39, v63, v8, a2);
            VidSchiProcessIsrFaultedPacket(v39, v63, v8, a2);
            ProcessingTime = a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
            if ( (ProcessingTime & 4) != 0 )
            {
              LogPageFaultInformation(3LL, v9, a2);
            }
            else if ( (ProcessingTime & 8) != 0 )
            {
              LogPageFaultInformation(4LL, v9, a2);
            }
            else
            {
              LogPageFaultInformation(5LL, v9, a2);
            }
          }
          return;
        }
        v42 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v39 + 6224));
        if ( v42 )
        {
          v42[2].Next = (struct _SLIST_ENTRY *)v39;
          *((_QWORD *)&v42[2].Next + 1) = a2->DmaCompleted.SubmissionFenceId;
          *((_QWORD *)&v42[3].Next + 1) = a2->CrtcVsync.PhysicalAddress.QuadPart;
          LODWORD(v42[5].Next) = a2->CrtcVsync.PhysicalAdapterMask;
          HIDWORD(v42[5].Next) = a2->DmaPageFaulted.FaultedBindTableEntry;
          *((_DWORD *)&v42[5].Next + 2) = a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
          v42[3].Next = (struct _SLIST_ENTRY *)a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
          *((_DWORD *)&v42[4].Next + 2) = a2->MiracastEncodeChunkCompleted.PrivateDataDriverSize;
          *((_DWORD *)&v42[4].Next + 3) = a2->MiracastEncodeChunkCompleted.Status;
          *((_DWORD *)&v42[5].Next + 3) = a2->DmaPageFaulted.PageTableLevel;
          LODWORD(v42[6].Next) = a2->DmaPageFaulted.FaultErrorCode.0;
          v42[4].Next = (struct _SLIST_ENTRY *)a2->DmaPageFaulted.FaultedProcessHandle;
          LODWORD(v42->Next) = 12;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(SubmissionFenceId + 1760), v42 + 1);
          return;
        }
        v45 = WdLogNewEntry5_WdAssertion(v43, 0LL, v44);
        *(_QWORD *)(v45 + 24) = *(unsigned __int16 *)(v39 + 4);
LABEL_115:
        WdLogEvent5_WdAssertion(v45);
        return;
      case 0xF:
        if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) != 0 )
        {
          v47 = *(_QWORD **)(SubmissionFenceId + 624);
          v48 = a2->DmaCompleted.SubmissionFenceId
              + *(unsigned __int8 *)(a2->DmaCompleted.NodeOrdinal + SubmissionFenceId + 80);
          if ( (unsigned int)v48 < *(_DWORD *)(SubmissionFenceId + 696) )
            v47 += v48;
          VidSchiProcessIsrSchedulingLogFull(*v47);
        }
        return;
      case 0x10:
        if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) != 0 )
        {
          v49 = *(_QWORD **)(SubmissionFenceId + 624);
          v50 = a2->DmaCompleted.SubmissionFenceId
              + *(unsigned __int8 *)(a2->DmaCompleted.NodeOrdinal + SubmissionFenceId + 80);
          if ( (unsigned int)v50 < *(_DWORD *)(SubmissionFenceId + 696) )
            v49 += v50;
          VidSchiProcessIsrGpuEngineTimeout(*v49);
        }
        return;
      case 0x11:
        if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) != 0 )
          VidSchiProcessIsrSuspendContextCompleted(SubmissionFenceId, a2);
        return;
      case 0xC:
        if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) != 0 )
          VidSchiProcessIsrHwQueuePageFaulted(SubmissionFenceId, a2);
        return;
      case 0xE:
        v51 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(
                *(ADAPTER_DISPLAY **)(*(_QWORD *)(SubmissionFenceId + 16) + 2696LL),
                a2->DmaCompleted.SubmissionFenceId);
        v55 = v51;
        if ( v51 == -1
          || (v52 = *(union _SLIST_HEADER **)(SubmissionFenceId + 8LL * v51 + 3104),
              (unsigned __int8)a2->DmaCompleted.NodeOrdinal >= 8u) )
        {
          v45 = WdLogNewEntry5_WdAssertion(v53, v52, v54);
        }
        else
        {
          v56 = ExpInterlockedPopEntrySList(v52 + 4154);
          v60 = v56;
          if ( v56 )
          {
            HIDWORD(v56[2].Next) = a2->DmaCompleted.NodeOrdinal;
            LODWORD(v56[2].Next) = v55;
            LODWORD(v56->Next) = 14;
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(SubmissionFenceId + 1760), v56 + 1);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
              McTemplateK0qq_EtwWriteTransfer(
                (unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits,
                v61,
                v62,
                LODWORD(v60[2].Next),
                HIDWORD(v60[2].Next));
            return;
          }
          v45 = WdLogNewEntry5_WdAssertion(v58, v57, v59);
          *(_QWORD *)(v45 + 24) = a2->DmaCompleted.SubmissionFenceId;
          *(_QWORD *)(v45 + 32) = a2->DmaCompleted.NodeOrdinal;
        }
        goto LABEL_115;
      default:
        return;
    }
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, InterruptType);
    v35[3] = 281LL;
    v35[4] = 13LL;
    v35[5] = a2->DmaCompleted.EngineOrdinal;
    v35[6] = a2->DmaPreempted.EngineOrdinal;
    v35[7] = a2->DmaCompleted.SubmissionFenceId;
    WdLogEvent5_WdCriticalError(v35);
    __debugbreak();
    goto LABEL_73;
  }
  if ( *(_DWORD *)(SubmissionFenceId + 72) <= 1u
    || (a2->Flags.Value & 1) == 0
    || ((_DWORD)InterruptType != 7
      ? ((_DWORD)InterruptType != 10
       ? (PhysicalAdapterMask = a2->CrtcVsync.PhysicalAdapterMask)
       : (PhysicalAdapterMask = a2->DmaCompleted.NodeOrdinal))
      : (PhysicalAdapterMask = a2->DmaCompleted.NodeOrdinal),
        PhysicalAdapterMask) )
  {
    v3 = MEMORY[0xFFFFF78000000320];
    v11 = VidSchiProcessIsrVSync((struct _VIDSCH_GLOBAL *)SubmissionFenceId, a2);
    if ( v11 != -1 && v11 < *(_DWORD *)(SubmissionFenceId + 40) )
    {
      _mm_lfence();
      v12 = *(_QWORD *)(SubmissionFenceId + 8LL * v11 + 3104);
      v13 = *(unsigned int *)(v12 + 33292);
      *(_QWORD *)(v12 + 8 * v13 + 33296) = v3;
      v14 = 10 * v13;
      *(_OWORD *)(v12 + 8 * v14 + 33328) = *(_OWORD *)&a2->InterruptType;
      *(_OWORD *)(v12 + 8 * v14 + 33344) = *(_OWORD *)&a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkType;
      *(_OWORD *)(v12 + 8 * v14 + 33360) = *(_OWORD *)&a2->Reserved.Reserved[6];
      *(_OWORD *)(v12 + 8 * v14 + 33376) = *(_OWORD *)&a2->Reserved.Reserved[10];
      *(_OWORD *)(v12 + 8 * v14 + 33392) = *(_OWORD *)&a2->Reserved.Reserved[14];
      *(_DWORD *)(v12 + 33292) = ((unsigned __int8)*(_DWORD *)(v12 + 33292) + 1) & 3;
      return;
    }
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, InterruptType);
    v24[3] = 281LL;
    v24[4] = 6LL;
    v24[5] = SubmissionFenceId;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
    __debugbreak();
  }
  v25 = *(unsigned int *)(SubmissionFenceId + 5928);
  *(_QWORD *)(SubmissionFenceId + 8 * v25 + 5936) = v3;
  v26 = 10 * v25;
  *(_OWORD *)(SubmissionFenceId + 8 * v26 + 5968) = *(_OWORD *)&a2->InterruptType;
  *(_OWORD *)(SubmissionFenceId + 8 * v26 + 5984) = *(_OWORD *)&a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkType;
  *(_OWORD *)(SubmissionFenceId + 8 * v26 + 6000) = *(_OWORD *)&a2->Reserved.Reserved[6];
  *(_OWORD *)(SubmissionFenceId + 8 * v26 + 6016) = *(_OWORD *)&a2->Reserved.Reserved[10];
  *(_OWORD *)(SubmissionFenceId + 8 * v26 + 6032) = *(_OWORD *)&a2->Reserved.Reserved[14];
  *(_DWORD *)(SubmissionFenceId + 5928) = ((unsigned __int8)*(_DWORD *)(SubmissionFenceId + 5928) + 1) & 3;
}
