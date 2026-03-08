/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1802284A8
 * Callers:
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180228D04 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const char **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  const char *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-69h] BYREF
  __int64 v15; // [rsp+50h] [rbp-49h]
  __int64 v16; // [rsp+58h] [rbp-41h]
  __int64 v17; // [rsp+60h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-31h]
  const char *v19; // [rsp+70h] [rbp-29h]
  int v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+7Ch] [rbp-1Dh]
  __int64 v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  __int64 v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  __int64 v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]

  v26 = a10;
  v24 = a9;
  v22 = a8;
  v27 = 4LL;
  v25 = 8LL;
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
    v10 = word_180338FC0;
    v12 = 1;
  }
  v20 = v12;
  v17 = a6;
  v15 = a5;
  v19 = v10;
  v21 = 0;
  v18 = 4LL;
  v16 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 8u, &v14);
}
