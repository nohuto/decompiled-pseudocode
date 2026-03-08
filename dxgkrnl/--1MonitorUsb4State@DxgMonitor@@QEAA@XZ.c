/*
 * XREFs of ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x1C03C54BC
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C01F90BC (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1C03C45DC (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_UNICODE_STRING@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_UNICODE_STRING@@@ZAEAPEAU1@@Z @ 0x1C0024184 (--$invoke@P6AXPEAU_UNICODE_STRING@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_UNICODE_STRING@@@ZAEAPEAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0049A48 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C006BDB4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@YAJ0.c)
 *     ??1Usb4HostRouterPoFxRef@DxgMonitor@@QEAA@XZ @ 0x1C03C5550 (--1Usb4HostRouterPoFxRef@DxgMonitor@@QEAA@XZ.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x1C03C5DE0 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 */

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
