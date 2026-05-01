/*
 * XREFs of _lambda_37f9ef9030aa536b557a78acc06105da_::operator() @ 0x1802DA644
 * Callers:
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x1802DBBC0 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E8470 (-Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShel.c)
 */

void __fastcall lambda_37f9ef9030aa536b557a78acc06105da_::operator()(__int64 a1)
{
  TabViewManagerMeasures::TabViewManagerAddVirtualTab *v1; // rdi
  _DWORD *v3; // rcx
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(TabViewManagerMeasures::TabViewManagerAddVirtualTab **)a1;
  v3 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   a1,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 2u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v3,
      (unsigned __int8 *)dword_180584753,
      (const GUID *)(*((_QWORD *)v1 + 6) + 8LL),
      0LL,
      2u,
      &v4);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1208LL) + 80LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1208LL),
    **(_QWORD **)(a1 + 16));
  TabViewManagerMeasures::TabViewManagerAddVirtualTab::Stop(
    *(TabViewManagerMeasures::TabViewManagerAddVirtualTab **)a1,
    ***(struct Windows::Internal::ComposableShell::Tabs::IShellTab ****)(a1 + 24));
}
