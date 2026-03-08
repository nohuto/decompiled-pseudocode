/*
 * XREFs of VidSchiSubmitSoftwareCommand @ 0x1C0017004
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C0106CD8 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 */

void __fastcall VidSchiSubmitSoftwareCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbx
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v2; // rdi
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v2 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)a1;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL) + 1728LL), &LockHandle);
  if ( v2->pHDRMetaData == (DXGK_HDR_METADATA *)(v1 + 664) )
    v3 = 1;
  else
    v2[1].Duration |= 1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal((struct _VIDSCH_QUEUE_PACKET *)v2, v4, v5);
    while ( v2 );
  }
}
