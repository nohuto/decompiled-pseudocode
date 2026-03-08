/*
 * XREFs of KeRemoveByKeyDeviceQueue @ 0x140570D20
 * Callers:
 *     IopStartNextPacketByKey @ 0x140555718 (IopStartNextPacketByKey.c)
 *     DifKeRemoveByKeyDeviceQueueWrapper @ 0x1405E2DD0 (DifKeRemoveByKeyDeviceQueueWrapper.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x14056F040 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x14056F0C0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueue(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  struct _KDEVICE_QUEUE_ENTRY *Flink; // rbx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v5; // r8
  __int64 i; // rax
  bool v7; // cc
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Flink = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  if ( DeviceQueue->DeviceListHead.Flink == &DeviceQueue->DeviceListHead )
  {
    DeviceQueue->Busy = 0;
  }
  else
  {
    v5 = &DeviceQueue->1;
    if ( LODWORD(DeviceQueue->DeviceListHead.Blink[1].Flink) >= SortKey )
    {
      i = *(_QWORD *)v5 >> 8;
      if ( i )
      {
        v7 = SortKey <= *(_DWORD *)((*(_QWORD *)v5 >> 8) + 0x10);
        if ( SortKey > *(_DWORD *)((*(_QWORD *)v5 >> 8) + 0x10) )
          goto LABEL_10;
      }
      for ( i = (__int64)DeviceQueue->DeviceListHead.Flink; ; i = *(_QWORD *)i )
      {
        v7 = SortKey <= *(_DWORD *)(i + 16);
LABEL_10:
        Flink = (struct _KDEVICE_QUEUE_ENTRY *)i;
        if ( v7 )
          break;
      }
    }
    else
    {
      Flink = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
    }
    Blink = 0LL;
    if ( Flink->DeviceListEntry.Blink != &DeviceQueue->DeviceListHead )
      Blink = Flink->DeviceListEntry.Blink;
    *v5 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)((unsigned __int8)*(_DWORD *)v5 | ((_QWORD)Blink << 8));
    v9 = Flink->DeviceListEntry.Flink;
    if ( (struct _KDEVICE_QUEUE_ENTRY *)Flink->DeviceListEntry.Flink->Blink != Flink
      || (v10 = Flink->DeviceListEntry.Blink, (struct _KDEVICE_QUEUE_ENTRY *)v10->Flink != Flink) )
    {
      __fastfail(3u);
    }
    v10->Flink = v9;
    v9->Blink = v10;
    Flink->Inserted = 0;
  }
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return Flink;
}
