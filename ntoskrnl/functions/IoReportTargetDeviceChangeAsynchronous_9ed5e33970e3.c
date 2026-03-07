NTSTATUS __stdcall IoReportTargetDeviceChangeAsynchronous(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PVOID NotificationStructure,
        PDEVICE_CHANGE_COMPLETE_CALLBACK Callback,
        PVOID Context)
{
  _DWORD *DeviceNode; // rcx
  GUID *v9; // rdi
  int v10; // ecx
  int v11; // edx
  struct _WORK_QUEUE_ITEM *Pool2; // rdi
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v16; // rcx
  unsigned __int16 *v17; // rsi
  _WORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_31;
  DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)PhysicalDeviceObject, (PVOID)PhysicalDeviceObject->Size);
    DriverObject = PhysicalDeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
          (PVOID)PhysicalDeviceObject->DriverObject->DriverName.Length);
      }
    }
    v16 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v16 )
    {
      v17 = (unsigned __int16 *)(v16 + 40);
      IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)0x388);
      if ( *v17 )
      {
        IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v17 + 1), (PVOID)*v17);
      }
      v18 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v18 )
      {
        IoAddTriageDumpDataBlock((ULONG)v18, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v19 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v19 && *(_WORD *)(v19 + 56) )
      {
        IoAddTriageDumpDataBlock(v19 + 56, (PVOID)2);
        v20 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v20 + 64), (PVOID)*(unsigned __int16 *)(v20 + 56));
      }
    }
LABEL_31:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  v9 = (GUID *)((char *)NotificationStructure + 4);
  if ( (char *)NotificationStructure + 4 == (char *)&GUID_TARGET_DEVICE_QUERY_REMOVE )
    return -1073741808;
  if ( RtlCompareMemory(v9, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16 )
    return -1073741808;
  if ( v9 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED )
    return -1073741808;
  if ( RtlCompareMemory(v9, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
    return -1073741808;
  if ( v9 == &GUID_TARGET_DEVICE_REMOVE_COMPLETE )
    return -1073741808;
  if ( RtlCompareMemory(v9, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0x10uLL) == 16 )
    return -1073741808;
  v10 = *((unsigned __int16 *)NotificationStructure + 1);
  if ( (unsigned __int16)v10 < 0x24u )
    return -1073741808;
  v11 = *((_DWORD *)NotificationStructure + 8);
  if ( v11 != -1 && v11 > v10 - 36 )
    return -1073741808;
  if ( KeGetCurrentIrql() != 2 )
    return PnpSetCustomTargetEvent(PhysicalDeviceObject, (__int64)Context, NotificationStructure);
  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(
                                       64LL,
                                       *((unsigned __int16 *)NotificationStructure + 1) + 64LL,
                                       946892368LL);
  if ( !Pool2 )
    return -1073741670;
  ObfReferenceObjectWithTag(PhysicalDeviceObject, 0x4E706E50u);
  Pool2[1].List.Flink = (struct _LIST_ENTRY *)PhysicalDeviceObject;
  Pool2[1].Parameter = &Pool2[2];
  memmove(&Pool2[2], NotificationStructure, *((unsigned __int16 *)NotificationStructure + 1));
  Pool2[1].List.Blink = (struct _LIST_ENTRY *)Callback;
  Pool2[1].WorkerRoutine = (void (__fastcall *)(void *))Context;
  Pool2->WorkerRoutine = (void (__fastcall *)(void *))PnpReportTargetDeviceChangeAsyncWorker;
  Pool2->Parameter = Pool2;
  Pool2->List.Flink = 0LL;
  ExQueueWorkItem(Pool2, DelayedWorkQueue);
  return 259;
}
