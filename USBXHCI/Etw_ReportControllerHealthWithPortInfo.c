/*
 * XREFs of Etw_ReportControllerHealthWithPortInfo @ 0x1C001F980
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0004FE0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _tlgCreate1Sz_char @ 0x1C004BCA0 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1C004BCD4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004BD00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_ReportControllerHealthWithPortInfo(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  _DWORD *v4; // rax
  int v6; // r12d
  int v7; // r13d
  __int64 v8; // rax
  int v9; // r15d
  __int64 result; // rax
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 v14; // di
  unsigned __int8 v15; // si
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  int v20; // r10d
  int v21; // r11d
  int v22; // r9d
  char v23; // [rsp+38h] [rbp-D0h] BYREF
  char v24; // [rsp+39h] [rbp-CFh] BYREF
  char v25; // [rsp+3Ah] [rbp-CEh] BYREF
  char v26; // [rsp+3Bh] [rbp-CDh] BYREF
  char v27; // [rsp+3Ch] [rbp-CCh] BYREF
  char v28; // [rsp+3Dh] [rbp-CBh] BYREF
  char v29; // [rsp+3Eh] [rbp-CAh] BYREF
  unsigned __int8 v30; // [rsp+3Fh] [rbp-C9h]
  int v31; // [rsp+40h] [rbp-C8h] BYREF
  int v32; // [rsp+44h] [rbp-C4h] BYREF
  int v33; // [rsp+48h] [rbp-C0h] BYREF
  int v34; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v35; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v36; // [rsp+54h] [rbp-B4h] BYREF
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  int v38; // [rsp+5Ch] [rbp-ACh] BYREF
  int v39; // [rsp+60h] [rbp-A8h] BYREF
  int v40; // [rsp+64h] [rbp-A4h] BYREF
  int v41; // [rsp+68h] [rbp-A0h] BYREF
  int v42; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v43; // [rsp+70h] [rbp-98h] BYREF
  int v44; // [rsp+74h] [rbp-94h] BYREF
  int v45; // [rsp+78h] [rbp-90h] BYREF
  int v46; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v47; // [rsp+80h] [rbp-88h] BYREF
  int v48; // [rsp+84h] [rbp-84h] BYREF
  int v49; // [rsp+88h] [rbp-80h] BYREF
  int v50; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v51; // [rsp+90h] [rbp-78h] BYREF
  int v52; // [rsp+94h] [rbp-74h] BYREF
  int v53; // [rsp+98h] [rbp-70h] BYREF
  int v54; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v55; // [rsp+A0h] [rbp-68h] BYREF
  int v56; // [rsp+A4h] [rbp-64h] BYREF
  int v57; // [rsp+A8h] [rbp-60h] BYREF
  int v58; // [rsp+ACh] [rbp-5Ch] BYREF
  int v59; // [rsp+B0h] [rbp-58h] BYREF
  int v60; // [rsp+B4h] [rbp-54h] BYREF
  int v61; // [rsp+B8h] [rbp-50h] BYREF
  int v62; // [rsp+BCh] [rbp-4Ch] BYREF
  int v63; // [rsp+C0h] [rbp-48h] BYREF
  int v64; // [rsp+C4h] [rbp-44h] BYREF
  int v65; // [rsp+C8h] [rbp-40h] BYREF
  int v66; // [rsp+CCh] [rbp-3Ch] BYREF
  int v67; // [rsp+D0h] [rbp-38h] BYREF
  int v68; // [rsp+D4h] [rbp-34h] BYREF
  int v69; // [rsp+D8h] [rbp-30h] BYREF
  int v70; // [rsp+DCh] [rbp-2Ch] BYREF
  int v71; // [rsp+E0h] [rbp-28h] BYREF
  int v72; // [rsp+E4h] [rbp-24h] BYREF
  int v73; // [rsp+E8h] [rbp-20h] BYREF
  int v74; // [rsp+ECh] [rbp-1Ch] BYREF
  int v75; // [rsp+F0h] [rbp-18h] BYREF
  int v76; // [rsp+F4h] [rbp-14h] BYREF
  int v77; // [rsp+F8h] [rbp-10h] BYREF
  int v78; // [rsp+FCh] [rbp-Ch] BYREF
  int v79; // [rsp+100h] [rbp-8h] BYREF
  int v80; // [rsp+104h] [rbp-4h] BYREF
  __int64 v81; // [rsp+108h] [rbp+0h] BYREF
  __int64 v82; // [rsp+110h] [rbp+8h] BYREF
  __int64 v83; // [rsp+118h] [rbp+10h] BYREF
  __int64 v84; // [rsp+120h] [rbp+18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v86; // [rsp+148h] [rbp+40h]
  int v87; // [rsp+150h] [rbp+48h]
  int v88; // [rsp+154h] [rbp+4Ch]
  int *v89; // [rsp+158h] [rbp+50h]
  int v90; // [rsp+160h] [rbp+58h]
  int v91; // [rsp+164h] [rbp+5Ch]
  char *v92; // [rsp+168h] [rbp+60h]
  int v93; // [rsp+170h] [rbp+68h]
  int v94; // [rsp+174h] [rbp+6Ch]
  char *v95; // [rsp+178h] [rbp+70h]
  int v96; // [rsp+180h] [rbp+78h]
  int v97; // [rsp+184h] [rbp+7Ch]
  int *v98; // [rsp+188h] [rbp+80h]
  int v99; // [rsp+190h] [rbp+88h]
  int v100; // [rsp+194h] [rbp+8Ch]
  __int16 *v101; // [rsp+198h] [rbp+90h]
  int v102; // [rsp+1A0h] [rbp+98h]
  int v103; // [rsp+1A4h] [rbp+9Ch]
  __int16 *v104; // [rsp+1A8h] [rbp+A0h]
  int v105; // [rsp+1B0h] [rbp+A8h]
  int v106; // [rsp+1B4h] [rbp+ACh]
  int *v107; // [rsp+1B8h] [rbp+B0h]
  int v108; // [rsp+1C0h] [rbp+B8h]
  int v109; // [rsp+1C4h] [rbp+BCh]
  int *v110; // [rsp+1C8h] [rbp+C0h]
  int v111; // [rsp+1D0h] [rbp+C8h]
  int v112; // [rsp+1D4h] [rbp+CCh]
  char *v113; // [rsp+1D8h] [rbp+D0h]
  int v114; // [rsp+1E0h] [rbp+D8h]
  int v115; // [rsp+1E4h] [rbp+DCh]
  char v116[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  char v117[16]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v118[16]; // [rsp+208h] [rbp+100h] BYREF
  __int64 *v119; // [rsp+218h] [rbp+110h]
  __int64 v120; // [rsp+220h] [rbp+118h]
  int *v121; // [rsp+228h] [rbp+120h]
  __int64 v122; // [rsp+230h] [rbp+128h]
  int *v123; // [rsp+238h] [rbp+130h]
  __int64 v124; // [rsp+240h] [rbp+138h]
  int *v125; // [rsp+248h] [rbp+140h]
  __int64 v126; // [rsp+250h] [rbp+148h]
  char *v127; // [rsp+258h] [rbp+150h]
  int v128; // [rsp+260h] [rbp+158h]
  int v129; // [rsp+264h] [rbp+15Ch]
  char *v130; // [rsp+268h] [rbp+160h]
  int v131; // [rsp+270h] [rbp+168h]
  int v132; // [rsp+274h] [rbp+16Ch]
  int *v133; // [rsp+278h] [rbp+170h]
  int v134; // [rsp+280h] [rbp+178h]
  int v135; // [rsp+284h] [rbp+17Ch]
  int *v136; // [rsp+288h] [rbp+180h]
  int v137; // [rsp+290h] [rbp+188h]
  int v138; // [rsp+294h] [rbp+18Ch]
  int *v139; // [rsp+298h] [rbp+190h]
  int v140; // [rsp+2A0h] [rbp+198h]
  int v141; // [rsp+2A4h] [rbp+19Ch]
  char *v142; // [rsp+2A8h] [rbp+1A0h]
  int v143; // [rsp+2B0h] [rbp+1A8h]
  int v144; // [rsp+2B4h] [rbp+1ACh]
  __int64 *v145; // [rsp+2B8h] [rbp+1B0h]
  int v146; // [rsp+2C0h] [rbp+1B8h]
  int v147; // [rsp+2C4h] [rbp+1BCh]
  __int64 *v148; // [rsp+2C8h] [rbp+1C0h]
  int v149; // [rsp+2D0h] [rbp+1C8h]
  int v150; // [rsp+2D4h] [rbp+1CCh]
  int *v151; // [rsp+2D8h] [rbp+1D0h]
  __int64 v152; // [rsp+2E0h] [rbp+1D8h]
  int *v153; // [rsp+2E8h] [rbp+1E0h]
  __int64 v154; // [rsp+2F0h] [rbp+1E8h]
  int *v155; // [rsp+2F8h] [rbp+1F0h]
  __int64 v156; // [rsp+300h] [rbp+1F8h]
  int *v157; // [rsp+308h] [rbp+200h]
  __int64 v158; // [rsp+310h] [rbp+208h]
  int *v159; // [rsp+318h] [rbp+210h]
  __int64 v160; // [rsp+320h] [rbp+218h]
  int *v161; // [rsp+328h] [rbp+220h]
  __int64 v162; // [rsp+330h] [rbp+228h]
  int *v163; // [rsp+338h] [rbp+230h]
  __int64 v164; // [rsp+340h] [rbp+238h]
  int *v165; // [rsp+348h] [rbp+240h]
  __int64 v166; // [rsp+350h] [rbp+248h]
  int *v167; // [rsp+358h] [rbp+250h]
  __int64 v168; // [rsp+360h] [rbp+258h]
  char *v169; // [rsp+368h] [rbp+260h]
  __int64 v170; // [rsp+370h] [rbp+268h]
  int *v171; // [rsp+378h] [rbp+270h]
  __int64 v172; // [rsp+380h] [rbp+278h]
  int *v173; // [rsp+388h] [rbp+280h]
  __int64 v174; // [rsp+390h] [rbp+288h]
  int *v175; // [rsp+398h] [rbp+290h]
  __int64 v176; // [rsp+3A0h] [rbp+298h]
  int *v177; // [rsp+3A8h] [rbp+2A0h]
  __int64 v178; // [rsp+3B0h] [rbp+2A8h]
  int *v179; // [rsp+3B8h] [rbp+2B0h]
  __int64 v180; // [rsp+3C0h] [rbp+2B8h]
  int *v181; // [rsp+3C8h] [rbp+2C0h]
  __int64 v182; // [rsp+3D0h] [rbp+2C8h]
  int *v183; // [rsp+3D8h] [rbp+2D0h]
  __int64 v184; // [rsp+3E0h] [rbp+2D8h]
  int *v185; // [rsp+3E8h] [rbp+2E0h]
  __int64 v186; // [rsp+3F0h] [rbp+2E8h]
  int *v187; // [rsp+3F8h] [rbp+2F0h]
  __int64 v188; // [rsp+400h] [rbp+2F8h]
  int *v189; // [rsp+408h] [rbp+300h]
  __int64 v190; // [rsp+410h] [rbp+308h]
  int *v191; // [rsp+418h] [rbp+310h]
  __int64 v192; // [rsp+420h] [rbp+318h]
  int *v193; // [rsp+428h] [rbp+320h]
  __int64 v194; // [rsp+430h] [rbp+328h]
  int *v195; // [rsp+438h] [rbp+330h]
  __int64 v196; // [rsp+440h] [rbp+338h]
  int *v197; // [rsp+448h] [rbp+340h]
  __int64 v198; // [rsp+450h] [rbp+348h]
  int *v199; // [rsp+458h] [rbp+350h]
  __int64 v200; // [rsp+460h] [rbp+358h]
  int *v201; // [rsp+468h] [rbp+360h]
  __int64 v202; // [rsp+470h] [rbp+368h]
  int *v203; // [rsp+478h] [rbp+370h]
  __int64 v204; // [rsp+480h] [rbp+378h]
  int *v205; // [rsp+488h] [rbp+380h]
  __int64 v206; // [rsp+490h] [rbp+388h]
  int *v207; // [rsp+498h] [rbp+390h]
  __int64 v208; // [rsp+4A0h] [rbp+398h]
  int *v209; // [rsp+4A8h] [rbp+3A0h]
  __int64 v210; // [rsp+4B0h] [rbp+3A8h]
  int *v211; // [rsp+4B8h] [rbp+3B0h]
  __int64 v212; // [rsp+4C0h] [rbp+3B8h]
  int *v213; // [rsp+4C8h] [rbp+3C0h]
  __int64 v214; // [rsp+4D0h] [rbp+3C8h]
  int *v215; // [rsp+4D8h] [rbp+3D0h]
  __int64 v216; // [rsp+4E0h] [rbp+3D8h]
  int *v217; // [rsp+4E8h] [rbp+3E0h]
  __int64 v218; // [rsp+4F0h] [rbp+3E8h]
  int *v219; // [rsp+4F8h] [rbp+3F0h]
  __int64 v220; // [rsp+500h] [rbp+3F8h]
  int *v221; // [rsp+508h] [rbp+400h]
  __int64 v222; // [rsp+510h] [rbp+408h]
  int *v223; // [rsp+518h] [rbp+410h]
  __int64 v224; // [rsp+520h] [rbp+418h]
  int *v225; // [rsp+528h] [rbp+420h]
  __int64 v226; // [rsp+530h] [rbp+428h]
  int *v227; // [rsp+538h] [rbp+430h]
  __int64 v228; // [rsp+540h] [rbp+438h]

  v4 = *(_DWORD **)(a1 + 88);
  v30 = a4;
  if ( v4 )
  {
    v6 = v4[21];
    v7 = v4[22];
    v31 = v4[25];
    v32 = v4[26];
    v33 = v4[27];
    v34 = v4[29];
  }
  else
  {
    v6 = -1;
    v31 = -1;
    v7 = -1;
    v32 = -1;
    v33 = -1;
    v34 = -1;
  }
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 20);
  else
    v9 = -1;
  result = *(_QWORD *)(a1 + 128);
  if ( result )
    v11 = *(_DWORD *)(result + 16);
  else
    v11 = -1;
  if ( a4 )
  {
    result = *(_QWORD *)(a1 + 152);
    v12 = 120LL * (unsigned int)(a2 - 1);
    v13 = *(_QWORD *)(result + 48);
    v14 = *(_BYTE *)(v12 + v13 + 96);
    v15 = *(_BYTE *)(v12 + v13 + 104);
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  if ( (unsigned int)dword_1C0063748 > 5 )
  {
    result = tlgKeywordOn(&dword_1C0063748, 0x400000000000LL);
    if ( (_BYTE)result )
    {
      v88 = 0;
      v91 = 0;
      v94 = 0;
      v97 = 0;
      v100 = 0;
      v103 = 0;
      v106 = 0;
      v109 = 0;
      v112 = 0;
      v115 = 0;
      v86 = &v81;
      v39 = *(_DWORD *)(a1 + 244);
      v89 = &v39;
      v23 = *(_BYTE *)(a1 + 320);
      v92 = &v23;
      v24 = *(_BYTE *)(a1 + 321);
      v95 = &v24;
      v40 = *(_DWORD *)(a1 + 260);
      v98 = &v40;
      v35 = *(_WORD *)(a1 + 264);
      v101 = &v35;
      v36 = *(_WORD *)(a1 + 268);
      v104 = &v36;
      LOWORD(v37) = *(_WORD *)(a1 + 248);
      v107 = &v37;
      LOWORD(v38) = *(_WORD *)(a1 + 252);
      v110 = &v38;
      v16 = *(_BYTE *)(a1 + 256);
      v90 = 4;
      v99 = 4;
      v25 = v16;
      v93 = 1;
      v96 = 1;
      v102 = 2;
      v105 = 2;
      v108 = 2;
      v111 = 2;
      v114 = 1;
      v113 = &v25;
      v81 = 33556480LL;
      v87 = 8;
      tlgCreate1Sz_char(v116, a1 + 304);
      tlgCreate1Sz_char(v117, a1 + 309);
      tlgCreate1Sz_char(v118, a1 + 314);
      v17 = *(_QWORD *)(a1 + 328);
      v119 = &v82;
      v41 = *(_DWORD *)(a1 + 464);
      v121 = &v41;
      v82 = v17;
      v120 = v18;
      v19 = *(_DWORD *)(a1 + 392);
      v129 = 0;
      v132 = 0;
      v135 = 0;
      v138 = 0;
      v141 = 0;
      v144 = 0;
      v147 = 0;
      v150 = 0;
      v42 = v19;
      v123 = &v42;
      v43 = *(_DWORD *)(a1 + 176);
      v125 = &v43;
      v26 = *(_BYTE *)(a1 + 600);
      v127 = &v26;
      v27 = *(_BYTE *)(a1 + 601);
      v130 = &v27;
      v44 = *(_DWORD *)(a1 + 604);
      v133 = &v44;
      v45 = *(_DWORD *)(a1 + 608);
      v136 = &v45;
      v46 = *(_DWORD *)(a1 + 636);
      v139 = &v46;
      v28 = *(_BYTE *)(a1 + 664);
      v142 = &v28;
      v83 = *(_QWORD *)(a1 + 336);
      v145 = &v83;
      v84 = *(_QWORD *)(a1 + 344);
      v148 = &v84;
      v151 = &v47;
      v153 = &v48;
      v155 = &v31;
      v157 = &v32;
      v47 = v6;
      v122 = (unsigned int)(v18 - 4);
      v124 = v122;
      v126 = v122;
      v128 = v18 - 7;
      v131 = v18 - 7;
      v134 = v18 - 4;
      v137 = v18 - 4;
      v140 = v18 - 4;
      v143 = v18 - 7;
      v146 = v18;
      v149 = v18;
      v152 = v122;
      v48 = v7;
      v154 = v122;
      v156 = v122;
      v158 = v122;
      v159 = &v33;
      v161 = &v49;
      v163 = &v50;
      v165 = &v51;
      v167 = &v34;
      v29 = *(_BYTE *)(a1 + 472);
      v169 = &v29;
      v52 = *(_DWORD *)(a1 + 476);
      v171 = &v52;
      v53 = *(_DWORD *)(a1 + 480);
      v173 = &v53;
      v54 = *(_DWORD *)(a1 + 484);
      v175 = &v54;
      v55 = *(_DWORD *)(a1 + 488);
      v177 = &v55;
      v56 = *(_DWORD *)(a1 + 492);
      v179 = &v56;
      v57 = *(_DWORD *)(a1 + 496);
      v181 = &v57;
      v58 = *(_DWORD *)(a1 + 500);
      v183 = &v58;
      v59 = *(_DWORD *)(a1 + 504);
      v185 = &v59;
      v60 = *(_DWORD *)(a1 + 508);
      v187 = &v60;
      v61 = *(_DWORD *)(a1 + 512);
      v189 = &v61;
      v62 = *(_DWORD *)(a1 + 516);
      v191 = &v62;
      v160 = v122;
      v49 = v9;
      v162 = v122;
      v50 = v20;
      v164 = v122;
      v51 = v11;
      v166 = v122;
      v168 = v122;
      v170 = (unsigned int)(v18 - 7);
      v172 = v122;
      v174 = v122;
      v176 = v122;
      v178 = v122;
      v180 = v122;
      v182 = v122;
      v184 = v122;
      v186 = v122;
      v188 = v122;
      v190 = v122;
      v192 = v122;
      v63 = *(_DWORD *)(a1 + 520);
      v193 = &v63;
      v64 = *(_DWORD *)(a1 + 524);
      v195 = &v64;
      v65 = *(_DWORD *)(a1 + 528);
      v197 = &v65;
      v66 = *(_DWORD *)(a1 + 532);
      v199 = &v66;
      v67 = *(_DWORD *)(a1 + 536);
      v201 = &v67;
      v68 = *(_DWORD *)(a1 + 540);
      v203 = &v68;
      v69 = *(_DWORD *)(a1 + 544);
      v205 = &v69;
      v70 = *(_DWORD *)(a1 + 548);
      v207 = &v70;
      v71 = *(_DWORD *)(a1 + 552);
      v209 = &v71;
      v72 = *(_DWORD *)(a1 + 556);
      v211 = &v72;
      v73 = *(_DWORD *)(a1 + 560);
      v213 = &v73;
      v74 = *(_DWORD *)(a1 + 564);
      v215 = &v74;
      v75 = *(_DWORD *)(a1 + 680);
      v217 = &v75;
      v219 = &v76;
      v221 = &v77;
      v78 = v30;
      v223 = &v78;
      v79 = v14;
      v194 = v122;
      v196 = v122;
      v198 = v122;
      v200 = v122;
      v202 = v122;
      v204 = v122;
      v206 = v122;
      v208 = v122;
      v210 = v122;
      v212 = v122;
      v214 = v122;
      v216 = v122;
      v218 = v122;
      v76 = v21;
      v220 = v122;
      v77 = v22;
      v222 = v122;
      v224 = v122;
      v225 = &v79;
      v80 = v15;
      v227 = &v80;
      v226 = v122;
      v228 = v122;
      result = tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0063748, (int)&dword_1C0057AF5, v18, v22, 0x42u, &v85);
    }
  }
  *(_QWORD *)(a1 + 476) = 0LL;
  *(_QWORD *)(a1 + 484) = 0LL;
  *(_QWORD *)(a1 + 492) = 0LL;
  *(_QWORD *)(a1 + 500) = 0LL;
  *(_QWORD *)(a1 + 508) = 0LL;
  *(_DWORD *)(a1 + 516) = 0;
  return result;
}
