/*
 * XREFs of ?TabViewManager_MaximizedWindowInfo_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@111@Z @ 0x1802ECAAC
 * Callers:
 *     ??$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@TabViewManagerTraceLogging@@SAXAEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@11@Z @ 0x1802D5054 (--$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@T.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801D9F40 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x1802D54B8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_MaximizedWindowInfo_(
        TabViewManagerTraceLogging *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6)
{
  _DWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  LONG right; // [rsp+B8h] [rbp-19h] BYREF
  LONG top; // [rsp+BCh] [rbp-15h] BYREF
  LONG left; // [rsp+C0h] [rbp-11h] BYREF
  LONG bottom; // [rsp+C4h] [rbp-Dh] BYREF
  LONG v16; // [rsp+C8h] [rbp-9h] BYREF
  LONG v17; // [rsp+CCh] [rbp-5h] BYREF
  LONG v18; // [rsp+D0h] [rbp-1h] BYREF
  LONG v19; // [rsp+D4h] [rbp+3h] BYREF
  LONG v20; // [rsp+D8h] [rbp+7h] BYREF
  LONG v21; // [rsp+DCh] [rbp+Bh] BYREF
  LONG v22; // [rsp+E0h] [rbp+Fh] BYREF
  LONG v23; // [rsp+E4h] [rbp+13h] BYREF
  LONG v24; // [rsp+E8h] [rbp+17h] BYREF
  LONG v25; // [rsp+ECh] [rbp+1Bh] BYREF
  LONG v26; // [rsp+F0h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+F8h] [rbp+27h] BYREF
  LPVOID pv; // [rsp+100h] [rbp+2Fh] BYREF
  __int64 v29; // [rsp+128h] [rbp+57h] BYREF

  v29 = (__int64)this;
  v9 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   (__int64)this,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v9 > 4u )
  {
    LODWORD(v29) = a6->bottom;
    right = a6->right;
    top = a6->top;
    left = a6->left;
    bottom = a5->bottom;
    v16 = a5->right;
    v17 = a5->top;
    v18 = a5->left;
    v19 = a4->bottom;
    v20 = a4->right;
    v21 = a4->top;
    v22 = a4->left;
    v23 = a3->bottom;
    v24 = a3->right;
    v25 = a3->top;
    v26 = a3->left;
    v27 = *(_QWORD *)LoggingUtil::GetAppNameFromView((HWND)&pv, (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v9,
      (unsigned __int8 *)dword_1805866BE,
      v10,
      v11,
      (const WCHAR **)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&bottom,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&v29);
    if ( pv )
      CoTaskMemFree(pv);
  }
}
