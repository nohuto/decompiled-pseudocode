/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001D77C
 * Callers:
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x1C01FA460 (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 *     ?Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ @ 0x1C01FBEC4 (-Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021AB8C (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ??1USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x1C03C5518 (--1USB4_HOSTROUTER_MGR@@QEAA@XZ.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x1C03C5DE0 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x1C03C7160 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx
  NTSTATUS result; // eax

  v4 = *a1;
  if ( v4 )
    result = IoUnregisterPlugPlayNotification(v4);
  *a1 = a2;
  return result;
}
