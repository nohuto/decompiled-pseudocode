/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C006BDB4
 * Callers:
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x1C03C54BC (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 *     ??1USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x1C03C5518 (--1USB4_HOSTROUTER_MGR@@QEAA@XZ.c)
 *     ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x1C03C7054 (--1MonitorPnpState@DxgMonitor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        void **a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return IoUnregisterPlugPlayNotification(v1);
  return result;
}
