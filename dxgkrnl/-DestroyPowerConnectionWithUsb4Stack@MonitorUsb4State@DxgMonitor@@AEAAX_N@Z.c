void __fastcall DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(
        DxgMonitor::MonitorUsb4State *this,
        char a2)
{
  if ( !a2 )
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (void **)this + 12,
      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 4,
    0LL);
  DxgMonitor::Usb4HostRouterPoFxRef::RemoveUsb4HRPowerRef((DxgMonitor::MonitorUsb4State *)((char *)this + 64));
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 8,
    0LL);
}
