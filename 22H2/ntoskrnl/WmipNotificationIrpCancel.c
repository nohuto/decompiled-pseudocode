/*
 * XREFs of WmipNotificationIrpCancel @ 0x140369B70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CAB0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     IofCompleteRequest @ 0x1402C9950 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     WmipClearIrpObjectList @ 0x140369BDC (WmipClearIrpObjectList.c)
 */

void __fastcall WmipNotificationIrpCancel(__int64 a1, IRP *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&WmipCancelSpinLock, &LockHandle);
  WmipClearIrpObjectList(a2);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
}
