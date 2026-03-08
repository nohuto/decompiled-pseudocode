/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@45555544@Z @ 0x180198ED0
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003263C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const char **a5,
        __int64 a6,
        __int64 a7,
        const char **a8,
        const char **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18)
{
  __int64 v19; // rcx
  const char *v20; // r8
  __int64 v21; // rax
  int v22; // eax
  const char *v23; // r8
  __int64 v24; // rax
  int v25; // eax
  const char *v26; // r8
  int v27; // ecx
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-D0h] BYREF
  const char *v30; // [rsp+50h] [rbp-B0h]
  int v31; // [rsp+58h] [rbp-A8h]
  int v32; // [rsp+5Ch] [rbp-A4h]
  __int64 v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  const char *v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+8Ch] [rbp-74h]
  const char *v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+9Ch] [rbp-64h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  __int64 v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  __int64 v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  __int64 v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  __int64 v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]

  v59 = a18;
  v19 = -1LL;
  v57 = a17;
  v55 = a16;
  v53 = a15;
  v51 = a14;
  v49 = a13;
  v47 = a12;
  v45 = a11;
  v43 = a10;
  v60 = 8LL;
  v58 = 8LL;
  v56 = 4LL;
  v20 = *a9;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 4LL;
  v46 = 8LL;
  v44 = 4LL;
  if ( v20 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v20 = word_180338FC0;
    v22 = 1;
  }
  v41 = v22;
  v40 = v20;
  v42 = 0;
  v23 = *a8;
  if ( *a8 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v23 = word_180338FC0;
    v25 = 1;
  }
  v38 = v25;
  v35 = a7;
  v33 = a6;
  v37 = v23;
  v39 = 0;
  v36 = 8LL;
  v26 = *a5;
  v34 = 8LL;
  if ( v26 )
  {
    do
      ++v19;
    while ( v26[v19] );
    v27 = v19 + 1;
  }
  else
  {
    v26 = word_180338FC0;
    v27 = 1;
  }
  v30 = v26;
  v31 = v27;
  v32 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x10u, &v29);
}
