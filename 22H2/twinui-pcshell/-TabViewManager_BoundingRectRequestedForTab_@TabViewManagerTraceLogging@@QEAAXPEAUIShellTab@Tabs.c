/*
 * XREFs of ?TabViewManager_BoundingRectRequestedForTab_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEBUtagRECT@@@Z @ 0x1802EC994
 * Callers:
 *     ??$TabViewManager_BoundingRectRequestedForTab@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAUtagRECT@@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAUtagRECT@@@Z @ 0x1802D4F08 (--$TabViewManager_BoundingRectRequestedForTab@PEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802DFE7C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_BoundingRectRequestedForTab_(
        TabViewManagerTraceLogging *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        const struct tagRECT *a3)
{
  _DWORD *v5; // rbx
  struct _GUID *ShellTabGroupId; // rax
  struct _GUID v7; // xmm0
  LONG bottom; // [rsp+38h] [rbp-59h] BYREF
  LONG right; // [rsp+3Ch] [rbp-55h] BYREF
  LONG top; // [rsp+40h] [rbp-51h] BYREF
  LONG left; // [rsp+44h] [rbp-4Dh] BYREF
  struct _GUID v12; // [rsp+48h] [rbp-49h] BYREF
  struct _GUID v13; // [rsp+58h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+68h] [rbp-29h] BYREF
  struct _GUID *v15; // [rsp+88h] [rbp-9h]
  __int64 v16; // [rsp+90h] [rbp-1h]
  LONG *p_left; // [rsp+98h] [rbp+7h]
  __int64 v18; // [rsp+A0h] [rbp+Fh]
  LONG *p_top; // [rsp+A8h] [rbp+17h]
  __int64 v20; // [rsp+B0h] [rbp+1Fh]
  LONG *p_right; // [rsp+B8h] [rbp+27h]
  __int64 v22; // [rsp+C0h] [rbp+2Fh]
  LONG *p_bottom; // [rsp+C8h] [rbp+37h]
  __int64 v24; // [rsp+D0h] [rbp+3Fh]

  v5 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   (__int64)this,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 4u )
  {
    ShellTabGroupId = TabShellTelemetryBase::GetShellTabGroupId(&v12, a2);
    v24 = 4LL;
    v22 = 4LL;
    v20 = 4LL;
    v7 = *ShellTabGroupId;
    bottom = a3->bottom;
    right = a3->right;
    top = a3->top;
    left = a3->left;
    p_bottom = &bottom;
    p_right = &right;
    p_top = &top;
    p_left = &left;
    v15 = &v13;
    v13 = v7;
    v18 = 4LL;
    v16 = 16LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_180586BA9, 0LL, 0LL, 7u, &v14);
  }
}
