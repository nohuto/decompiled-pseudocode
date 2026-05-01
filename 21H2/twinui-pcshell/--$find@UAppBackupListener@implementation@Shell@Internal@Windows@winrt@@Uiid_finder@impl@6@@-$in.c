/*
 * XREFs of ??$find@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUAppBackupListener@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x180119D48
 * Callers:
 *     ??$find@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUAppBackupListener@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x180119DA8 (--$find@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@Uiid_finder_ea_180119DA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // r8

  v2 = *a2;
  if ( **a2 == winrt::impl::guid_storage<IImmersiveShellComponent>::value && v2[1] == 0xC45FA8EF5C7AA582uLL )
    return (a1 + 16) & -(__int64)(a1 != 0);
  if ( *v2 == winrt::impl::guid_storage<winrt::Windows::Foundation::IInspectable>::value
    && v2[1] == 0x901E1065AAD75A9CuLL )
  {
    return (a1 + 24) & -(__int64)(a1 != 0);
  }
  else
  {
    return 0LL;
  }
}
