/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180199E2C
 * Callers:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18019D73C (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
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
        wchar_t **a19)
{
  __int64 v21; // rcx
  int v22; // r10d
  wchar_t *v23; // rdx
  __int64 v24; // rax
  int v25; // r8d
  const char *v26; // r8
  __int64 v27; // rax
  int v28; // eax
  wchar_t *v29; // r8
  __int64 v30; // rax
  int v31; // r9d
  const char *v32; // r8
  __int64 v33; // rax
  int v34; // eax
  const char *v35; // r8
  __int64 v36; // rax
  int v37; // eax
  wchar_t *v38; // r8
  __int64 v39; // rax
  const char *v40; // r8
  __int64 v41; // rax
  int v42; // eax
  const char *v43; // r8
  int v44; // ecx
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  __int64 v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  const char *v51; // [rsp+70h] [rbp-90h]
  int v52; // [rsp+78h] [rbp-88h]
  int v53; // [rsp+7Ch] [rbp-84h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  const char *v56; // [rsp+90h] [rbp-70h]
  int v57; // [rsp+98h] [rbp-68h]
  int v58; // [rsp+9Ch] [rbp-64h]
  __int64 v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  wchar_t *v61; // [rsp+B0h] [rbp-50h]
  int v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+BCh] [rbp-44h]
  __int64 v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  const char *v66; // [rsp+D0h] [rbp-30h]
  int v67; // [rsp+D8h] [rbp-28h]
  int v68; // [rsp+DCh] [rbp-24h]
  __int64 v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  const char *v71; // [rsp+F0h] [rbp-10h]
  int v72; // [rsp+F8h] [rbp-8h]
  int v73; // [rsp+FCh] [rbp-4h]
  wchar_t *v74; // [rsp+100h] [rbp+0h]
  int v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+10Ch] [rbp+Ch]
  __int64 v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  const char *v79; // [rsp+120h] [rbp+20h]
  int v80; // [rsp+128h] [rbp+28h]
  int v81; // [rsp+12Ch] [rbp+2Ch]
  wchar_t *v82; // [rsp+130h] [rbp+30h]
  int v83; // [rsp+138h] [rbp+38h]
  int v84; // [rsp+13Ch] [rbp+3Ch]

  v21 = -1LL;
  v22 = 2;
  v23 = *a19;
  if ( *a19 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v23 = word_1803392B0;
    v25 = 2;
  }
  v83 = v25;
  v82 = v23;
  v84 = 0;
  v26 = *a18;
  if ( *a18 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v26[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v26 = word_180338FC0;
    v28 = 1;
  }
  v80 = v28;
  v77 = a17;
  v79 = v26;
  v81 = 0;
  v78 = 4LL;
  v29 = *a16;
  if ( *a16 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v29 = word_1803392B0;
    v31 = 2;
  }
  v74 = v29;
  v75 = v31;
  v76 = 0;
  v32 = *a15;
  if ( *a15 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( v32[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v32 = word_180338FC0;
    v34 = 1;
  }
  v72 = v34;
  v69 = a14;
  v71 = v32;
  v73 = 0;
  v70 = 4LL;
  v35 = *a13;
  if ( *a13 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( v35[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v35 = word_180338FC0;
    v37 = 1;
  }
  v67 = v37;
  v64 = a12;
  v66 = v35;
  v68 = 0;
  v65 = 4LL;
  v38 = *a11;
  if ( *a11 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v22 = 2 * v39 + 2;
  }
  else
  {
    v38 = word_1803392B0;
  }
  v59 = a10;
  v61 = v38;
  v62 = v22;
  v63 = 0;
  v40 = *a9;
  v60 = 4LL;
  if ( v40 )
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
  v57 = v42;
  v54 = a8;
  v56 = v40;
  v58 = 0;
  v55 = 4LL;
  v43 = *a7;
  if ( *a7 )
  {
    do
      ++v21;
    while ( v43[v21] );
    v44 = v21 + 1;
  }
  else
  {
    v43 = word_180338FC0;
    v44 = 1;
  }
  v49 = a6;
  v47 = a5;
  v51 = v43;
  v52 = v44;
  v53 = 0;
  v50 = 4LL;
  v48 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x11u, &v46);
}
