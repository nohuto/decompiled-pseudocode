char __fastcall FsRtlMdlWriteComplete(struct _FILE_OBJECT *a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r10
  __int64 (__fastcall *MdlWriteComplete)(struct _FILE_OBJECT *, __int64, __int64, PDEVICE_OBJECT); // rax

  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( FastIoDispatch
    && FastIoDispatch->SizeOfFastIoDispatch > 0x98
    && (MdlWriteComplete = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, __int64, PDEVICE_OBJECT))FastIoDispatch->MdlWriteComplete) != 0LL )
  {
    return MdlWriteComplete(a1, a2, a3, RelatedDeviceObject);
  }
  else
  {
    return 0;
  }
}
