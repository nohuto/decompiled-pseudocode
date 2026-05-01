/*
 * XREFs of ??1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1802DA008
 * Callers:
 *     ?EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802DE0B0 (-EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802DD9F8 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_EnterFullScreen::~TabViewManager_EnterFullScreen(
        TabViewManagerTraceLogging::TabViewManager_EnterFullScreen *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_EnterFullScreen::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
