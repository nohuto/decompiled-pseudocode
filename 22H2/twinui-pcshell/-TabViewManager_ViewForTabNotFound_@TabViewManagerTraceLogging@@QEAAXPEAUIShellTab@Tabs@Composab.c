/*
 * XREFs of ?TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802ED110
 * Callers:
 *     ??$TabViewManager_ViewForTabNotFound@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802D5418 (--$TabViewManager_ViewForTabNotFound@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@TabVi.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802DFE7C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_ViewForTabNotFound_(
        TabViewManagerTraceLogging *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  _DWORD *v3; // rbx
  struct _GUID *ShellTabGroupId; // rax
  struct _GUID v5; // xmm0
  struct _GUID v6; // [rsp+30h] [rbp-68h] BYREF
  struct _GUID v7; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-48h] BYREF
  struct _GUID *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  v3 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   (__int64)this,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 2u )
  {
    ShellTabGroupId = TabShellTelemetryBase::GetShellTabGroupId(&v6, a2);
    v11 = 0;
    v10 = 16;
    v5 = *ShellTabGroupId;
    v9 = &v7;
    v7 = v5;
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1805875DE, 0LL, 0LL, 3u, &v8);
  }
}
