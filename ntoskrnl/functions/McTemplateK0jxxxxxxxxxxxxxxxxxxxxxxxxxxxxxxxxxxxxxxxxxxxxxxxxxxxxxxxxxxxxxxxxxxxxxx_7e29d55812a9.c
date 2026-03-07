NTSTATUS __fastcall McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
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
        char a53,
        char a54,
        char a55,
        char a56,
        char a57,
        char a58,
        char a59,
        char a60,
        char a61,
        char a62,
        char a63)
{
  char a64; // [rsp+6F8h] [rbp+5F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v66; // [rsp+40h] [rbp-C0h]
  __int64 v67; // [rsp+48h] [rbp-B8h]
  char *v68; // [rsp+50h] [rbp-B0h]
  __int64 v69; // [rsp+58h] [rbp-A8h]
  char *v70; // [rsp+60h] [rbp-A0h]
  __int64 v71; // [rsp+68h] [rbp-98h]
  char *v72; // [rsp+70h] [rbp-90h]
  __int64 v73; // [rsp+78h] [rbp-88h]
  char *v74; // [rsp+80h] [rbp-80h]
  __int64 v75; // [rsp+88h] [rbp-78h]
  char *v76; // [rsp+90h] [rbp-70h]
  __int64 v77; // [rsp+98h] [rbp-68h]
  char *v78; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  char *v80; // [rsp+B0h] [rbp-50h]
  __int64 v81; // [rsp+B8h] [rbp-48h]
  char *v82; // [rsp+C0h] [rbp-40h]
  __int64 v83; // [rsp+C8h] [rbp-38h]
  char *v84; // [rsp+D0h] [rbp-30h]
  __int64 v85; // [rsp+D8h] [rbp-28h]
  char *v86; // [rsp+E0h] [rbp-20h]
  __int64 v87; // [rsp+E8h] [rbp-18h]
  char *v88; // [rsp+F0h] [rbp-10h]
  __int64 v89; // [rsp+F8h] [rbp-8h]
  char *v90; // [rsp+100h] [rbp+0h]
  __int64 v91; // [rsp+108h] [rbp+8h]
  char *v92; // [rsp+110h] [rbp+10h]
  __int64 v93; // [rsp+118h] [rbp+18h]
  char *v94; // [rsp+120h] [rbp+20h]
  __int64 v95; // [rsp+128h] [rbp+28h]
  char *v96; // [rsp+130h] [rbp+30h]
  __int64 v97; // [rsp+138h] [rbp+38h]
  char *v98; // [rsp+140h] [rbp+40h]
  __int64 v99; // [rsp+148h] [rbp+48h]
  char *v100; // [rsp+150h] [rbp+50h]
  __int64 v101; // [rsp+158h] [rbp+58h]
  char *v102; // [rsp+160h] [rbp+60h]
  __int64 v103; // [rsp+168h] [rbp+68h]
  char *v104; // [rsp+170h] [rbp+70h]
  __int64 v105; // [rsp+178h] [rbp+78h]
  char *v106; // [rsp+180h] [rbp+80h]
  __int64 v107; // [rsp+188h] [rbp+88h]
  char *v108; // [rsp+190h] [rbp+90h]
  __int64 v109; // [rsp+198h] [rbp+98h]
  char *v110; // [rsp+1A0h] [rbp+A0h]
  __int64 v111; // [rsp+1A8h] [rbp+A8h]
  char *v112; // [rsp+1B0h] [rbp+B0h]
  __int64 v113; // [rsp+1B8h] [rbp+B8h]
  char *v114; // [rsp+1C0h] [rbp+C0h]
  __int64 v115; // [rsp+1C8h] [rbp+C8h]
  char *v116; // [rsp+1D0h] [rbp+D0h]
  __int64 v117; // [rsp+1D8h] [rbp+D8h]
  char *v118; // [rsp+1E0h] [rbp+E0h]
  __int64 v119; // [rsp+1E8h] [rbp+E8h]
  char *v120; // [rsp+1F0h] [rbp+F0h]
  __int64 v121; // [rsp+1F8h] [rbp+F8h]
  char *v122; // [rsp+200h] [rbp+100h]
  __int64 v123; // [rsp+208h] [rbp+108h]
  char *v124; // [rsp+210h] [rbp+110h]
  __int64 v125; // [rsp+218h] [rbp+118h]
  char *v126; // [rsp+220h] [rbp+120h]
  __int64 v127; // [rsp+228h] [rbp+128h]
  char *v128; // [rsp+230h] [rbp+130h]
  __int64 v129; // [rsp+238h] [rbp+138h]
  char *v130; // [rsp+240h] [rbp+140h]
  __int64 v131; // [rsp+248h] [rbp+148h]
  char *v132; // [rsp+250h] [rbp+150h]
  __int64 v133; // [rsp+258h] [rbp+158h]
  char *v134; // [rsp+260h] [rbp+160h]
  __int64 v135; // [rsp+268h] [rbp+168h]
  char *v136; // [rsp+270h] [rbp+170h]
  __int64 v137; // [rsp+278h] [rbp+178h]
  char *v138; // [rsp+280h] [rbp+180h]
  __int64 v139; // [rsp+288h] [rbp+188h]
  char *v140; // [rsp+290h] [rbp+190h]
  __int64 v141; // [rsp+298h] [rbp+198h]
  char *v142; // [rsp+2A0h] [rbp+1A0h]
  __int64 v143; // [rsp+2A8h] [rbp+1A8h]
  char *v144; // [rsp+2B0h] [rbp+1B0h]
  __int64 v145; // [rsp+2B8h] [rbp+1B8h]
  char *v146; // [rsp+2C0h] [rbp+1C0h]
  __int64 v147; // [rsp+2C8h] [rbp+1C8h]
  char *v148; // [rsp+2D0h] [rbp+1D0h]
  __int64 v149; // [rsp+2D8h] [rbp+1D8h]
  char *v150; // [rsp+2E0h] [rbp+1E0h]
  __int64 v151; // [rsp+2E8h] [rbp+1E8h]
  char *v152; // [rsp+2F0h] [rbp+1F0h]
  __int64 v153; // [rsp+2F8h] [rbp+1F8h]
  char *v154; // [rsp+300h] [rbp+200h]
  __int64 v155; // [rsp+308h] [rbp+208h]
  char *v156; // [rsp+310h] [rbp+210h]
  __int64 v157; // [rsp+318h] [rbp+218h]
  char *v158; // [rsp+320h] [rbp+220h]
  __int64 v159; // [rsp+328h] [rbp+228h]
  char *v160; // [rsp+330h] [rbp+230h]
  __int64 v161; // [rsp+338h] [rbp+238h]
  char *v162; // [rsp+340h] [rbp+240h]
  __int64 v163; // [rsp+348h] [rbp+248h]
  char *v164; // [rsp+350h] [rbp+250h]
  __int64 v165; // [rsp+358h] [rbp+258h]
  char *v166; // [rsp+360h] [rbp+260h]
  __int64 v167; // [rsp+368h] [rbp+268h]
  char *v168; // [rsp+370h] [rbp+270h]
  __int64 v169; // [rsp+378h] [rbp+278h]
  char *v170; // [rsp+380h] [rbp+280h]
  __int64 v171; // [rsp+388h] [rbp+288h]
  char *v172; // [rsp+390h] [rbp+290h]
  __int64 v173; // [rsp+398h] [rbp+298h]
  char *v174; // [rsp+3A0h] [rbp+2A0h]
  __int64 v175; // [rsp+3A8h] [rbp+2A8h]
  char *v176; // [rsp+3B0h] [rbp+2B0h]
  __int64 v177; // [rsp+3B8h] [rbp+2B8h]
  char *v178; // [rsp+3C0h] [rbp+2C0h]
  __int64 v179; // [rsp+3C8h] [rbp+2C8h]
  char *v180; // [rsp+3D0h] [rbp+2D0h]
  __int64 v181; // [rsp+3D8h] [rbp+2D8h]
  char *v182; // [rsp+3E0h] [rbp+2E0h]
  __int64 v183; // [rsp+3E8h] [rbp+2E8h]
  char *v184; // [rsp+3F0h] [rbp+2F0h]
  __int64 v185; // [rsp+3F8h] [rbp+2F8h]
  char *v186; // [rsp+400h] [rbp+300h]
  __int64 v187; // [rsp+408h] [rbp+308h]
  unsigned __int64 *v188; // [rsp+410h] [rbp+310h]
  __int64 v189; // [rsp+418h] [rbp+318h]
  unsigned __int64 *v190; // [rsp+420h] [rbp+320h]
  __int64 v191; // [rsp+428h] [rbp+328h]
  unsigned __int64 *v192; // [rsp+430h] [rbp+330h]
  __int64 v193; // [rsp+438h] [rbp+338h]
  unsigned __int64 *v194; // [rsp+440h] [rbp+340h]
  __int64 v195; // [rsp+448h] [rbp+348h]
  unsigned __int64 *v196; // [rsp+450h] [rbp+350h]
  __int64 v197; // [rsp+458h] [rbp+358h]
  unsigned __int64 *v198; // [rsp+460h] [rbp+360h]
  __int64 v199; // [rsp+468h] [rbp+368h]
  unsigned __int64 *v200; // [rsp+470h] [rbp+370h]
  __int64 v201; // [rsp+478h] [rbp+378h]
  unsigned __int64 *v202; // [rsp+480h] [rbp+380h]
  __int64 v203; // [rsp+488h] [rbp+388h]
  unsigned __int64 *v204; // [rsp+490h] [rbp+390h]
  __int64 v205; // [rsp+498h] [rbp+398h]
  unsigned __int64 *v206; // [rsp+4A0h] [rbp+3A0h]
  __int64 v207; // [rsp+4A8h] [rbp+3A8h]
  unsigned __int64 *v208; // [rsp+4B0h] [rbp+3B0h]
  __int64 v209; // [rsp+4B8h] [rbp+3B8h]
  unsigned __int64 *v210; // [rsp+4C0h] [rbp+3C0h]
  __int64 v211; // [rsp+4C8h] [rbp+3C8h]
  unsigned __int64 *v212; // [rsp+4D0h] [rbp+3D0h]
  __int64 v213; // [rsp+4D8h] [rbp+3D8h]

  v66 = a4;
  v68 = &a5;
  v70 = &a6;
  v72 = &a7;
  v74 = &a8;
  v76 = &a9;
  v78 = &a10;
  v80 = &a11;
  v82 = &a12;
  v84 = &a13;
  v86 = &a14;
  v88 = &a15;
  v90 = &a16;
  v92 = &a17;
  v94 = &a18;
  v96 = &a19;
  v98 = &a20;
  v100 = &a21;
  v102 = &a22;
  v104 = &a23;
  v106 = &a24;
  v108 = &a25;
  v110 = &a26;
  v112 = &a27;
  v114 = &a28;
  v116 = &a29;
  v118 = &a30;
  v67 = 16LL;
  v69 = 8LL;
  v71 = 8LL;
  v73 = 8LL;
  v75 = 8LL;
  v77 = 8LL;
  v79 = 8LL;
  v81 = 8LL;
  v83 = 8LL;
  v85 = 8LL;
  v87 = 8LL;
  v89 = 8LL;
  v91 = 8LL;
  v93 = 8LL;
  v95 = 8LL;
  v97 = 8LL;
  v99 = 8LL;
  v101 = 8LL;
  v103 = 8LL;
  v105 = 8LL;
  v107 = 8LL;
  v109 = 8LL;
  v111 = 8LL;
  v113 = 8LL;
  v115 = 8LL;
  v117 = 8LL;
  v119 = 8LL;
  v120 = &a31;
  v122 = &a32;
  v124 = &a33;
  v126 = &a34;
  v128 = &a35;
  v130 = &a36;
  v132 = &a37;
  v134 = &a38;
  v136 = &a39;
  v138 = &a40;
  v140 = &a41;
  v142 = &a42;
  v144 = &a43;
  v146 = &a44;
  v148 = &a45;
  v150 = &a46;
  v152 = &a47;
  v154 = &a48;
  v156 = &a49;
  v158 = &a50;
  v160 = &a51;
  v162 = &a52;
  v164 = &a53;
  v166 = &a54;
  v168 = &a55;
  v170 = &a56;
  v172 = &a57;
  v121 = 8LL;
  v123 = 8LL;
  v125 = 8LL;
  v127 = 8LL;
  v129 = 8LL;
  v131 = 8LL;
  v133 = 8LL;
  v135 = 8LL;
  v137 = 8LL;
  v139 = 8LL;
  v141 = 8LL;
  v143 = 8LL;
  v145 = 8LL;
  v147 = 8LL;
  v149 = 8LL;
  v151 = 8LL;
  v153 = 8LL;
  v155 = 8LL;
  v157 = 8LL;
  v159 = 8LL;
  v161 = 8LL;
  v163 = 8LL;
  v165 = 8LL;
  v167 = 8LL;
  v169 = 8LL;
  v171 = 8LL;
  v173 = 8LL;
  v174 = &a58;
  v175 = 8LL;
  v176 = &a59;
  v177 = 8LL;
  v178 = &a60;
  v179 = 8LL;
  v180 = &a61;
  v181 = 8LL;
  v182 = &a62;
  v184 = &a63;
  v186 = &a64;
  v188 = &STACK[0x700];
  v190 = &STACK[0x708];
  v192 = &STACK[0x710];
  v194 = &STACK[0x718];
  v196 = &STACK[0x720];
  v198 = &STACK[0x728];
  v200 = &STACK[0x730];
  v202 = &STACK[0x738];
  v204 = &STACK[0x740];
  v206 = &STACK[0x748];
  v208 = &STACK[0x750];
  v210 = &STACK[0x758];
  v212 = &STACK[0x760];
  v183 = 8LL;
  v185 = 8LL;
  v187 = 8LL;
  v189 = 8LL;
  v191 = 8LL;
  v193 = 8LL;
  v195 = 8LL;
  v197 = 8LL;
  v199 = 8LL;
  v201 = 8LL;
  v203 = 8LL;
  v205 = 8LL;
  v207 = 8LL;
  v209 = 8LL;
  v211 = 8LL;
  v213 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelCc_Provider_Context,
           (const EVENT_DESCRIPTOR *)CcEvt_CacheVolumeReadLatencies,
           0LL,
           0x4Bu,
           &v65);
}
