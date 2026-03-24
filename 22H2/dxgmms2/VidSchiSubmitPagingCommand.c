/*
 * XREFs of VidSchiSubmitPagingCommand @ 0x1C0085280
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008E0A0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00CEF10 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00018E8 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007BA0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0008B50 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000C140 (VidSchIsTDRPending.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C00224FC (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchGetDriverPagingContext @ 0x1C0063E9C (VidSchGetDriverPagingContext.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080A40 (VidSchWaitForCompletionEvent.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00CE4DC (VidSchiDiscardQueuePacket.c)
 */

void __fastcall VidSchiSubmitPagingCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r15
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r15
  void *v15; // r12
  ADAPTER_RENDER *v16; // r13
  __int64 v17; // rcx
  int v18; // edx
  struct _KEVENT *v19; // rcx
  int v20; // eax
  void (__fastcall *v21)(_QWORD); // rax
  unsigned int v22; // edx
  unsigned int v23; // eax
  _QWORD *v24; // rcx
  void *DriverPagingContext; // rax
  UINT v26; // edx
  UINT v27; // ecx
  void *v28; // rax
  __int64 v29; // r11
  UINT v30; // r10d
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r13
  _QWORD *v35; // rax
  _DXGKARG_PATCH v36; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v37[40]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v3 = *(_QWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2940) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    || *(_BYTE *)(v3 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
  {
    VidSchiDiscardQueuePacket(a1);
  }
  else
  {
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, (__int64)v37, 20LL) )
    {
      *(_QWORD *)(i + 1440) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1400));
      v7 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1720), (_QWORD **)(v4 + 11232), 0LL);
      if ( v7 )
        break;
      memset(v37, 0, sizeof(v37));
      v20 = *(unsigned __int16 *)(v4 + 4);
      v37[8] |= 0x41u;
      v37[12] = v20;
      v37[5] = 1;
    }
    v8 = (__int64)(v7 - 2);
    memset(v7 - 2, 0, 0xE0uLL);
    v9 = *(unsigned __int16 *)(v4 + 4);
    v10 = *(__int64 **)(v5 + 624);
    if ( (unsigned int)v9 < *(_DWORD *)(v5 + 696) )
      v10 += v9;
    v11 = *v10;
    v12 = ++*(_QWORD *)(v11 + 48);
    *(_QWORD *)(v8 + 104) = v12;
    *((_QWORD *)a1 + 15) = v12;
    *(_DWORD *)v8 = 912353622;
    *(_DWORD *)(v8 + 88) = 1;
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    v13 = 0;
    *(_DWORD *)(v8 + 92) = 0;
    *(_DWORD *)(v8 + 72) = 7;
    *(_QWORD *)(v8 + 56) = a1;
    *(_QWORD *)(v8 + 48) = v1;
    if ( *((_DWORD *)a1 + 32) )
      v13 = 0x4000;
    *(_DWORD *)(v8 + 92) = v13;
    *(_BYTE *)(v5 + 54) = 1;
    if ( *(_DWORD *)(v4 + 11224) != -1 )
    {
      v21 = *(void (__fastcall **)(_QWORD))(v5 + 2960);
      if ( v21 )
        v21(*(_QWORD *)(v5 + 3024));
    }
    *(_BYTE *)(v5 + 54) = 0;
    *(_DWORD *)(v8 + 92) |= 0x400u;
    v14 = *((_QWORD *)a1 + 35);
    *(_QWORD *)(v8 + 64) = v14;
    if ( *(_DWORD *)(*(_QWORD *)(v14 + 136) + 36LL) )
      v15 = *(void **)(*(_QWORD *)(v14 + 56) + 360LL);
    else
      v15 = *(void **)(v14 + 72);
    v16 = *(ADAPTER_RENDER **)(v5 + 8);
    if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 2584LL) + 360LL * *(unsigned __int16 *)(v4 + 6) + 48) )
    {
      v22 = *((_DWORD *)a1 + 87);
      *(&v36.DmaBufferSegmentId + 1) = 0;
      *(&v36.DmaBufferSubmissionEndOffset + 1) = 0;
      memset(&v36.DmaBufferPrivateDataSubmissionEndOffset + 1, 0, 40);
      v23 = VidSchiSchedulerNodeToDriverEngine(v5, v22);
      DriverPagingContext = (void *)VidSchGetDriverPagingContext(v24, v23, *((_BYTE *)a1 + 352));
      v26 = *((_DWORD *)a1 + 83);
      v36.DmaBufferSegmentId = *((_DWORD *)a1 + 80);
      v36.DmaBufferPhysicalAddress.QuadPart = *((_QWORD *)a1 + 39);
      v36.DmaBufferSize = *(_DWORD *)(v14 + 40);
      v36.DmaBufferSubmissionStartOffset = *((_DWORD *)a1 + 81);
      v27 = *((_DWORD *)a1 + 82) + v36.DmaBufferSubmissionStartOffset;
      v36.hDevice = DriverPagingContext;
      v28 = *(void **)(v14 + 128);
      v36.DmaBufferSubmissionEndOffset = v27;
      v36.pDmaBufferPrivateData = v28;
      v36.pDmaBuffer = v15;
      LODWORD(v28) = *(_DWORD *)(v29 + 88);
      v36.DmaBufferPrivateDataSubmissionStartOffset = v26;
      v36.DmaBufferPrivateDataSubmissionEndOffset = *((_DWORD *)a1 + 84) + v26;
      v36.DmaBufferPrivateDataSize = (unsigned int)v28;
      v36.SubmissionFenceId = *(_DWORD *)(v8 + 104);
      v36.EngineOrdinal = v30;
      v36.Flags.Value = 1;
      v31 = ADAPTER_RENDER::DdiPatch(v16, &v36);
      v34 = v31;
      if ( v31 < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32);
        v35[6] = &v36;
        v35[3] = 270LL;
        v35[4] = 25LL;
        v35[5] = v14;
        v35[7] = v34;
        WdLogEvent5_WdCriticalError(v35);
      }
    }
    *(_QWORD *)(v8 + 120) = v15;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2584LL)
                  + 360LL * *(unsigned __int16 *)(v4 + 6)
                  + 48) )
    {
      *(_DWORD *)(v8 + 92) |= 0x2000u;
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 35) + 96LL);
      *(_QWORD *)(v8 + 176) = v17;
      *(_QWORD *)(v8 + 176) = v17 + *((unsigned int *)a1 + 81);
      *(_DWORD *)(v8 + 148) = *((_DWORD *)a1 + 82);
      *(_QWORD *)(v8 + 192) = *(_QWORD *)(*((_QWORD *)a1 + 35) + 128LL);
    }
    else
    {
      *(_DWORD *)(v8 + 128) = *((_DWORD *)a1 + 80);
      *(_QWORD *)(v8 + 136) = *((_QWORD *)a1 + 39);
      *(_DWORD *)(v8 + 144) = *((_DWORD *)a1 + 81);
      *(_DWORD *)(v8 + 148) = *((_DWORD *)a1 + 82) + *((_DWORD *)a1 + 81);
    }
    v18 = *(_DWORD *)(v8 + 92);
    *(_DWORD *)(v8 + 152) = *((_DWORD *)a1 + 83);
    *(_DWORD *)(v8 + 156) = *((_DWORD *)a1 + 83) + *((_DWORD *)a1 + 84);
    *(_QWORD *)(v8 + 112) = *(_QWORD *)(v14 + 160);
    *(_DWORD *)(v8 + 96) = *((_DWORD *)a1 + 28);
    *(_QWORD *)(v8 + 200) = 0LL;
    *(_DWORD *)(v8 + 92) = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)BYTE1(*((_DWORD *)a1 + 68))) & 1;
    *(_DWORD *)(v8 + 208) = *((_DWORD *)a1 + 85);
    *(_DWORD *)(v8 + 212) = *((_DWORD *)a1 + 86);
    v19 = *(struct _KEVENT **)(*(_QWORD *)(v8 + 48) + 96LL);
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 72) = 8;
    v19[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v19 + 10);
    VidSchiSendToExecutionQueue(v8, 0);
  }
}
