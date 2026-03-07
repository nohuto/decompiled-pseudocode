Microsoft::BamoImpl::BamoImplObject **__fastcall Microsoft::Bamo::Lock::Lock(
        Microsoft::BamoImpl::BamoImplObject **this,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  __int64 v3; // rbx
  bool HasLock; // al

  *this = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)a2 + 56LL))(a2);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
    this,
    *(volatile signed __int32 **)(v3 + 96));
  HasLock = Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v3);
  *((_BYTE *)this + 8) = HasLock;
  *((_BYTE *)this + 9) = 0;
  if ( !HasLock )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v3);
    *((_BYTE *)this + 9) = Microsoft::BamoImpl::BaseBamoConnectionImpl::PauseNewDispatch((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v3);
  }
  ++*(_DWORD *)(v3 + 188);
  return this;
}
