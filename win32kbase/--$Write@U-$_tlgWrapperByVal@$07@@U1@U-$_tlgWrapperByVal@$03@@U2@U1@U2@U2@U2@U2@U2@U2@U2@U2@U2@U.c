/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@D@@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4344444444444444444AEBU?$_tlgWrapSz@D@@55444444444444344444444@Z @ 0x1C0212EC4
 * Callers:
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C001046C (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
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
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        void **a27,
        void **a28,
        void **a29,
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
        __int64 a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        __int64 a46,
        __int64 a47,
        __int64 a48,
        __int64 a49,
        __int64 a50)
{
  __int64 v51; // rcx
  _BYTE *v52; // r8
  __int64 v53; // rax
  int v54; // eax
  _BYTE *v55; // r8
  __int64 v56; // rax
  int v57; // eax
  _BYTE *v58; // r8
  int v59; // ecx
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h]
  __int64 v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h]
  __int64 v67; // [rsp+78h] [rbp-88h]
  __int64 v68; // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+88h] [rbp-78h]
  __int64 v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+A0h] [rbp-60h]
  __int64 v73; // [rsp+A8h] [rbp-58h]
  __int64 v74; // [rsp+B0h] [rbp-50h]
  __int64 v75; // [rsp+B8h] [rbp-48h]
  __int64 v76; // [rsp+C0h] [rbp-40h]
  __int64 v77; // [rsp+C8h] [rbp-38h]
  __int64 v78; // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+D8h] [rbp-28h]
  __int64 v80; // [rsp+E0h] [rbp-20h]
  __int64 v81; // [rsp+E8h] [rbp-18h]
  __int64 v82; // [rsp+F0h] [rbp-10h]
  __int64 v83; // [rsp+F8h] [rbp-8h]
  __int64 v84; // [rsp+100h] [rbp+0h]
  __int64 v85; // [rsp+108h] [rbp+8h]
  __int64 v86; // [rsp+110h] [rbp+10h]
  __int64 v87; // [rsp+118h] [rbp+18h]
  __int64 v88; // [rsp+120h] [rbp+20h]
  __int64 v89; // [rsp+128h] [rbp+28h]
  __int64 v90; // [rsp+130h] [rbp+30h]
  __int64 v91; // [rsp+138h] [rbp+38h]
  __int64 v92; // [rsp+140h] [rbp+40h]
  __int64 v93; // [rsp+148h] [rbp+48h]
  __int64 v94; // [rsp+150h] [rbp+50h]
  __int64 v95; // [rsp+158h] [rbp+58h]
  __int64 v96; // [rsp+160h] [rbp+60h]
  __int64 v97; // [rsp+168h] [rbp+68h]
  __int64 v98; // [rsp+170h] [rbp+70h]
  __int64 v99; // [rsp+178h] [rbp+78h]
  __int64 v100; // [rsp+180h] [rbp+80h]
  __int64 v101; // [rsp+188h] [rbp+88h]
  __int64 v102; // [rsp+190h] [rbp+90h]
  __int64 v103; // [rsp+198h] [rbp+98h]
  __int64 v104; // [rsp+1A0h] [rbp+A0h]
  __int64 v105; // [rsp+1A8h] [rbp+A8h]
  _BYTE *v106; // [rsp+1B0h] [rbp+B0h]
  int v107; // [rsp+1B8h] [rbp+B8h]
  int v108; // [rsp+1BCh] [rbp+BCh]
  _BYTE *v109; // [rsp+1C0h] [rbp+C0h]
  int v110; // [rsp+1C8h] [rbp+C8h]
  int v111; // [rsp+1CCh] [rbp+CCh]
  _BYTE *v112; // [rsp+1D0h] [rbp+D0h]
  int v113; // [rsp+1D8h] [rbp+D8h]
  int v114; // [rsp+1DCh] [rbp+DCh]
  __int64 v115; // [rsp+1E0h] [rbp+E0h]
  __int64 v116; // [rsp+1E8h] [rbp+E8h]
  __int64 v117; // [rsp+1F0h] [rbp+F0h]
  __int64 v118; // [rsp+1F8h] [rbp+F8h]
  __int64 v119; // [rsp+200h] [rbp+100h]
  __int64 v120; // [rsp+208h] [rbp+108h]
  __int64 v121; // [rsp+210h] [rbp+110h]
  __int64 v122; // [rsp+218h] [rbp+118h]
  __int64 v123; // [rsp+220h] [rbp+120h]
  __int64 v124; // [rsp+228h] [rbp+128h]
  __int64 v125; // [rsp+230h] [rbp+130h]
  __int64 v126; // [rsp+238h] [rbp+138h]
  __int64 v127; // [rsp+240h] [rbp+140h]
  __int64 v128; // [rsp+248h] [rbp+148h]
  __int64 v129; // [rsp+250h] [rbp+150h]
  __int64 v130; // [rsp+258h] [rbp+158h]
  __int64 v131; // [rsp+260h] [rbp+160h]
  __int64 v132; // [rsp+268h] [rbp+168h]
  __int64 v133; // [rsp+270h] [rbp+170h]
  __int64 v134; // [rsp+278h] [rbp+178h]
  __int64 v135; // [rsp+280h] [rbp+180h]
  __int64 v136; // [rsp+288h] [rbp+188h]
  __int64 v137; // [rsp+290h] [rbp+190h]
  __int64 v138; // [rsp+298h] [rbp+198h]
  __int64 v139; // [rsp+2A0h] [rbp+1A0h]
  __int64 v140; // [rsp+2A8h] [rbp+1A8h]
  __int64 v141; // [rsp+2B0h] [rbp+1B0h]
  __int64 v142; // [rsp+2B8h] [rbp+1B8h]
  __int64 v143; // [rsp+2C0h] [rbp+1C0h]
  __int64 v144; // [rsp+2C8h] [rbp+1C8h]
  __int64 v145; // [rsp+2D0h] [rbp+1D0h]
  __int64 v146; // [rsp+2D8h] [rbp+1D8h]
  __int64 v147; // [rsp+2E0h] [rbp+1E0h]
  __int64 v148; // [rsp+2E8h] [rbp+1E8h]
  __int64 v149; // [rsp+2F0h] [rbp+1F0h]
  __int64 v150; // [rsp+2F8h] [rbp+1F8h]
  __int64 v151; // [rsp+300h] [rbp+200h]
  __int64 v152; // [rsp+308h] [rbp+208h]
  __int64 v153; // [rsp+310h] [rbp+210h]
  __int64 v154; // [rsp+318h] [rbp+218h]
  __int64 v155; // [rsp+320h] [rbp+220h]
  __int64 v156; // [rsp+328h] [rbp+228h]

  v155 = a50;
  v51 = -1LL;
  v153 = a49;
  v151 = a48;
  v149 = a47;
  v147 = a46;
  v145 = a45;
  v143 = a44;
  v141 = a43;
  v139 = a42;
  v137 = a41;
  v135 = a40;
  v133 = a39;
  v131 = a38;
  v129 = a37;
  v127 = a36;
  v125 = a35;
  v123 = a34;
  v121 = a33;
  v119 = a32;
  v117 = a31;
  v115 = a30;
  v156 = 4LL;
  v154 = 4LL;
  v152 = 4LL;
  v52 = *a29;
  v150 = 4LL;
  v148 = 4LL;
  v146 = 4LL;
  v144 = 4LL;
  v142 = 4LL;
  v140 = 8LL;
  v138 = 4LL;
  v136 = 4LL;
  v134 = 4LL;
  v132 = 4LL;
  v130 = 4LL;
  v128 = 4LL;
  v126 = 4LL;
  v124 = 4LL;
  v122 = 4LL;
  v120 = 4LL;
  v118 = 4LL;
  v116 = 4LL;
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
    v52 = &unk_1C02A2108;
    v54 = 1;
  }
  v113 = v54;
  v112 = v52;
  v114 = 0;
  v55 = *a28;
  if ( *a28 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( v55[v56] );
    v57 = v56 + 1;
  }
  else
  {
    v55 = &unk_1C02A2108;
    v57 = 1;
  }
  v110 = v57;
  v109 = v55;
  v111 = 0;
  v58 = *a27;
  if ( *a27 )
  {
    do
      ++v51;
    while ( v58[v51] );
    v59 = v51 + 1;
  }
  else
  {
    v58 = &unk_1C02A2108;
    v59 = 1;
  }
  v104 = a26;
  v102 = a25;
  v100 = a24;
  v98 = a23;
  v96 = a22;
  v94 = a21;
  v92 = a20;
  v90 = a19;
  v88 = a18;
  v86 = a17;
  v84 = a16;
  v82 = a15;
  v80 = a14;
  v78 = a13;
  v76 = a12;
  v74 = a11;
  v72 = a10;
  v70 = a9;
  v68 = a8;
  v66 = a7;
  v64 = a6;
  v62 = a5;
  v106 = v58;
  v107 = v59;
  v108 = 0;
  v105 = 4LL;
  v103 = 4LL;
  v101 = 4LL;
  v99 = 4LL;
  v97 = 4LL;
  v95 = 4LL;
  v93 = 4LL;
  v91 = 4LL;
  v89 = 4LL;
  v87 = 4LL;
  v85 = 4LL;
  v83 = 4LL;
  v81 = 4LL;
  v79 = 4LL;
  v77 = 4LL;
  v75 = 4LL;
  v73 = 4LL;
  v71 = 8LL;
  v69 = 4LL;
  v67 = 4LL;
  v65 = 8LL;
  v63 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x30u, &v61);
}
