/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U3@U3@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554554AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801990B4
 * Callers:
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18019F074 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
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
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21)
{
  __int64 v23; // rcx
  const char *v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  const char *v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  const char *v30; // rdx
  int v31; // ecx
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+30h] [rbp-D0h] BYREF
  const char *v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+58h] [rbp-A8h]
  int v36; // [rsp+5Ch] [rbp-A4h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  const char *v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+8Ch] [rbp-74h]
  const char *v44; // [rsp+90h] [rbp-70h]
  int v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+9Ch] [rbp-64h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  __int64 v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  __int64 v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  __int64 v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  __int64 v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  __int64 v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  __int64 v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  __int64 v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  __int64 v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  __int64 v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]

  v69 = a21;
  v67 = a20;
  v23 = -1LL;
  v65 = a19;
  v63 = a18;
  v61 = a17;
  v59 = a16;
  v57 = a15;
  v55 = a14;
  v53 = a13;
  v51 = a12;
  v49 = a11;
  v47 = a10;
  v70 = 1LL;
  v68 = 8LL;
  v66 = 4LL;
  v24 = *a9;
  v64 = 4LL;
  v62 = 8LL;
  v60 = 4LL;
  v58 = 4LL;
  v56 = 4LL;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 8LL;
  v48 = 4LL;
  if ( v24 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v24 = word_180338FC0;
    v26 = 1;
  }
  v45 = v26;
  v44 = v24;
  v46 = 0;
  v27 = *a8;
  if ( *a8 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v27 = word_180338FC0;
    v29 = 1;
  }
  v42 = v29;
  v39 = a7;
  v37 = a6;
  v41 = v27;
  v43 = 0;
  v40 = 8LL;
  v30 = *a5;
  v38 = 8LL;
  if ( v30 )
  {
    do
      ++v23;
    while ( v30[v23] );
    v31 = v23 + 1;
  }
  else
  {
    v30 = word_180338FC0;
    v31 = 1;
  }
  v34 = v30;
  v35 = v31;
  v36 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x13u, &v33);
}
