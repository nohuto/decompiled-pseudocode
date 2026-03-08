/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554335@Z @ 0x180197BD4
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180035EC0 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
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
        const char **a18,
        const char **a19,
        __int64 a20)
{
  __int64 v21; // rdx
  const char *v22; // r8
  __int64 v23; // rax
  int v24; // eax
  const char *v25; // r8
  __int64 v26; // rax
  int v27; // eax
  const char *v28; // r8
  __int64 v29; // rax
  int v30; // eax
  const char *v31; // r8
  __int64 v32; // rax
  int v33; // eax
  const char *v34; // r8
  int v35; // edx
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+30h] [rbp-D0h] BYREF
  const char *v38; // [rsp+50h] [rbp-B0h]
  int v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+5Ch] [rbp-A4h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h]
  const char *v45; // [rsp+80h] [rbp-80h]
  int v46; // [rsp+88h] [rbp-78h]
  int v47; // [rsp+8Ch] [rbp-74h]
  const char *v48; // [rsp+90h] [rbp-70h]
  int v49; // [rsp+98h] [rbp-68h]
  int v50; // [rsp+9Ch] [rbp-64h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int64 v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  __int64 v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  __int64 v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  const char *v67; // [rsp+120h] [rbp+20h]
  int v68; // [rsp+128h] [rbp+28h]
  int v69; // [rsp+12Ch] [rbp+2Ch]
  const char *v70; // [rsp+130h] [rbp+30h]
  int v71; // [rsp+138h] [rbp+38h]
  int v72; // [rsp+13Ch] [rbp+3Ch]
  __int64 v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]

  v73 = a20;
  v21 = -1LL;
  v74 = 4LL;
  v22 = *a19;
  if ( *a19 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v22 = word_180338FC0;
    v24 = 1;
  }
  v71 = v24;
  v70 = v22;
  v72 = 0;
  v25 = *a18;
  if ( *a18 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v25 = word_180338FC0;
    v27 = 1;
  }
  v68 = v27;
  v65 = a17;
  v63 = a16;
  v61 = a15;
  v59 = a14;
  v57 = a13;
  v55 = a12;
  v53 = a11;
  v51 = a10;
  v67 = v25;
  v69 = 0;
  v66 = 8LL;
  v28 = *a9;
  v64 = 4LL;
  v62 = 4LL;
  v60 = 4LL;
  v58 = 4LL;
  v56 = 4LL;
  v54 = 8LL;
  v52 = 4LL;
  if ( v28 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v28 = word_180338FC0;
    v30 = 1;
  }
  v49 = v30;
  v48 = v28;
  v50 = 0;
  v31 = *a8;
  if ( *a8 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v31 = word_180338FC0;
    v33 = 1;
  }
  v46 = v33;
  v43 = a7;
  v41 = a6;
  v45 = v31;
  v47 = 0;
  v44 = 8LL;
  v34 = *a5;
  v42 = 8LL;
  if ( v34 )
  {
    do
      ++v21;
    while ( v34[v21] );
    v35 = v21 + 1;
  }
  else
  {
    v34 = word_180338FC0;
    v35 = 1;
  }
  v38 = v34;
  v39 = v35;
  v40 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x12u, &v37);
}
