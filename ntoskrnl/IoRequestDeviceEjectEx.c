/*
 * XREFs of IoRequestDeviceEjectEx @ 0x14055D9D0
 * Callers:
 *     IoRequestDeviceEject @ 0x14055D9B0 (IoRequestDeviceEject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRequestDeviceEjectEx(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PIO_DEVICE_EJECT_CALLBACK Callback,
        PVOID Context,
        PDRIVER_OBJECT DriverObject)
{
  _DWORD *DeviceNode; // rcx
  __int64 Pool2; // rdi
  const void **v11; // rbx
  struct _DRIVER_OBJECT *v12; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v14; // rcx
  unsigned __int16 *v15; // rdi
  _WORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_20;
  DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)PhysicalDeviceObject, (PVOID)PhysicalDeviceObject->Size);
    v12 = PhysicalDeviceObject->DriverObject;
    if ( v12 )
    {
      IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)(unsigned int)v12->Size);
      p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
          (PVOID)PhysicalDeviceObject->DriverObject->DriverName.Length);
      }
    }
    v14 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v14 )
    {
      v15 = (unsigned __int16 *)(v14 + 40);
      IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)0x388);
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v15 + 1), (PVOID)*v15);
      }
      v16 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v17 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v17 && *(_WORD *)(v17 + 56) )
      {
        IoAddTriageDumpDataBlock(v17 + 56, (PVOID)2);
        v18 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), (PVOID)*(unsigned __int16 *)(v18 + 56));
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  Pool2 = ExAllocatePool2(64LL, 1496LL, 1181773392LL);
  if ( !Pool2 )
    return -1073741670;
  v11 = (const void **)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  *(_QWORD *)Pool2 = Callback;
  *(_QWORD *)(Pool2 + 8) = Context;
  memmove((void *)(Pool2 + 64), v11[6], *((unsigned __int16 *)v11 + 20));
  *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*((unsigned __int16 *)v11 + 20) >> 1) + 64) = 0;
  if ( DriverObject )
    ObfReferenceObjectWithTag(DriverObject, 0x45706E50u);
  *(_QWORD *)(Pool2 + 16) = DriverObject;
  *(_DWORD *)(Pool2 + 464) = 0;
  *(_WORD *)(Pool2 + 468) = 0;
  *(_QWORD *)(Pool2 + 48) = PnpRequestDeviceEjectExWorker;
  *(_QWORD *)(Pool2 + 56) = Pool2;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 32), DelayedWorkQueue);
  return 0;
}
