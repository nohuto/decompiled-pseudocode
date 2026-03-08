/*
 * XREFs of ?OnInitialized@Usb4HostRouterPoFxRef@DxgMonitor@@QEAA?AW4SetupFailureStage@2@PEAU_DEVICE_OBJECT@@@Z @ 0x1C03C5ED8
 * Callers:
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021AB8C (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D748 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 */

__int64 __fastcall DxgMonitor::Usb4HostRouterPoFxRef::OnInitialized(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  DxgkCompositionObject *DeviceAttachmentBaseRef; // rax

  if ( !a2 )
    return 16LL;
  if ( !*(_QWORD *)(a1 + 16) )
    return 2LL;
  if ( *(_DWORD *)(a1 + 8) == -1 )
    return 3LL;
  if ( *(_QWORD *)a1 )
    return 15LL;
  DeviceAttachmentBaseRef = (DxgkCompositionObject *)IoGetDeviceAttachmentBaseRef(a2);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)a1,
    DeviceAttachmentBaseRef);
  return *(_QWORD *)a1 != 0LL ? 1 : 8;
}
