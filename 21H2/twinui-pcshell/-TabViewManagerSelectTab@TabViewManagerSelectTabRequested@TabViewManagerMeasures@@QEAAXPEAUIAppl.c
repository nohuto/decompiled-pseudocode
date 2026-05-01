/*
 * XREFs of ?TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@@Z @ 0x1802EC864
 * Callers:
 *     ?OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerCancellableEventArgs@3456@@Z @ 0x1802E2AE0 (-OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801DA0F0 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1802D5AB0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTem.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E00EC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1802E0408 (LoggingUtil--GetTabGroupSize.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabViewManagerMeasures::TabViewManagerSelectTabRequested::TabViewManagerSelectTab(
        TabViewManagerMeasures::TabViewManagerSelectTabRequested *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a4)
{
  _QWORD *v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp-49h] BYREF
  __int64 v12; // [rsp+48h] [rbp-41h] BYREF
  __int64 v13; // [rsp+50h] [rbp-39h] BYREF
  __int64 v14; // [rsp+58h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-29h] BYREF
  struct _GUID v16; // [rsp+68h] [rbp-21h] BYREF
  struct _GUID v17; // [rsp+78h] [rbp-11h] BYREF
  __int128 v18; // [rsp+88h] [rbp-1h] BYREF
  __int128 v19; // [rsp+98h] [rbp+Fh] BYREF

  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 5u && tlgKeywordOn(v8[1], 0x400000000000LL) )
  {
    v18 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v16, a3);
    v19 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v17, a4);
    v12 = *(_QWORD *)LoggingUtil::GetAppNameFromView((HWND)&pv, (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    LODWORD(v11) = LoggingUtil::GetTabGroupSize((__int64 *)a3);
    v13 = (__int64)&v18;
    v14 = (__int64)&v19;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)v9,
      (unsigned __int8 *)dword_180584991,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v10,
      &v14,
      &v13,
      (__int64)&v11,
      (const WCHAR **)&v12);
    if ( pv )
      CoTaskMemFree(pv);
  }
}
