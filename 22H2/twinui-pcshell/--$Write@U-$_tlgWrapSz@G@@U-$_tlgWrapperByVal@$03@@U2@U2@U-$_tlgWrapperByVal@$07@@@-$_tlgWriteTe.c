/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1802BA578
 * Callers:
 *     ??$FullScreenEntered@PEBGIAEAMAEAM@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAM2@Z @ 0x1802B9A48 (--$FullScreenEntered@PEBGIAEAMAEAM@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAM2@Z.c)
 *     ??$RaiseSizePreferencesChanged@PEBGIAEAMAEAM@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAM2@Z @ 0x1802BA23C (--$RaiseSizePreferencesChanged@PEBGIAEAMAEAM@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEA.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  const WCHAR *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-51h] BYREF
  const WCHAR *v16; // [rsp+50h] [rbp-31h]
  int v17; // [rsp+58h] [rbp-29h]
  int v18; // [rsp+5Ch] [rbp-25h]
  __int64 v19; // [rsp+60h] [rbp-21h]
  __int64 v20; // [rsp+68h] [rbp-19h]
  __int64 v21; // [rsp+70h] [rbp-11h]
  __int64 v22; // [rsp+78h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+7h]
  __int64 v25; // [rsp+90h] [rbp+Fh]
  __int64 v26; // [rsp+98h] [rbp+17h]

  v25 = a9;
  v23 = a8;
  v21 = a7;
  v19 = a6;
  v26 = 8LL;
  v24 = 4LL;
  v22 = 4LL;
  v11 = *a5;
  v20 = 4LL;
  if ( v11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &szAgent;
    v13 = 2;
  }
  v16 = v11;
  v17 = v13;
  v18 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 7u, &v15);
}
