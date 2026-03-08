/*
 * XREFs of CcMdlReadComplete @ 0x140790C70
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CcMdlReadComplete2 @ 0x140774164 (CcMdlReadComplete2.c)
 */

void __stdcall CcMdlReadComplete(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r9
  unsigned __int8 (__fastcall *MdlReadComplete)(PFILE_OBJECT, PMDL, PDEVICE_OBJECT); // rax

  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || (MdlReadComplete = (unsigned __int8 (__fastcall *)(PFILE_OBJECT, PMDL, PDEVICE_OBJECT))FastIoDispatch->MdlReadComplete) == 0LL
    || !MdlReadComplete(FileObject, MdlChain, RelatedDeviceObject) )
  {
    CcMdlReadComplete2((__int64)RelatedDeviceObject, MdlChain);
  }
}
