/*
 * XREFs of IoUnregisterFileSystem @ 0x1408728F0
 * Callers:
 *     RawShutdown @ 0x1409B52A0 (RawShutdown.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1402F0E78 (IopDecrementDeviceObjectRefCount.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __stdcall IoUnregisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // r8
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 *v6; // rbx
  void (__fastcall *v7)(PDEVICE_OBJECT, _QWORD); // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  p_Queue = &DeviceObject->Queue;
  Flink = DeviceObject->Queue.ListEntry.Flink;
  if ( Flink )
  {
    if ( (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)Flink->Blink != p_Queue
      || (Blink = DeviceObject->Queue.ListEntry.Blink,
          (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)Blink->Flink != p_Queue) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  v6 = (__int64 *)IopFsNotifyChangeQueueHead;
  while ( v6 != &IopFsNotifyChangeQueueHead )
  {
    v7 = (void (__fastcall *)(PDEVICE_OBJECT, _QWORD))v6[3];
    v6 = (__int64 *)*v6;
    v7(DeviceObject, 0LL);
  }
  ++IopFsRegistrationOps;
  ExReleaseResourceLite(&IopDatabaseResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  IopDecrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1);
}
