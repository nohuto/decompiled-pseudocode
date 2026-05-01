/*
 * XREFs of ?find_interface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801068E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIShellFeedsLauncher@ShellFeeds@Shell@Internal@4@@impl@winrt@@SAPEAXPEBUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1801020E4 (--$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uiid_finder@.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::immersive_shell_component,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 40;
  v3 = *a2 == winrt::impl::guid_storage<IObjectWithSite>::value;
  v7 = a2;
  if ( v3 && a2[1] == 0x52733D00AA0029A2LL )
  {
    v4 = v2 + 8;
  }
  else
  {
    if ( *a2 != winrt::impl::guid_storage<IServiceProvider>::value || a2[1] != 0xFA096000AA003480uLL )
      return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::find<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::impl::iid_finder>(
               v2,
               &v7);
    v4 = v2 + 16;
  }
  return v4 & -(__int64)(v2 != 0);
}
