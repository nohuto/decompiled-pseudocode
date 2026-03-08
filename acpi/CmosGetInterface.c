/*
 * XREFs of CmosGetInterface @ 0x1C008231C
 * Callers:
 *     ACPIGetCmosInterface @ 0x1C0019B00 (ACPIGetCmosInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmosGetInterface(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v4; // rax
  IRP *v5; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // ebx
  unsigned __int128 v8; // kr00_16
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp+7h] BYREF
  _OWORD v11[2]; // [rsp+70h] [rbp+1Fh] BYREF
  unsigned __int128 v12; // [rsp+90h] [rbp+3Fh]

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  if ( !AttachedDeviceReference )
    return 3221225486LL;
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v5 = v4;
  if ( v4 )
  {
    v4->IoStatus.Information = 0LL;
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_ACPI_CMOS_INTERFACE_STANDARD;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)v11;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.Create.Options = 65584;
    Status = IofCallDriver(AttachedDeviceReference, v5);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    ObfDereferenceObject(AttachedDeviceReference);
    if ( Status >= 0 )
    {
      v8 = v12;
      AcpiWriteCmosRoutine = v8 >> 64;
      AcpiReadCmosRoutine = v8;
    }
    return (unsigned int)Status;
  }
  else
  {
    ObfDereferenceObject(AttachedDeviceReference);
    return 3221225473LL;
  }
}
