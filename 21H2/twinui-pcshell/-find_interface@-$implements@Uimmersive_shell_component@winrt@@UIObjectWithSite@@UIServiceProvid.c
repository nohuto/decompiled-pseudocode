/*
 * XREFs of ?find_interface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1804D5620
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@Uimmersive_shell_component@winrt@@Uiid_finder@impl@2@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUimmersive_shell_component@2@AEBUiid_finder@12@@Z @ 0x1804D0DCC (--$find@Uimmersive_shell_component@winrt@@Uiid_finder@impl@2@@-$interface_list@UIImmersiveShellC.c)
 */

__int64 __fastcall winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 32;
  v4 = *a2 - winrt::impl::guid_storage<IObjectWithSite>::value;
  v3 = *a2 == winrt::impl::guid_storage<IObjectWithSite>::value;
  v7 = a2;
  if ( v3 )
    v4 = a2[1] - 0x52733D00AA0029A2LL;
  if ( v4 )
  {
    v5 = *a2 - winrt::impl::guid_storage<IServiceProvider>::value;
    if ( *a2 == winrt::impl::guid_storage<IServiceProvider>::value )
      v5 = a2[1] + 0x5F69FFF55FFCB80LL;
    if ( v5 )
      return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::immersive_shell_component,winrt::impl::iid_finder>(
               v2,
               &v7);
    else
      return (v2 + 8) & -(__int64)(v2 != 0);
  }
  return v2;
}
