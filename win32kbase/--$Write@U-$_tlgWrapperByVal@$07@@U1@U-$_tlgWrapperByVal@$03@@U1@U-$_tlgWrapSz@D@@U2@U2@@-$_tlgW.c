/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@44@Z @ 0x1C01D1F08
 * Callers:
 *     rimSignalReadComplete @ 0x1C0003CE8 (rimSignalReadComplete.c)
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x1C00F3430 (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void **a9,
        __int64 a10,
        __int64 a11)
{
  _BYTE *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-81h] BYREF
  __int64 v17; // [rsp+50h] [rbp-61h]
  __int64 v18; // [rsp+58h] [rbp-59h]
  __int64 v19; // [rsp+60h] [rbp-51h]
  __int64 v20; // [rsp+68h] [rbp-49h]
  __int64 v21; // [rsp+70h] [rbp-41h]
  __int64 v22; // [rsp+78h] [rbp-39h]
  __int64 v23; // [rsp+80h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-29h]
  _BYTE *v25; // [rsp+90h] [rbp-21h]
  int v26; // [rsp+98h] [rbp-19h]
  int v27; // [rsp+9Ch] [rbp-15h]
  __int64 v28; // [rsp+A0h] [rbp-11h]
  __int64 v29; // [rsp+A8h] [rbp-9h]
  __int64 v30; // [rsp+B0h] [rbp-1h]
  __int64 v31; // [rsp+B8h] [rbp+7h]

  v30 = a11;
  v28 = a10;
  v31 = 4LL;
  v29 = 4LL;
  v12 = *a9;
  if ( *a9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &unk_1C02A2108;
    v14 = 1;
  }
  v26 = v14;
  v23 = a8;
  v21 = a7;
  v19 = a6;
  v17 = a5;
  v25 = v12;
  v27 = 0;
  v24 = 8LL;
  v22 = 4LL;
  v20 = 8LL;
  v18 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v16);
}
