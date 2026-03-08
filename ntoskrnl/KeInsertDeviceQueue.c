/*
 * XREFs of KeInsertDeviceQueue @ 0x140570C90
 * Callers:
 *     HalAllocateAdapterChannelV2 @ 0x140454AE8 (HalAllocateAdapterChannelV2.c)
 *     IoAllocateController @ 0x1405542D0 (IoAllocateController.c)
 *     IoStartPacket @ 0x140554EE0 (IoStartPacket.c)
 *     DifKeInsertDeviceQueueWrapper @ 0x1405E1720 (DifKeInsertDeviceQueueWrapper.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x14056F040 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x14056F0C0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 */

BOOLEAN __stdcall KeInsertDeviceQueue(PKDEVICE_QUEUE DeviceQueue, PKDEVICE_QUEUE_ENTRY DeviceQueueEntry)
{
  BOOLEAN v4; // di
  BOOLEAN Busy; // al
  struct _LIST_ENTRY *Blink; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  Busy = DeviceQueue->Busy;
  DeviceQueue->Busy = 1;
  if ( Busy == 1 )
  {
    Blink = DeviceQueue->DeviceListHead.Blink;
    if ( Blink->Flink != &DeviceQueue->DeviceListHead )
      __fastfail(3u);
    DeviceQueueEntry->DeviceListEntry.Flink = &DeviceQueue->DeviceListHead;
    v4 = 1;
    DeviceQueueEntry->DeviceListEntry.Blink = Blink;
    Blink->Flink = &DeviceQueueEntry->DeviceListEntry;
    DeviceQueue->DeviceListHead.Blink = &DeviceQueueEntry->DeviceListEntry;
  }
  DeviceQueueEntry->Inserted = v4;
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return v4;
}
