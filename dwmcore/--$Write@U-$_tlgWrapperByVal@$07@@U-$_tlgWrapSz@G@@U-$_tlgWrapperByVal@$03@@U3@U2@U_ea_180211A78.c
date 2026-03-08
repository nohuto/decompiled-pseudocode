/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U2@U2@U2@U2@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@544445555555555555555@Z @ 0x180211A78
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x180212430 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        wchar_t **a6,
        __int64 a7,
        __int64 a8,
        wchar_t **a9,
        wchar_t **a10,
        wchar_t **a11,
        wchar_t **a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28)
{
  __int64 v28; // rcx
  int v30; // edx
  wchar_t *v31; // r8
  __int64 v32; // rax
  int v33; // r9d
  wchar_t *v34; // r8
  __int64 v35; // rax
  int v36; // r9d
  wchar_t *v37; // r8
  __int64 v38; // rax
  int v39; // r9d
  wchar_t *v40; // r8
  __int64 v41; // rax
  int v42; // r9d
  wchar_t *v43; // r8
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  wchar_t *v48; // [rsp+60h] [rbp-A0h]
  int v49; // [rsp+68h] [rbp-98h]
  int v50; // [rsp+6Ch] [rbp-94h]
  __int64 v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  wchar_t *v55; // [rsp+90h] [rbp-70h]
  int v56; // [rsp+98h] [rbp-68h]
  int v57; // [rsp+9Ch] [rbp-64h]
  wchar_t *v58; // [rsp+A0h] [rbp-60h]
  int v59; // [rsp+A8h] [rbp-58h]
  int v60; // [rsp+ACh] [rbp-54h]
  wchar_t *v61; // [rsp+B0h] [rbp-50h]
  int v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+BCh] [rbp-44h]
  wchar_t *v64; // [rsp+C0h] [rbp-40h]
  int v65; // [rsp+C8h] [rbp-38h]
  int v66; // [rsp+CCh] [rbp-34h]
  __int64 v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  __int64 v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  __int64 v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  __int64 v75; // [rsp+110h] [rbp+10h]
  __int64 v76; // [rsp+118h] [rbp+18h]
  __int64 v77; // [rsp+120h] [rbp+20h]
  __int64 v78; // [rsp+128h] [rbp+28h]
  __int64 v79; // [rsp+130h] [rbp+30h]
  __int64 v80; // [rsp+138h] [rbp+38h]
  __int64 v81; // [rsp+140h] [rbp+40h]
  __int64 v82; // [rsp+148h] [rbp+48h]
  __int64 v83; // [rsp+150h] [rbp+50h]
  __int64 v84; // [rsp+158h] [rbp+58h]
  __int64 v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  __int64 v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  __int64 v89; // [rsp+180h] [rbp+80h]
  __int64 v90; // [rsp+188h] [rbp+88h]
  __int64 v91; // [rsp+190h] [rbp+90h]
  __int64 v92; // [rsp+198h] [rbp+98h]
  __int64 v93; // [rsp+1A0h] [rbp+A0h]
  __int64 v94; // [rsp+1A8h] [rbp+A8h]
  __int64 v95; // [rsp+1B0h] [rbp+B0h]
  __int64 v96; // [rsp+1B8h] [rbp+B8h]
  __int64 v97; // [rsp+1C0h] [rbp+C0h]
  __int64 v98; // [rsp+1C8h] [rbp+C8h]

  v97 = a28;
  v28 = -1LL;
  v95 = a27;
  v93 = a26;
  v30 = 2;
  v91 = a25;
  v89 = a24;
  v87 = a23;
  v85 = a22;
  v83 = a21;
  v81 = a20;
  v79 = a19;
  v77 = a18;
  v75 = a17;
  v73 = a16;
  v71 = a15;
  v69 = a14;
  v67 = a13;
  v98 = 4LL;
  v96 = 4LL;
  v94 = 4LL;
  v31 = *a12;
  v92 = 4LL;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 4LL;
  v74 = 4LL;
  v72 = 4LL;
  v70 = 4LL;
  v68 = 4LL;
  if ( v31 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v31 = word_1803392B0;
    v33 = 2;
  }
  v64 = v31;
  v65 = v33;
  v66 = 0;
  v34 = *a11;
  if ( *a11 )
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
  v61 = v34;
  v62 = v36;
  v63 = 0;
  v37 = *a10;
  if ( *a10 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v37 = word_1803392B0;
    v39 = 2;
  }
  v58 = v37;
  v59 = v39;
  v60 = 0;
  v40 = *a9;
  if ( *a9 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v40 = word_1803392B0;
    v42 = 2;
  }
  v53 = a8;
  v51 = a7;
  v55 = v40;
  v56 = v42;
  v57 = 0;
  v43 = *a6;
  v54 = 4LL;
  v52 = 4LL;
  if ( v43 )
  {
    do
      ++v28;
    while ( v43[v28] );
    v30 = 2 * v28 + 2;
  }
  else
  {
    v43 = word_1803392B0;
  }
  v46 = a5;
  v48 = v43;
  v49 = v30;
  v50 = 0;
  v47 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 0x1Au, &v45);
}
