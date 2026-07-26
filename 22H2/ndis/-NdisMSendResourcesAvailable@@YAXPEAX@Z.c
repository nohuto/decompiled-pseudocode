/*
 * XREFs of ?NdisMSendResourcesAvailable@@YAXPEAX@Z @ 0x1C00BFB40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C0070BF4 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 */

void __fastcall NdisMSendResourcesAvailable(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0xAu,
      (struct _GUID *)&WPP_9362f263e6813479e894f2fd9189f8d6_Traceguids,
      a1);
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  a1->Flags |= 0x400000u;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  if ( a1->FirstPendingPacket )
  {
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    ndisMQueueWorkItem(a1, NdisWorkItemSend, 0LL);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0xBu,
      (struct _GUID *)&WPP_9362f263e6813479e894f2fd9189f8d6_Traceguids,
      a1);
}
