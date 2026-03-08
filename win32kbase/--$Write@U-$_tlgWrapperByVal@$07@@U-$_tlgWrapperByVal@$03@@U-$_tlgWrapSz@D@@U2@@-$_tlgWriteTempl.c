/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4@Z @ 0x1C02727FC
 * Callers:
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0272BF0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8)
{
  _BYTE *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+50h] [rbp-19h]
  __int64 v14; // [rsp+58h] [rbp-11h]
  __int64 v15; // [rsp+60h] [rbp-9h]
  __int64 v16; // [rsp+68h] [rbp-1h]
  _BYTE *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  __int64 v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+1Fh]

  v20 = a8;
  v21 = 4LL;
  v8 = *a7;
  if ( *a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v8 = &unk_1C02A2108;
    v10 = 1;
  }
  v18 = v10;
  v15 = a6;
  v13 = a5;
  v17 = v8;
  v19 = 0;
  v16 = 4LL;
  v14 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C93D8, a2, 0LL, 0LL, 6u, &v12);
}
