/*
 * XREFs of ?find_interface@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180128020
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUAppBackupListener@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x180119C38 (--$find@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@Uiid_finder_ea_180119C38.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::AppBackupListener,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 32;
  v3 = *a2 == winrt::impl::guid_storage<winrt::Windows::Internal::Shell::IAppBackupListener>::value;
  v6 = a2;
  if ( v3 && a2[1] == 0x55410AEF01732E9DLL )
    return (v2 + 88) & -(__int64)(v2 != 0);
  else
    return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::impl::iid_finder>(
             v2,
             &v6);
}
