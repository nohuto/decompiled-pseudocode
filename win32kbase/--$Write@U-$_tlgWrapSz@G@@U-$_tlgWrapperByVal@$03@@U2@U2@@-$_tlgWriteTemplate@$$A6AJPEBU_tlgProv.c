/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1C0005758
 * Callers:
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C000683C (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-39h] BYREF
  const WCHAR *v14; // [rsp+50h] [rbp-19h]
  int v15; // [rsp+58h] [rbp-11h]
  int v16; // [rsp+5Ch] [rbp-Dh]
  __int64 v17; // [rsp+60h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  __int64 v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  __int64 v21; // [rsp+80h] [rbp+17h]
  __int64 v22; // [rsp+88h] [rbp+1Fh]

  v21 = a8;
  v19 = a7;
  v17 = a6;
  v22 = 4LL;
  v20 = 4LL;
  v18 = 4LL;
  v9 = *a5;
  if ( *a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &word_1C02856D8;
    v11 = 2;
  }
  v14 = v9;
  v15 = v11;
  v16 = 0;
  return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02C93D8, a2, 0, 0, 6u, &v13);
}
