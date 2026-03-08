/*
 * XREFs of FsRtlSetFileSize @ 0x14079BDF4
 * Callers:
 *     MiCreateDataFileMap @ 0x1406A6C30 (MiCreateDataFileMap.c)
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140244770 (IoSetThreadHardErrorMode.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IoAllocateIrpEx @ 0x140352E90 (IoAllocateIrpEx.c)
 */

__int64 __fastcall FsRtlSetFileSize(PFILE_OBJECT FileObject, __int64 *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v4; // rdx
  IRP *Irp; // rbx
  BOOLEAN v6; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  BOOLEAN v8; // di
  NTSTATUS v9; // ecx
  NTSTATUS v10; // eax
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h] BYREF

  v14 = *a2;
  v12 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v4) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v4, 0LL);
  if ( !Irp )
    return 3221225626LL;
  v6 = IoSetThreadHardErrorMode(0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v8 = v6;
  Irp->Flags = 66;
  Irp->UserIosb = (PIO_STATUS_BLOCK)&v12;
  Irp->UserEvent = &Event;
  Irp->RequestorMode = 0;
  Irp->Tail.Overlay.OriginalFileObject = FileObject;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v14;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
  CurrentStackLocation[-1].Parameters.Read.Length = 8;
  CurrentStackLocation[-1].Parameters.Create.Options = 20;
  v9 = IofCallDriver(RelatedDeviceObject, Irp);
  if ( v9 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    v10 = v12;
    if ( v9 < 0 )
      v10 = v9;
    LODWORD(v12) = v10;
  }
  IoSetThreadHardErrorMode(v8);
  return (unsigned int)v12;
}
