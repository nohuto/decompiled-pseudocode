/*
 * XREFs of ??1TabViewManager_NewViewForTab@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1802FD318
 * Callers:
 *     __lambda_63df1022615e5d58b392f54f931127cc_::operator()_::_1_::dtor$0 @ 0x1802FDACD (__lambda_63df1022615e5d58b392f54f931127cc_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802DDC68 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_NewViewForTab::~TabViewManager_NewViewForTab(
        TabViewManagerTraceLogging::TabViewManager_NewViewForTab *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_NewViewForTab::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
