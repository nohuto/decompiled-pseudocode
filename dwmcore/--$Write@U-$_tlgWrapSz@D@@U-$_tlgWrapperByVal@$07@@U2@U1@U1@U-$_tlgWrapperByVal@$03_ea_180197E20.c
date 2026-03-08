/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U1@U3@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554335533333333333333@Z @ 0x180197E20
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180035EC0 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
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
        const char **a19,
        __int64 a20,
        __int64 a21,
        const char **a22,
        const char **a23,
        const char **a24,
        const char **a25,
        const char **a26,
        const char **a27,
        const char **a28,
        const char **a29,
        const char **a30,
        const char **a31,
        const char **a32,
        const char **a33,
        const char **a34,
        const char **a35)
{
  __int64 v36; // rdx
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
  __int64 v59; // rax
  int v60; // eax
  const char *v61; // r8
  __int64 v62; // rax
  int v63; // eax
  const char *v64; // r8
  __int64 v65; // rax
  int v66; // eax
  const char *v67; // r8
  __int64 v68; // rax
  int v69; // eax
  const char *v70; // r8
  __int64 v71; // rax
  int v72; // eax
  const char *v73; // r8
  __int64 v74; // rax
  int v75; // eax
  const char *v76; // r8
  __int64 v77; // rax
  int v78; // eax
  const char *v79; // r8
  __int64 v80; // rax
  int v81; // eax
  const char *v82; // r8
  __int64 v83; // rax
  int v84; // eax
  const char *v85; // r8
  __int64 v86; // rax
  int v87; // eax
  const char *v88; // r8
  __int64 v89; // rax
  int v90; // eax
  const char *v91; // r8
  int v92; // edx
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+30h] [rbp-D0h] BYREF
  const char *v95; // [rsp+50h] [rbp-B0h]
  int v96; // [rsp+58h] [rbp-A8h]
  int v97; // [rsp+5Ch] [rbp-A4h]
  __int64 v98; // [rsp+60h] [rbp-A0h]
  __int64 v99; // [rsp+68h] [rbp-98h]
  __int64 v100; // [rsp+70h] [rbp-90h]
  __int64 v101; // [rsp+78h] [rbp-88h]
  const char *v102; // [rsp+80h] [rbp-80h]
  int v103; // [rsp+88h] [rbp-78h]
  int v104; // [rsp+8Ch] [rbp-74h]
  const char *v105; // [rsp+90h] [rbp-70h]
  int v106; // [rsp+98h] [rbp-68h]
  int v107; // [rsp+9Ch] [rbp-64h]
  __int64 v108; // [rsp+A0h] [rbp-60h]
  __int64 v109; // [rsp+A8h] [rbp-58h]
  __int64 v110; // [rsp+B0h] [rbp-50h]
  __int64 v111; // [rsp+B8h] [rbp-48h]
  __int64 v112; // [rsp+C0h] [rbp-40h]
  __int64 v113; // [rsp+C8h] [rbp-38h]
  __int64 v114; // [rsp+D0h] [rbp-30h]
  __int64 v115; // [rsp+D8h] [rbp-28h]
  __int64 v116; // [rsp+E0h] [rbp-20h]
  __int64 v117; // [rsp+E8h] [rbp-18h]
  __int64 v118; // [rsp+F0h] [rbp-10h]
  __int64 v119; // [rsp+F8h] [rbp-8h]
  __int64 v120; // [rsp+100h] [rbp+0h]
  __int64 v121; // [rsp+108h] [rbp+8h]
  __int64 v122; // [rsp+110h] [rbp+10h]
  __int64 v123; // [rsp+118h] [rbp+18h]
  const char *v124; // [rsp+120h] [rbp+20h]
  int v125; // [rsp+128h] [rbp+28h]
  int v126; // [rsp+12Ch] [rbp+2Ch]
  const char *v127; // [rsp+130h] [rbp+30h]
  int v128; // [rsp+138h] [rbp+38h]
  int v129; // [rsp+13Ch] [rbp+3Ch]
  __int64 v130; // [rsp+140h] [rbp+40h]
  __int64 v131; // [rsp+148h] [rbp+48h]
  __int64 v132; // [rsp+150h] [rbp+50h]
  __int64 v133; // [rsp+158h] [rbp+58h]
  const char *v134; // [rsp+160h] [rbp+60h]
  int v135; // [rsp+168h] [rbp+68h]
  int v136; // [rsp+16Ch] [rbp+6Ch]
  const char *v137; // [rsp+170h] [rbp+70h]
  int v138; // [rsp+178h] [rbp+78h]
  int v139; // [rsp+17Ch] [rbp+7Ch]
  const char *v140; // [rsp+180h] [rbp+80h]
  int v141; // [rsp+188h] [rbp+88h]
  int v142; // [rsp+18Ch] [rbp+8Ch]
  const char *v143; // [rsp+190h] [rbp+90h]
  int v144; // [rsp+198h] [rbp+98h]
  int v145; // [rsp+19Ch] [rbp+9Ch]
  const char *v146; // [rsp+1A0h] [rbp+A0h]
  int v147; // [rsp+1A8h] [rbp+A8h]
  int v148; // [rsp+1ACh] [rbp+ACh]
  const char *v149; // [rsp+1B0h] [rbp+B0h]
  int v150; // [rsp+1B8h] [rbp+B8h]
  int v151; // [rsp+1BCh] [rbp+BCh]
  const char *v152; // [rsp+1C0h] [rbp+C0h]
  int v153; // [rsp+1C8h] [rbp+C8h]
  int v154; // [rsp+1CCh] [rbp+CCh]
  const char *v155; // [rsp+1D0h] [rbp+D0h]
  int v156; // [rsp+1D8h] [rbp+D8h]
  int v157; // [rsp+1DCh] [rbp+DCh]
  const char *v158; // [rsp+1E0h] [rbp+E0h]
  int v159; // [rsp+1E8h] [rbp+E8h]
  int v160; // [rsp+1ECh] [rbp+ECh]
  const char *v161; // [rsp+1F0h] [rbp+F0h]
  int v162; // [rsp+1F8h] [rbp+F8h]
  int v163; // [rsp+1FCh] [rbp+FCh]
  const char *v164; // [rsp+200h] [rbp+100h]
  int v165; // [rsp+208h] [rbp+108h]
  int v166; // [rsp+20Ch] [rbp+10Ch]
  const char *v167; // [rsp+210h] [rbp+110h]
  int v168; // [rsp+218h] [rbp+118h]
  int v169; // [rsp+21Ch] [rbp+11Ch]
  const char *v170; // [rsp+220h] [rbp+120h]
  int v171; // [rsp+228h] [rbp+128h]
  int v172; // [rsp+22Ch] [rbp+12Ch]
  const char *v173; // [rsp+230h] [rbp+130h]
  int v174; // [rsp+238h] [rbp+138h]
  int v175; // [rsp+23Ch] [rbp+13Ch]

  v36 = -1LL;
  v37 = *a35;
  if ( *a35 )
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
  v174 = v39;
  v173 = v37;
  v175 = 0;
  v40 = *a34;
  if ( *a34 )
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
  v171 = v42;
  v170 = v40;
  v172 = 0;
  v43 = *a33;
  if ( *a33 )
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
  v168 = v45;
  v167 = v43;
  v169 = 0;
  v46 = *a32;
  if ( *a32 )
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
  v165 = v48;
  v164 = v46;
  v166 = 0;
  v49 = *a31;
  if ( *a31 )
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
  v162 = v51;
  v161 = v49;
  v163 = 0;
  v52 = *a30;
  if ( *a30 )
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
  v159 = v54;
  v158 = v52;
  v160 = 0;
  v55 = *a29;
  if ( *a29 )
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
  v156 = v57;
  v155 = v55;
  v157 = 0;
  v58 = *a28;
  if ( *a28 )
  {
    v59 = -1LL;
    do
      ++v59;
    while ( v58[v59] );
    v60 = v59 + 1;
  }
  else
  {
    v58 = word_180338FC0;
    v60 = 1;
  }
  v153 = v60;
  v152 = v58;
  v154 = 0;
  v61 = *a27;
  if ( *a27 )
  {
    v62 = -1LL;
    do
      ++v62;
    while ( v61[v62] );
    v63 = v62 + 1;
  }
  else
  {
    v61 = word_180338FC0;
    v63 = 1;
  }
  v150 = v63;
  v149 = v61;
  v151 = 0;
  v64 = *a26;
  if ( *a26 )
  {
    v65 = -1LL;
    do
      ++v65;
    while ( v64[v65] );
    v66 = v65 + 1;
  }
  else
  {
    v64 = word_180338FC0;
    v66 = 1;
  }
  v147 = v66;
  v146 = v64;
  v148 = 0;
  v67 = *a25;
  if ( *a25 )
  {
    v68 = -1LL;
    do
      ++v68;
    while ( v67[v68] );
    v69 = v68 + 1;
  }
  else
  {
    v67 = word_180338FC0;
    v69 = 1;
  }
  v144 = v69;
  v143 = v67;
  v145 = 0;
  v70 = *a24;
  if ( *a24 )
  {
    v71 = -1LL;
    do
      ++v71;
    while ( v70[v71] );
    v72 = v71 + 1;
  }
  else
  {
    v70 = word_180338FC0;
    v72 = 1;
  }
  v141 = v72;
  v140 = v70;
  v142 = 0;
  v73 = *a23;
  if ( *a23 )
  {
    v74 = -1LL;
    do
      ++v74;
    while ( v73[v74] );
    v75 = v74 + 1;
  }
  else
  {
    v73 = word_180338FC0;
    v75 = 1;
  }
  v138 = v75;
  v137 = v73;
  v139 = 0;
  v76 = *a22;
  if ( *a22 )
  {
    v77 = -1LL;
    do
      ++v77;
    while ( v76[v77] );
    v78 = v77 + 1;
  }
  else
  {
    v76 = word_180338FC0;
    v78 = 1;
  }
  v135 = v78;
  v132 = a21;
  v130 = a20;
  v134 = v76;
  v136 = 0;
  v133 = 4LL;
  v79 = *a19;
  v131 = 4LL;
  if ( v79 )
  {
    v80 = -1LL;
    do
      ++v80;
    while ( v79[v80] );
    v81 = v80 + 1;
  }
  else
  {
    v79 = word_180338FC0;
    v81 = 1;
  }
  v128 = v81;
  v127 = v79;
  v129 = 0;
  v82 = *a18;
  if ( *a18 )
  {
    v83 = -1LL;
    do
      ++v83;
    while ( v82[v83] );
    v84 = v83 + 1;
  }
  else
  {
    v82 = word_180338FC0;
    v84 = 1;
  }
  v125 = v84;
  v122 = a17;
  v120 = a16;
  v118 = a15;
  v116 = a14;
  v114 = a13;
  v112 = a12;
  v110 = a11;
  v108 = a10;
  v124 = v82;
  v126 = 0;
  v123 = 8LL;
  v85 = *a9;
  v121 = 4LL;
  v119 = 4LL;
  v117 = 4LL;
  v115 = 4LL;
  v113 = 4LL;
  v111 = 8LL;
  v109 = 4LL;
  if ( v85 )
  {
    v86 = -1LL;
    do
      ++v86;
    while ( v85[v86] );
    v87 = v86 + 1;
  }
  else
  {
    v85 = word_180338FC0;
    v87 = 1;
  }
  v106 = v87;
  v105 = v85;
  v107 = 0;
  v88 = *a8;
  if ( *a8 )
  {
    v89 = -1LL;
    do
      ++v89;
    while ( v88[v89] );
    v90 = v89 + 1;
  }
  else
  {
    v88 = word_180338FC0;
    v90 = 1;
  }
  v103 = v90;
  v100 = a7;
  v98 = a6;
  v102 = v88;
  v104 = 0;
  v101 = 8LL;
  v91 = *a5;
  v99 = 8LL;
  if ( v91 )
  {
    do
      ++v36;
    while ( v91[v36] );
    v92 = v36 + 1;
  }
  else
  {
    v91 = word_180338FC0;
    v92 = 1;
  }
  v95 = v91;
  v96 = v92;
  v97 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x21u, &v94);
}
