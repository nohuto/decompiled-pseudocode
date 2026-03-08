/*
 * XREFs of KeRemoveByKeyDeviceQueueIfBusy @ 0x140570E00
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x14056F040 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x14056F0C0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueueIfBusy(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  struct _KDEVICE_QUEUE_ENTRY *v4; // rbx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v8; // rcx
  bool v9; // zf
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  if ( DeviceQueue->Busy )
  {
    p_DeviceListHead = &DeviceQueue->DeviceListHead;
    Flink = DeviceQueue->DeviceListHead.Flink;
    if ( Flink == &DeviceQueue->DeviceListHead )
    {
      DeviceQueue->Busy = 0;
    }
    else
    {
      v4 = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
      while ( 1 )
      {
        v8 = v4->DeviceListEntry.Flink;
        if ( SortKey <= v4->SortKey )
          break;
        v4 = (struct _KDEVICE_QUEUE_ENTRY *)v4->DeviceListEntry.Flink;
        if ( v8 == p_DeviceListHead )
        {
          v4 = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
          if ( Flink->Blink == p_DeviceListHead )
          {
            v8 = Flink->Flink;
            v9 = Flink->Flink->Blink == Flink;
            goto LABEL_12;
          }
          goto LABEL_15;
        }
      }
      if ( (struct _KDEVICE_QUEUE_ENTRY *)v8->Blink != v4 )
        goto LABEL_15;
      p_DeviceListHead = v4->DeviceListEntry.Blink;
      v9 = p_DeviceListHead->Flink == (struct _LIST_ENTRY *)v4;
LABEL_12:
      if ( !v9 )
LABEL_15:
        __fastfail(3u);
      p_DeviceListHead->Flink = v8;
      v8->Blink = p_DeviceListHead;
      v4->Inserted = 0;
      v10 = DeviceQueue->1;
      if ( v4 == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v10 >> 8) )
        DeviceQueue->1 = v10;
    }
  }
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return v4;
}
