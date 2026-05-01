/*
 * XREFs of ??0?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@QEAA@XZ @ 0x1801023FC
 * Callers:
 *     ??$make@V?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x180102350 (--$make@V-$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1804D1234 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x1804D1598 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>(
        _QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx

  *a1 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,std::tuple<Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>>::`vftable';
  v2 = a1 + 1;
  winrt::immersive_shell_component::immersive_shell_component((winrt::immersive_shell_component *)(a1 + 1));
  *a1 = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,std::tuple<Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>>'};
  *v2 = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  a1[2] = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  a1[3] = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  a1[5] = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::immersive_shell_component'};
  a1[12] = 0LL;
  a1[13] = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v3, &unk_180565D10);
  *a1 = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,std::tuple<Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>>'};
  *v2 = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  a1[2] = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  a1[3] = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  a1[5] = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::`vftable'{for `winrt::immersive_shell_component'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
