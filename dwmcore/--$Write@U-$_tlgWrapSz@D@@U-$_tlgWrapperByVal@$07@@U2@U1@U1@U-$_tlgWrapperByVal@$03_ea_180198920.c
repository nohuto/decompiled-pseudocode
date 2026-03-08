/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554355@Z @ 0x180198920
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180035EC0 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a19,
        __int64 a20)
{
  __int64 v21; // rcx
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
  int v32; // ecx
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+30h] [rbp-D0h] BYREF
  const char *v35; // [rsp+50h] [rbp-B0h]
  int v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+5Ch] [rbp-A4h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  const char *v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  const char *v45; // [rsp+90h] [rbp-70h]
  int v46; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+9Ch] [rbp-64h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  __int64 v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  __int64 v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  __int64 v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  __int64 v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  __int64 v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  __int64 v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  __int64 v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  const char *v64; // [rsp+120h] [rbp+20h]
  int v65; // [rsp+128h] [rbp+28h]
  int v66; // [rsp+12Ch] [rbp+2Ch]
  __int64 v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  __int64 v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]

  v69 = a20;
  v21 = -1LL;
  v67 = a19;
  v70 = 4LL;
  v68 = 4LL;
  v22 = *a18;
  if ( *a18 )
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
  v65 = v24;
  v62 = a17;
  v60 = a16;
  v58 = a15;
  v56 = a14;
  v54 = a13;
  v52 = a12;
  v50 = a11;
  v48 = a10;
  v64 = v22;
  v66 = 0;
  v63 = 8LL;
  v25 = *a9;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 4LL;
  v53 = 4LL;
  v51 = 8LL;
  v49 = 4LL;
  if ( v25 )
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
  v46 = v27;
  v45 = v25;
  v47 = 0;
  v28 = *a8;
  if ( *a8 )
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
  v43 = v30;
  v40 = a7;
  v38 = a6;
  v42 = v28;
  v44 = 0;
  v41 = 8LL;
  v31 = *a5;
  v39 = 8LL;
  if ( v31 )
  {
    do
      ++v21;
    while ( v31[v21] );
    v32 = v21 + 1;
  }
  else
  {
    v31 = word_180338FC0;
    v32 = 1;
  }
  v35 = v31;
  v36 = v32;
  v37 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x12u, &v34);
}
