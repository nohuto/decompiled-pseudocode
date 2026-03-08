/*
 * XREFs of FsRtlGetFileSize @ 0x1407F4020
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140368300 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateDataFileMap @ 0x1406A6C30 (MiCreateDataFileMap.c)
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 *     MiShareExistingControlArea @ 0x1407D1CAC (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F3A80 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F3CC0 (ExpQueryElamCertInfo.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140244770 (IoSetThreadHardErrorMode.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IoAllocateIrpEx @ 0x140352E90 (IoAllocateIrpEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall FsRtlGetFileSize(PFILE_OBJECT FileObject, PLARGE_INTEGER FileSize)
{
  __int64 v4; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  unsigned __int8 (__fastcall *FastIoQueryStandardInfo)(PFILE_OBJECT, __int64, __int128 *, __int128 *, PDEVICE_OBJECT); // rax
  NTSTATUS result; // eax
  __int64 v9; // rdx
  IRP *Irp; // rbx
  BOOLEAN v11; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  BOOLEAN v13; // r14
  NTSTATUS v14; // ecx
  NTSTATUS v15; // eax
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h]

  v16 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || (FastIoQueryStandardInfo = (unsigned __int8 (__fastcall *)(PFILE_OBJECT, __int64, __int128 *, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoQueryStandardInfo) == 0LL
    || (LOBYTE(v4) = 1, !FastIoQueryStandardInfo(FileObject, v4, &v18, &v16, RelatedDeviceObject)) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    LOBYTE(v9) = RelatedDeviceObject->StackSize;
    Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v9, 0LL);
    if ( !Irp )
      return -1073741670;
    v11 = IoSetThreadHardErrorMode(0);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v13 = v11;
    Irp->Flags = 66;
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v16;
    Irp->UserEvent = &Event;
    Irp->RequestorMode = 0;
    Irp->Tail.Overlay.OriginalFileObject = FileObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v18;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = FileObject;
    CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
    CurrentStackLocation[-1].Parameters.Read.Length = 24;
    CurrentStackLocation[-1].Parameters.Create.Options = 5;
    v14 = IofCallDriver(RelatedDeviceObject, Irp);
    if ( v14 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else
    {
      v15 = v16;
      if ( v14 < 0 )
        v15 = v14;
      LODWORD(v16) = v15;
    }
    IoSetThreadHardErrorMode(v13);
  }
  result = v16;
  if ( (int)v16 >= 0 )
  {
    if ( BYTE5(v19) )
      return -1073741638;
    else
      *FileSize = *(LARGE_INTEGER *)((char *)&v18 + 8);
  }
  return result;
}
