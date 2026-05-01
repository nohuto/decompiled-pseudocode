/*
 * XREFs of ?InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTabGroup@5678@@Z @ 0x1802E0F70
 * Callers:
 *     _lambda_92d3fc369c3cea5b70dbdb6349205bce_::operator() @ 0x1802DA910 (_lambda_92d3fc369c3cea5b70dbdb6349205bce_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801D9F40 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1802D5A18 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlg.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802DFE7C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1802E0198 (LoggingUtil--GetTabGroupSize.c)
 *     LoggingUtil::GetTabIsSelected @ 0x1802E0208 (LoggingUtil--GetTabIsSelected.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabViewManagerMeasures::TabViewManagerCloseTabRequested::InvokingAppManagedTabCloseRequestedHandlers(
        TabViewManagerMeasures::TabViewManagerCloseTabRequested *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a4)
{
  _QWORD *v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // r9
  bool IsSelected; // [rsp+50h] [rbp-49h] BYREF
  int TabGroupSize; // [rsp+54h] [rbp-45h] BYREF
  __int64 v13; // [rsp+58h] [rbp-41h] BYREF
  __int64 v14; // [rsp+60h] [rbp-39h] BYREF
  __int64 v15; // [rsp+68h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-29h] BYREF
  struct _GUID v17; // [rsp+78h] [rbp-21h] BYREF
  struct _GUID v18; // [rsp+88h] [rbp-11h] BYREF
  __int128 v19; // [rsp+98h] [rbp-1h] BYREF
  __int128 v20; // [rsp+A8h] [rbp+Fh] BYREF

  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 5u && tlgKeywordOn(v8[1], 0x400000000000LL) )
  {
    v19 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v17, a4);
    v20 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v18, a3);
    v13 = *(_QWORD *)LoggingUtil::GetAppNameFromView((HWND)&pv, (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    IsSelected = LoggingUtil::GetTabIsSelected((__int64)a3);
    TabGroupSize = LoggingUtil::GetTabGroupSize((__int64 *)a4);
    v14 = (__int64)&v19;
    v15 = (__int64)&v20;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>>(
      (__int64)v9,
      (unsigned __int8 *)dword_180584FF5,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v10,
      &v15,
      &v14,
      (__int64)&TabGroupSize,
      (__int64)&IsSelected,
      (const WCHAR **)&v13);
    if ( pv )
      CoTaskMemFree(pv);
  }
}
