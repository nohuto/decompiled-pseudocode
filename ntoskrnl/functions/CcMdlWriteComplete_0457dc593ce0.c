void __stdcall CcMdlWriteComplete(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r10
  unsigned __int8 (__fastcall *MdlWriteComplete)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT); // rax

  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || (MdlWriteComplete = (unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT))FastIoDispatch->MdlWriteComplete) == 0LL
    || !MdlWriteComplete(FileObject, FileOffset, MdlChain, RelatedDeviceObject) )
  {
    CcMdlWriteComplete2((__int64)FileObject, (__int64 *)FileOffset, MdlChain);
  }
}
