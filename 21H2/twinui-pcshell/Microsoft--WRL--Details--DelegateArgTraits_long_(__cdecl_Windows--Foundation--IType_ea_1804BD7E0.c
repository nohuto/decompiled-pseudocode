/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::IDeviceWatcher____Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceInformation___Windows::Devices::Enumeration::IDeviceInformation_____::_)(Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformation_____lambda_56008a67ac3c8425e2b06e425c0b3f19___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformation_____lambda_56008a67ac3c8425e2b06e425c0b3f19___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation___ @ 0x1804BD7E0
 * Callers:
 *     ?StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x1804BED2C (-StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::IDeviceWatcher____Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceInformation___Windows::Devices::Enumeration::IDeviceInformation_____::___Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformation_____lambda_56008a67ac3c8425e2b06e425c0b3f19___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformation_____lambda_56008a67ac3c8425e2b06e425c0b3f19___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation___(
        __int64 a1,
        __int128 *a2)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformation *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v4 = *a2;
  *(_QWORD *)a1 = off_18053E320;
  result = a1;
  *(_OWORD *)(a1 + 16) = v4;
  return result;
}
