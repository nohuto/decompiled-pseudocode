/*
 * XREFs of ?GetDeviceObject@MonitorPnpState@DxgMonitor@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01AB018
 * Callers:
 *     MonitorGetDeviceObject @ 0x1C01AAF60 (MonitorGetDeviceObject.c)
 * Callees:
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1C00092F8 (--$-9V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@det.c)
 */

__int64 __fastcall DxgMonitor::MonitorPnpState::GetDeviceObject(
        DxgMonitor::MonitorPnpState *this,
        PVOID *a2,
        struct _DEVICE_OBJECT **a3)
{
  PVOID *v6; // rbx

  if ( !a2 || !a3 )
    WdLogSingleEntry0(1LL);
  v6 = (PVOID *)((char *)this + 40);
  if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>((_QWORD *)this + 5) )
    return 3221226021LL;
  ObfReferenceObject(*v6);
  *a2 = *v6;
  *a3 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 1);
  return 0LL;
}
