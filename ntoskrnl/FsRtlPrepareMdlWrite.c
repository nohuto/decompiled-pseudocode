/*
 * XREFs of FsRtlPrepareMdlWrite @ 0x14079A990
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x14079A910 (FsRtlPrepareMdlWriteEx.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall FsRtlPrepareMdlWrite(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r11
  __int64 (__fastcall *PrepareMdlWrite)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( FastIoDispatch
    && FastIoDispatch->SizeOfFastIoDispatch > 0x90
    && (PrepareMdlWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->PrepareMdlWrite) != 0LL )
  {
    return PrepareMdlWrite(a1, a2, a3, a4, a5, a6, RelatedDeviceObject);
  }
  else
  {
    return 0;
  }
}
