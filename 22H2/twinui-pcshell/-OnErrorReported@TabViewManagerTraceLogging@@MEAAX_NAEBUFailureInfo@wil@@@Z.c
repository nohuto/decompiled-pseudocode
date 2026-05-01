/*
 * XREFs of ?OnErrorReported@TabViewManagerTraceLogging@@MEAAX_NAEBUFailureInfo@wil@@@Z @ 0x1802E25A0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1801A85E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801A85E8.c)
 */

void __fastcall TabViewManagerTraceLogging::OnErrorReported(
        TabViewManagerTraceLogging *this,
        __int64 a2,
        const struct wil::FailureInfo *a3)
{
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r9
  int v7; // [rsp+A0h] [rbp-9h] BYREF
  int v8; // [rsp+A4h] [rbp-5h] BYREF
  int v9; // [rsp+A8h] [rbp-1h] BYREF
  int v10; // [rsp+ACh] [rbp+3h] BYREF
  int v11; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 v17; // [rsp+E0h] [rbp+37h] BYREF
  __int64 v18; // [rsp+E8h] [rbp+3Fh] BYREF
  __int64 v19; // [rsp+F0h] [rbp+47h] BYREF
  __int64 v20; // [rsp+F8h] [rbp+4Fh] BYREF
  __int64 v21; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   (__int64)this,
                   _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 2u )
  {
    if ( tlgKeywordOn((__int64)v4, 0x200000000000LL) )
    {
      v12 = *((_QWORD *)a3 + 14);
      v13 = *((_QWORD *)a3 + 13);
      LODWORD(v21) = *((_DWORD *)a3 + 24);
      v14 = *((_QWORD *)a3 + 11);
      v15 = *((_QWORD *)a3 + 10);
      v7 = *((_DWORD *)a3 + 18);
      v16 = *((_QWORD *)a3 + 8);
      v8 = *((_DWORD *)a3 + 6);
      v17 = *((_QWORD *)a3 + 2);
      v9 = *(_DWORD *)a3;
      v18 = *((_QWORD *)a3 + 15);
      v10 = *((_DWORD *)a3 + 14);
      v19 = *((_QWORD *)a3 + 6);
      v11 = *((_DWORD *)a3 + 1);
      v20 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v5,
        (unsigned __int8 *)dword_18056F557,
        0LL,
        v6,
        (__int64)&v20,
        (__int64)&v11,
        (const wchar_t **)&v19,
        (__int64)&v10,
        (const wchar_t **)&v18,
        (__int64)&v9,
        (const WCHAR **)&v17,
        (__int64)&v8,
        (const wchar_t **)&v16,
        (__int64)&v7,
        (const wchar_t **)&v15,
        (const WCHAR **)&v14,
        (__int64)&v21,
        (const wchar_t **)&v13,
        (const WCHAR **)&v12);
    }
  }
}
