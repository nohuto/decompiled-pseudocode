/*
 * XREFs of ??$find@Uimmersive_shell_component@winrt@@Uiid_finder@impl@2@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUimmersive_shell_component@2@AEBUiid_finder@12@@Z @ 0x1804D0A3C
 * Callers:
 *     ?find_interface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1804D5290 (-find_interface@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvid.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::immersive_shell_component,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rax

  v3 = *a2;
  v4 = **a2 - winrt::impl::guid_storage<IImmersiveShellComponent>::value;
  if ( !v4 )
    v4 = v3[1] + 0x3BA05710A3855A7ELL;
  v5 = 0LL;
  if ( !v4 )
    return (a1 + 16) & -(__int64)(a1 != 0);
  v7 = *v3 - winrt::impl::guid_storage<winrt::Windows::Foundation::IInspectable>::value;
  if ( *v3 == winrt::impl::guid_storage<winrt::Windows::Foundation::IInspectable>::value )
    v7 = v3[1] + 0x6FE1EF9A5528A564LL;
  if ( !v7 )
    return (a1 + 24) & -(__int64)(a1 != 0);
  return v5;
}
