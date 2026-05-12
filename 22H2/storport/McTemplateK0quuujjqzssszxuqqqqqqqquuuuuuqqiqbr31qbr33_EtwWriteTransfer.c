/*
 * XREFs of McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer @ 0x1C000CCA8
 * Callers:
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C00032C4 (StorpTelemetrySendUnitErrorDataSummary.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DBF4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10,
        const wchar_t *a11,
        const char *a12,
        const char *a13,
        const char *a14,
        const wchar_t *a15,
        __int64 a16,
        __int64 a17,
        char a18,
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
        char a33,
        char a34,
        int a35,
        __int64 a36,
        int a37,
        __int64 a38)
{
  const wchar_t *v38; // rcx
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // r8d
  const char *v43; // rdx
  __int64 v44; // rcx
  int v45; // ecx
  const char *v46; // rdx
  __int64 v47; // rcx
  int v48; // ecx
  const char *v49; // rdx
  __int64 v50; // rcx
  int v51; // ecx
  const wchar_t *v52; // rcx
  bool v53; // zf
  __int64 v55; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v56; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v57[16]; // [rsp+48h] [rbp-C0h] BYREF
  int *v58; // [rsp+58h] [rbp-B0h]
  __int64 v59; // [rsp+60h] [rbp-A8h]
  char *v60; // [rsp+68h] [rbp-A0h]
  __int64 v61; // [rsp+70h] [rbp-98h]
  char *v62; // [rsp+78h] [rbp-90h]
  __int64 v63; // [rsp+80h] [rbp-88h]
  char *v64; // [rsp+88h] [rbp-80h]
  __int64 v65; // [rsp+90h] [rbp-78h]
  __int64 v66; // [rsp+98h] [rbp-70h]
  __int64 v67; // [rsp+A0h] [rbp-68h]
  __int64 v68; // [rsp+A8h] [rbp-60h]
  __int64 v69; // [rsp+B0h] [rbp-58h]
  char *v70; // [rsp+B8h] [rbp-50h]
  __int64 v71; // [rsp+C0h] [rbp-48h]
  const wchar_t *v72; // [rsp+C8h] [rbp-40h]
  int v73; // [rsp+D0h] [rbp-38h]
  int v74; // [rsp+D4h] [rbp-34h]
  const char *v75; // [rsp+D8h] [rbp-30h]
  int v76; // [rsp+E0h] [rbp-28h]
  int v77; // [rsp+E4h] [rbp-24h]
  const char *v78; // [rsp+E8h] [rbp-20h]
  int v79; // [rsp+F0h] [rbp-18h]
  int v80; // [rsp+F4h] [rbp-14h]
  const char *v81; // [rsp+F8h] [rbp-10h]
  int v82; // [rsp+100h] [rbp-8h]
  int v83; // [rsp+104h] [rbp-4h]
  const wchar_t *v84; // [rsp+108h] [rbp+0h]
  int v85; // [rsp+110h] [rbp+8h]
  int v86; // [rsp+114h] [rbp+Ch]
  __int64 *v87; // [rsp+118h] [rbp+10h]
  __int64 v88; // [rsp+120h] [rbp+18h]
  __int64 *v89; // [rsp+128h] [rbp+20h]
  __int64 v90; // [rsp+130h] [rbp+28h]
  char *v91; // [rsp+138h] [rbp+30h]
  __int64 v92; // [rsp+140h] [rbp+38h]
  char *v93; // [rsp+148h] [rbp+40h]
  __int64 v94; // [rsp+150h] [rbp+48h]
  char *v95; // [rsp+158h] [rbp+50h]
  __int64 v96; // [rsp+160h] [rbp+58h]
  char *v97; // [rsp+168h] [rbp+60h]
  __int64 v98; // [rsp+170h] [rbp+68h]
  char *v99; // [rsp+178h] [rbp+70h]
  __int64 v100; // [rsp+180h] [rbp+78h]
  char *v101; // [rsp+188h] [rbp+80h]
  __int64 v102; // [rsp+190h] [rbp+88h]
  char *v103; // [rsp+198h] [rbp+90h]
  __int64 v104; // [rsp+1A0h] [rbp+98h]
  char *v105; // [rsp+1A8h] [rbp+A0h]
  __int64 v106; // [rsp+1B0h] [rbp+A8h]
  char *v107; // [rsp+1B8h] [rbp+B0h]
  __int64 v108; // [rsp+1C0h] [rbp+B8h]
  char *v109; // [rsp+1C8h] [rbp+C0h]
  __int64 v110; // [rsp+1D0h] [rbp+C8h]
  char *v111; // [rsp+1D8h] [rbp+D0h]
  __int64 v112; // [rsp+1E0h] [rbp+D8h]
  char *v113; // [rsp+1E8h] [rbp+E0h]
  __int64 v114; // [rsp+1F0h] [rbp+E8h]
  char *v115; // [rsp+1F8h] [rbp+F0h]
  __int64 v116; // [rsp+200h] [rbp+F8h]
  char *v117; // [rsp+208h] [rbp+100h]
  __int64 v118; // [rsp+210h] [rbp+108h]
  char *v119; // [rsp+218h] [rbp+110h]
  __int64 v120; // [rsp+220h] [rbp+118h]
  char *v121; // [rsp+228h] [rbp+120h]
  __int64 v122; // [rsp+230h] [rbp+128h]
  char *v123; // [rsp+238h] [rbp+130h]
  __int64 v124; // [rsp+240h] [rbp+138h]
  int *v125; // [rsp+248h] [rbp+140h]
  __int64 v126; // [rsp+250h] [rbp+148h]
  __int64 v127; // [rsp+258h] [rbp+150h]
  int v128; // [rsp+260h] [rbp+158h]
  int v129; // [rsp+264h] [rbp+15Ch]
  int *v130; // [rsp+268h] [rbp+160h]
  __int64 v131; // [rsp+270h] [rbp+168h]
  __int64 v132; // [rsp+278h] [rbp+170h]
  int v133; // [rsp+280h] [rbp+178h]
  int v134; // [rsp+284h] [rbp+17Ch]
  int v135; // [rsp+2C0h] [rbp+1B8h] BYREF

  v135 = a4;
  v38 = a11;
  v56 = *(_QWORD *)&g_SystemUptime_s;
  v58 = &v135;
  v60 = &a5;
  LOBYTE(v55) = 5;
  v62 = &a6;
  v39 = 10;
  v59 = 4LL;
  v64 = &a7;
  v66 = a8;
  v68 = a9;
  v70 = &a10;
  v40 = -1LL;
  v61 = 1LL;
  v63 = 1LL;
  v65 = 1LL;
  v67 = 16LL;
  v69 = 16LL;
  v71 = 4LL;
  if ( a11 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( a11[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v42 = 10;
  }
  v43 = a12;
  v73 = v42;
  v74 = 0;
  if ( !a11 )
    v38 = L"NULL";
  v72 = v38;
  if ( a12 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( a12[v44] );
    v45 = v44 + 1;
  }
  else
  {
    v45 = 5;
  }
  v76 = v45;
  v77 = 0;
  if ( !a12 )
    v43 = "NULL";
  v75 = v43;
  v46 = a13;
  if ( a13 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( a13[v47] );
    v48 = v47 + 1;
  }
  else
  {
    v48 = 5;
  }
  v79 = v48;
  v80 = 0;
  if ( !a13 )
    v46 = "NULL";
  v78 = v46;
  v49 = a14;
  if ( a14 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( a14[v50] );
    v51 = v50 + 1;
  }
  else
  {
    v51 = 5;
  }
  v82 = v51;
  v52 = a15;
  if ( !a14 )
    v49 = "NULL";
  v83 = 0;
  v81 = v49;
  v53 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v40;
    while ( a15[v40] );
    v39 = 2 * v40 + 2;
    v53 = a15 == 0LL;
  }
  v85 = v39;
  v87 = &v56;
  if ( v53 )
    v52 = L"NULL";
  v84 = v52;
  v89 = &v55;
  v86 = 0;
  v91 = &a18;
  v88 = 8LL;
  v93 = &a19;
  v95 = &a20;
  v97 = &a21;
  v99 = &a22;
  v101 = &a23;
  v103 = &a24;
  v105 = &a25;
  v107 = &a26;
  v109 = &a27;
  v111 = &a28;
  v113 = &a29;
  v115 = &a30;
  v117 = &a31;
  v119 = &a32;
  v121 = &a33;
  v123 = &a34;
  v125 = &a35;
  v127 = a36;
  v128 = a35;
  v130 = &a37;
  v132 = a38;
  v133 = a37;
  v90 = 1LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  v106 = 4LL;
  v108 = 1LL;
  v110 = 1LL;
  v112 = 1LL;
  v114 = 1LL;
  v116 = 1LL;
  v118 = 1LL;
  v120 = 4LL;
  v122 = 4LL;
  v124 = 8LL;
  v126 = 4LL;
  v129 = 0;
  v131 = 4LL;
  v134 = 0;
  return McGenEventWrite_EtwWriteTransfer(v52, &EventUnitErrorDataSummary, 0LL, 36LL, v57);
}
