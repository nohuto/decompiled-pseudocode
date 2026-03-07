NTSTATUS __fastcall McTemplateK0pqqqqqggqqqttqggqqqttqggqqqttqggqqqttqggqqqtt_EtwWriteTransfer(
        REGHANDLE *a1,
        __int64 a2,
        __int64 a3,
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
        char a14,
        char a15,
        char a16,
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
        char a39,
        char a40,
        char a41,
        char a42,
        char a43,
        char a44,
        char a45,
        char a46,
        char a47,
        char a48)
{
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v50; // [rsp+40h] [rbp-C0h]
  __int64 v51; // [rsp+48h] [rbp-B8h]
  char *v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  char *v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  char *v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  char *v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  char *v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  char *v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  char *v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  char *v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+C8h] [rbp-38h]
  char *v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  char *v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  char *v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  char *v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  char *v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  char *v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  char *v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+138h] [rbp+38h]
  char *v82; // [rsp+140h] [rbp+40h]
  __int64 v83; // [rsp+148h] [rbp+48h]
  char *v84; // [rsp+150h] [rbp+50h]
  __int64 v85; // [rsp+158h] [rbp+58h]
  char *v86; // [rsp+160h] [rbp+60h]
  __int64 v87; // [rsp+168h] [rbp+68h]
  char *v88; // [rsp+170h] [rbp+70h]
  __int64 v89; // [rsp+178h] [rbp+78h]
  char *v90; // [rsp+180h] [rbp+80h]
  __int64 v91; // [rsp+188h] [rbp+88h]
  char *v92; // [rsp+190h] [rbp+90h]
  __int64 v93; // [rsp+198h] [rbp+98h]
  char *v94; // [rsp+1A0h] [rbp+A0h]
  __int64 v95; // [rsp+1A8h] [rbp+A8h]
  char *v96; // [rsp+1B0h] [rbp+B0h]
  __int64 v97; // [rsp+1B8h] [rbp+B8h]
  char *v98; // [rsp+1C0h] [rbp+C0h]
  __int64 v99; // [rsp+1C8h] [rbp+C8h]
  char *v100; // [rsp+1D0h] [rbp+D0h]
  __int64 v101; // [rsp+1D8h] [rbp+D8h]
  char *v102; // [rsp+1E0h] [rbp+E0h]
  __int64 v103; // [rsp+1E8h] [rbp+E8h]
  char *v104; // [rsp+1F0h] [rbp+F0h]
  __int64 v105; // [rsp+1F8h] [rbp+F8h]
  char *v106; // [rsp+200h] [rbp+100h]
  __int64 v107; // [rsp+208h] [rbp+108h]
  char *v108; // [rsp+210h] [rbp+110h]
  __int64 v109; // [rsp+218h] [rbp+118h]
  char *v110; // [rsp+220h] [rbp+120h]
  __int64 v111; // [rsp+228h] [rbp+128h]
  char *v112; // [rsp+230h] [rbp+130h]
  __int64 v113; // [rsp+238h] [rbp+138h]
  char *v114; // [rsp+240h] [rbp+140h]
  __int64 v115; // [rsp+248h] [rbp+148h]
  char *v116; // [rsp+250h] [rbp+150h]
  __int64 v117; // [rsp+258h] [rbp+158h]
  char *v118; // [rsp+260h] [rbp+160h]
  __int64 v119; // [rsp+268h] [rbp+168h]
  char *v120; // [rsp+270h] [rbp+170h]
  __int64 v121; // [rsp+278h] [rbp+178h]
  char *v122; // [rsp+280h] [rbp+180h]
  __int64 v123; // [rsp+288h] [rbp+188h]
  char *v124; // [rsp+290h] [rbp+190h]
  __int64 v125; // [rsp+298h] [rbp+198h]
  char *v126; // [rsp+2A0h] [rbp+1A0h]
  __int64 v127; // [rsp+2A8h] [rbp+1A8h]
  char *v128; // [rsp+2B0h] [rbp+1B0h]
  __int64 v129; // [rsp+2B8h] [rbp+1B8h]
  char *v130; // [rsp+2C0h] [rbp+1C0h]
  __int64 v131; // [rsp+2C8h] [rbp+1C8h]
  char *v132; // [rsp+2D0h] [rbp+1D0h]
  __int64 v133; // [rsp+2D8h] [rbp+1D8h]
  char *v134; // [rsp+2E0h] [rbp+1E0h]
  __int64 v135; // [rsp+2E8h] [rbp+1E8h]
  char *v136; // [rsp+2F0h] [rbp+1F0h]
  __int64 v137; // [rsp+2F8h] [rbp+1F8h]
  char *v138; // [rsp+300h] [rbp+200h]
  __int64 v139; // [rsp+308h] [rbp+208h]
  __int64 v140; // [rsp+348h] [rbp+248h] BYREF

  v140 = a4;
  v51 = 8LL;
  v50 = &v140;
  v52 = &a5;
  v54 = &a6;
  v56 = &a7;
  v58 = &a8;
  v60 = &a9;
  v62 = &a10;
  v64 = &a11;
  v66 = &a12;
  v68 = &a13;
  v70 = &a14;
  v72 = &a15;
  v74 = &a16;
  v76 = &a17;
  v78 = &a18;
  v80 = &a19;
  v82 = &a20;
  v84 = &a21;
  v86 = &a22;
  v88 = &a23;
  v90 = &a24;
  v92 = &a25;
  v94 = &a26;
  v96 = &a27;
  v98 = &a28;
  v100 = &a29;
  v102 = &a30;
  v53 = 4LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 4LL;
  v61 = 4LL;
  v63 = 8LL;
  v65 = 8LL;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 8LL;
  v81 = 8LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v93 = 4LL;
  v95 = 8LL;
  v97 = 8LL;
  v99 = 4LL;
  v101 = 4LL;
  v103 = 4LL;
  v105 = 4LL;
  v104 = &a31;
  v107 = 4LL;
  v106 = &a32;
  v109 = 4LL;
  v108 = &a33;
  v110 = &a34;
  v112 = &a35;
  v114 = &a36;
  v116 = &a37;
  v118 = &a38;
  v120 = &a39;
  v122 = &a40;
  v124 = &a41;
  v126 = &a42;
  v128 = &a43;
  v130 = &a44;
  v132 = &a45;
  v134 = &a46;
  v136 = &a47;
  v138 = &a48;
  v111 = 8LL;
  v113 = 8LL;
  v115 = 4LL;
  v117 = 4LL;
  v119 = 4LL;
  v121 = 4LL;
  v123 = 4LL;
  v125 = 4LL;
  v127 = 8LL;
  v129 = 8LL;
  v131 = 4LL;
  v133 = 4LL;
  v135 = 4LL;
  v137 = 4LL;
  v139 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &EventTrackedWorkloadInternalMonitor, a3, 0x2Eu, &v49);
}
