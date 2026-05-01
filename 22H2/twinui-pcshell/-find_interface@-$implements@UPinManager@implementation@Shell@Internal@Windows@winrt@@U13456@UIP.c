/*
 * XREFs of ?find_interface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180145300
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUPinManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x180133D6C (--$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6_ea_180133D6C.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 48;
  v3 = *a2 == winrt::impl::guid_storage<winrt::Windows::Internal::Shell::IPinManager>::value;
  v5 = a2;
  if ( v3 && a2[1] == 0x5FBE5583B74A64AFLL )
    return (v2 + 8) & -(__int64)(v2 != 0);
  if ( *a2 != winrt::impl::guid_storage<IPinManagerInterop>::value || a2[1] != 0xDF046F8CB170D97LL )
    return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::impl::iid_finder>(
             v2,
             &v5);
  return v2;
}
