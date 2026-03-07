char __fastcall FsRtlMdlRead(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r11
  __int64 (__fastcall *MdlRead)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( FastIoDispatch
    && FastIoDispatch->SizeOfFastIoDispatch > 0x80
    && (MdlRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->MdlRead) != 0LL )
  {
    return MdlRead(a1, a2, a3, a4, a5, a6, RelatedDeviceObject);
  }
  else
  {
    return 0;
  }
}
