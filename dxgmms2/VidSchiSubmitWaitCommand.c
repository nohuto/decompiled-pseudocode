/*
 * XREFs of VidSchiSubmitWaitCommand @ 0x1C00105F4
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C0106CD8 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0006790 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiUpdateContextStatus @ 0x1C0008230 (VidSchiUpdateContextStatus.c)
 *     VidSchiRewindPacket @ 0x1C0010730 (VidSchiRewindPacket.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0013514 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C003C938 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiSubmitWaitCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r15
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v2; // rbx
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  UINT Duration; // eax
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)a1;
  v3 = *(_QWORD *)(v1 + 104);
  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  v11 = 0;
  v10[1] = v10;
  v10[0] = v10;
  if ( (*(_BYTE *)(v5 + 3036) & 1) != 0
    || *(_DWORD *)(v5 + 3012)
    || *(_BYTE *)(v3 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
  {
    Duration = v2[5].Duration;
    if ( (Duration & 1) == 0 )
    {
      LOBYTE(v6) = 1;
      if ( (Duration & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(v10, v2, v6);
      else
        VidSchiUnwaitWaitQueuePacket(v10, v2, v6, 0LL);
    }
  }
  if ( (v2[5].Duration & 1) != 0 )
  {
    v4 = 1;
  }
  else
  {
    VidSchiRewindPacket(v2, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v1, 4LL, 25907);
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v10);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal((struct _VIDSCH_QUEUE_PACKET *)v2, v7, v8);
    while ( v2 );
  }
  if ( !v11 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v10);
}
