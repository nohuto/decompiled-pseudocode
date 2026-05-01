/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18021D890
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800D668C (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$9 @ 0x1800D6BA9 (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$9.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800D6BDC (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$4 @ 0x1800D6E13 (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$4.c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800F5920 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$0 @ 0x1800F5B9C (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphForSize_--_1_-.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$1 @ 0x1800F5BA8 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphF_ea_1800F5BA8.c)
 *     GetPidlsFromTaskbarLayout @ 0x180155EAC (GetPidlsFromTaskbarLayout.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$8 @ 0x180156B66 (_GetPidlsFromTaskbarLayout_--_1_--dtor$8.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$9 @ 0x180156B72 (_GetPidlsFromTaskbarLayout_--_1_--dtor$9.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$10 @ 0x180156B7E (_GetPidlsFromTaskbarLayout_--_1_--dtor$10.c)
 *     _CActionCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$6 @ 0x180220288 (_CActionCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _CControlCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1802248B6 (_CControlCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _CToastCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$5 @ 0x180235840 (_CToastCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$6 @ 0x180290E0C (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$6.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$7 @ 0x180290E18 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$7.c)
 *     __LogEventWithViewHostItemData___::_1_::dtor$0 @ 0x1802ADD3C (__LogEventWithViewHostItemData___--_1_--dtor$0.c)
 *     __LogEventWithViewHostItemData___::_1_::dtor$0_0 @ 0x1802B790A (__LogEventWithViewHostItemData___--_1_--dtor$0_0.c)
 *     _Windows::Internal::ComposableShell::Tabs::TabSetMediator::TraceLogTabWindowSnapped_::_1_::dtor$0 @ 0x18030C5A2 (_Windows--Internal--ComposableShell--Tabs--TabSetMediator--TraceLogTabWindowSnapped_--_1_--dtor$.c)
 *     _VirtualDesktopAcessibility::RecalculateDesktopName_::_1_::dtor$4 @ 0x1804B0D59 (_VirtualDesktopAcessibility--RecalculateDesktopName_--_1_--dtor$4.c)
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
