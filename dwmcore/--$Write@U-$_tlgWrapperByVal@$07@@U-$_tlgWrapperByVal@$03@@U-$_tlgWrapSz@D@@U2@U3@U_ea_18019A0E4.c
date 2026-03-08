/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18019A0E4
 * Callers:
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18019D894 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const char **a7,
        __int64 a8,
        const char **a9,
        __int64 a10,
        wchar_t **a11,
        __int64 a12,
        const char **a13,
        __int64 a14,
        const char **a15,
        wchar_t **a16,
        __int64 a17,
        const char **a18,
        wchar_t **a19,
        __int64 a20,
        __int64 a21,
        const char **a22)
{
  __int64 v23; // rdx
  const char *v24; // r8
  __int64 v25; // rax
  int v26; // eax
  int v27; // r10d
  wchar_t *v28; // r8
  __int64 v29; // rax
  int v30; // r9d
  const char *v31; // r8
  __int64 v32; // rax
  int v33; // eax
  wchar_t *v34; // r8
  __int64 v35; // rax
  int v36; // r9d
  const char *v37; // r8
  __int64 v38; // rax
  int v39; // eax
  const char *v40; // r8
  __int64 v41; // rax
  int v42; // eax
  wchar_t *v43; // r8
  __int64 v44; // rax
  const char *v45; // r8
  __int64 v46; // rax
  int v47; // eax
  const char *v48; // r8
  int v49; // edx
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  const char *v56; // [rsp+70h] [rbp-90h]
  int v57; // [rsp+78h] [rbp-88h]
  int v58; // [rsp+7Ch] [rbp-84h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  __int64 v60; // [rsp+88h] [rbp-78h]
  const char *v61; // [rsp+90h] [rbp-70h]
  int v62; // [rsp+98h] [rbp-68h]
  int v63; // [rsp+9Ch] [rbp-64h]
  __int64 v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  wchar_t *v66; // [rsp+B0h] [rbp-50h]
  int v67; // [rsp+B8h] [rbp-48h]
  int v68; // [rsp+BCh] [rbp-44h]
  __int64 v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C8h] [rbp-38h]
  const char *v71; // [rsp+D0h] [rbp-30h]
  int v72; // [rsp+D8h] [rbp-28h]
  int v73; // [rsp+DCh] [rbp-24h]
  __int64 v74; // [rsp+E0h] [rbp-20h]
  __int64 v75; // [rsp+E8h] [rbp-18h]
  const char *v76; // [rsp+F0h] [rbp-10h]
  int v77; // [rsp+F8h] [rbp-8h]
  int v78; // [rsp+FCh] [rbp-4h]
  wchar_t *v79; // [rsp+100h] [rbp+0h]
  int v80; // [rsp+108h] [rbp+8h]
  int v81; // [rsp+10Ch] [rbp+Ch]
  __int64 v82; // [rsp+110h] [rbp+10h]
  __int64 v83; // [rsp+118h] [rbp+18h]
  const char *v84; // [rsp+120h] [rbp+20h]
  int v85; // [rsp+128h] [rbp+28h]
  int v86; // [rsp+12Ch] [rbp+2Ch]
  wchar_t *v87; // [rsp+130h] [rbp+30h]
  int v88; // [rsp+138h] [rbp+38h]
  int v89; // [rsp+13Ch] [rbp+3Ch]
  __int64 v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+148h] [rbp+48h]
  __int64 v92; // [rsp+150h] [rbp+50h]
  __int64 v93; // [rsp+158h] [rbp+58h]
  const char *v94; // [rsp+160h] [rbp+60h]
  int v95; // [rsp+168h] [rbp+68h]
  int v96; // [rsp+16Ch] [rbp+6Ch]

  v23 = -1LL;
  v24 = *a22;
  if ( *a22 )
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
  v95 = v26;
  v27 = 2;
  v92 = a21;
  v90 = a20;
  v94 = v24;
  v96 = 0;
  v93 = 4LL;
  v28 = *a19;
  v91 = 4LL;
  if ( v28 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = word_1803392B0;
    v30 = 2;
  }
  v87 = v28;
  v88 = v30;
  v89 = 0;
  v31 = *a18;
  if ( *a18 )
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
  v85 = v33;
  v82 = a17;
  v84 = v31;
  v86 = 0;
  v83 = 4LL;
  v34 = *a16;
  if ( *a16 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v34 = word_1803392B0;
    v36 = 2;
  }
  v79 = v34;
  v80 = v36;
  v81 = 0;
  v37 = *a15;
  if ( *a15 )
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
  v77 = v39;
  v74 = a14;
  v76 = v37;
  v78 = 0;
  v75 = 4LL;
  v40 = *a13;
  if ( *a13 )
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
  v72 = v42;
  v69 = a12;
  v71 = v40;
  v73 = 0;
  v70 = 4LL;
  v43 = *a11;
  if ( *a11 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v27 = 2 * v44 + 2;
  }
  else
  {
    v43 = word_1803392B0;
  }
  v64 = a10;
  v66 = v43;
  v67 = v27;
  v68 = 0;
  v45 = *a9;
  v65 = 4LL;
  if ( v45 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( v45[v46] );
    v47 = v46 + 1;
  }
  else
  {
    v45 = word_180338FC0;
    v47 = 1;
  }
  v62 = v47;
  v59 = a8;
  v61 = v45;
  v63 = 0;
  v60 = 4LL;
  v48 = *a7;
  if ( *a7 )
  {
    do
      ++v23;
    while ( v48[v23] );
    v49 = v23 + 1;
  }
  else
  {
    v48 = word_180338FC0;
    v49 = 1;
  }
  v54 = a6;
  v52 = a5;
  v56 = v48;
  v57 = v49;
  v58 = 0;
  v55 = 4LL;
  v53 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x14u, &v51);
}
