NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperArray<1>,_tlgWrapperArray<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a15,
        __int64 a16,
        _WORD **a17,
        __int64 a18,
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
        __int64 a50,
        unsigned __int16 **a51,
        unsigned __int16 **a52,
        unsigned __int16 **a53,
        unsigned __int16 **a54,
        unsigned __int16 **a55,
        __int64 a56,
        __int64 a57,
        __int64 a58,
        __int64 a59,
        unsigned __int16 **a60,
        __int64 *a61,
        __int64 a62,
        __int64 a63)
{
  unsigned __int16 **a64; // [rsp+768h] [rbp+668h]
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rax
  unsigned __int16 *v69; // rax
  _WORD *v70; // rdx
  unsigned __int16 *v71; // rax
  int v72; // ecx
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v75; // [rsp+50h] [rbp-B0h]
  __int64 v76; // [rsp+58h] [rbp-A8h]
  __int64 v77; // [rsp+60h] [rbp-A0h]
  __int64 v78; // [rsp+68h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-90h]
  __int64 v80; // [rsp+78h] [rbp-88h]
  __int64 v81; // [rsp+80h] [rbp-80h]
  __int64 v82; // [rsp+88h] [rbp-78h]
  __int64 v83; // [rsp+90h] [rbp-70h]
  __int64 v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h]
  __int64 v86; // [rsp+A8h] [rbp-58h]
  _DWORD *v87; // [rsp+B0h] [rbp-50h]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  __int64 v89; // [rsp+C0h] [rbp-40h]
  _DWORD v90[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v91; // [rsp+D0h] [rbp-30h]
  __int64 v92; // [rsp+D8h] [rbp-28h]
  __int64 v93; // [rsp+E0h] [rbp-20h]
  __int64 v94; // [rsp+E8h] [rbp-18h]
  __int64 v95; // [rsp+F0h] [rbp-10h]
  __int64 v96; // [rsp+F8h] [rbp-8h]
  __int64 v97; // [rsp+100h] [rbp+0h]
  __int64 v98; // [rsp+108h] [rbp+8h]
  __int64 v99; // [rsp+110h] [rbp+10h]
  __int64 v100; // [rsp+118h] [rbp+18h]
  char v101[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v102; // [rsp+130h] [rbp+30h]
  __int64 v103; // [rsp+138h] [rbp+38h]
  __int64 v104; // [rsp+140h] [rbp+40h]
  __int64 v105; // [rsp+148h] [rbp+48h]
  __int64 v106; // [rsp+150h] [rbp+50h]
  __int64 v107; // [rsp+158h] [rbp+58h]
  __int64 v108; // [rsp+160h] [rbp+60h]
  __int64 v109; // [rsp+168h] [rbp+68h]
  __int64 v110; // [rsp+170h] [rbp+70h]
  __int64 v111; // [rsp+178h] [rbp+78h]
  __int64 v112; // [rsp+180h] [rbp+80h]
  __int64 v113; // [rsp+188h] [rbp+88h]
  __int64 v114; // [rsp+190h] [rbp+90h]
  __int64 v115; // [rsp+198h] [rbp+98h]
  __int64 v116; // [rsp+1A0h] [rbp+A0h]
  __int64 v117; // [rsp+1A8h] [rbp+A8h]
  __int64 v118; // [rsp+1B0h] [rbp+B0h]
  __int64 v119; // [rsp+1B8h] [rbp+B8h]
  __int64 v120; // [rsp+1C0h] [rbp+C0h]
  __int64 v121; // [rsp+1C8h] [rbp+C8h]
  __int64 v122; // [rsp+1D0h] [rbp+D0h]
  __int64 v123; // [rsp+1D8h] [rbp+D8h]
  __int64 v124; // [rsp+1E0h] [rbp+E0h]
  __int64 v125; // [rsp+1E8h] [rbp+E8h]
  __int64 v126; // [rsp+1F0h] [rbp+F0h]
  __int64 v127; // [rsp+1F8h] [rbp+F8h]
  __int64 v128; // [rsp+200h] [rbp+100h]
  __int64 v129; // [rsp+208h] [rbp+108h]
  __int64 v130; // [rsp+210h] [rbp+110h]
  __int64 v131; // [rsp+218h] [rbp+118h]
  __int64 v132; // [rsp+220h] [rbp+120h]
  __int64 v133; // [rsp+228h] [rbp+128h]
  __int64 v134; // [rsp+230h] [rbp+130h]
  __int64 v135; // [rsp+238h] [rbp+138h]
  __int64 v136; // [rsp+240h] [rbp+140h]
  __int64 v137; // [rsp+248h] [rbp+148h]
  __int64 v138; // [rsp+250h] [rbp+150h]
  __int64 v139; // [rsp+258h] [rbp+158h]
  __int64 v140; // [rsp+260h] [rbp+160h]
  __int64 v141; // [rsp+268h] [rbp+168h]
  __int64 v142; // [rsp+270h] [rbp+170h]
  __int64 v143; // [rsp+278h] [rbp+178h]
  __int64 v144; // [rsp+280h] [rbp+180h]
  __int64 v145; // [rsp+288h] [rbp+188h]
  __int64 v146; // [rsp+290h] [rbp+190h]
  __int64 v147; // [rsp+298h] [rbp+198h]
  __int64 v148; // [rsp+2A0h] [rbp+1A0h]
  __int64 v149; // [rsp+2A8h] [rbp+1A8h]
  __int64 v150; // [rsp+2B0h] [rbp+1B0h]
  __int64 v151; // [rsp+2B8h] [rbp+1B8h]
  __int64 v152; // [rsp+2C0h] [rbp+1C0h]
  __int64 v153; // [rsp+2C8h] [rbp+1C8h]
  __int64 v154; // [rsp+2D0h] [rbp+1D0h]
  __int64 v155; // [rsp+2D8h] [rbp+1D8h]
  __int64 v156; // [rsp+2E0h] [rbp+1E0h]
  __int64 v157; // [rsp+2E8h] [rbp+1E8h]
  __int64 v158; // [rsp+2F0h] [rbp+1F0h]
  __int64 v159; // [rsp+2F8h] [rbp+1F8h]
  __int64 v160; // [rsp+300h] [rbp+200h]
  __int64 v161; // [rsp+308h] [rbp+208h]
  __int64 v162; // [rsp+310h] [rbp+210h]
  __int64 v163; // [rsp+318h] [rbp+218h]
  __int64 v164; // [rsp+320h] [rbp+220h]
  __int64 v165; // [rsp+328h] [rbp+228h]
  __int64 v166; // [rsp+330h] [rbp+230h]
  __int64 v167; // [rsp+338h] [rbp+238h]
  _DWORD *v168; // [rsp+340h] [rbp+240h]
  __int64 v169; // [rsp+348h] [rbp+248h]
  __int64 v170; // [rsp+350h] [rbp+250h]
  _DWORD v171[2]; // [rsp+358h] [rbp+258h] BYREF
  _DWORD *v172; // [rsp+360h] [rbp+260h]
  __int64 v173; // [rsp+368h] [rbp+268h]
  __int64 v174; // [rsp+370h] [rbp+270h]
  _DWORD v175[2]; // [rsp+378h] [rbp+278h] BYREF
  _DWORD *v176; // [rsp+380h] [rbp+280h]
  __int64 v177; // [rsp+388h] [rbp+288h]
  __int64 v178; // [rsp+390h] [rbp+290h]
  _DWORD v179[2]; // [rsp+398h] [rbp+298h] BYREF
  _DWORD *v180; // [rsp+3A0h] [rbp+2A0h]
  __int64 v181; // [rsp+3A8h] [rbp+2A8h]
  __int64 v182; // [rsp+3B0h] [rbp+2B0h]
  _DWORD v183[2]; // [rsp+3B8h] [rbp+2B8h] BYREF
  _DWORD *v184; // [rsp+3C0h] [rbp+2C0h]
  __int64 v185; // [rsp+3C8h] [rbp+2C8h]
  __int64 v186; // [rsp+3D0h] [rbp+2D0h]
  _DWORD v187[2]; // [rsp+3D8h] [rbp+2D8h] BYREF
  __int64 v188; // [rsp+3E0h] [rbp+2E0h]
  __int64 v189; // [rsp+3E8h] [rbp+2E8h]
  __int64 v190; // [rsp+3F0h] [rbp+2F0h]
  __int64 v191; // [rsp+3F8h] [rbp+2F8h]
  __int64 v192; // [rsp+400h] [rbp+300h]
  __int64 v193; // [rsp+408h] [rbp+308h]
  __int64 v194; // [rsp+410h] [rbp+310h]
  __int64 v195; // [rsp+418h] [rbp+318h]
  _DWORD *v196; // [rsp+420h] [rbp+320h]
  __int64 v197; // [rsp+428h] [rbp+328h]
  __int64 v198; // [rsp+430h] [rbp+330h]
  _DWORD v199[2]; // [rsp+438h] [rbp+338h] BYREF
  _DWORD *v200; // [rsp+440h] [rbp+340h]
  __int64 v201; // [rsp+448h] [rbp+348h]
  __int64 v202; // [rsp+450h] [rbp+350h]
  _DWORD v203[2]; // [rsp+458h] [rbp+358h] BYREF
  __int64 v204; // [rsp+460h] [rbp+360h]
  __int64 v205; // [rsp+468h] [rbp+368h]
  __int64 v206; // [rsp+470h] [rbp+370h]
  __int64 v207; // [rsp+478h] [rbp+378h]
  _DWORD *v208; // [rsp+480h] [rbp+380h]
  __int64 v209; // [rsp+488h] [rbp+388h]
  __int64 v210; // [rsp+490h] [rbp+390h]
  _DWORD v211[2]; // [rsp+498h] [rbp+398h] BYREF
  unsigned __int64 v212; // [rsp+4A0h] [rbp+3A0h]
  __int64 v213; // [rsp+4A8h] [rbp+3A8h]
  unsigned __int64 v214; // [rsp+4B0h] [rbp+3B0h]
  __int64 v215; // [rsp+4B8h] [rbp+3B8h]
  unsigned __int64 v216; // [rsp+4C0h] [rbp+3C0h]
  __int64 v217; // [rsp+4C8h] [rbp+3C8h]
  __int64 v218; // [rsp+4D0h] [rbp+3D0h]
  int v219; // [rsp+4D8h] [rbp+3D8h]
  int v220; // [rsp+4DCh] [rbp+3DCh]
  unsigned __int64 v221; // [rsp+4E0h] [rbp+3E0h]
  __int64 v222; // [rsp+4E8h] [rbp+3E8h]
  __int64 v223; // [rsp+4F0h] [rbp+3F0h]
  int v224; // [rsp+4F8h] [rbp+3F8h]
  int v225; // [rsp+4FCh] [rbp+3FCh]
  unsigned __int64 v226; // [rsp+500h] [rbp+400h]
  __int64 v227; // [rsp+508h] [rbp+408h]
  unsigned __int64 v228; // [rsp+510h] [rbp+410h]
  __int64 v229; // [rsp+518h] [rbp+418h]
  unsigned __int64 v230; // [rsp+520h] [rbp+420h]
  __int64 v231; // [rsp+528h] [rbp+428h]

  v230 = STACK[0x7A0];
  v228 = STACK[0x798];
  v226 = STACK[0x790];
  v66 = STACK[0x788];
  v231 = 4LL;
  v229 = 4LL;
  v227 = 4LL;
  v67 = v66 + 8;
  v222 = 2LL;
  v223 = *(_QWORD *)v66;
  v224 = *(unsigned __int16 *)(v66 + 8);
  v68 = STACK[0x780];
  v221 = v67;
  v225 = 0;
  v217 = 2LL;
  v220 = 0;
  v218 = *(_QWORD *)v68;
  v219 = *(unsigned __int16 *)(v68 + 8);
  v214 = STACK[0x778];
  v212 = STACK[0x770];
  v208 = v211;
  v216 = v68 + 8;
  v215 = 1LL;
  v213 = 4LL;
  v69 = *a64;
  v209 = 2LL;
  LODWORD(v67) = *v69;
  v210 = *((_QWORD *)v69 + 1);
  v206 = a63;
  v204 = a62;
  v200 = v203;
  v211[0] = v67;
  v211[1] = 0;
  v207 = 4LL;
  v205 = 8LL;
  v202 = *a61;
  v203[0] = *((unsigned __int16 *)a61 + 4);
  v196 = v199;
  v201 = 2LL;
  v203[1] = 0;
  v197 = 2LL;
  LODWORD(v67) = **a60;
  v198 = *((_QWORD *)*a60 + 1);
  v194 = a59;
  v192 = a58;
  v190 = a57;
  v199[0] = v67;
  v199[1] = 0;
  v195 = 8LL;
  v193 = 8LL;
  v191 = 8LL;
  v188 = a56;
  v184 = v187;
  v189 = 4LL;
  v185 = 2LL;
  LODWORD(v67) = **a55;
  v186 = *((_QWORD *)*a55 + 1);
  v180 = v183;
  v187[0] = v67;
  v187[1] = 0;
  v181 = 2LL;
  LODWORD(v67) = **a54;
  v182 = *((_QWORD *)*a54 + 1);
  v176 = v179;
  v183[0] = v67;
  v183[1] = 0;
  v177 = 2LL;
  LODWORD(v67) = **a53;
  v178 = *((_QWORD *)*a53 + 1);
  v172 = v175;
  v179[0] = v67;
  v179[1] = 0;
  v173 = 2LL;
  LODWORD(v67) = **a52;
  v174 = *((_QWORD *)*a52 + 1);
  v168 = v171;
  v175[0] = v67;
  v175[1] = 0;
  v169 = 2LL;
  LODWORD(v67) = **a51;
  v170 = *((_QWORD *)*a51 + 1);
  v166 = a50;
  v164 = a49;
  v162 = a48;
  v160 = a47;
  v158 = a46;
  v156 = a45;
  v154 = a44;
  v152 = a43;
  v150 = a42;
  v171[0] = v67;
  v171[1] = 0;
  v167 = 2LL;
  v165 = 2LL;
  v163 = 2LL;
  v161 = 8LL;
  v159 = 8LL;
  v157 = 8LL;
  v155 = 4LL;
  v153 = 2LL;
  v151 = 2LL;
  v70 = *a17;
  v148 = a41;
  v146 = a40;
  v144 = a39;
  v142 = a38;
  v140 = a37;
  v138 = a36;
  v136 = a35;
  v134 = a34;
  v132 = a33;
  v130 = a32;
  v128 = a31;
  v126 = a30;
  v124 = a29;
  v122 = a28;
  v120 = a27;
  v118 = a26;
  v116 = a25;
  v114 = a24;
  v112 = a23;
  v110 = a22;
  v108 = a21;
  v106 = a20;
  v104 = a19;
  v102 = a18;
  v149 = 8LL;
  v147 = 2LL;
  v145 = 2LL;
  v143 = 4LL;
  v141 = 4LL;
  v139 = 4LL;
  v137 = 4LL;
  v135 = 4LL;
  v133 = 4LL;
  v131 = 4LL;
  v129 = 4LL;
  v127 = 2LL;
  v125 = 4LL;
  v123 = 2LL;
  v121 = 4LL;
  v119 = 4LL;
  v117 = 4LL;
  v115 = 4LL;
  v113 = 4LL;
  v111 = 4LL;
  v109 = 4LL;
  v107 = 4LL;
  v105 = 4LL;
  v103 = 8LL;
  _tlgCreate1Sz<unsigned short>((__int64)v101, v70);
  v99 = a16;
  v97 = a15;
  v100 = 2LL;
  v98 = 4LL;
  v95 = a14;
  v93 = a13;
  v91 = a12;
  v87 = v90;
  v96 = 4LL;
  v94 = 4LL;
  v92 = 4LL;
  v71 = *a11;
  v88 = 2LL;
  v72 = *v71;
  v89 = *((_QWORD *)v71 + 1);
  v85 = a10;
  v83 = a9;
  v81 = a8;
  v79 = a7;
  v77 = a6;
  v75 = a5;
  v90[0] = v72;
  v90[1] = 0;
  v86 = 4LL;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 2LL;
  v76 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A9C0, a2, a3, 0LL, 0x50u, &v74);
}
