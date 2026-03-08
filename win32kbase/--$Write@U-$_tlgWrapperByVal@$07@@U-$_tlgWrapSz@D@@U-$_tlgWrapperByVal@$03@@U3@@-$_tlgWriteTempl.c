/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C01C0B14
 * Callers:
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0004188 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 a7,
        __int64 a8)
{
  _BYTE *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+58h] [rbp-11h]
  _BYTE *v16; // [rsp+60h] [rbp-9h]
  int v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+6Ch] [rbp+3h]
  __int64 v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  __int64 v21; // [rsp+80h] [rbp+17h]
  __int64 v22; // [rsp+88h] [rbp+1Fh]

  v21 = a8;
  v19 = a7;
  v22 = 4LL;
  v20 = 4LL;
  v9 = *a6;
  if ( *a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v9 = &unk_1C02A2108;
    v11 = 1;
  }
  v17 = v11;
  v14 = a5;
  v16 = v9;
  v18 = 0;
  v15 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 6u, &v13);
}
