/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U_tlgWrapperBinary@@U5@U5@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U5@U2@U?$_tlgWrapSz@G@@U6@U?$_tlgWrapperByVal@$00@@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U5@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@44AEBU?$_tlgWrapperByVal@$07@@5AEBU_tlgWrapperBinary@@7744444444444444444474AEBU?$_tlgWrapSz@G@@8AEBU?$_tlgWrapperByVal@$00@@3444444444747@Z @ 0x1C005E070
 * Callers:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0182398 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00213AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned __int16 **a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        unsigned __int16 **a15,
        __int64 *a16,
        __int64 *a17,
        __int64 *a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
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
        __int64 *a37,
        __int64 a38,
        void **a39,
        void **a40,
        __int64 a41,
        __int64 a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        __int64 a46,
        __int64 a47,
        __int64 a48,
        __int64 a49,
        __int64 a50,
        __int64 a51,
        __int64 *a52,
        __int64 a53,
        __int64 *a54)
{
  __int64 v56; // rcx
  _WORD *v57; // rdx
  __int64 v58; // rax
  int v59; // r8d
  _WORD *v60; // rdx
  int v61; // eax
  int v62; // ecx
  unsigned __int16 *v63; // rax
  int v64; // ecx
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B0h]
  __int64 v68; // [rsp+58h] [rbp-A8h]
  __int64 v69; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+68h] [rbp-98h]
  __int64 v71; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h]
  __int64 v73; // [rsp+80h] [rbp-80h]
  __int64 v74; // [rsp+88h] [rbp-78h]
  __int64 v75; // [rsp+90h] [rbp-70h]
  __int64 v76; // [rsp+98h] [rbp-68h]
  __int64 v77; // [rsp+A0h] [rbp-60h]
  __int64 v78; // [rsp+A8h] [rbp-58h]
  _DWORD *v79; // [rsp+B0h] [rbp-50h]
  __int64 v80; // [rsp+B8h] [rbp-48h]
  __int64 v81; // [rsp+C0h] [rbp-40h]
  _DWORD v82[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v83; // [rsp+D0h] [rbp-30h]
  __int64 v84; // [rsp+D8h] [rbp-28h]
  __int64 v85; // [rsp+E0h] [rbp-20h]
  __int64 v86; // [rsp+E8h] [rbp-18h]
  __int64 v87; // [rsp+F0h] [rbp-10h]
  __int64 v88; // [rsp+F8h] [rbp-8h]
  _DWORD *v89; // [rsp+100h] [rbp+0h]
  __int64 v90; // [rsp+108h] [rbp+8h]
  __int64 v91; // [rsp+110h] [rbp+10h]
  _DWORD v92[2]; // [rsp+118h] [rbp+18h] BYREF
  _DWORD *v93; // [rsp+120h] [rbp+20h]
  __int64 v94; // [rsp+128h] [rbp+28h]
  __int64 v95; // [rsp+130h] [rbp+30h]
  _DWORD v96[2]; // [rsp+138h] [rbp+38h] BYREF
  _DWORD *v97; // [rsp+140h] [rbp+40h]
  __int64 v98; // [rsp+148h] [rbp+48h]
  __int64 v99; // [rsp+150h] [rbp+50h]
  _DWORD v100[2]; // [rsp+158h] [rbp+58h] BYREF
  _DWORD *v101; // [rsp+160h] [rbp+60h]
  __int64 v102; // [rsp+168h] [rbp+68h]
  __int64 v103; // [rsp+170h] [rbp+70h]
  _DWORD v104[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v105; // [rsp+180h] [rbp+80h]
  __int64 v106; // [rsp+188h] [rbp+88h]
  __int64 v107; // [rsp+190h] [rbp+90h]
  __int64 v108; // [rsp+198h] [rbp+98h]
  __int64 v109; // [rsp+1A0h] [rbp+A0h]
  __int64 v110; // [rsp+1A8h] [rbp+A8h]
  __int64 v111; // [rsp+1B0h] [rbp+B0h]
  __int64 v112; // [rsp+1B8h] [rbp+B8h]
  __int64 v113; // [rsp+1C0h] [rbp+C0h]
  __int64 v114; // [rsp+1C8h] [rbp+C8h]
  __int64 v115; // [rsp+1D0h] [rbp+D0h]
  __int64 v116; // [rsp+1D8h] [rbp+D8h]
  __int64 v117; // [rsp+1E0h] [rbp+E0h]
  __int64 v118; // [rsp+1E8h] [rbp+E8h]
  __int64 v119; // [rsp+1F0h] [rbp+F0h]
  __int64 v120; // [rsp+1F8h] [rbp+F8h]
  __int64 v121; // [rsp+200h] [rbp+100h]
  __int64 v122; // [rsp+208h] [rbp+108h]
  __int64 v123; // [rsp+210h] [rbp+110h]
  __int64 v124; // [rsp+218h] [rbp+118h]
  __int64 v125; // [rsp+220h] [rbp+120h]
  __int64 v126; // [rsp+228h] [rbp+128h]
  __int64 v127; // [rsp+230h] [rbp+130h]
  __int64 v128; // [rsp+238h] [rbp+138h]
  __int64 v129; // [rsp+240h] [rbp+140h]
  __int64 v130; // [rsp+248h] [rbp+148h]
  __int64 v131; // [rsp+250h] [rbp+150h]
  __int64 v132; // [rsp+258h] [rbp+158h]
  __int64 v133; // [rsp+260h] [rbp+160h]
  __int64 v134; // [rsp+268h] [rbp+168h]
  __int64 v135; // [rsp+270h] [rbp+170h]
  __int64 v136; // [rsp+278h] [rbp+178h]
  __int64 v137; // [rsp+280h] [rbp+180h]
  __int64 v138; // [rsp+288h] [rbp+188h]
  __int64 v139; // [rsp+290h] [rbp+190h]
  __int64 v140; // [rsp+298h] [rbp+198h]
  _DWORD *v141; // [rsp+2A0h] [rbp+1A0h]
  __int64 v142; // [rsp+2A8h] [rbp+1A8h]
  __int64 v143; // [rsp+2B0h] [rbp+1B0h]
  _DWORD v144[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v145; // [rsp+2C0h] [rbp+1C0h]
  __int64 v146; // [rsp+2C8h] [rbp+1C8h]
  _WORD *v147; // [rsp+2D0h] [rbp+1D0h]
  int v148; // [rsp+2D8h] [rbp+1D8h]
  int v149; // [rsp+2DCh] [rbp+1DCh]
  _WORD *v150; // [rsp+2E0h] [rbp+1E0h]
  int v151; // [rsp+2E8h] [rbp+1E8h]
  int v152; // [rsp+2ECh] [rbp+1ECh]
  __int64 v153; // [rsp+2F0h] [rbp+1F0h]
  __int64 v154; // [rsp+2F8h] [rbp+1F8h]
  __int64 v155; // [rsp+300h] [rbp+200h]
  __int64 v156; // [rsp+308h] [rbp+208h]
  __int64 v157; // [rsp+310h] [rbp+210h]
  __int64 v158; // [rsp+318h] [rbp+218h]
  __int64 v159; // [rsp+320h] [rbp+220h]
  __int64 v160; // [rsp+328h] [rbp+228h]
  __int64 v161; // [rsp+330h] [rbp+230h]
  __int64 v162; // [rsp+338h] [rbp+238h]
  __int64 v163; // [rsp+340h] [rbp+240h]
  __int64 v164; // [rsp+348h] [rbp+248h]
  __int64 v165; // [rsp+350h] [rbp+250h]
  __int64 v166; // [rsp+358h] [rbp+258h]
  __int64 v167; // [rsp+360h] [rbp+260h]
  __int64 v168; // [rsp+368h] [rbp+268h]
  __int64 v169; // [rsp+370h] [rbp+270h]
  __int64 v170; // [rsp+378h] [rbp+278h]
  __int64 v171; // [rsp+380h] [rbp+280h]
  __int64 v172; // [rsp+388h] [rbp+288h]
  __int64 v173; // [rsp+390h] [rbp+290h]
  __int64 v174; // [rsp+398h] [rbp+298h]
  _DWORD *v175; // [rsp+3A0h] [rbp+2A0h]
  __int64 v176; // [rsp+3A8h] [rbp+2A8h]
  __int64 v177; // [rsp+3B0h] [rbp+2B0h]
  _DWORD v178[2]; // [rsp+3B8h] [rbp+2B8h] BYREF
  __int64 v179; // [rsp+3C0h] [rbp+2C0h]
  __int64 v180; // [rsp+3C8h] [rbp+2C8h]
  _DWORD *v181; // [rsp+3D0h] [rbp+2D0h]
  __int64 v182; // [rsp+3D8h] [rbp+2D8h]
  __int64 v183; // [rsp+3E0h] [rbp+2E0h]
  _DWORD v184[2]; // [rsp+3E8h] [rbp+2E8h] BYREF

  v181 = v184;
  v184[1] = 0;
  v182 = 2LL;
  v183 = *a54;
  v184[0] = *((unsigned __int16 *)a54 + 4);
  v179 = a53;
  v175 = v178;
  v177 = *a52;
  v56 = -1LL;
  v178[0] = *((unsigned __int16 *)a52 + 4);
  v173 = a51;
  v171 = a50;
  v169 = a49;
  v167 = a48;
  v165 = a47;
  v163 = a46;
  v161 = a45;
  v159 = a44;
  v157 = a43;
  v155 = a42;
  v153 = a41;
  v180 = 4LL;
  v176 = 2LL;
  v178[1] = 0;
  v57 = *a40;
  v174 = 4LL;
  v172 = 4LL;
  v170 = 4LL;
  v168 = 4LL;
  v166 = 4LL;
  v164 = 4LL;
  v162 = 4LL;
  v160 = 4LL;
  v158 = 4LL;
  v156 = 2LL;
  v154 = 1LL;
  if ( v57 )
  {
    v58 = -1LL;
    do
      ++v58;
    while ( v57[v58] );
    v59 = 2 * v58 + 2;
  }
  else
  {
    v57 = &unk_1C0083744;
    v59 = 2;
  }
  v150 = v57;
  v151 = v59;
  v152 = 0;
  v60 = *a39;
  if ( *a39 )
  {
    do
      ++v56;
    while ( v60[v56] );
    v61 = 2 * v56 + 2;
  }
  else
  {
    v60 = &unk_1C0083744;
    v61 = 2;
  }
  v148 = v61;
  v145 = a38;
  v141 = v144;
  v143 = *a37;
  v144[0] = *((unsigned __int16 *)a37 + 4);
  v139 = a36;
  v137 = a35;
  v135 = a34;
  v133 = a33;
  v131 = a32;
  v129 = a31;
  v127 = a30;
  v125 = a29;
  v123 = a28;
  v121 = a27;
  v119 = a26;
  v117 = a25;
  v115 = a24;
  v113 = a23;
  v111 = a22;
  v109 = a21;
  v107 = a20;
  v105 = a19;
  v101 = v104;
  v103 = *a18;
  v104[0] = *((unsigned __int16 *)a18 + 4);
  v97 = v100;
  v147 = v60;
  v149 = 0;
  v146 = 4LL;
  v142 = 2LL;
  v144[1] = 0;
  v140 = 4LL;
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
  v114 = 4LL;
  v112 = 4LL;
  v110 = 4LL;
  v108 = 4LL;
  v106 = 4LL;
  v102 = 2LL;
  v104[1] = 0;
  v98 = 2LL;
  v100[1] = 0;
  v94 = 2LL;
  v96[1] = 0;
  v99 = *a17;
  v100[0] = *((unsigned __int16 *)a17 + 4);
  v93 = v96;
  v90 = 2LL;
  v95 = *a16;
  v96[0] = *((unsigned __int16 *)a16 + 4);
  v89 = v92;
  v62 = **a15;
  v91 = *((_QWORD *)*a15 + 1);
  v87 = a14;
  v85 = a13;
  v83 = a12;
  v79 = v82;
  v92[0] = v62;
  v92[1] = 0;
  v88 = 8LL;
  v63 = *a11;
  v86 = 4LL;
  v84 = 4LL;
  v80 = 2LL;
  v64 = *v63;
  v81 = *((_QWORD *)v63 + 1);
  v77 = a10;
  v75 = a9;
  v73 = a8;
  v71 = a7;
  v69 = a6;
  v67 = a5;
  v82[0] = v64;
  v82[1] = 0;
  v78 = 4LL;
  v76 = 4LL;
  v74 = 4LL;
  v72 = 4LL;
  v70 = 4LL;
  v68 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00B1A90, a2, a3, 0LL, 0x3Cu, &v66);
}
