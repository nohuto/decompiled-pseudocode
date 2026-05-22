/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644@Z @ 0x180091650
 * Callers:
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x180096200 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const unsigned __int16 **a8,
        __int64 a9,
        const unsigned __int16 **a10,
        __int64 a11,
        const wchar_t **a12,
        __int64 a13,
        const unsigned __int16 **a14,
        __int64 a15,
        const unsigned __int16 **a16,
        const wchar_t **a17,
        __int64 a18,
        const unsigned __int16 **a19,
        const wchar_t **a20,
        __int64 a21,
        __int64 a22)
{
  __int64 v24; // rcx
  int v25; // r10d
  const wchar_t *v27; // rdx
  __int64 v28; // rax
  int v29; // r8d
  const unsigned __int16 *v30; // r8
  __int64 v31; // rax
  int v32; // eax
  const wchar_t *v33; // r8
  __int64 v34; // rax
  int v35; // r9d
  const unsigned __int16 *v36; // r8
  __int64 v37; // rax
  int v38; // eax
  const unsigned __int16 *v39; // r8
  __int64 v40; // rax
  int v41; // eax
  const wchar_t *v42; // r8
  __int64 v43; // rax
  const unsigned __int16 *v44; // r8
  __int64 v45; // rax
  int v46; // eax
  const unsigned __int16 *v47; // r8
  int v48; // ecx
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v57; // [rsp+80h] [rbp-80h]
  int v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+8Ch] [rbp-74h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A8h] [rbp-58h]
  int v64; // [rsp+ACh] [rbp-54h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  const wchar_t *v67; // [rsp+C0h] [rbp-40h]
  int v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+CCh] [rbp-34h]
  __int64 v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v72; // [rsp+E0h] [rbp-20h]
  int v73; // [rsp+E8h] [rbp-18h]
  int v74; // [rsp+ECh] [rbp-14h]
  __int64 v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v77; // [rsp+100h] [rbp+0h]
  int v78; // [rsp+108h] [rbp+8h]
  int v79; // [rsp+10Ch] [rbp+Ch]
  const wchar_t *v80; // [rsp+110h] [rbp+10h]
  int v81; // [rsp+118h] [rbp+18h]
  int v82; // [rsp+11Ch] [rbp+1Ch]
  __int64 v83; // [rsp+120h] [rbp+20h]
  __int64 v84; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v85; // [rsp+130h] [rbp+30h]
  int v86; // [rsp+138h] [rbp+38h]
  int v87; // [rsp+13Ch] [rbp+3Ch]
  const wchar_t *v88; // [rsp+140h] [rbp+40h]
  int v89; // [rsp+148h] [rbp+48h]
  int v90; // [rsp+14Ch] [rbp+4Ch]
  __int64 v91; // [rsp+150h] [rbp+50h]
  __int64 v92; // [rsp+158h] [rbp+58h]
  __int64 v93; // [rsp+160h] [rbp+60h]
  __int64 v94; // [rsp+168h] [rbp+68h]

  v93 = a22;
  v91 = a21;
  v24 = -1LL;
  v25 = 2;
  v94 = 4LL;
  v92 = 4LL;
  v27 = *a20;
  if ( *a20 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v27 = &word_1801C2354;
    v29 = 2;
  }
  v89 = v29;
  v88 = v27;
  v90 = 0;
  v30 = *a19;
  if ( *a19 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *((_BYTE *)v30 + v31) );
    v32 = v31 + 1;
  }
  else
  {
    v30 = &word_1801C2350;
    v32 = 1;
  }
  v86 = v32;
  v83 = a18;
  v85 = v30;
  v87 = 0;
  v84 = 4LL;
  v33 = *a17;
  if ( *a17 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( v33[v34] );
    v35 = 2 * v34 + 2;
  }
  else
  {
    v33 = &word_1801C2354;
    v35 = 2;
  }
  v80 = v33;
  v81 = v35;
  v82 = 0;
  v36 = *a16;
  if ( *a16 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( *((_BYTE *)v36 + v37) );
    v38 = v37 + 1;
  }
  else
  {
    v36 = &word_1801C2350;
    v38 = 1;
  }
  v78 = v38;
  v75 = a15;
  v77 = v36;
  v79 = 0;
  v76 = 4LL;
  v39 = *a14;
  if ( *a14 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( *((_BYTE *)v39 + v40) );
    v41 = v40 + 1;
  }
  else
  {
    v39 = &word_1801C2350;
    v41 = 1;
  }
  v73 = v41;
  v70 = a13;
  v72 = v39;
  v74 = 0;
  v71 = 4LL;
  v42 = *a12;
  if ( *a12 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( v42[v43] );
    v25 = 2 * v43 + 2;
  }
  else
  {
    v42 = &word_1801C2354;
  }
  v65 = a11;
  v67 = v42;
  v68 = v25;
  v69 = 0;
  v44 = *a10;
  v66 = 4LL;
  if ( v44 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( *((_BYTE *)v44 + v45) );
    v46 = v45 + 1;
  }
  else
  {
    v44 = &word_1801C2350;
    v46 = 1;
  }
  v63 = v46;
  v60 = a9;
  v62 = v44;
  v64 = 0;
  v61 = 4LL;
  v47 = *a8;
  if ( *a8 )
  {
    do
      ++v24;
    while ( *((_BYTE *)v47 + v24) );
    v48 = v24 + 1;
  }
  else
  {
    v47 = &word_1801C2350;
    v48 = 1;
  }
  v55 = a7;
  v53 = a6;
  v51 = a5;
  v57 = v47;
  v58 = v48;
  v59 = 0;
  v56 = 4LL;
  v54 = 8LL;
  v52 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x14u, &v50);
}
