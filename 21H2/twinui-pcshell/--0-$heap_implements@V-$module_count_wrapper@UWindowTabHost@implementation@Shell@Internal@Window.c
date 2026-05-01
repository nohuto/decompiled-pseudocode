/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800E755C
 * Callers:
 *     ??$make@V?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@$$V@winrt@@YA?AUWindowTabHost@Shell@Internal@Windows@0@XZ @ 0x1800E6BF0 (--$make@V-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@det.c)
 * Callees:
 *     ??0?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@QEAA@XZ @ 0x1800E75D4 (--0-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@w.c)
 */

_QWORD *__fastcall winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>(
        _QWORD *a1)
{
  winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>();
  *a1 = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>'};
  a1[1] = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IImmersiveSettingsCacheNotification,void>'};
  a1[2] = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>'};
  a1[3] = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,Windows::Internal::Shell::IWindowTabHostInternal,void>'};
  a1[6] = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  a1[7] = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  a1[8] = &winrt::Windows::Internal::Shell::implementation::WindowTabHost_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::immersive_shell_component,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,winrt::cloaked<Windows::Internal::Shell::IWindowTabHostInternal>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  a1[10] = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>::`vftable';
  return a1;
}
