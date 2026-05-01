/*
 * XREFs of ??1ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18010257C
 * Callers:
 *     _winrt::details::module_count_wrapper_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::module_count_wrapper_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher__::_1_::dtor$0 @ 0x1801024EB (_winrt--details--module_count_wrapper_winrt--Windows--Internal--Shell--ShellFeeds--_ea_1801024EB.c)
 *     ??1?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x180102510 (--1-$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@w.c)
 *     ??_EShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180102634 (--_EShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_43fb67edc03a13e09baac6523e5cae48_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAAXAEAV_lambda_43fb67edc03a13e09baac6523e5cae48_@@@Z @ 0x1801020D0 (--$call@AEAV_lambda_43fb67edc03a13e09baac6523e5cae48_@@@-$factory_cache_entry@UNetworkInformatio.c)
 */

void __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::~ShellFeedsLauncher(
        winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *this)
{
  char *v2; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,std::tuple<Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 2) = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 3) = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 5) = &winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vftable'{for `winrt::immersive_shell_component'};
  v2 = (char *)this + 104;
  winrt::impl::factory_cache_entry<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::call<_lambda_43fb67edc03a13e09baac6523e5cae48_ &>(
    (__int64)this,
    &v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 12);
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *)((char *)this + 8));
}
