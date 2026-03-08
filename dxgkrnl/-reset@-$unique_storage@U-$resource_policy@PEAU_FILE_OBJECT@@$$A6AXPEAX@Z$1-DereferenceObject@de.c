/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D748
 * Callers:
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x1C01FA460 (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021AB8C (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     InvalidateChildRelationsOnAdapterCallback @ 0x1C02F75E0 (InvalidateChildRelationsOnAdapterCallback.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C03C4E80 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 *     ??1Usb4HostRouterPoFxRef@DxgMonitor@@QEAA@XZ @ 0x1C03C5550 (--1Usb4HostRouterPoFxRef@DxgMonitor@@QEAA@XZ.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x1C03C5DE0 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 *     ?OnInitialized@Usb4HostRouterPoFxRef@DxgMonitor@@QEAA?AW4SetupFailureStage@2@PEAU_DEVICE_OBJECT@@@Z @ 0x1C03C5ED8 (-OnInitialized@Usb4HostRouterPoFxRef@DxgMonitor@@QEAA-AW4SetupFailureStage@2@PEAU_DEVICE_OBJECT@.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03C6550 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 *     ?HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ @ 0x1C03C70BC (-HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ.c)
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x1C03C7160 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0016980 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 */

LONG_PTR __fastcall wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
        DxgkCompositionObject **a1,
        DxgkCompositionObject *a2)
{
  DxgkCompositionObject *v4; // rcx
  LONG_PTR result; // rax

  v4 = *a1;
  if ( v4 )
    result = DxgkCompositionObject::Release(v4);
  *a1 = a2;
  return result;
}
