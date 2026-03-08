/*
 * XREFs of IopStoreBootDriveLetter @ 0x140B54800
 * Callers:
 *     IopMarkBootPartition @ 0x140B54EB0 (IopMarkBootPartition.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14024FAC0 (IopBuildDeviceIoControlRequest.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     RtlUnicodeStringPrintf @ 0x1403BEBCC (RtlUnicodeStringPrintf.c)
 *     RtlWriteRegistryValue @ 0x14069EDB0 (RtlWriteRegistryValue.c)
 *     IoGetDeviceObjectPointer @ 0x140720950 (IoGetDeviceObjectPointer.c)
 *     RtlGetHostNtSystemRoot @ 0x14079C490 (RtlGetHostNtSystemRoot.c)
 */

__int64 __fastcall IopStoreBootDriveLetter(__int64 a1)
{
  NTSTATUS DeviceObjectPointer; // ebx
  IRP *v3; // rax
  UNICODE_STRING *HostNtSystemRoot; // rdi
  unsigned __int16 v5; // ax
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK v9; // [rsp+68h] [rbp+Fh] BYREF
  struct _KEVENT Object[2]; // [rsp+78h] [rbp+1Fh] BYREF
  char v11; // [rsp+C8h] [rbp+6Fh] BYREF
  int ValueData; // [rsp+D0h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D8h] [rbp+7Fh] BYREF

  ValueData = 0;
  DeviceObject = 0LL;
  DestinationString = 0LL;
  v11 = 0;
  memset(Object, 0, 24);
  v9 = 0LL;
  FileObject = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    Object[0].Header.WaitListHead.Blink = &Object[0].Header.WaitListHead;
    Object[0].Header.Size = 6;
    Object[0].Header.WaitListHead.Flink = &Object[0].Header.WaitListHead;
    Object[0].Header.SignalState = 0;
    v3 = IopBuildDeviceIoControlRequest(7192644, (__int64)DeviceObject, 0LL, 0, (__int64)&v11, 1u, 0, Object, &v9);
    if ( v3 )
    {
      DeviceObjectPointer = IofCallDriver(DeviceObject, v3);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
        DeviceObjectPointer = v9.Status;
      }
      if ( DeviceObjectPointer >= 0 )
      {
        HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
        HostNtSystemRoot->Buffer = (wchar_t *)(MmWriteableSharedUserData + 48);
        HostNtSystemRoot->MaximumLength = 520;
        DeviceObjectPointer = RtlUnicodeStringPrintf(HostNtSystemRoot, L"%C:%S", (unsigned int)v11, a1);
        if ( DeviceObjectPointer >= 0 )
        {
          v5 = HostNtSystemRoot->Length - 2;
          HostNtSystemRoot->Length = v5;
          HostNtSystemRoot->Buffer[(unsigned __int64)v5 >> 1] = 0;
          ValueData = v11;
          DeviceObjectPointer = RtlWriteRegistryValue(2u, 0LL, L"SystemBootDriveLetter", 4u, &ValueData, 4u);
        }
      }
    }
    else
    {
      DeviceObjectPointer = -1073741670;
    }
  }
  if ( FileObject )
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
  return (unsigned int)DeviceObjectPointer;
}
