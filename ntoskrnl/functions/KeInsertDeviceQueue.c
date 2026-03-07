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
