/*
 * XREFs of ??1TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1802DA1D4
 * Callers:
 *     _TabViewManager::TryFindAndNotifyReplacementTab_::_1_::dtor$3 @ 0x1802EDC6A (_TabViewManager--TryFindAndNotifyReplacementTab_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802DD9F8 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_ReplacementTabSelection::~TabViewManager_ReplacementTabSelection(
        TabViewManagerTraceLogging::TabViewManager_ReplacementTabSelection *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_ReplacementTabSelection::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
