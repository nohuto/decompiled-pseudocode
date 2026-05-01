/*
 * XREFs of ??0?$producers_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UWindowTabHost@Shell@Internal@Windows@winrt@@UIWindowTabHost@2345@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@234@@std@@@impl@winrt@@QEAA@XZ @ 0x1800E7674
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800E7830 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$get@$00V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@YA$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x1800EE390 (--$get@$00V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_nu.c)
 */

// Hidden C++ exception states: #wind=27
_QWORD *__fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,std::tuple<winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>>::producers_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,std::tuple<winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>>(
        _QWORD *a1)
{
  _QWORD *v2; // rbx

  a1[4] = &winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension,void>::`vftable';
  a1[4] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::`vftable';
  a1[5] = &winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,void>::`vftable';
  a1[5] = &winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,void>::`vftable';
  *a1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  *a1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  v2 = a1 + 1;
  std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a1 + 1);
  *v2 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  *v2 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  a1[2] = &VirtualDesktopNotificationBaseHelper<IVirtualDesktopNotification>::`vftable';
  a1[2] = &VirtualDesktopNotificationForwarderHelper<VirtualDesktopNotificationBaseHelper<IVirtualDesktopNotification>>::`vftable';
  a1[2] = &VirtualDesktopNotificationBase<IVirtualDesktopNotification>::`vftable';
  a1[2] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>::`vftable';
  a1[2] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>::`vftable';
  a1[3] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,Windows::Internal::Shell::IWindowTabHostInternal,void>::`vftable';
  a1[3] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,Windows::Internal::Shell::IWindowTabHostInternal,void>::`vftable';
  *a1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  *v2 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  a1[2] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>::`vftable';
  a1[3] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,Windows::Internal::Shell::IWindowTabHostInternal,void>::`vftable';
  return a1;
}
