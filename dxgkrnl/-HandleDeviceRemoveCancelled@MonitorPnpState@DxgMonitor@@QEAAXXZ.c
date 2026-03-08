/*
 * XREFs of ?HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ @ 0x1C03C70BC
 * Callers:
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C03C4E80 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D748 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_N$$TAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1C001D7B0 (--$-9V-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@Y.c)
 */

void __fastcall DxgMonitor::MonitorPnpState::HandleDeviceRemoveCancelled(DxgMonitor::MonitorPnpState *this)
{
  PFILE_OBJECT *v1; // rbx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v4; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+30h] [rbp+8h] BYREF

  DeviceObject = 0LL;
  v1 = (PFILE_OBJECT *)((char *)this + 40);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 5,
    0LL);
  DeviceObjectPointer = IoGetDeviceObjectPointer((PUNICODE_STRING)this + 4, 0x80000000, v1, &DeviceObject);
  if ( DeviceObjectPointer < 0 )
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 9), DeviceObjectPointer);
  if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
          v4,
          v1) )
    WdLogSingleEntry0(1LL);
  if ( !DeviceObject )
    WdLogSingleEntry0(1LL);
}
