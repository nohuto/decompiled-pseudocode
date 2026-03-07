__int64 QueryExternalTranslatorInterface()
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r14
  _DWORD *Pool2; // rdi
  NTSTATUS Status; // ebx
  NTSTATUS Driver; // eax
  int v4; // edx
  PDEVICE_OBJECT *v5; // rsi
  __int64 v6; // rcx
  PIRP v7; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  void *FileHandle; // [rsp+F0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+6Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  FileHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString.Buffer = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&ResourceHubDeviceName;
  memset(&Event, 0, sizeof(Event));
  AttachedDeviceReference = 0LL;
  Pool2 = 0LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock, 3u, 0x10u);
  if ( Status == -1073741772 )
  {
    if ( !LOBYTE(WPP_MAIN_CB.Queue.ListEntry.Flink) )
      goto LABEL_28;
    Driver = ZwLoadDriver((PUNICODE_STRING)&ResourceHubDriver);
    if ( Driver < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        21,
        14,
        (__int64)&WPP_8cd4999731163fb3621cd0c511e30926_Traceguids,
        Driver);
    }
    Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock, 3u, 0x10u);
  }
  if ( Status < 0 )
  {
LABEL_28:
    if ( DestinationString.Buffer )
      ExFreePoolWithTag(DestinationString.Buffer, 0x58706341u);
    return (unsigned int)Status;
  }
  Object = 0LL;
  Status = ObReferenceObjectByHandle(FileHandle, 0x100003u, 0LL, 0, &Object, 0LL);
  v5 = (PDEVICE_OBJECT *)Object;
  ZwClose(FileHandle);
  if ( Status < 0 )
    goto LABEL_21;
  AttachedDeviceReference = IoGetAttachedDeviceReference(v5[1]);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 120LL, 1483760449LL);
  if ( !Pool2
    || (DestinationString.MaximumLength = 42,
        (DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, 42LL, 1483760449LL)) == 0LL) )
  {
    Status = -1073741670;
    goto LABEL_21;
  }
  RtlCopyUnicodeString(&DestinationString, &ResourceHubDeviceName);
  memset(Pool2, 0, 0x78uLL);
  *Pool2 = 65656;
  *((_WORD *)Pool2 + 16) = 80;
  v6 = *(_QWORD *)(RootDeviceExtension + 768);
  *((_QWORD *)Pool2 + 11) = AcpiExternalInterfaceUnload;
  *((_QWORD *)Pool2 + 13) = AcpiAllocateGsivForSecondaryInterrupt;
  *((_QWORD *)Pool2 + 12) = AcpiGetFullyQualifiedBiosName;
  *((_QWORD *)Pool2 + 10) = v6;
  *((_QWORD *)Pool2 + 14) = AcpiUpdateInterruptProperties;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = IoBuildDeviceIoControlRequest(
         0x2AC028u,
         AttachedDeviceReference,
         Pool2,
         0x78u,
         Pool2,
         0x78u,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v7 )
  {
LABEL_20:
    Status = -1073741811;
    goto LABEL_21;
  }
  v7->IoStatus.Status = -1073741637;
  Status = IofCallDriver(AttachedDeviceReference, v7);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( *((_WORD *)Pool2 + 1) && *(_WORD *)Pool2 >= 0x78u && *((_QWORD *)Pool2 + 7) )
    {
      RegisterExternalTranslatorInterface(Pool2, v5, &DestinationString);
      goto LABEL_21;
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  if ( Status < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x58706341u);
    goto LABEL_28;
  }
  return (unsigned int)Status;
}
