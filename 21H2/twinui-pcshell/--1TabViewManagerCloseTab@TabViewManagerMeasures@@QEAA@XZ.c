/*
 * XREFs of ??1TabViewManagerCloseTab@TabViewManagerMeasures@@QEAA@XZ @ 0x1802DA19C
 * Callers:
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802DC4C4 (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802DDDB8 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerCloseTab::~TabViewManagerCloseTab(
        TabViewManagerMeasures::TabViewManagerCloseTab *this)
{
  *(_QWORD *)this = &TabViewManagerMeasures::TabViewManagerCloseTab::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
