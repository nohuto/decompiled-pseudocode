/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@44@Z @ 0x1C0001714
 * Callers:
 *     ?UnsuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C00DF55C (-UnsuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C01DDCC4 (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        __int64 a9)
{
  _BYTE *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-51h] BYREF
  __int64 v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h]
  __int64 v17; // [rsp+60h] [rbp-21h]
  __int64 v18; // [rsp+68h] [rbp-19h]
  _BYTE *v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+78h] [rbp-9h]
  int v21; // [rsp+7Ch] [rbp-5h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  __int64 v25; // [rsp+98h] [rbp+17h]

  v24 = a9;
  v22 = a8;
  v25 = 4LL;
  v23 = 4LL;
  v10 = *a7;
  if ( *a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v10 = &unk_1C02A2108;
    v12 = 1;
  }
  v20 = v12;
  v17 = a6;
  v15 = a5;
  v19 = v10;
  v21 = 0;
  v18 = 4LL;
  v16 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 7u, &v14);
}
