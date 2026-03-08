/*
 * XREFs of McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1403CC590
 * Callers:
 *     CcPostVolumeTelemetry @ 0x1403CB4D0 (CcPostVolumeTelemetry.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
        __int64 a1,
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
        char a48,
        char a49,
        char a50,
        char a51,
        char a52,
        char a53)
{
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C0h]
  __int64 v56; // [rsp+48h] [rbp-B8h]
  char *v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h]
  char *v59; // [rsp+60h] [rbp-A0h]
  __int64 v60; // [rsp+68h] [rbp-98h]
  char *v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+78h] [rbp-88h]
  char *v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h]
  char *v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  char *v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  char *v69; // [rsp+B0h] [rbp-50h]
  __int64 v70; // [rsp+B8h] [rbp-48h]
  char *v71; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+C8h] [rbp-38h]
  char *v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  char *v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  char *v77; // [rsp+F0h] [rbp-10h]
  __int64 v78; // [rsp+F8h] [rbp-8h]
  char *v79; // [rsp+100h] [rbp+0h]
  __int64 v80; // [rsp+108h] [rbp+8h]
  char *v81; // [rsp+110h] [rbp+10h]
  __int64 v82; // [rsp+118h] [rbp+18h]
  char *v83; // [rsp+120h] [rbp+20h]
  __int64 v84; // [rsp+128h] [rbp+28h]
  char *v85; // [rsp+130h] [rbp+30h]
  __int64 v86; // [rsp+138h] [rbp+38h]
  char *v87; // [rsp+140h] [rbp+40h]
  __int64 v88; // [rsp+148h] [rbp+48h]
  char *v89; // [rsp+150h] [rbp+50h]
  __int64 v90; // [rsp+158h] [rbp+58h]
  char *v91; // [rsp+160h] [rbp+60h]
  __int64 v92; // [rsp+168h] [rbp+68h]
  char *v93; // [rsp+170h] [rbp+70h]
  __int64 v94; // [rsp+178h] [rbp+78h]
  char *v95; // [rsp+180h] [rbp+80h]
  __int64 v96; // [rsp+188h] [rbp+88h]
  char *v97; // [rsp+190h] [rbp+90h]
  __int64 v98; // [rsp+198h] [rbp+98h]
  char *v99; // [rsp+1A0h] [rbp+A0h]
  __int64 v100; // [rsp+1A8h] [rbp+A8h]
  char *v101; // [rsp+1B0h] [rbp+B0h]
  __int64 v102; // [rsp+1B8h] [rbp+B8h]
  char *v103; // [rsp+1C0h] [rbp+C0h]
  __int64 v104; // [rsp+1C8h] [rbp+C8h]
  char *v105; // [rsp+1D0h] [rbp+D0h]
  __int64 v106; // [rsp+1D8h] [rbp+D8h]
  char *v107; // [rsp+1E0h] [rbp+E0h]
  __int64 v108; // [rsp+1E8h] [rbp+E8h]
  char *v109; // [rsp+1F0h] [rbp+F0h]
  __int64 v110; // [rsp+1F8h] [rbp+F8h]
  char *v111; // [rsp+200h] [rbp+100h]
  __int64 v112; // [rsp+208h] [rbp+108h]
  char *v113; // [rsp+210h] [rbp+110h]
  __int64 v114; // [rsp+218h] [rbp+118h]
  char *v115; // [rsp+220h] [rbp+120h]
  __int64 v116; // [rsp+228h] [rbp+128h]
  char *v117; // [rsp+230h] [rbp+130h]
  __int64 v118; // [rsp+238h] [rbp+138h]
  char *v119; // [rsp+240h] [rbp+140h]
  __int64 v120; // [rsp+248h] [rbp+148h]
  char *v121; // [rsp+250h] [rbp+150h]
  __int64 v122; // [rsp+258h] [rbp+158h]
  char *v123; // [rsp+260h] [rbp+160h]
  __int64 v124; // [rsp+268h] [rbp+168h]
  char *v125; // [rsp+270h] [rbp+170h]
  __int64 v126; // [rsp+278h] [rbp+178h]
  char *v127; // [rsp+280h] [rbp+180h]
  __int64 v128; // [rsp+288h] [rbp+188h]
  char *v129; // [rsp+290h] [rbp+190h]
  __int64 v130; // [rsp+298h] [rbp+198h]
  char *v131; // [rsp+2A0h] [rbp+1A0h]
  __int64 v132; // [rsp+2A8h] [rbp+1A8h]
  char *v133; // [rsp+2B0h] [rbp+1B0h]
  __int64 v134; // [rsp+2B8h] [rbp+1B8h]
  char *v135; // [rsp+2C0h] [rbp+1C0h]
  __int64 v136; // [rsp+2C8h] [rbp+1C8h]
  char *v137; // [rsp+2D0h] [rbp+1D0h]
  __int64 v138; // [rsp+2D8h] [rbp+1D8h]
  char *v139; // [rsp+2E0h] [rbp+1E0h]
  __int64 v140; // [rsp+2E8h] [rbp+1E8h]
  char *v141; // [rsp+2F0h] [rbp+1F0h]
  __int64 v142; // [rsp+2F8h] [rbp+1F8h]
  char *v143; // [rsp+300h] [rbp+200h]
  __int64 v144; // [rsp+308h] [rbp+208h]
  char *v145; // [rsp+310h] [rbp+210h]
  __int64 v146; // [rsp+318h] [rbp+218h]
  char *v147; // [rsp+320h] [rbp+220h]
  __int64 v148; // [rsp+328h] [rbp+228h]
  char *v149; // [rsp+330h] [rbp+230h]
  __int64 v150; // [rsp+338h] [rbp+238h]
  char *v151; // [rsp+340h] [rbp+240h]
  __int64 v152; // [rsp+348h] [rbp+248h]
  char *v153; // [rsp+350h] [rbp+250h]
  __int64 v154; // [rsp+358h] [rbp+258h]

  v55 = a4;
  v57 = &a5;
  v59 = &a6;
  v61 = &a7;
  v63 = &a8;
  v65 = &a9;
  v67 = &a10;
  v69 = &a11;
  v71 = &a12;
  v73 = &a13;
  v75 = &a14;
  v77 = &a15;
  v79 = &a16;
  v81 = &a17;
  v83 = &a18;
  v85 = &a19;
  v87 = &a20;
  v89 = &a21;
  v91 = &a22;
  v93 = &a23;
  v95 = &a24;
  v97 = &a25;
  v99 = &a26;
  v101 = &a27;
  v103 = &a28;
  v105 = &a29;
  v107 = &a30;
  v56 = 16LL;
  v58 = 8LL;
  v60 = 8LL;
  v62 = 8LL;
  v64 = 8LL;
  v66 = 8LL;
  v68 = 8LL;
  v70 = 8LL;
  v72 = 8LL;
  v74 = 8LL;
  v76 = 8LL;
  v78 = 8LL;
  v80 = 8LL;
  v82 = 8LL;
  v84 = 8LL;
  v86 = 8LL;
  v88 = 8LL;
  v90 = 8LL;
  v92 = 8LL;
  v94 = 8LL;
  v96 = 8LL;
  v98 = 8LL;
  v100 = 8LL;
  v102 = 8LL;
  v104 = 8LL;
  v106 = 8LL;
  v108 = 8LL;
  v109 = &a31;
  v110 = 8LL;
  v111 = &a32;
  v112 = 8LL;
  v113 = &a33;
  v114 = 8LL;
  v115 = &a34;
  v116 = 8LL;
  v117 = &a35;
  v119 = &a36;
  v121 = &a37;
  v123 = &a38;
  v125 = &a39;
  v127 = &a40;
  v129 = &a41;
  v131 = &a42;
  v133 = &a43;
  v135 = &a44;
  v137 = &a45;
  v139 = &a46;
  v141 = &a47;
  v143 = &a48;
  v145 = &a49;
  v147 = &a50;
  v149 = &a51;
  v151 = &a52;
  v153 = &a53;
  v118 = 8LL;
  v120 = 8LL;
  v122 = 8LL;
  v124 = 8LL;
  v126 = 8LL;
  v128 = 8LL;
  v130 = 8LL;
  v132 = 8LL;
  v134 = 8LL;
  v136 = 8LL;
  v138 = 8LL;
  v140 = 8LL;
  v142 = 8LL;
  v144 = 8LL;
  v146 = 8LL;
  v148 = 8LL;
  v150 = 8LL;
  v152 = 8LL;
  v154 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelCc_Provider_Context,
           (const EVENT_DESCRIPTOR *)CcEvt_CacheVolumeWriteLatencies,
           0LL,
           0x33u,
           &v54);
}
