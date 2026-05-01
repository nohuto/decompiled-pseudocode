/*
 * XREFs of ?TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x1802ED24C
 * Callers:
 *     ??$TabViewManager_RemovingViewFromTabGroup@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@TabViewManagerTraceLogging@@SAXAEAPEAUIApplicationView@@$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAI@Z @ 0x1802D55C8 (--$TabViewManager_RemovingViewFromTabGroup@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@Comp.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801DA0F0 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByRef@$0BA@@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByRef@$0BA@@@33@Z @ 0x1802D60AC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByRef@$0BA@@@U1@U1@@-$_tlgWr.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E00EC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1802E0408 (LoggingUtil--GetTabGroupSize.c)
 *     LoggingUtil::GetViewIdFromView @ 0x1802E07B4 (LoggingUtil--GetViewIdFromView.c)
 *     LoggingUtil::GetViewType @ 0x1802E081C (LoggingUtil--GetViewType.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabViewManagerTraceLogging::TabViewManager_RemovingViewFromTabGroup_(
        TabViewManagerTraceLogging *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a3,
        int a4)
{
  _DWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+50h] [rbp-9h] BYREF
  int TabGroupSize; // [rsp+54h] [rbp-5h] BYREF
  int ViewIdFromView; // [rsp+58h] [rbp-1h] BYREF
  int ViewType; // [rsp+5Ch] [rbp+3h] BYREF
  __int64 v14; // [rsp+60h] [rbp+7h] BYREF
  __int64 v15; // [rsp+68h] [rbp+Fh] BYREF
  LPVOID pv; // [rsp+70h] [rbp+17h] BYREF
  struct _GUID v17; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v18; // [rsp+88h] [rbp+2Fh] BYREF

  v7 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   (__int64)this,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 4u )
  {
    v18 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v17, a3);
    v10 = a4;
    TabGroupSize = LoggingUtil::GetTabGroupSize((__int64 *)a3);
    v14 = (__int64)&v18;
    ViewIdFromView = LoggingUtil::GetViewIdFromView(a2);
    v15 = *(_QWORD *)LoggingUtil::GetAppNameFromView((HWND)&pv, (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    ViewType = LoggingUtil::GetViewType((void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      (unsigned __int8 *)dword_1805868E3,
      v8,
      v9,
      (__int64)&ViewType,
      (const WCHAR **)&v15,
      (__int64)&ViewIdFromView,
      &v14,
      (__int64)&TabGroupSize,
      (__int64)&v10);
    if ( pv )
      CoTaskMemFree(pv);
  }
}
