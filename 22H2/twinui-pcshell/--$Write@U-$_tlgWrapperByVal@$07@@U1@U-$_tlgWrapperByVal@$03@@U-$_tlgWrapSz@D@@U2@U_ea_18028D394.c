/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18028D394
 * Callers:
 *     ?Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x18002BE80 (-Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const wchar_t **a8,
        __int64 a9,
        const wchar_t **a10,
        __int64 a11,
        const WCHAR **a12,
        __int64 a13,
        const wchar_t **a14,
        __int64 a15,
        const wchar_t **a16,
        const WCHAR **a17,
        __int64 a18,
        const wchar_t **a19,
        const WCHAR **a20,
        __int64 a21,
        __int64 a22,
        const wchar_t **a23,
        __int64 a24)
{
  __int64 v26; // rcx
  const wchar_t *v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  int v31; // r9d
  const WCHAR *v32; // rdx
  __int64 v33; // rax
  int v34; // r8d
  const wchar_t *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  const WCHAR *v38; // rdx
  __int64 v39; // rax
  int v40; // r8d
  const wchar_t *v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  const wchar_t *v44; // rdx
  __int64 v45; // rax
  int v46; // eax
  const WCHAR *v47; // rdx
  __int64 v48; // rax
  const wchar_t *v49; // rdx
  __int64 v50; // rax
  int v51; // eax
  const wchar_t *v52; // rdx
  int v53; // ecx
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h]
  __int64 v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h]
  __int64 v60; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-88h]
  const wchar_t *v62; // [rsp+80h] [rbp-80h]
  int v63; // [rsp+88h] [rbp-78h]
  int v64; // [rsp+8Ch] [rbp-74h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  const wchar_t *v67; // [rsp+A0h] [rbp-60h]
  int v68; // [rsp+A8h] [rbp-58h]
  int v69; // [rsp+ACh] [rbp-54h]
  __int64 v70; // [rsp+B0h] [rbp-50h]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  const WCHAR *v72; // [rsp+C0h] [rbp-40h]
  int v73; // [rsp+C8h] [rbp-38h]
  int v74; // [rsp+CCh] [rbp-34h]
  __int64 v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]
  const wchar_t *v77; // [rsp+E0h] [rbp-20h]
  int v78; // [rsp+E8h] [rbp-18h]
  int v79; // [rsp+ECh] [rbp-14h]
  __int64 v80; // [rsp+F0h] [rbp-10h]
  __int64 v81; // [rsp+F8h] [rbp-8h]
  const wchar_t *v82; // [rsp+100h] [rbp+0h]
  int v83; // [rsp+108h] [rbp+8h]
  int v84; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v85; // [rsp+110h] [rbp+10h]
  int v86; // [rsp+118h] [rbp+18h]
  int v87; // [rsp+11Ch] [rbp+1Ch]
  __int64 v88; // [rsp+120h] [rbp+20h]
  __int64 v89; // [rsp+128h] [rbp+28h]
  const wchar_t *v90; // [rsp+130h] [rbp+30h]
  int v91; // [rsp+138h] [rbp+38h]
  int v92; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v93; // [rsp+140h] [rbp+40h]
  int v94; // [rsp+148h] [rbp+48h]
  int v95; // [rsp+14Ch] [rbp+4Ch]
  __int64 v96; // [rsp+150h] [rbp+50h]
  __int64 v97; // [rsp+158h] [rbp+58h]
  __int64 v98; // [rsp+160h] [rbp+60h]
  __int64 v99; // [rsp+168h] [rbp+68h]
  const wchar_t *v100; // [rsp+170h] [rbp+70h]
  int v101; // [rsp+178h] [rbp+78h]
  int v102; // [rsp+17Ch] [rbp+7Ch]
  __int64 v103; // [rsp+180h] [rbp+80h]
  __int64 v104; // [rsp+188h] [rbp+88h]

  v103 = a24;
  v26 = -1LL;
  v104 = 1LL;
  v28 = *a23;
  if ( *a23 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *((_BYTE *)v28 + v29) );
    v30 = v29 + 1;
  }
  else
  {
    v28 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v30 = 1;
  }
  v101 = v30;
  v31 = 2;
  v98 = a22;
  v96 = a21;
  v100 = v28;
  v102 = 0;
  v99 = 4LL;
  v32 = *a20;
  v97 = 4LL;
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( v32[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v32 = &szAgent;
    v34 = 2;
  }
  v93 = v32;
  v94 = v34;
  v95 = 0;
  v35 = *a19;
  if ( *a19 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *((_BYTE *)v35 + v36) );
    v37 = v36 + 1;
  }
  else
  {
    v35 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v37 = 1;
  }
  v91 = v37;
  v88 = a18;
  v90 = v35;
  v92 = 0;
  v89 = 4LL;
  v38 = *a17;
  if ( *a17 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v38 = &szAgent;
    v40 = 2;
  }
  v85 = v38;
  v86 = v40;
  v87 = 0;
  v41 = *a16;
  if ( *a16 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( *((_BYTE *)v41 + v42) );
    v43 = v42 + 1;
  }
  else
  {
    v41 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v43 = 1;
  }
  v83 = v43;
  v80 = a15;
  v82 = v41;
  v84 = 0;
  v81 = 4LL;
  v44 = *a14;
  if ( *a14 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( *((_BYTE *)v44 + v45) );
    v46 = v45 + 1;
  }
  else
  {
    v44 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v46 = 1;
  }
  v78 = v46;
  v75 = a13;
  v77 = v44;
  v79 = 0;
  v76 = 4LL;
  v47 = *a12;
  if ( *a12 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( v47[v48] );
    v31 = 2 * v48 + 2;
  }
  else
  {
    v47 = &szAgent;
  }
  v70 = a11;
  v72 = v47;
  v73 = v31;
  v74 = 0;
  v49 = *a10;
  v71 = 4LL;
  if ( v49 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( *((_BYTE *)v49 + v50) );
    v51 = v50 + 1;
  }
  else
  {
    v49 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v51 = 1;
  }
  v68 = v51;
  v65 = a9;
  v67 = v49;
  v69 = 0;
  v66 = 4LL;
  v52 = *a8;
  if ( *a8 )
  {
    do
      ++v26;
    while ( *((_BYTE *)v52 + v26) );
    v53 = v26 + 1;
  }
  else
  {
    v52 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v53 = 1;
  }
  v60 = a7;
  v58 = a6;
  v56 = a5;
  v62 = v52;
  v63 = v53;
  v64 = 0;
  v61 = 4LL;
  v59 = 8LL;
  v57 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x16u, &v55);
}
