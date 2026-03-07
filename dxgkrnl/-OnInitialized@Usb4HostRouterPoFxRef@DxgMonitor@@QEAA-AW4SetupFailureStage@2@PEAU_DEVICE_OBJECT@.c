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
