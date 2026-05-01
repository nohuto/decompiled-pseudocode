/*
 * XREFs of ??$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIShellFeedsLauncher@ShellFeeds@Shell@Internal@4@@impl@winrt@@SAPEAXPEBUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x180102254
 * Callers:
 *     ?find_interface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180106A50 (-find_interface@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Window.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::find<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // r8
  __int64 v5; // rax

  v2 = *a2;
  if ( **a2 == winrt::impl::guid_storage<IImmersiveShellComponent>::value && v2[1] == 0xC45FA8EF5C7AA582uLL )
    return (a1 + 24) & -(__int64)(a1 != 0);
  if ( *v2 == winrt::impl::guid_storage<winrt::Windows::Foundation::IInspectable>::value
    && v2[1] == 0x901E1065AAD75A9CuLL )
  {
    return (a1 + 32) & -(__int64)(a1 != 0);
  }
  v5 = *v2 - winrt::impl::guid_storage<Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::value;
  if ( *v2 == winrt::impl::guid_storage<Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::value )
    v5 = v2[1] + 0x44D60702144DA745LL;
  return a1 & -(__int64)(v5 == 0);
}
