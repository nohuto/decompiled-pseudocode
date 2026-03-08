/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U3@U3@U3@U3@U2@U2@U3@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@444444AEBU?$_tlgWrapSz@G@@55554455544444444444444444444@Z @ 0x1C00663C8
 * Callers:
 *     TraceLoggingWriteMiracastSessionStop @ 0x1C0066B34 (TraceLoggingWriteMiracastSessionStop.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void **a13,
        void **a14,
        void **a15,
        void **a16,
        void **a17,
        __int64 a18,
        __int64 a19,
        void **a20,
        void **a21,
        void **a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        __int64 a42)
{
  __int64 v43; // rcx
  int v45; // edx
  _WORD *v46; // r8
  __int64 v47; // rax
  int v48; // r9d
  _WORD *v49; // r8
  __int64 v50; // rax
  int v51; // r9d
  _WORD *v52; // r8
  __int64 v53; // rax
  int v54; // r9d
  _WORD *v55; // r8
  __int64 v56; // rax
  int v57; // r9d
  _WORD *v58; // r8
  __int64 v59; // rax
  int v60; // r9d
  _WORD *v61; // r8
  __int64 v62; // rax
  int v63; // r9d
  _WORD *v64; // r8
  __int64 v65; // rax
  int v66; // r9d
  _WORD *v67; // r8
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v70; // [rsp+50h] [rbp-B0h]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  __int64 v72; // [rsp+60h] [rbp-A0h]
  __int64 v73; // [rsp+68h] [rbp-98h]
  __int64 v74; // [rsp+70h] [rbp-90h]
  __int64 v75; // [rsp+78h] [rbp-88h]
  __int64 v76; // [rsp+80h] [rbp-80h]
  __int64 v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  __int64 v79; // [rsp+98h] [rbp-68h]
  __int64 v80; // [rsp+A0h] [rbp-60h]
  __int64 v81; // [rsp+A8h] [rbp-58h]
  __int64 v82; // [rsp+B0h] [rbp-50h]
  __int64 v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C0h] [rbp-40h]
  __int64 v85; // [rsp+C8h] [rbp-38h]
  _WORD *v86; // [rsp+D0h] [rbp-30h]
  int v87; // [rsp+D8h] [rbp-28h]
  int v88; // [rsp+DCh] [rbp-24h]
  _WORD *v89; // [rsp+E0h] [rbp-20h]
  int v90; // [rsp+E8h] [rbp-18h]
  int v91; // [rsp+ECh] [rbp-14h]
  _WORD *v92; // [rsp+F0h] [rbp-10h]
  int v93; // [rsp+F8h] [rbp-8h]
  int v94; // [rsp+FCh] [rbp-4h]
  _WORD *v95; // [rsp+100h] [rbp+0h]
  int v96; // [rsp+108h] [rbp+8h]
  int v97; // [rsp+10Ch] [rbp+Ch]
  _WORD *v98; // [rsp+110h] [rbp+10h]
  int v99; // [rsp+118h] [rbp+18h]
  int v100; // [rsp+11Ch] [rbp+1Ch]
  __int64 v101; // [rsp+120h] [rbp+20h]
  __int64 v102; // [rsp+128h] [rbp+28h]
  __int64 v103; // [rsp+130h] [rbp+30h]
  __int64 v104; // [rsp+138h] [rbp+38h]
  _WORD *v105; // [rsp+140h] [rbp+40h]
  int v106; // [rsp+148h] [rbp+48h]
  int v107; // [rsp+14Ch] [rbp+4Ch]
  _WORD *v108; // [rsp+150h] [rbp+50h]
  int v109; // [rsp+158h] [rbp+58h]
  int v110; // [rsp+15Ch] [rbp+5Ch]
  _WORD *v111; // [rsp+160h] [rbp+60h]
  int v112; // [rsp+168h] [rbp+68h]
  int v113; // [rsp+16Ch] [rbp+6Ch]
  __int64 v114; // [rsp+170h] [rbp+70h]
  __int64 v115; // [rsp+178h] [rbp+78h]
  __int64 v116; // [rsp+180h] [rbp+80h]
  __int64 v117; // [rsp+188h] [rbp+88h]
  __int64 v118; // [rsp+190h] [rbp+90h]
  __int64 v119; // [rsp+198h] [rbp+98h]
  __int64 v120; // [rsp+1A0h] [rbp+A0h]
  __int64 v121; // [rsp+1A8h] [rbp+A8h]
  __int64 v122; // [rsp+1B0h] [rbp+B0h]
  __int64 v123; // [rsp+1B8h] [rbp+B8h]
  __int64 v124; // [rsp+1C0h] [rbp+C0h]
  __int64 v125; // [rsp+1C8h] [rbp+C8h]
  __int64 v126; // [rsp+1D0h] [rbp+D0h]
  __int64 v127; // [rsp+1D8h] [rbp+D8h]
  __int64 v128; // [rsp+1E0h] [rbp+E0h]
  __int64 v129; // [rsp+1E8h] [rbp+E8h]
  __int64 v130; // [rsp+1F0h] [rbp+F0h]
  __int64 v131; // [rsp+1F8h] [rbp+F8h]
  __int64 v132; // [rsp+200h] [rbp+100h]
  __int64 v133; // [rsp+208h] [rbp+108h]
  __int64 v134; // [rsp+210h] [rbp+110h]
  __int64 v135; // [rsp+218h] [rbp+118h]
  __int64 v136; // [rsp+220h] [rbp+120h]
  __int64 v137; // [rsp+228h] [rbp+128h]
  __int64 v138; // [rsp+230h] [rbp+130h]
  __int64 v139; // [rsp+238h] [rbp+138h]
  __int64 v140; // [rsp+240h] [rbp+140h]
  __int64 v141; // [rsp+248h] [rbp+148h]
  __int64 v142; // [rsp+250h] [rbp+150h]
  __int64 v143; // [rsp+258h] [rbp+158h]
  __int64 v144; // [rsp+260h] [rbp+160h]
  __int64 v145; // [rsp+268h] [rbp+168h]
  __int64 v146; // [rsp+270h] [rbp+170h]
  __int64 v147; // [rsp+278h] [rbp+178h]
  __int64 v148; // [rsp+280h] [rbp+180h]
  __int64 v149; // [rsp+288h] [rbp+188h]
  __int64 v150; // [rsp+290h] [rbp+190h]
  __int64 v151; // [rsp+298h] [rbp+198h]
  __int64 v152; // [rsp+2A0h] [rbp+1A0h]
  __int64 v153; // [rsp+2A8h] [rbp+1A8h]

  v152 = a42;
  v150 = a41;
  v43 = -1LL;
  v148 = a40;
  v45 = 2;
  v146 = a39;
  v144 = a38;
  v142 = a37;
  v140 = a36;
  v138 = a35;
  v136 = a34;
  v134 = a33;
  v132 = a32;
  v130 = a31;
  v128 = a30;
  v126 = a29;
  v124 = a28;
  v122 = a27;
  v120 = a26;
  v118 = a25;
  v116 = a24;
  v114 = a23;
  v153 = 4LL;
  v151 = 4LL;
  v149 = 4LL;
  v46 = *a22;
  v147 = 4LL;
  v145 = 4LL;
  v143 = 4LL;
  v141 = 4LL;
  v139 = 4LL;
  v137 = 4LL;
  v135 = 4LL;
  v133 = 4LL;
  v131 = 4LL;
  v129 = 4LL;
  v127 = 4LL;
  v125 = 4LL;
  v123 = 4LL;
  v121 = 4LL;
  v119 = 4LL;
  v117 = 4LL;
  v115 = 4LL;
  if ( v46 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v48 = 2 * v47 + 2;
  }
  else
  {
    v46 = &unk_1C0093660;
    v48 = 2;
  }
  v111 = v46;
  v112 = v48;
  v113 = 0;
  v49 = *a21;
  if ( *a21 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( v49[v50] );
    v51 = 2 * v50 + 2;
  }
  else
  {
    v49 = &unk_1C0093660;
    v51 = 2;
  }
  v108 = v49;
  v109 = v51;
  v110 = 0;
  v52 = *a20;
  if ( *a20 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( v52[v53] );
    v54 = 2 * v53 + 2;
  }
  else
  {
    v52 = &unk_1C0093660;
    v54 = 2;
  }
  v103 = a19;
  v101 = a18;
  v105 = v52;
  v106 = v54;
  v107 = 0;
  v55 = *a17;
  v104 = 4LL;
  v102 = 4LL;
  if ( v55 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( v55[v56] );
    v57 = 2 * v56 + 2;
  }
  else
  {
    v55 = &unk_1C0093660;
    v57 = 2;
  }
  v98 = v55;
  v99 = v57;
  v100 = 0;
  v58 = *a16;
  if ( *a16 )
  {
    v59 = -1LL;
    do
      ++v59;
    while ( v58[v59] );
    v60 = 2 * v59 + 2;
  }
  else
  {
    v58 = &unk_1C0093660;
    v60 = 2;
  }
  v95 = v58;
  v96 = v60;
  v97 = 0;
  v61 = *a15;
  if ( *a15 )
  {
    v62 = -1LL;
    do
      ++v62;
    while ( v61[v62] );
    v63 = 2 * v62 + 2;
  }
  else
  {
    v61 = &unk_1C0093660;
    v63 = 2;
  }
  v92 = v61;
  v93 = v63;
  v94 = 0;
  v64 = *a14;
  if ( *a14 )
  {
    v65 = -1LL;
    do
      ++v65;
    while ( v64[v65] );
    v66 = 2 * v65 + 2;
  }
  else
  {
    v64 = &unk_1C0093660;
    v66 = 2;
  }
  v89 = v64;
  v90 = v66;
  v91 = 0;
  v67 = *a13;
  if ( *a13 )
  {
    do
      ++v43;
    while ( v67[v43] );
    v45 = 2 * v43 + 2;
  }
  else
  {
    v67 = &unk_1C0093660;
  }
  v84 = a12;
  v82 = a11;
  v80 = a10;
  v78 = a9;
  v76 = a8;
  v74 = a7;
  v72 = a6;
  v86 = v67;
  v87 = v45;
  v88 = 0;
  v70 = *a5;
  v85 = 4LL;
  v83 = 4LL;
  v81 = 4LL;
  v79 = 4LL;
  v77 = 4LL;
  v75 = 4LL;
  v73 = 4LL;
  v71 = 16LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A918, a2, a3, 0LL, 0x28u, &v69);
}
