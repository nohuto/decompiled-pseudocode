/*
 * XREFs of IoAssignResources @ 0x140950C10
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     IopLegacyResourceAllocation @ 0x140801DA4 (IopLegacyResourceAllocation.c)
 */

NTSTATUS __stdcall IoAssignResources(
        PUNICODE_STRING RegistryPath,
        PUNICODE_STRING DriverClassName,
        PDRIVER_OBJECT DriverObject,
        PDEVICE_OBJECT DeviceObject,
        PIO_RESOURCE_REQUIREMENTS_LIST RequestedResources,
        PCM_RESOURCE_LIST *AllocatedResources)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *v9; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v11; // rcx
  unsigned __int16 *v12; // rbp
  _WORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  PIO_RESOURCE_REQUIREMENTS_LIST v16; // r9

  if ( DeviceObject )
  {
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0 )
      {
        if ( DriverObject )
        {
          IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
          if ( DriverObject->DriverName.Length )
          {
            IoAddTriageDumpDataBlock((_DWORD)DriverObject + 56, (PVOID)2);
            IoAddTriageDumpDataBlock((ULONG)DriverObject->DriverName.Buffer, (PVOID)DriverObject->DriverName.Length);
          }
        }
        IoAddTriageDumpDataBlock((ULONG)DeviceObject, (PVOID)DeviceObject->Size);
        v9 = DeviceObject->DriverObject;
        if ( v9 )
        {
          IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)(unsigned int)v9->Size);
          p_DriverName = &DeviceObject->DriverObject->DriverName;
          if ( p_DriverName->Length )
          {
            IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
            IoAddTriageDumpDataBlock(
              (ULONG)DeviceObject->DriverObject->DriverName.Buffer,
              (PVOID)DeviceObject->DriverObject->DriverName.Length);
          }
        }
        v11 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
        if ( v11 )
        {
          v12 = (unsigned __int16 *)(v11 + 40);
          IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)0x388);
          if ( *v12 )
          {
            IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
            IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), (PVOID)*v12);
          }
          v13 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode + 56;
          if ( *v13 )
          {
            IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
              (PVOID)*((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
          }
          v14 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
          if ( v14 )
          {
            if ( *(_WORD *)(v14 + 56) )
            {
              IoAddTriageDumpDataBlock(v14 + 56, (PVOID)2);
              v15 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 64), (PVOID)*(unsigned __int16 *)(v15 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, (ULONG_PTR)DriverObject, 0LL);
      }
    }
  }
  v16 = RequestedResources;
  if ( RequestedResources && (!RequestedResources->AlternativeLists || !RequestedResources->List[0].Count) )
    v16 = 0LL;
  if ( AllocatedResources )
    *AllocatedResources = 0LL;
  return IopLegacyResourceAllocation(
           2,
           (__int64)DriverObject,
           (__int64)DeviceObject,
           (__int64)v16,
           (const void **)AllocatedResources);
}
