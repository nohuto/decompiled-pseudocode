/*
 * XREFs of RaidQueryResetInterface @ 0x1C0045A30
 * Callers:
 *     RaidGetResetInterface @ 0x1C0045440 (RaidGetResetInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidQueryResetInterface(PDEVICE_OBJECT DeviceObject, _LARGE_INTEGER a2)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v5; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  *(_OWORD *)a2.QuadPart = 0LL;
  *(_OWORD *)(a2.QuadPart + 16) = 0LL;
  *(_OWORD *)(a2.QuadPart + 32) = 0LL;
  *(_QWORD *)(a2.QuadPart + 48) = 0LL;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v5 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Object, &IoStatusBlock);
  if ( v5 )
  {
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    v5->IoStatus.Information = 0LL;
    v5->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_DEVICE_RESET_INTERFACE_STANDARD;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.Create.Options = 65592;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset = a2;
    Status = IofCallDriver(AttachedDeviceReference, v5);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
