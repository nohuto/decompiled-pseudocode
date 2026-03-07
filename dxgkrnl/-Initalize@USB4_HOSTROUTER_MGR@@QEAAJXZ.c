__int64 __fastcall USB4_HOSTROUTER_MGR::Initalize(USB4_HOSTROUTER_MGR *this)
{
  PVOID Context; // rbx
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  GUID EventCategoryData; // [rsp+40h] [rbp-28h] BYREF

  Context = MONITOR_MGR::_pUsb4Manager;
  EventCategoryData = GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)MONITOR_MGR::_pUsb4Manager,
    0LL);
  v2 = IoRegisterPlugPlayNotification(
         EventCategoryDeviceInterfaceChange,
         1u,
         &EventCategoryData,
         g_pDriverObject,
         USB4_HOSTROUTER_MGR::_HandleUsb4HRPnPNotification,
         Context,
         (PVOID *)Context);
  v3 = v2;
  if ( v2 < 0 )
    WdLogSingleEntry1(2LL, v2);
  return v3;
}
