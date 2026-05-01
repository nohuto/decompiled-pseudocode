/*
 * XREFs of ??1TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1802DA24C
 * Callers:
 *     ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802DC61C (-CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802DDC68 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_CloseView::~TabViewManager_CloseView(
        TabViewManagerTraceLogging::TabViewManager_CloseView *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_CloseView::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
