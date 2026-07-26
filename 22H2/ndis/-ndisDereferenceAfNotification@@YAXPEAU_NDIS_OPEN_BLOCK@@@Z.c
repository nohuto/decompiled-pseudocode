/*
 * XREFs of ?ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00B6668
 * Callers:
 *     ?ndisMFinishQueuedPendingOpen@@YAXPEAX@Z @ 0x1C0136430 (-ndisMFinishQueuedPendingOpen@@YAXPEAX@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x1C013C210 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 *     ?ndisNotifyAfRegistration@@YAXPEAX@Z @ 0x1C013C560 (-ndisNotifyAfRegistration@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisDereferenceAfNotification(struct _NDIS_OPEN_BLOCK *a1)
{
  KIRQL v2; // si
  struct _KEVENT *AfNotifyCompleteEvent; // rcx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x10u,
      (struct _GUID *)&WPP_70ccdfc7c82d34b36d81d4813b341409_Traceguids,
      a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
  if ( _InterlockedExchangeAdd(&a1->PendingAfNotifications, 0xFFFFFFFF) == 1 )
  {
    AfNotifyCompleteEvent = a1->AfNotifyCompleteEvent;
    if ( AfNotifyCompleteEvent )
      KeSetEvent(AfNotifyCompleteEvent, 0, 0);
  }
  KeReleaseSpinLock(&a1->SpinLock, v2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x11u,
      (struct _GUID *)&WPP_70ccdfc7c82d34b36d81d4813b341409_Traceguids,
      a1);
}
