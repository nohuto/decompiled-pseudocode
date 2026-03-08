/*
 * XREFs of ??$?9V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_N$$TAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1C001D7B0
 * Callers:
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x1C01FA460 (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 *     ?HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ @ 0x1C03C70BC (-HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
        __int64 a1,
        _QWORD *a2)
{
  return *a2 != 0LL;
}
