/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18021DA40
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800D67FC (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$9 @ 0x1800D6D19 (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$9.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800D6D4C (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$4 @ 0x1800D6F83 (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$4.c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800F5A90 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$0 @ 0x1800F5D0C (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphForSize_--_1_-.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$1 @ 0x1800F5D18 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphF_ea_1800F5D18.c)
 *     GetPidlsFromTaskbarLayout @ 0x18015601C (GetPidlsFromTaskbarLayout.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$8 @ 0x180156CD6 (_GetPidlsFromTaskbarLayout_--_1_--dtor$8.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$9 @ 0x180156CE2 (_GetPidlsFromTaskbarLayout_--_1_--dtor$9.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$10 @ 0x180156CEE (_GetPidlsFromTaskbarLayout_--_1_--dtor$10.c)
 *     _CActionCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$6 @ 0x180220438 (_CActionCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _CControlCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$3 @ 0x180224A66 (_CControlCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _CToastCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$5 @ 0x1802359F0 (_CToastCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$6 @ 0x180290FBC (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$6.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$7 @ 0x180290FC8 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$7.c)
 *     __LogEventWithViewHostItemData___::_1_::dtor$0 @ 0x1802ADFAC (__LogEventWithViewHostItemData___--_1_--dtor$0.c)
 *     __LogEventWithViewHostItemData___::_1_::dtor$0_0 @ 0x1802B7B7A (__LogEventWithViewHostItemData___--_1_--dtor$0_0.c)
 *     _Windows::Internal::ComposableShell::Tabs::TabSetMediator::TraceLogTabWindowSnapped_::_1_::dtor$0 @ 0x18030C812 (_Windows--Internal--ComposableShell--Tabs--TabSetMediator--TraceLogTabWindowSnapped_--_1_--dtor$.c)
 *     _VirtualDesktopAcessibility::RecalculateDesktopName_::_1_::dtor$4 @ 0x1804B10E9 (_VirtualDesktopAcessibility--RecalculateDesktopName_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(
        HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
