/*
 * XREFs of ??1TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1802FD344
 * Callers:
 *     _TabTransferManager::PerformCancel_::_1_::dtor$0 @ 0x1802FF37F (_TabTransferManager--PerformCancel_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802DDC68 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled::~TabViewManager_TabTransferCanceled(
        TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_TabTransferCanceled::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
