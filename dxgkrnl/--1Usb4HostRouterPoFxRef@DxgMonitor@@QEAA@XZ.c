void __fastcall DxgMonitor::Usb4HostRouterPoFxRef::~Usb4HostRouterPoFxRef(DxgMonitor::Usb4HostRouterPoFxRef *this)
{
  if ( *((_BYTE *)this + 24) )
    WdLogSingleEntry0(1LL);
  if ( *(_QWORD *)this )
    WdLogSingleEntry0(1LL);
  DxgMonitor::Usb4HostRouterPoFxRef::RemoveUsb4HRPowerRef(this);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)this);
}
