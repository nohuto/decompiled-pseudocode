NTSTATUS __fastcall McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnn_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        const char *a14,
        const char *a15,
        const char *a16,
        char a17,
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
        char a35,
        char a36,
        char a37,
        char a38,
        int a39,
        __int64 a40,
        int a41,
        __int64 a42)
{
  const char *v42; // r9
  const char *v43; // rdx
  const char *v45; // r8
  __int64 v46; // rax
  __int64 v47; // rcx
  int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // eax
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v54; // [rsp+48h] [rbp-C0h]
  __int64 v55; // [rsp+50h] [rbp-B8h]
  char *v56; // [rsp+58h] [rbp-B0h]
  __int64 v57; // [rsp+60h] [rbp-A8h]
  char *v58; // [rsp+68h] [rbp-A0h]
  __int64 v59; // [rsp+70h] [rbp-98h]
  char *v60; // [rsp+78h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-88h]
  char *v62; // [rsp+88h] [rbp-80h]
  __int64 v63; // [rsp+90h] [rbp-78h]
  char *v64; // [rsp+98h] [rbp-70h]
  __int64 v65; // [rsp+A0h] [rbp-68h]
  char *v66; // [rsp+A8h] [rbp-60h]
  __int64 v67; // [rsp+B0h] [rbp-58h]
  char *v68; // [rsp+B8h] [rbp-50h]
  __int64 v69; // [rsp+C0h] [rbp-48h]
  char *v70; // [rsp+C8h] [rbp-40h]
  __int64 v71; // [rsp+D0h] [rbp-38h]
  char *v72; // [rsp+D8h] [rbp-30h]
  __int64 v73; // [rsp+E0h] [rbp-28h]
  const char *v74; // [rsp+E8h] [rbp-20h]
  int v75; // [rsp+F0h] [rbp-18h]
  int v76; // [rsp+F4h] [rbp-14h]
  const char *v77; // [rsp+F8h] [rbp-10h]
  int v78; // [rsp+100h] [rbp-8h]
  int v79; // [rsp+104h] [rbp-4h]
  const char *v80; // [rsp+108h] [rbp+0h]
  int v81; // [rsp+110h] [rbp+8h]
  int v82; // [rsp+114h] [rbp+Ch]
  char *v83; // [rsp+118h] [rbp+10h]
  __int64 v84; // [rsp+120h] [rbp+18h]
  char *v85; // [rsp+128h] [rbp+20h]
  __int64 v86; // [rsp+130h] [rbp+28h]
  char *v87; // [rsp+138h] [rbp+30h]
  __int64 v88; // [rsp+140h] [rbp+38h]
  char *v89; // [rsp+148h] [rbp+40h]
  __int64 v90; // [rsp+150h] [rbp+48h]
  char *v91; // [rsp+158h] [rbp+50h]
  __int64 v92; // [rsp+160h] [rbp+58h]
  char *v93; // [rsp+168h] [rbp+60h]
  __int64 v94; // [rsp+170h] [rbp+68h]
  char *v95; // [rsp+178h] [rbp+70h]
  __int64 v96; // [rsp+180h] [rbp+78h]
  char *v97; // [rsp+188h] [rbp+80h]
  __int64 v98; // [rsp+190h] [rbp+88h]
  char *v99; // [rsp+198h] [rbp+90h]
  __int64 v100; // [rsp+1A0h] [rbp+98h]
  char *v101; // [rsp+1A8h] [rbp+A0h]
  __int64 v102; // [rsp+1B0h] [rbp+A8h]
  char *v103; // [rsp+1B8h] [rbp+B0h]
  __int64 v104; // [rsp+1C0h] [rbp+B8h]
  char *v105; // [rsp+1C8h] [rbp+C0h]
  __int64 v106; // [rsp+1D0h] [rbp+C8h]
  char *v107; // [rsp+1D8h] [rbp+D0h]
  __int64 v108; // [rsp+1E0h] [rbp+D8h]
  char *v109; // [rsp+1E8h] [rbp+E0h]
  __int64 v110; // [rsp+1F0h] [rbp+E8h]
  char *v111; // [rsp+1F8h] [rbp+F0h]
  __int64 v112; // [rsp+200h] [rbp+F8h]
  char *v113; // [rsp+208h] [rbp+100h]
  __int64 v114; // [rsp+210h] [rbp+108h]
  char *v115; // [rsp+218h] [rbp+110h]
  __int64 v116; // [rsp+220h] [rbp+118h]
  char *v117; // [rsp+228h] [rbp+120h]
  __int64 v118; // [rsp+230h] [rbp+128h]
  char *v119; // [rsp+238h] [rbp+130h]
  __int64 v120; // [rsp+240h] [rbp+138h]
  char *v121; // [rsp+248h] [rbp+140h]
  __int64 v122; // [rsp+250h] [rbp+148h]
  char *v123; // [rsp+258h] [rbp+150h]
  __int64 v124; // [rsp+260h] [rbp+158h]
  char *v125; // [rsp+268h] [rbp+160h]
  __int64 v126; // [rsp+270h] [rbp+168h]
  __int64 v127; // [rsp+278h] [rbp+170h]
  __int64 v128; // [rsp+280h] [rbp+178h]
  __int64 v129; // [rsp+288h] [rbp+180h]
  __int64 v130; // [rsp+290h] [rbp+188h]
  __int64 v131; // [rsp+2D0h] [rbp+1C8h] BYREF

  v131 = a4;
  v42 = a16;
  v43 = a15;
  v45 = a14;
  v54 = &v131;
  v56 = &a5;
  v58 = &a6;
  v60 = &a7;
  v62 = &a8;
  v64 = &a9;
  v66 = &a10;
  v68 = &a11;
  v70 = &a12;
  v72 = &a13;
  v46 = -1LL;
  v55 = 8LL;
  v57 = 4LL;
  v59 = 1LL;
  v61 = 1LL;
  v63 = 4LL;
  v65 = 4LL;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  if ( a14 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( a14[v47] );
    v48 = v47 + 1;
  }
  else
  {
    v48 = 5;
  }
  v75 = v48;
  v76 = 0;
  if ( !a14 )
    v45 = "NULL";
  v74 = v45;
  if ( a15 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( a15[v49] );
    v50 = (unsigned int)(v49 + 1);
  }
  else
  {
    v50 = 5LL;
  }
  v78 = v50;
  v79 = 0;
  if ( !a15 )
    v43 = "NULL";
  v77 = v43;
  if ( a16 )
  {
    do
      ++v46;
    while ( a16[v46] );
    v51 = v46 + 1;
  }
  else
  {
    v51 = 5;
  }
  v81 = v51;
  v82 = 0;
  v83 = &a17;
  if ( !a16 )
    v42 = "NULL";
  v80 = v42;
  v85 = &a18;
  v84 = 8LL;
  v87 = &a19;
  v86 = 4LL;
  v89 = &a20;
  v91 = &a21;
  v93 = &a22;
  v95 = &a23;
  v97 = &a24;
  v99 = &a25;
  v101 = &a26;
  v103 = &a27;
  v105 = &a28;
  v107 = &a29;
  v109 = &a30;
  v111 = &a31;
  v113 = &a32;
  v115 = &a33;
  v117 = &a34;
  v119 = &a35;
  v121 = &a36;
  v123 = &a37;
  v125 = &a38;
  v127 = a40;
  v129 = a42;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 8LL;
  v106 = 8LL;
  v108 = 4LL;
  v110 = 4LL;
  v112 = 4LL;
  v114 = 4LL;
  v116 = 4LL;
  v118 = 4LL;
  v120 = 4LL;
  v122 = 4LL;
  v124 = 4LL;
  v126 = 4LL;
  v128 = 96LL;
  v130 = 64LL;
  return McGenEventWrite_EtwWriteTransfer(v50, &USBXHCI_ETW_EVENT_RUNDOWN_CONTROLLER_INFORMATION_V5, a3, 0x26u, &v53);
}
