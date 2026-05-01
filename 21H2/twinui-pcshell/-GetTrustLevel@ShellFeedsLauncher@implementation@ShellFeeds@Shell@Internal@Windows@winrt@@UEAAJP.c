/*
 * XREFs of ?GetTrustLevel@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x180102810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::GetTrustLevel(
        winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *this,
        enum TrustLevel *a2)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetTrustLevel((char *)this + 40);
}
