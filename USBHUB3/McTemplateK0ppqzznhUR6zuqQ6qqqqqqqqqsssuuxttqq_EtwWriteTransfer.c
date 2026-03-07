NTSTATUS __fastcall McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        int a9,
        __int64 a10,
        unsigned __int16 a11,
        __int64 a12,
        const wchar_t *a13,
        char a14,
        char a15,
        __int64 a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        const char *a26,
        const char *a27,
        const char *a28,
        char a29,
        char a30,
        char a31,
        char a32,
        char a33,
        char a34,
        char a35)
{
  __int64 v36; // rcx
  int v38; // r8d
  __int64 v39; // rax
  int v40; // r9d
  const wchar_t *v41; // r10
  const wchar_t *v42; // rax
  __int64 v43; // rax
  int v44; // r9d
  const wchar_t *v45; // rax
  bool v46; // zf
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // edx
  const char *v50; // r9
  const char *v51; // rax
  __int64 v52; // rdx
  int v53; // edx
  const char *v54; // rax
  __int64 v55; // rcx
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v58; // [rsp+40h] [rbp-C0h]
  __int64 v59; // [rsp+48h] [rbp-B8h]
  char *v60; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  char *v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  const wchar_t *v64; // [rsp+70h] [rbp-90h]
  int v65; // [rsp+78h] [rbp-88h]
  int v66; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v67; // [rsp+80h] [rbp-80h]
  int v68; // [rsp+88h] [rbp-78h]
  int v69; // [rsp+8Ch] [rbp-74h]
  __int64 v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v72; // [rsp+A0h] [rbp-60h]
  __int64 v73; // [rsp+A8h] [rbp-58h]
  __int64 v74; // [rsp+B0h] [rbp-50h]
  int v75; // [rsp+B8h] [rbp-48h]
  int v76; // [rsp+BCh] [rbp-44h]
  const wchar_t *v77; // [rsp+C0h] [rbp-40h]
  int v78; // [rsp+C8h] [rbp-38h]
  int v79; // [rsp+CCh] [rbp-34h]
  char *v80; // [rsp+D0h] [rbp-30h]
  __int64 v81; // [rsp+D8h] [rbp-28h]
  char *v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  char *v86; // [rsp+100h] [rbp+0h]
  __int64 v87; // [rsp+108h] [rbp+8h]
  char *v88; // [rsp+110h] [rbp+10h]
  __int64 v89; // [rsp+118h] [rbp+18h]
  char *v90; // [rsp+120h] [rbp+20h]
  __int64 v91; // [rsp+128h] [rbp+28h]
  char *v92; // [rsp+130h] [rbp+30h]
  __int64 v93; // [rsp+138h] [rbp+38h]
  char *v94; // [rsp+140h] [rbp+40h]
  __int64 v95; // [rsp+148h] [rbp+48h]
  char *v96; // [rsp+150h] [rbp+50h]
  __int64 v97; // [rsp+158h] [rbp+58h]
  char *v98; // [rsp+160h] [rbp+60h]
  __int64 v99; // [rsp+168h] [rbp+68h]
  char *v100; // [rsp+170h] [rbp+70h]
  __int64 v101; // [rsp+178h] [rbp+78h]
  char *v102; // [rsp+180h] [rbp+80h]
  __int64 v103; // [rsp+188h] [rbp+88h]
  const char *v104; // [rsp+190h] [rbp+90h]
  int v105; // [rsp+198h] [rbp+98h]
  int v106; // [rsp+19Ch] [rbp+9Ch]
  const char *v107; // [rsp+1A0h] [rbp+A0h]
  int v108; // [rsp+1A8h] [rbp+A8h]
  int v109; // [rsp+1ACh] [rbp+ACh]
  const char *v110; // [rsp+1B0h] [rbp+B0h]
  int v111; // [rsp+1B8h] [rbp+B8h]
  int v112; // [rsp+1BCh] [rbp+BCh]
  char *v113; // [rsp+1C0h] [rbp+C0h]
  __int64 v114; // [rsp+1C8h] [rbp+C8h]
  char *v115; // [rsp+1D0h] [rbp+D0h]
  __int64 v116; // [rsp+1D8h] [rbp+D8h]
  char *v117; // [rsp+1E0h] [rbp+E0h]
  __int64 v118; // [rsp+1E8h] [rbp+E8h]
  char *v119; // [rsp+1F0h] [rbp+F0h]
  __int64 v120; // [rsp+1F8h] [rbp+F8h]
  char *v121; // [rsp+200h] [rbp+100h]
  __int64 v122; // [rsp+208h] [rbp+108h]
  char *v123; // [rsp+210h] [rbp+110h]
  __int64 v124; // [rsp+218h] [rbp+118h]
  char *v125; // [rsp+220h] [rbp+120h]
  __int64 v126; // [rsp+228h] [rbp+128h]
  __int64 v127; // [rsp+278h] [rbp+178h] BYREF

  v127 = a4;
  v59 = 8LL;
  v58 = &v127;
  v61 = 8LL;
  v60 = &a5;
  v36 = -1LL;
  v62 = &a6;
  v63 = 4LL;
  v38 = 10;
  if ( a7 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a7[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v40 = 10;
  }
  v65 = v40;
  v41 = L"NULL";
  v66 = 0;
  v42 = L"NULL";
  if ( a7 )
    v42 = a7;
  v64 = v42;
  if ( a8 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( a8[v43] );
    v44 = 2 * v43 + 2;
  }
  else
  {
    v44 = 10;
  }
  v68 = v44;
  v45 = L"NULL";
  v69 = 0;
  if ( a8 )
    v45 = a8;
  v71 = 18LL;
  v67 = v45;
  v70 = a10;
  v72 = &a11;
  v74 = a12;
  v75 = a11;
  v73 = 2LL;
  v76 = 0;
  v46 = a13 == 0LL;
  if ( a13 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( a13[v47] );
    v38 = 2 * v47 + 2;
    v46 = a13 == 0LL;
  }
  if ( !v46 )
    v41 = a13;
  v78 = v38;
  v80 = &a14;
  v82 = &a15;
  v84 = a16;
  v86 = &a17;
  v88 = &a18;
  v90 = &a19;
  v92 = &a20;
  v94 = &a21;
  v96 = &a22;
  v98 = &a23;
  v100 = &a24;
  v77 = v41;
  v102 = &a25;
  v79 = 0;
  v81 = 1LL;
  v83 = 4LL;
  v85 = 24LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v93 = 4LL;
  v95 = 4LL;
  v97 = 4LL;
  v99 = 4LL;
  v101 = 4LL;
  v103 = 4LL;
  if ( a26 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( a26[v48] );
    v49 = v48 + 1;
  }
  else
  {
    v49 = 5;
  }
  v105 = v49;
  v50 = "NULL";
  v106 = 0;
  v51 = "NULL";
  if ( a26 )
    v51 = a26;
  v104 = v51;
  if ( a27 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( a27[v52] );
    v53 = v52 + 1;
  }
  else
  {
    v53 = 5;
  }
  v108 = v53;
  v54 = "NULL";
  v109 = 0;
  if ( a27 )
    v54 = a27;
  v107 = v54;
  if ( a28 )
  {
    do
      ++v36;
    while ( a28[v36] );
    v55 = (unsigned int)(v36 + 1);
  }
  else
  {
    v55 = 5LL;
  }
  v111 = v55;
  v112 = 0;
  if ( a28 )
    v50 = a28;
  v114 = 1LL;
  v110 = v50;
  v113 = &a29;
  v116 = 1LL;
  v115 = &a30;
  v118 = 8LL;
  v117 = &a31;
  v119 = &a32;
  v121 = &a33;
  v123 = &a34;
  v125 = &a35;
  v120 = 4LL;
  v122 = 4LL;
  v124 = 4LL;
  v126 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v55, a2, a3, 0x20u, &v57);
}
