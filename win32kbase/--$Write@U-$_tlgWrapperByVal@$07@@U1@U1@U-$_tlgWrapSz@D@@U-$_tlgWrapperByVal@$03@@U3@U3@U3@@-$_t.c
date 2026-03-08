/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1C00F07D6
 * Callers:
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C00F0A58 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  _BYTE *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-99h] BYREF
  __int64 v18; // [rsp+50h] [rbp-79h]
  __int64 v19; // [rsp+58h] [rbp-71h]
  __int64 v20; // [rsp+60h] [rbp-69h]
  __int64 v21; // [rsp+68h] [rbp-61h]
  __int64 v22; // [rsp+70h] [rbp-59h]
  __int64 v23; // [rsp+78h] [rbp-51h]
  _BYTE *v24; // [rsp+80h] [rbp-49h]
  int v25; // [rsp+88h] [rbp-41h]
  int v26; // [rsp+8Ch] [rbp-3Dh]
  __int64 v27; // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  __int64 v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  __int64 v31; // [rsp+B0h] [rbp-19h]
  __int64 v32; // [rsp+B8h] [rbp-11h]
  __int64 v33; // [rsp+C0h] [rbp-9h]
  __int64 v34; // [rsp+C8h] [rbp-1h]

  v33 = a12;
  v31 = a11;
  v29 = a10;
  v27 = a9;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 4LL;
  v13 = *a8;
  v28 = 4LL;
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_1C02A2108;
    v15 = 1;
  }
  v25 = v15;
  v22 = a7;
  v20 = a6;
  v18 = a5;
  v24 = v13;
  v26 = 0;
  v23 = 8LL;
  v21 = 8LL;
  v19 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0xAu, &v17);
}
