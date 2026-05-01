/*
 * XREFs of ??0?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@QEAA@XZ @ 0x1800E75D4
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800E755C (--0-$heap_implements@V-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Window.c)
 * Callees:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800E7830 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::WindowTabHost *__fastcall winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *a1)
{
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost(a1);
  *(_QWORD *)a1 = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>'};
  *((_QWORD *)a1 + 1) = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IImmersiveSettingsCacheNotification,void>'};
  *((_QWORD *)a1 + 2) = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>'};
  *((_QWORD *)a1 + 3) = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,Windows::Internal::Shell::IWindowTabHostInternal,void>'};
  *((_QWORD *)a1 + 6) = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 7) = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 8) = &winrt::Windows::Internal::Shell::implementation::WindowTabHost_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::immersive_shell_component,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,winrt::cloaked<Windows::Internal::Shell::IWindowTabHostInternal>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 10) = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
