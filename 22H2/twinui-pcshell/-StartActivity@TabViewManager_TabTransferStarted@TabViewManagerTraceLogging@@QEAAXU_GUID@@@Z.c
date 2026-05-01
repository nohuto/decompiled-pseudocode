/*
 * XREFs of ?StartActivity@TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x180300590
 * Callers:
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator() @ 0x1802FD258 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator().c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008EE20 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1801D62DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWri.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802F1448 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::StartActivity(
        TabViewManagerTraceLogging::TabViewManager_TabTransferStarted *this,
        struct _GUID *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  const GUID *v6; // rax
  __int64 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h] BYREF

  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v5 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   v4,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 4u )
  {
    v8 = (__int64)a2;
    v9 = 0LL;
    LODWORD(v7) = GetCurrentThreadId();
    v6 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      (__int64)v5,
      byte_18058813D,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v6,
      (__int64)&v9,
      (__int64)&v7,
      &v8);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerTraceLogging::TabViewManager_TabTransferStarted *)((char *)this + 8));
}
