NTSTATUS __stdcall IoReportResourceUsage(
        PUNICODE_STRING DriverClassName,
        PDRIVER_OBJECT DriverObject,
        PCM_RESOURCE_LIST DriverList,
        ULONG DriverListSize,
        PDEVICE_OBJECT DeviceObject,
        PCM_RESOURCE_LIST DeviceList,
        ULONG DeviceListSize,
        BOOLEAN OverrideConflict,
        PBOOLEAN ConflictDetected)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *v11; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rsi
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx

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
        v11 = DeviceObject->DriverObject;
        if ( v11 )
        {
          IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)(unsigned int)v11->Size);
          p_DriverName = &DeviceObject->DriverObject->DriverName;
          if ( p_DriverName->Length )
          {
            IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
            IoAddTriageDumpDataBlock(
              (ULONG)DeviceObject->DriverObject->DriverName.Buffer,
              (PVOID)DeviceObject->DriverObject->DriverName.Length);
          }
        }
        v13 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
        if ( v13 )
        {
          v14 = (unsigned __int16 *)(v13 + 40);
          IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)0x388);
          if ( *v14 )
          {
            IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
            IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), (PVOID)*v14);
          }
          v15 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode + 56;
          if ( *v15 )
          {
            IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
              (PVOID)*((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
          }
          v16 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
          if ( v16 )
          {
            if ( *(_WORD *)(v16 + 56) )
            {
              IoAddTriageDumpDataBlock(v16 + 56, (PVOID)2);
              v17 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, (ULONG_PTR)DriverObject, 0LL);
      }
    }
  }
  return IoReportResourceUsageInternal(0, (_DWORD)DriverObject, (_DWORD)DriverObject, (_DWORD)DriverList);
}
