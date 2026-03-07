void __fastcall DxgMonitor::MonitorUsb4State::~MonitorUsb4State(DxgMonitor::MonitorUsb4State *this)
{
  char *v2; // [rsp+30h] [rbp+8h] BYREF
  void (__stdcall *v3)(PUNICODE_STRING); // [rsp+38h] [rbp+10h] BYREF

  DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(this, 0);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)this + 12);
  DxgMonitor::Usb4HostRouterPoFxRef::~Usb4HostRouterPoFxRef((DxgMonitor::MonitorUsb4State *)((char *)this + 64));
  v2 = (char *)this + 40;
  v3 = RtlFreeUnicodeString;
  wistd::invoke<void (*)(_UNICODE_STRING *),_UNICODE_STRING * &>((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)this + 4);
}
