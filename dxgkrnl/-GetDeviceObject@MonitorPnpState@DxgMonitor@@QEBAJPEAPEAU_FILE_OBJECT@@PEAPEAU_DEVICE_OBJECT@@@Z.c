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
