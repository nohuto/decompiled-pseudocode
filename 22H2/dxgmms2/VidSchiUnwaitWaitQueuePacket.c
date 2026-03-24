/*
 * XREFs of VidSchiUnwaitWaitQueuePacket @ 0x1C0010CF4
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000CBA0 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000CCD0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0011CF0 (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0013AB8 (VidSchiSubmitWaitCommand.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C00165C4 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     ?VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002A898 (-VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002BD34 (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00383B0 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000CA08 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C0010EEC (VidSchiUnwaitContext.c)
 *     VidSchiFreeQueuePacket @ 0x1C0011024 (VidSchiFreeQueuePacket.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C002D260 (McTemplateK0pp_EtwWriteTransfer.c)
 */

int __fastcall VidSchiUnwaitWaitQueuePacket(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rcx

  v5 = (unsigned __int8)a3;
  v6 = *(_QWORD *)(a2 + 88);
  if ( v6 )
    v9 = *(_QWORD *)(v6 + 96);
  else
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 40LL) + 16LL);
  v10 = *(_QWORD *)(v9 + 24);
  if ( bTracingEnabled )
  {
    if ( v6 )
    {
      v11 = *(_QWORD *)(v6 + 56);
      if ( !v11 || (*(_DWORD *)(v6 + 112) & 0x40) != 0 )
        v11 = v6;
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 96) + 48LL);
      if ( !v11 )
        v11 = *(_QWORD *)(a2 + 96);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v11, &EventUnwaitQueuePacket, a3, a2, v11);
  }
  v12 = (_QWORD *)(a2 + 288);
  v13 = *(_QWORD *)(a2 + 288);
  if ( *(_QWORD *)(v13 + 8) != a2 + 288 )
    goto LABEL_26;
  v14 = *(_QWORD **)(a2 + 296);
  if ( (_QWORD *)*v14 != v12 )
    goto LABEL_26;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  v15 = *(_QWORD *)(a2 + 280);
  *(_QWORD *)(a2 + 296) = 0LL;
  v16 = *(_DWORD *)(v15 + 44);
  if ( ((v16 - 2) & 0xFFFFFFFC) == 0 && v16 != 3 )
  {
    v17 = *(_QWORD *)(a2 + 88);
    if ( v17 )
      _InterlockedDecrement((volatile signed __int32 *)(v17 + 800));
    if ( (*(_DWORD *)(a2 + 272) & 8) != 0 )
    {
      --*(_DWORD *)(v10 + 812);
      *(_DWORD *)(a2 + 272) &= ~8u;
    }
  }
  VidSchiReleaseSyncObjectReference(*(char **)(a2 + 280));
  *(_DWORD *)(a2 + 272) = *(_DWORD *)(a2 + 272) ^ (*(_DWORD *)(a2 + 272) ^ (2 * v5)) & 2 | 1;
  if ( (*(_DWORD *)(a2 + 64) & 0x10) != 0 )
  {
    v19 = (_QWORD *)(a2 + 32);
    v20 = *(_QWORD *)(a2 + 32);
    if ( *(_QWORD *)(v20 + 8) == a2 + 32 )
    {
      v21 = *(_QWORD **)(a2 + 40);
      if ( (_QWORD *)*v21 == v19 )
      {
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        *v19 = 0LL;
        v22 = *(_QWORD *)(a2 + 88);
        *(_QWORD *)(a2 + 40) = 0LL;
        --*(_DWORD *)(v22 + 804);
        *(_DWORD *)(a2 + 64) &= ~0x10u;
        LODWORD(v18) = VidSchiFreeQueuePacket(*(_QWORD *)(a2 + 88));
        return v18;
      }
    }
LABEL_26:
    __fastfail(3u);
  }
  v18 = *(_QWORD *)(a2 + 88);
  if ( v18 )
  {
    LODWORD(v18) = *(_DWORD *)(v18 + 184);
    if ( (v18 & 0x20) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 184LL) &= ~0x20u;
      LODWORD(v18) = VidSchiUnwaitContext(*(_QWORD *)(a2 + 88), 24363LL);
      if ( (_BYTE)v18 )
      {
        *(_QWORD *)(v10 + 1208) = MEMORY[0xFFFFF78000000320];
        LODWORD(v18) = KeSetEvent((PRKEVENT)(v10 + 1176), 0, 0);
      }
    }
    return v18;
  }
  if ( a4 )
  {
    v23 = *(_QWORD *)(a2 + 96);
    if ( !*(_QWORD *)(v23 + 48) )
      *a4 = v23;
  }
  v18 = *(_QWORD *)(a2 + 96) + 176LL;
  if ( !*(_QWORD *)v18 )
  {
    v24 = *(__int64 **)(a1 + 8);
    if ( *v24 == a1 )
    {
      *(_QWORD *)v18 = a1;
      *(_QWORD *)(v18 + 8) = v24;
      *v24 = v18;
      *(_QWORD *)(a1 + 8) = v18;
      *(_BYTE *)(a1 + 16) = 0;
      return v18;
    }
    goto LABEL_26;
  }
  return v18;
}
