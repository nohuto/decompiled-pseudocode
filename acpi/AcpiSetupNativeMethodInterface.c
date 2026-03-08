/*
 * XREFs of AcpiSetupNativeMethodInterface @ 0x1C008B2CC
 * Callers:
 *     ACPIDispatchAddDevice @ 0x1C0023F30 (ACPIDispatchAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memset @ 0x1C0002180 (memset.c)
 */

__int64 AcpiSetupNativeMethodInterface()
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  NTSTATUS Status; // ebx
  PDEVICE_OBJECT *v2; // rsi
  __int64 v3; // rcx
  PIRP v4; // rax
  void *FileHandle; // [rsp+58h] [rbp-B0h] BYREF
  PDEVICE_OBJECT *IoStatusBlock; // [rsp+60h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock_8; // [rsp+68h] [rbp-A0h] BYREF
  struct _KEVENT Event_8; // [rsp+78h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-78h] BYREF
  _OWORD OutputBuffer[6]; // [rsp+C8h] [rbp-40h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  FileHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  AttachedDeviceReference = 0LL;
  memset(&Event_8, 0, sizeof(Event_8));
  IoStatusBlock_8 = 0LL;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&ResourceHubDeviceName;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock_8, 3u, 0x10u);
  if ( Status < 0 )
    return (unsigned int)Status;
  IoStatusBlock = 0LL;
  Status = ObReferenceObjectByHandle(FileHandle, 0x100003u, 0LL, 0, (PVOID *)&IoStatusBlock, 0LL);
  ZwClose(FileHandle);
  v2 = IoStatusBlock;
  if ( Status >= 0 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(IoStatusBlock[1]);
    if ( AttachedDeviceReference )
    {
      LODWORD(OutputBuffer[0]) = 65632;
      OutputBuffer[1] = 0uLL;
      LOWORD(OutputBuffer[2]) = 64;
      v3 = *(_QWORD *)(RootDeviceExtension + 768);
      *((_QWORD *)&OutputBuffer[4] + 1) = AcpiReflectNativeObject;
      *(_QWORD *)&OutputBuffer[5] = AcpiNativeNotifyEventHandler;
      *(_QWORD *)&OutputBuffer[4] = v3;
      *((_QWORD *)&OutputBuffer[5] + 1) = AcpiTranslatePepDeviceControlResources;
      KeInitializeEvent(&Event_8, SynchronizationEvent, 0);
      v4 = IoBuildDeviceIoControlRequest(
             0x2AC200u,
             AttachedDeviceReference,
             OutputBuffer,
             0x60u,
             OutputBuffer,
             0x60u,
             0,
             &Event_8,
             &IoStatusBlock_8);
      if ( !v4 )
        goto LABEL_15;
      v4->IoStatus.Status = -1073741637;
      Status = IofCallDriver(AttachedDeviceReference, v4);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event_8, Executive, 0, 0, 0LL);
        Status = IoStatusBlock_8.Status;
      }
      if ( Status < 0 )
        goto LABEL_16;
      if ( WORD1(OutputBuffer[0])
        && LOWORD(OutputBuffer[0]) >= 0x60u
        && *((_QWORD *)&OutputBuffer[2] + 1)
        && *(_QWORD *)&OutputBuffer[3]
        && *((_QWORD *)&OutputBuffer[3] + 1) )
      {
        AcpiPlExtNativeMethodInterface = OutputBuffer[0];
        xmmword_1C006EC70 = OutputBuffer[1];
        unk_1C006EC80 = OutputBuffer[2];
        xmmword_1C006EC90 = OutputBuffer[3];
        xmmword_1C006ECA0 = OutputBuffer[4];
        xmmword_1C006ECB0 = OutputBuffer[5];
        ObfReferenceObjectWithTag(AttachedDeviceReference, 0x4E706341u);
        Status = 0;
      }
      else
      {
LABEL_15:
        Status = -1073741811;
      }
    }
    else
    {
      Status = -1073741823;
    }
  }
LABEL_16:
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)Status;
}
