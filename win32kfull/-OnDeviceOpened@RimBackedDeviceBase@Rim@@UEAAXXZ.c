void __fastcall Rim::RimBackedDeviceBase::OnDeviceOpened(Rim::RimBackedDeviceBase *this)
{
  __int64 v2; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // rax

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    if ( !*((_BYTE *)this + 12) )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)(v2 + 304));
      *((_QWORD *)this + 3) = RelatedDeviceObject;
      ObfReferenceObject(RelatedDeviceObject);
      *((_BYTE *)this + 12) = 1;
    }
  }
}
