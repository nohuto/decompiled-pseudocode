/*
 * XREFs of ??1Usb4HostRouterPoFxRef@DxgMonitor@@QEAA@XZ @ 0x1C03C9DB0
 * Callers:
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x1C03C9D1C (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D9A8 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C004AAA8 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ?RemoveUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJXZ @ 0x1C03CAB34 (-RemoveUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJXZ.c)
 */

void __fastcall DxgMonitor::Usb4HostRouterPoFxRef::~Usb4HostRouterPoFxRef(DxgMonitor::Usb4HostRouterPoFxRef *this)
{
  if ( *((_BYTE *)this + 24) )
    WdLogSingleEntry0(1LL);
  if ( *(_QWORD *)this )
    WdLogSingleEntry0(1LL);
  DxgMonitor::Usb4HostRouterPoFxRef::RemoveUsb4HRPowerRef(this);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (struct FlipManagerObject **)this,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((struct FlipManagerObject **)this);
}
