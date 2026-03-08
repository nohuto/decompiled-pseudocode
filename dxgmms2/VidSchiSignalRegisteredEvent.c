/*
 * XREFs of VidSchiSignalRegisteredEvent @ 0x1C00104D4
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000FCEC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C00100E4 (VidSchiProcessDpcSystemRequest.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CC2E (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C003A950 (VidSchiFlushPendingTokenList.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0041854 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0042D18 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0045F04 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C0046764 (VidSchiSuspendResumeHwContext.c)
 *     VidSchiDiscardQueuePacket @ 0x1C01060F8 (VidSchiDiscardQueuePacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C010910C (VidSchUnreferenceDmaBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalRegisteredEvent(__int64 a1, struct _KEVENT **a2)
{
  KIRQL v4; // si
  struct _KEVENT *i; // rbx
  int Flink; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 1744), &LockHandle);
  for ( i = *a2; i != (struct _KEVENT *)a2; i = *(struct _KEVENT **)&i->Header.Lock )
  {
    if ( LODWORD(i->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 4LL * LODWORD(i[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 244LL) )
        goto LABEL_10;
    }
    else if ( ((__int64)i[1].Header.WaitListHead.Flink & 0x10) == 0
           || (Flink = (int)i[1].Header.WaitListHead.Blink->Flink, (HIDWORD(i[5].Header.WaitListHead.Blink) = Flink) == 0) )
    {
LABEL_10:
      ++i[5].Header.LockNV;
      KeSetEvent(i + 4, 0, 0);
      continue;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v4);
}
