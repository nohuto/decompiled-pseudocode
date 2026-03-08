/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@333333@Z @ 0x180228888
 * Callers:
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180228D04 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  const char *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  const char *v24; // [rsp+70h] [rbp-90h]
  int v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+7Ch] [rbp-84h]
  __int64 v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  __int64 v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  __int64 v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  __int64 v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]

  v41 = a15;
  v39 = a14;
  v37 = a13;
  v35 = a12;
  v33 = a11;
  v31 = a10;
  v29 = a9;
  v27 = a8;
  v42 = 4LL;
  v40 = 4LL;
  v38 = 4LL;
  v15 = *a7;
  v36 = 4LL;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 8LL;
  v28 = 4LL;
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v15 = word_180338FC0;
    v17 = 1;
  }
  v25 = v17;
  v22 = a6;
  v20 = a5;
  v24 = v15;
  v26 = 0;
  v23 = 4LL;
  v21 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 0xDu, &v19);
}
