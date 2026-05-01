/*
 * XREFs of ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802D9AE0
 * Callers:
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802D9AA4 (--1-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1802DA3F8 (--1TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?RecoverTabGroupsFromWindowGroups@TabViewManager@@AEAAXXZ @ 0x1802E5E10 (-RecoverTabGroupsFromWindowGroups@TabViewManager@@AEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1802F1344 (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_1802F1344.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$02@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802D7E4C (--$_tlgWriteActivityAutoStop@$0A@$02@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 224));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v3 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
           v2,
           _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<0,3>((_DWORD *)v3[1], (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
}
