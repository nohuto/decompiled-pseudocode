/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapSz@G@@@Z @ 0x1C0213BE8
 * Callers:
 *     ?LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z @ 0x1C0085EE0 (-LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        const WCHAR **a10)
{
  const WCHAR *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-69h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h]
  __int64 v18; // [rsp+58h] [rbp-41h]
  __int64 v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-31h]
  __int64 v21; // [rsp+70h] [rbp-29h]
  __int64 v22; // [rsp+78h] [rbp-21h]
  __int64 v23; // [rsp+80h] [rbp-19h]
  __int64 v24; // [rsp+88h] [rbp-11h]
  __int64 v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h]
  const WCHAR *v27; // [rsp+A0h] [rbp+7h]
  int v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+ACh] [rbp+13h]

  v12 = *a10;
  if ( *a10 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &word_1C02856D8;
    v14 = 2;
  }
  v25 = a9;
  v23 = a8;
  v21 = a7;
  v19 = a6;
  v17 = a5;
  v27 = v12;
  v28 = v14;
  v29 = 0;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 4LL;
  v18 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 8u, &v16);
}
