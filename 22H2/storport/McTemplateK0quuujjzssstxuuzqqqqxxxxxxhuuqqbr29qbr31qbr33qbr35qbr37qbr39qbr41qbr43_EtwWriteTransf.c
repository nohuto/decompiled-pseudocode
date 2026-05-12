/*
 * XREFs of McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransfer @ 0x1C001EEDC
 * Callers:
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C001F5E0 (StorpTelemetrySendUnitScsiDiagnostics.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DBF4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        int a15,
        char a16,
        char a17,
        const wchar_t *a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        int a33,
        __int64 a34,
        int a35,
        __int64 a36,
        int a37,
        __int64 a38,
        int a39,
        __int64 a40,
        int a41,
        __int64 a42,
        int a43,
        __int64 a44,
        int a45,
        __int64 a46,
        int a47,
        __int64 a48)
{
  const wchar_t *v48; // rcx
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // r8d
  const char *v53; // rdx
  __int64 v54; // rcx
  int v55; // ecx
  const char *v56; // rdx
  __int64 v57; // rcx
  int v58; // ecx
  const char *v59; // rdx
  __int64 v60; // rcx
  int v61; // ecx
  const wchar_t *v62; // rcx
  bool v63; // zf
  __int64 v65; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+48h] [rbp-C0h] BYREF
  int *v67; // [rsp+58h] [rbp-B0h]
  __int64 v68; // [rsp+60h] [rbp-A8h]
  char *v69; // [rsp+68h] [rbp-A0h]
  __int64 v70; // [rsp+70h] [rbp-98h]
  char *v71; // [rsp+78h] [rbp-90h]
  __int64 v72; // [rsp+80h] [rbp-88h]
  char *v73; // [rsp+88h] [rbp-80h]
  __int64 v74; // [rsp+90h] [rbp-78h]
  __int64 v75; // [rsp+98h] [rbp-70h]
  __int64 v76; // [rsp+A0h] [rbp-68h]
  __int64 v77; // [rsp+A8h] [rbp-60h]
  __int64 v78; // [rsp+B0h] [rbp-58h]
  const wchar_t *v79; // [rsp+B8h] [rbp-50h]
  int v80; // [rsp+C0h] [rbp-48h]
  int v81; // [rsp+C4h] [rbp-44h]
  const char *v82; // [rsp+C8h] [rbp-40h]
  int v83; // [rsp+D0h] [rbp-38h]
  int v84; // [rsp+D4h] [rbp-34h]
  const char *v85; // [rsp+D8h] [rbp-30h]
  int v86; // [rsp+E0h] [rbp-28h]
  int v87; // [rsp+E4h] [rbp-24h]
  const char *v88; // [rsp+E8h] [rbp-20h]
  int v89; // [rsp+F0h] [rbp-18h]
  int v90; // [rsp+F4h] [rbp-14h]
  char *v91; // [rsp+F8h] [rbp-10h]
  __int64 v92; // [rsp+100h] [rbp-8h]
  __int64 *v93; // [rsp+108h] [rbp+0h]
  __int64 v94; // [rsp+110h] [rbp+8h]
  char *v95; // [rsp+118h] [rbp+10h]
  __int64 v96; // [rsp+120h] [rbp+18h]
  char *v97; // [rsp+128h] [rbp+20h]
  __int64 v98; // [rsp+130h] [rbp+28h]
  const wchar_t *v99; // [rsp+138h] [rbp+30h]
  int v100; // [rsp+140h] [rbp+38h]
  int v101; // [rsp+144h] [rbp+3Ch]
  char *v102; // [rsp+148h] [rbp+40h]
  __int64 v103; // [rsp+150h] [rbp+48h]
  char *v104; // [rsp+158h] [rbp+50h]
  __int64 v105; // [rsp+160h] [rbp+58h]
  char *v106; // [rsp+168h] [rbp+60h]
  __int64 v107; // [rsp+170h] [rbp+68h]
  char *v108; // [rsp+178h] [rbp+70h]
  __int64 v109; // [rsp+180h] [rbp+78h]
  char *v110; // [rsp+188h] [rbp+80h]
  __int64 v111; // [rsp+190h] [rbp+88h]
  char *v112; // [rsp+198h] [rbp+90h]
  __int64 v113; // [rsp+1A0h] [rbp+98h]
  char *v114; // [rsp+1A8h] [rbp+A0h]
  __int64 v115; // [rsp+1B0h] [rbp+A8h]
  char *v116; // [rsp+1B8h] [rbp+B0h]
  __int64 v117; // [rsp+1C0h] [rbp+B8h]
  char *v118; // [rsp+1C8h] [rbp+C0h]
  __int64 v119; // [rsp+1D0h] [rbp+C8h]
  char *v120; // [rsp+1D8h] [rbp+D0h]
  __int64 v121; // [rsp+1E0h] [rbp+D8h]
  char *v122; // [rsp+1E8h] [rbp+E0h]
  __int64 v123; // [rsp+1F0h] [rbp+E8h]
  char *v124; // [rsp+1F8h] [rbp+F0h]
  __int64 v125; // [rsp+200h] [rbp+F8h]
  char *v126; // [rsp+208h] [rbp+100h]
  __int64 v127; // [rsp+210h] [rbp+108h]
  char *v128; // [rsp+218h] [rbp+110h]
  __int64 v129; // [rsp+220h] [rbp+118h]
  int *v130; // [rsp+228h] [rbp+120h]
  __int64 v131; // [rsp+230h] [rbp+128h]
  __int64 v132; // [rsp+238h] [rbp+130h]
  int v133; // [rsp+240h] [rbp+138h]
  int v134; // [rsp+244h] [rbp+13Ch]
  int *v135; // [rsp+248h] [rbp+140h]
  __int64 v136; // [rsp+250h] [rbp+148h]
  __int64 v137; // [rsp+258h] [rbp+150h]
  int v138; // [rsp+260h] [rbp+158h]
  int v139; // [rsp+264h] [rbp+15Ch]
  int *v140; // [rsp+268h] [rbp+160h]
  __int64 v141; // [rsp+270h] [rbp+168h]
  __int64 v142; // [rsp+278h] [rbp+170h]
  int v143; // [rsp+280h] [rbp+178h]
  int v144; // [rsp+284h] [rbp+17Ch]
  int *v145; // [rsp+288h] [rbp+180h]
  __int64 v146; // [rsp+290h] [rbp+188h]
  __int64 v147; // [rsp+298h] [rbp+190h]
  int v148; // [rsp+2A0h] [rbp+198h]
  int v149; // [rsp+2A4h] [rbp+19Ch]
  int *v150; // [rsp+2A8h] [rbp+1A0h]
  __int64 v151; // [rsp+2B0h] [rbp+1A8h]
  __int64 v152; // [rsp+2B8h] [rbp+1B0h]
  int v153; // [rsp+2C0h] [rbp+1B8h]
  int v154; // [rsp+2C4h] [rbp+1BCh]
  int *v155; // [rsp+2C8h] [rbp+1C0h]
  __int64 v156; // [rsp+2D0h] [rbp+1C8h]
  __int64 v157; // [rsp+2D8h] [rbp+1D0h]
  int v158; // [rsp+2E0h] [rbp+1D8h]
  int v159; // [rsp+2E4h] [rbp+1DCh]
  int *v160; // [rsp+2E8h] [rbp+1E0h]
  __int64 v161; // [rsp+2F0h] [rbp+1E8h]
  __int64 v162; // [rsp+2F8h] [rbp+1F0h]
  int v163; // [rsp+300h] [rbp+1F8h]
  int v164; // [rsp+304h] [rbp+1FCh]
  int *v165; // [rsp+308h] [rbp+200h]
  __int64 v166; // [rsp+310h] [rbp+208h]
  __int64 v167; // [rsp+318h] [rbp+210h]
  int v168; // [rsp+320h] [rbp+218h]
  int v169; // [rsp+324h] [rbp+21Ch]
  int v170; // [rsp+360h] [rbp+258h] BYREF

  v170 = a4;
  v48 = a10;
  v65 = *(_QWORD *)&g_SystemUptime_s;
  v67 = &v170;
  v69 = &a5;
  v68 = 4LL;
  v71 = &a6;
  v49 = 10;
  v70 = 1LL;
  v73 = &a7;
  v75 = a8;
  v77 = a9;
  v50 = -1LL;
  v72 = 1LL;
  v74 = 1LL;
  v76 = 16LL;
  v78 = 16LL;
  if ( a10 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( a10[v51] );
    v52 = 2 * v51 + 2;
  }
  else
  {
    v52 = 10;
  }
  v53 = a11;
  v80 = v52;
  v81 = 0;
  if ( !a10 )
    v48 = L"NULL";
  v79 = v48;
  if ( a11 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( a11[v54] );
    v55 = v54 + 1;
  }
  else
  {
    v55 = 5;
  }
  v83 = v55;
  v84 = 0;
  if ( !a11 )
    v53 = "NULL";
  v82 = v53;
  v56 = a12;
  if ( a12 )
  {
    v57 = -1LL;
    do
      ++v57;
    while ( a12[v57] );
    v58 = v57 + 1;
  }
  else
  {
    v58 = 5;
  }
  v86 = v58;
  v87 = 0;
  if ( !a12 )
    v56 = "NULL";
  v85 = v56;
  v59 = a13;
  if ( a13 )
  {
    v60 = -1LL;
    do
      ++v60;
    while ( a13[v60] );
    v61 = v60 + 1;
  }
  else
  {
    v61 = 5;
  }
  v89 = v61;
  v90 = 0;
  v91 = &a14;
  if ( !a13 )
    v59 = "NULL";
  v88 = v59;
  v93 = &v65;
  v95 = &a16;
  v97 = &a17;
  v62 = a18;
  v92 = 4LL;
  v94 = 8LL;
  v96 = 1LL;
  v98 = 1LL;
  v63 = a18 == 0LL;
  if ( a18 )
  {
    do
      ++v50;
    while ( a18[v50] );
    v49 = 2 * v50 + 2;
    v63 = a18 == 0LL;
  }
  v100 = v49;
  v102 = &a19;
  if ( v63 )
    v62 = L"NULL";
  v99 = v62;
  v104 = &a20;
  v106 = &a21;
  v108 = &a22;
  v110 = &a23;
  v112 = &a24;
  v114 = &a25;
  v116 = &a26;
  v118 = &a27;
  v120 = &a28;
  v122 = &a29;
  v124 = &a30;
  v126 = &a31;
  v128 = &a32;
  v130 = &a33;
  v132 = a34;
  v133 = a33;
  v135 = &a35;
  v137 = a36;
  v138 = a35;
  v140 = &a37;
  v142 = a38;
  v143 = a37;
  v145 = &a39;
  v147 = a40;
  v148 = a39;
  v150 = &a41;
  v101 = 0;
  v103 = 4LL;
  v105 = 4LL;
  v107 = 4LL;
  v109 = 4LL;
  v111 = 8LL;
  v113 = 8LL;
  v115 = 8LL;
  v117 = 8LL;
  v119 = 8LL;
  v121 = 8LL;
  v123 = 2LL;
  v125 = 1LL;
  v127 = 1LL;
  v129 = 4LL;
  v131 = 4LL;
  v134 = 0;
  v136 = 4LL;
  v139 = 0;
  v141 = 4LL;
  v144 = 0;
  v146 = 4LL;
  v149 = 0;
  v151 = 4LL;
  v152 = a42;
  v153 = a41;
  v155 = &a43;
  v157 = a44;
  v158 = a43;
  v160 = &a45;
  v162 = a46;
  v163 = a45;
  v165 = &a47;
  v167 = a48;
  v168 = a47;
  v154 = 0;
  v156 = 4LL;
  v159 = 0;
  v161 = 4LL;
  v164 = 0;
  v166 = 4LL;
  v169 = 0;
  return McGenEventWrite_EtwWriteTransfer((__int64)v62, &EventUnitScsiDiagnostics, 0LL, 0x2Eu, &v66);
}
