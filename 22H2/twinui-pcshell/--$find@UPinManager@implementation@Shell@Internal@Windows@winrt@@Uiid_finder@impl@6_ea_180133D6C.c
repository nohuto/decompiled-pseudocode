/*
 * XREFs of ??$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUPinManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x180133D6C
 * Callers:
 *     ?find_interface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180145300 (-find_interface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIP.c)
 * Callees:
 *     ??$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUPinManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x180133D0C (--$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$interface.c)
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // r8

  v2 = *a2;
  if ( **a2 == winrt::impl::guid_storage<IObjectWithSite>::value && v2[1] == 0x52733D00AA0029A2LL )
    return (a1 + 16) & -(__int64)(a1 != 0);
  if ( *v2 == winrt::impl::guid_storage<IServiceProvider>::value && v2[1] == 0xFA096000AA003480uLL )
    return (a1 + 24) & -(__int64)(a1 != 0);
  else
    return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::impl::iid_finder>(
             a1,
             a2);
}
