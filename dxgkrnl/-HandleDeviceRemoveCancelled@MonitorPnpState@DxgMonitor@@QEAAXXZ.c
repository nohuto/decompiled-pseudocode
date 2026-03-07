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
