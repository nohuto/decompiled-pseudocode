char __fastcall FsRtlMdlReadComplete(struct _FILE_OBJECT *a1, __int64 a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r9
  __int64 (__fastcall *MdlReadComplete)(struct _FILE_OBJECT *, __int64, PDEVICE_OBJECT); // rax

  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( FastIoDispatch
    && FastIoDispatch->SizeOfFastIoDispatch > 0x88
    && (MdlReadComplete = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PDEVICE_OBJECT))FastIoDispatch->MdlReadComplete) != 0LL )
  {
    return MdlReadComplete(a1, a2, RelatedDeviceObject);
  }
  else
  {
    return 0;
  }
}
