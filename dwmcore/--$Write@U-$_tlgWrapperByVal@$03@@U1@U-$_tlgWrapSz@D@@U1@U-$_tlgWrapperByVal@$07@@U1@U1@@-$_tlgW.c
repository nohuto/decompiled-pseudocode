/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180228584
 * Callers:
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180228D04 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const char **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  const char *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-81h] BYREF
  __int64 v16; // [rsp+50h] [rbp-61h]
  __int64 v17; // [rsp+58h] [rbp-59h]
  __int64 v18; // [rsp+60h] [rbp-51h]
  __int64 v19; // [rsp+68h] [rbp-49h]
  const char *v20; // [rsp+70h] [rbp-41h]
  int v21; // [rsp+78h] [rbp-39h]
  int v22; // [rsp+7Ch] [rbp-35h]
  __int64 v23; // [rsp+80h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-29h]
  __int64 v25; // [rsp+90h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-19h]
  __int64 v27; // [rsp+A0h] [rbp-11h]
  __int64 v28; // [rsp+A8h] [rbp-9h]
  __int64 v29; // [rsp+B0h] [rbp-1h]
  __int64 v30; // [rsp+B8h] [rbp+7h]

  v29 = a11;
  v27 = a10;
  v25 = a9;
  v23 = a8;
  v30 = 4LL;
  v28 = 4LL;
  v26 = 8LL;
  v11 = *a7;
  v24 = 4LL;
  if ( v11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v11 = word_180338FC0;
    v13 = 1;
  }
  v21 = v13;
  v18 = a6;
  v16 = a5;
  v20 = v11;
  v22 = 0;
  v19 = 4LL;
  v17 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 9u, &v15);
}
