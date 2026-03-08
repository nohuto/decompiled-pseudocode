/*
 * XREFs of VidSchiSubmitSignalCommand @ 0x1C00163E0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C0106CD8 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0006790 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C63A (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C003A5F8 (VidSchiCompleteSignalCommmand.c)
 */

void __fastcall VidSchiSubmitSignalCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbx
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v2; // rdi
  int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // r8
  _QWORD *v6; // rdx
  UINT Duration; // ecx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+30h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)a1;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1728), &LockHandle);
  v12 = 0;
  v11[1] = v11;
  v6 = v11;
  v11[0] = v11;
  if ( v2->pHDRMetaData == (DXGK_HDR_METADATA *)(v1 + 664) )
  {
    v3 = 1;
  }
  else
  {
    Duration = v2[1].Duration;
    if ( (v2[5].Duration & 1) != 0 )
    {
      if ( (Duration & 4) == 0 )
      {
        LOBYTE(v5) = 1;
        VidSchiCompleteSignalCommmand(v11, v2, v5);
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 980));
        v6 = (_QWORD *)v11[0];
      }
      v2[1].Duration |= 9u;
    }
    else
    {
      v2[1].Duration = Duration | 1;
    }
  }
  while ( 1 )
  {
    if ( (_QWORD *)v6[1] != v11 || (v8 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    v11[0] = *v6;
    *(_QWORD *)(v8 + 8) = v11;
    if ( v6 == v11 )
      break;
    *v6 = 0LL;
    v6[1] = 0LL;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v11, (struct VIDSCH_HW_QUEUE *)(v6 - 22));
    v6 = (_QWORD *)v11[0];
  }
  v12 = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal((struct _VIDSCH_QUEUE_PACKET *)v2, v9, v10);
    while ( v2 );
  }
  if ( !v12 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v11);
}
