/*
 * XREFs of ??1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1802FD12C
 * Callers:
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator() @ 0x1802FD258 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator().c)
 *     __lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator()_::_1_::dtor$0 @ 0x1802FD619 (__lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802DD9F8 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::~TabViewManager_TabTransferStarted(
        TabViewManagerTraceLogging::TabViewManager_TabTransferStarted *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
