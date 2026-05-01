/*
 * XREFs of ??1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ @ 0x1802DA1C8
 * Callers:
 *     _lambda_92d3fc369c3cea5b70dbdb6349205bce_::__lambda_92d3fc369c3cea5b70dbdb6349205bce_ @ 0x1802D99AC (_lambda_92d3fc369c3cea5b70dbdb6349205bce_--__lambda_92d3fc369c3cea5b70dbdb6349205bce_.c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1802E2550 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802DDDB8 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerCloseTabRequested::~TabViewManagerCloseTabRequested(
        TabViewManagerMeasures::TabViewManagerCloseTabRequested *this)
{
  *(_QWORD *)this = &TabViewManagerMeasures::TabViewManagerCloseTabRequested::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
