/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180228BF4
 * Callers:
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180228D04 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const char **a7,
        __int64 a8,
        __int64 a9,
        wchar_t **a10)
{
  __int64 v11; // rcx
  wchar_t *v12; // rdx
  __int64 v13; // rax
  int v14; // r8d
  const char *v15; // rdx
  int v16; // ecx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-69h] BYREF
  __int64 v19; // [rsp+50h] [rbp-49h]
  __int64 v20; // [rsp+58h] [rbp-41h]
  __int64 v21; // [rsp+60h] [rbp-39h]
  __int64 v22; // [rsp+68h] [rbp-31h]
  const char *v23; // [rsp+70h] [rbp-29h]
  int v24; // [rsp+78h] [rbp-21h]
  int v25; // [rsp+7Ch] [rbp-1Dh]
  __int64 v26; // [rsp+80h] [rbp-19h]
  __int64 v27; // [rsp+88h] [rbp-11h]
  __int64 v28; // [rsp+90h] [rbp-9h]
  __int64 v29; // [rsp+98h] [rbp-1h]
  wchar_t *v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A8h] [rbp+Fh]
  int v32; // [rsp+ACh] [rbp+13h]

  v11 = -1LL;
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
    v12 = word_1803392B0;
    v14 = 2;
  }
  v28 = a9;
  v26 = a8;
  v30 = v12;
  v31 = v14;
  v32 = 0;
  v15 = *a7;
  v29 = 8LL;
  v27 = 4LL;
  if ( v15 )
  {
    do
      ++v11;
    while ( v15[v11] );
    v16 = v11 + 1;
  }
  else
  {
    v15 = word_180338FC0;
    v16 = 1;
  }
  v21 = a6;
  v19 = a5;
  v23 = v15;
  v24 = v16;
  v25 = 0;
  v22 = 4LL;
  v20 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 8u, &v18);
}
