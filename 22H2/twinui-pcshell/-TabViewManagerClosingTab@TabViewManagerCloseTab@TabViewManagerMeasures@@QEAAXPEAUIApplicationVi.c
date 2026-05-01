/*
 * XREFs of ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x1802EC494
 * Callers:
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802DC254 (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801D9F40 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5@Z @ 0x1802D5BD8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlg.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802DFE7C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 *     LoggingUtil::GetTabGroupSize @ 0x1802E0198 (LoggingUtil--GetTabGroupSize.c)
 *     LoggingUtil::GetTabIsSelected @ 0x1802E0208 (LoggingUtil--GetTabIsSelected.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabViewManagerMeasures::TabViewManagerCloseTab::TabViewManagerClosingTab(
        TabViewManagerMeasures::TabViewManagerCloseTab *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a4,
        unsigned int a5)
{
  _QWORD *v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // r9
  bool IsSelected; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-5Dh] BYREF
  __int64 v14; // [rsp+58h] [rbp-59h] BYREF
  __int64 v15; // [rsp+60h] [rbp-51h] BYREF
  __int64 v16; // [rsp+68h] [rbp-49h] BYREF
  __int64 v17; // [rsp+70h] [rbp-41h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-39h] BYREF
  struct _GUID v19; // [rsp+80h] [rbp-31h] BYREF
  struct _GUID v20; // [rsp+90h] [rbp-21h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v22; // [rsp+B0h] [rbp-1h] BYREF

  v9 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v10 = (_DWORD *)v9[1];
  if ( *v10 > 5u && tlgKeywordOn(v9[1], 0x400000000000LL) )
  {
    v21 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v19, a3);
    v22 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v20, a4);
    v13 = a5;
    v15 = *(_QWORD *)LoggingUtil::GetAppNameFromView((HWND)&pv, (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    LODWORD(v14) = LoggingUtil::GetTabGroupSize((__int64 *)a3);
    v16 = (__int64)&v21;
    IsSelected = LoggingUtil::GetTabIsSelected((__int64)a4);
    v17 = (__int64)&v22;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      (unsigned __int8 *)dword_1805847C1,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v11,
      &v17,
      (__int64)&IsSelected,
      &v16,
      (__int64)&v14,
      (const WCHAR **)&v15,
      (__int64)&v13);
    if ( pv )
      CoTaskMemFree(pv);
  }
}
