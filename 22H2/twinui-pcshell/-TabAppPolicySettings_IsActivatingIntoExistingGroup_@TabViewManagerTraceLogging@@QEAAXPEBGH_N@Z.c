/*
 * XREFs of ?TabAppPolicySettings_IsActivatingIntoExistingGroup_@TabViewManagerTraceLogging@@QEAAXPEBGH_N@Z @ 0x1802F3AC4
 * Callers:
 *     ??$TabAppPolicySettings_IsActivatingIntoExistingGroup@PEAGHAEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAG$$QEAHAEAE@Z @ 0x1802F2B9C (--$TabAppPolicySettings_IsActivatingIntoExistingGroup@PEAGHAEAE@TabViewManagerTraceLogging@@SAX$.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1801D8124 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1802F2E2C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManagerTraceLogging::TabAppPolicySettings_IsActivatingIntoExistingGroup_(
        TabViewManagerTraceLogging *this,
        const unsigned __int16 *a2,
        int a3,
        char a4)
{
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rbx
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+60h] [rbp+8h] BYREF

  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(a2, (unsigned __int16 **)&pv);
  v8 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   v7,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  v11 = pv;
  if ( *v8 > 4u )
  {
    LOBYTE(pv) = a4;
    LODWORD(v12) = a3;
    v13 = (__int64)v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)v8,
      (unsigned __int8 *)dword_180587853,
      v9,
      v10,
      (const WCHAR **)&v13,
      (__int64)&v12,
      (__int64)&pv);
  }
  if ( v11 )
    CoTaskMemFree(v11);
}
