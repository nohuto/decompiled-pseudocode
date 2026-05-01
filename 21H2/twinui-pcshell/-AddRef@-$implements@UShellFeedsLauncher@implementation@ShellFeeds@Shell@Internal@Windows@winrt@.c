/*
 * XREFs of ?AddRef@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEAAKXZ @ 0x180102670
 * Callers:
 *     ?AddRef@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@W7EAAKXZ @ 0x180171790 (-AddRef@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@W_ea_180171790.c)
 *     ?AddRef@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@WBA@EAAKXZ @ 0x1801717A0 (-AddRef@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@W_ea_1801717A0.c)
 *     ?AddRef@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@WBI@EAAKXZ @ 0x1801717B0 (-AddRef@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@W_ea_1801717B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::immersive_shell_component,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::AddRef(a1 + 40);
}
