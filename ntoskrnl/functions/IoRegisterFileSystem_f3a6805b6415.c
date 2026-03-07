void __stdcall IoRegisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *Flink; // rdx
  ULONG DeviceType; // eax
  __int64 *v5; // rcx
  ULONG Flags; // eax
  struct _LIST_ENTRY *v7; // r8
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v8; // rax
  __int64 *v9; // rdi
  void (__fastcall *v10)(PDEVICE_OBJECT, __int64 *); // rax
  __int64 v11; // rcx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v13; // rax

  FsRtlSetDriverBacking(DeviceObject->DriverObject, 1LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  IopSetFsRegistrationInProgress(1);
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  DeviceType = DeviceObject->DeviceType;
  switch ( DeviceType )
  {
    case 0x14u:
      v5 = (__int64 *)IopNetworkFileSystemQueueHead;
      Flink = &IopNetworkFileSystemQueueHead;
      break;
    case 3u:
      Flink = &IopCdRomFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v5 = (__int64 *)IopCdRomFileSystemQueueHead;
      break;
    case 8u:
      Flink = &IopDiskFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v5 = (__int64 *)IopDiskFileSystemQueueHead;
      break;
    case 0x20u:
      Flink = &IopTapeFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v5 = (__int64 *)IopTapeFileSystemQueueHead;
      break;
    default:
      goto LABEL_12;
  }
  Flags = DeviceObject->Flags;
  if ( (Flags & 0x10000) != 0 )
  {
    v11 = Flink[1];
    p_Queue = &DeviceObject->Queue;
    Flink = *(__int64 **)(v11 + 8);
    if ( *Flink == v11 )
    {
      p_Queue->ListEntry.Flink = (struct _LIST_ENTRY *)v11;
      DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)Flink;
      *Flink = (__int64)p_Queue;
      *(_QWORD *)(v11 + 8) = p_Queue;
      goto LABEL_12;
    }
LABEL_25:
    __fastfail(3u);
  }
  if ( (Flags & 0x200) != 0 )
  {
    v13 = &DeviceObject->Queue;
    if ( (__int64 *)v5[1] == Flink )
    {
      v13->ListEntry.Flink = (struct _LIST_ENTRY *)v5;
      DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)Flink;
      v5[1] = (__int64)v13;
      *Flink = (__int64)v13;
      goto LABEL_12;
    }
    goto LABEL_25;
  }
  v7 = (struct _LIST_ENTRY *)Flink;
  while ( v5 != Flink && _bittest((const signed __int32 *)v5 - 8, 9u) )
  {
    v7 = (struct _LIST_ENTRY *)v5;
    v5 = (__int64 *)*v5;
  }
  Flink = (__int64 *)v7->Flink;
  v8 = &DeviceObject->Queue;
  if ( v7->Flink->Blink != v7 )
    goto LABEL_25;
  v8->ListEntry.Flink = (struct _LIST_ENTRY *)Flink;
  DeviceObject->Queue.ListEntry.Blink = v7;
  Flink[1] = (__int64)v8;
  v7->Flink = &v8->ListEntry;
LABEL_12:
  ++IopFsRegistrationOps;
  DeviceObject->Flags &= ~0x80u;
  v9 = (__int64 *)IopFsNotifyChangeQueueHead;
  while ( v9 != &IopFsNotifyChangeQueueHead )
  {
    v10 = (void (__fastcall *)(PDEVICE_OBJECT, __int64 *))v9[3];
    LOBYTE(Flink) = 1;
    v9 = (__int64 *)*v9;
    v10(DeviceObject, Flink);
  }
  IopSetFsRegistrationInProgress(0);
  ExReleaseResourceLite(&IopDatabaseResource);
  IopSetFsRegistrationInProgress(0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  IopIncrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1);
}
