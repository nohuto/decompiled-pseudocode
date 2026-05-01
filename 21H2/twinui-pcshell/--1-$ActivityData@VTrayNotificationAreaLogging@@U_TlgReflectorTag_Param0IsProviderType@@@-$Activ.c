/*
 * XREFs of ??1?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803E94D4
 * Callers:
 *     ??1FindAppInfoContext@TrayNotificationsTelemetry@@QEAA@XZ @ 0x1803E952C (--1FindAppInfoContext@TrayNotificationsTelemetry@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803EA4EC (-reset@-$shared_object@V-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsP.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801B5AD8 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?get@?$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLogging@@P6AXXZ@Z @ 0x1803EA438 (-get@-$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLoggi.c)
 */

void __fastcall wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 224));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v3 = wil::details::static_lazy<TrayNotificationAreaLogging>::get(
           v2,
           _lambda_0975fe2f1555e85eda3261a2a36018a8_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<0,5>(*(_DWORD **)(v3 + 8), (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
}
