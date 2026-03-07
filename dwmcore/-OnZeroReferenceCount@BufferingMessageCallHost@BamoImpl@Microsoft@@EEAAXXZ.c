void __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::OnZeroReferenceCount(
        Microsoft::BamoImpl::BufferingMessageCallHost *this)
{
  if ( this )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BufferingMessageCallHost *, __int64))(*(_QWORD *)this + 16LL))(
      this,
      1LL);
}
