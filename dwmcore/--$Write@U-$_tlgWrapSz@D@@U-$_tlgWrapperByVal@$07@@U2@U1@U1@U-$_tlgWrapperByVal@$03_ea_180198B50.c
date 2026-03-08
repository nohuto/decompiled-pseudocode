/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@45555543AEBU?$_tlgWrapperByVal@$00@@3333333@Z @ 0x180198B50
 * Callers:
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18019EB2C (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
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
        const char **a20,
        const char **a21,
        const char **a22,
        const char **a23,
        const char **a24,
        const char **a25,
        const char **a26)
{
  __int64 v27; // rdx
  const char *v28; // r8
  __int64 v29; // rax
  int v30; // eax
  const char *v31; // r8
  __int64 v32; // rax
  int v33; // eax
  const char *v34; // r8
  __int64 v35; // rax
  int v36; // eax
  const char *v37; // r8
  __int64 v38; // rax
  int v39; // eax
  const char *v40; // r8
  __int64 v41; // rax
  int v42; // eax
  const char *v43; // r8
  __int64 v44; // rax
  int v45; // eax
  const char *v46; // r8
  __int64 v47; // rax
  int v48; // eax
  const char *v49; // r8
  __int64 v50; // rax
  int v51; // eax
  const char *v52; // r8
  __int64 v53; // rax
  int v54; // eax
  const char *v55; // r8
  __int64 v56; // rax
  int v57; // eax
  const char *v58; // r8
  int v59; // edx
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+30h] [rbp-D0h] BYREF
  const char *v62; // [rsp+50h] [rbp-B0h]
  int v63; // [rsp+58h] [rbp-A8h]
  int v64; // [rsp+5Ch] [rbp-A4h]
  __int64 v65; // [rsp+60h] [rbp-A0h]
  __int64 v66; // [rsp+68h] [rbp-98h]
  __int64 v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+78h] [rbp-88h]
  const char *v69; // [rsp+80h] [rbp-80h]
  int v70; // [rsp+88h] [rbp-78h]
  int v71; // [rsp+8Ch] [rbp-74h]
  const char *v72; // [rsp+90h] [rbp-70h]
  int v73; // [rsp+98h] [rbp-68h]
  int v74; // [rsp+9Ch] [rbp-64h]
  __int64 v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h]
  __int64 v77; // [rsp+B0h] [rbp-50h]
  __int64 v78; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C0h] [rbp-40h]
  __int64 v80; // [rsp+C8h] [rbp-38h]
  __int64 v81; // [rsp+D0h] [rbp-30h]
  __int64 v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+E8h] [rbp-18h]
  __int64 v85; // [rsp+F0h] [rbp-10h]
  __int64 v86; // [rsp+F8h] [rbp-8h]
  __int64 v87; // [rsp+100h] [rbp+0h]
  __int64 v88; // [rsp+108h] [rbp+8h]
  __int64 v89; // [rsp+110h] [rbp+10h]
  __int64 v90; // [rsp+118h] [rbp+18h]
  const char *v91; // [rsp+120h] [rbp+20h]
  int v92; // [rsp+128h] [rbp+28h]
  int v93; // [rsp+12Ch] [rbp+2Ch]
  __int64 v94; // [rsp+130h] [rbp+30h]
  __int64 v95; // [rsp+138h] [rbp+38h]
  const char *v96; // [rsp+140h] [rbp+40h]
  int v97; // [rsp+148h] [rbp+48h]
  int v98; // [rsp+14Ch] [rbp+4Ch]
  const char *v99; // [rsp+150h] [rbp+50h]
  int v100; // [rsp+158h] [rbp+58h]
  int v101; // [rsp+15Ch] [rbp+5Ch]
  const char *v102; // [rsp+160h] [rbp+60h]
  int v103; // [rsp+168h] [rbp+68h]
  int v104; // [rsp+16Ch] [rbp+6Ch]
  const char *v105; // [rsp+170h] [rbp+70h]
  int v106; // [rsp+178h] [rbp+78h]
  int v107; // [rsp+17Ch] [rbp+7Ch]
  const char *v108; // [rsp+180h] [rbp+80h]
  int v109; // [rsp+188h] [rbp+88h]
  int v110; // [rsp+18Ch] [rbp+8Ch]
  const char *v111; // [rsp+190h] [rbp+90h]
  int v112; // [rsp+198h] [rbp+98h]
  int v113; // [rsp+19Ch] [rbp+9Ch]
  const char *v114; // [rsp+1A0h] [rbp+A0h]
  int v115; // [rsp+1A8h] [rbp+A8h]
  int v116; // [rsp+1ACh] [rbp+ACh]

  v27 = -1LL;
  v28 = *a26;
  if ( *a26 )
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
  v115 = v30;
  v114 = v28;
  v116 = 0;
  v31 = *a25;
  if ( *a25 )
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
  v112 = v33;
  v111 = v31;
  v113 = 0;
  v34 = *a24;
  if ( *a24 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v34 = word_180338FC0;
    v36 = 1;
  }
  v109 = v36;
  v108 = v34;
  v110 = 0;
  v37 = *a23;
  if ( *a23 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v37 = word_180338FC0;
    v39 = 1;
  }
  v106 = v39;
  v105 = v37;
  v107 = 0;
  v40 = *a22;
  if ( *a22 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = v41 + 1;
  }
  else
  {
    v40 = word_180338FC0;
    v42 = 1;
  }
  v103 = v42;
  v102 = v40;
  v104 = 0;
  v43 = *a21;
  if ( *a21 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v45 = v44 + 1;
  }
  else
  {
    v43 = word_180338FC0;
    v45 = 1;
  }
  v100 = v45;
  v99 = v43;
  v101 = 0;
  v46 = *a20;
  if ( *a20 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v48 = v47 + 1;
  }
  else
  {
    v46 = word_180338FC0;
    v48 = 1;
  }
  v97 = v48;
  v94 = a19;
  v96 = v46;
  v98 = 0;
  v95 = 1LL;
  v49 = *a18;
  if ( *a18 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( v49[v50] );
    v51 = v50 + 1;
  }
  else
  {
    v49 = word_180338FC0;
    v51 = 1;
  }
  v92 = v51;
  v89 = a17;
  v87 = a16;
  v85 = a15;
  v83 = a14;
  v81 = a13;
  v79 = a12;
  v77 = a11;
  v75 = a10;
  v91 = v49;
  v93 = 0;
  v90 = 8LL;
  v52 = *a9;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 8LL;
  v76 = 4LL;
  if ( v52 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( v52[v53] );
    v54 = v53 + 1;
  }
  else
  {
    v52 = word_180338FC0;
    v54 = 1;
  }
  v73 = v54;
  v72 = v52;
  v74 = 0;
  v55 = *a8;
  if ( *a8 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( v55[v56] );
    v57 = v56 + 1;
  }
  else
  {
    v55 = word_180338FC0;
    v57 = 1;
  }
  v70 = v57;
  v67 = a7;
  v65 = a6;
  v69 = v55;
  v71 = 0;
  v68 = 8LL;
  v58 = *a5;
  v66 = 8LL;
  if ( v58 )
  {
    do
      ++v27;
    while ( v58[v27] );
    v59 = v27 + 1;
  }
  else
  {
    v58 = word_180338FC0;
    v59 = 1;
  }
  v62 = v58;
  v63 = v59;
  v64 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x18u, &v61);
}
