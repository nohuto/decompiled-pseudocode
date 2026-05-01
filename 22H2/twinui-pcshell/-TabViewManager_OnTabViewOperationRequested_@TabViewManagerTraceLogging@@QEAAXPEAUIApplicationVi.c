/*
 * XREFs of ?TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x1802ECC50
 * Callers:
 *     ??$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@TabViewManagerTraceLogging@@SAX$$QEAPEAUIApplicationView@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAI@Z @ 0x1802D5138 (--$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@Composabl.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801D9F40 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1802D5760 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWrite.c)
 *     LoggingUtil::GetGroupIdFromTab @ 0x1802DF4D8 (LoggingUtil--GetGroupIdFromTab.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802DFE7C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetViewIdFromView @ 0x1802E0544 (LoggingUtil--GetViewIdFromView.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabViewManagerTraceLogging::TabViewManager_OnTabViewOperationRequested_(
        TabViewManagerTraceLogging *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3,
        int a4)
{
  _DWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+50h] [rbp-29h] BYREF
  int ViewIdFromView; // [rsp+54h] [rbp-25h] BYREF
  __int64 v12; // [rsp+58h] [rbp-21h] BYREF
  __int64 v13; // [rsp+60h] [rbp-19h] BYREF
  __int64 v14; // [rsp+68h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-9h] BYREF
  GUID v16; // [rsp+78h] [rbp-1h] BYREF
  struct _GUID v17; // [rsp+88h] [rbp+Fh] BYREF
  GUID v18; // [rsp+98h] [rbp+1Fh] BYREF
  __int128 v19; // [rsp+A8h] [rbp+2Fh] BYREF

  v7 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   (__int64)this,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 4u )
  {
    v18 = *LoggingUtil::GetGroupIdFromTab(&v16, (__int64)a3);
    v19 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v17, a3);
    v10 = a4;
    ViewIdFromView = LoggingUtil::GetViewIdFromView(a2);
    v12 = *(_QWORD *)LoggingUtil::GetAppNameFromView((HWND)&pv, (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    v13 = (__int64)&v18;
    v14 = (__int64)&v19;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      (unsigned __int8 *)dword_1805868C2,
      v8,
      v9,
      &v14,
      &v13,
      (const WCHAR **)&v12,
      (__int64)&ViewIdFromView,
      (__int64)&v10);
    if ( pv )
      CoTaskMemFree(pv);
  }
}
