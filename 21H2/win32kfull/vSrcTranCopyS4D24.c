/*
 * XREFs of vSrcTranCopyS4D24 @ 0x1C0277F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D24(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // r15
  __int64 v14; // rax
  int v15; // ecx
  int *v16; // rcx
  int v17; // r11d
  int v18; // ebx
  int v19; // r12d
  unsigned int v20; // edi
  int v21; // r13d
  int v22; // eax
  unsigned int v23; // ebp
  unsigned int v24; // r10d
  signed int v25; // r9d
  __int64 result; // rax
  _BYTE *v27; // r8
  __int64 v28; // r14
  int v29; // ecx
  int v30; // edx
  char *v31; // r12
  __int64 v32; // rsi
  int v33; // ecx
  int v34; // ecx
  unsigned __int8 v35; // dl
  int v36; // r9d
  unsigned int v37; // edi
  unsigned int v38; // ecx
  __int64 v39; // r10
  _DWORD *v40; // rax
  unsigned int v41; // edi
  int v42; // r11d
  _DWORD *v43; // rax
  int v44; // r11d
  unsigned int v45; // ebx
  unsigned int v46; // ecx
  int v47; // r8d
  _DWORD *v48; // rax
  int v49; // r8d
  unsigned int v50; // edx
  int v51; // r9d
  unsigned int v52; // eax
  unsigned int v53; // r9d
  unsigned int v54; // eax
  unsigned __int8 v55; // dl
  unsigned int v56; // r9d
  unsigned int v57; // edi
  unsigned int v58; // ecx
  __int64 v59; // r10
  _DWORD *v60; // rax
  unsigned int v61; // edi
  int v62; // r11d
  _DWORD *v63; // rax
  int v64; // r11d
  unsigned int v65; // ebx
  unsigned int v66; // ecx
  unsigned int v67; // ebx
  int v68; // r8d
  _DWORD *v69; // rax
  int v70; // r8d
  unsigned int v71; // edx
  int v72; // r9d
  unsigned int v73; // eax
  unsigned __int8 v74; // dl
  int v75; // r9d
  unsigned int v76; // edi
  unsigned int v77; // ecx
  __int64 v78; // r10
  _DWORD *v79; // rax
  unsigned int v80; // edi
  int v81; // ebx
  _DWORD *v82; // rax
  unsigned int v83; // r11d
  unsigned int v84; // ecx
  unsigned int v85; // r11d
  int v86; // r8d
  _DWORD *v87; // rax
  int v88; // r8d
  unsigned int v89; // edx
  int v90; // r9d
  unsigned int v91; // eax
  unsigned int v92; // r9d
  unsigned int v93; // eax
  char v94; // dl
  unsigned __int8 v95; // r8
  int v96; // r9d
  _DWORD *v97; // rax
  unsigned int v98; // edi
  unsigned int v99; // ecx
  __int64 v100; // r10
  unsigned int v101; // edi
  int v102; // ebx
  _DWORD *v103; // rax
  unsigned int v104; // r11d
  unsigned int v105; // ecx
  unsigned int v106; // r11d
  int v107; // r8d
  _DWORD *v108; // rax
  int v109; // r8d
  unsigned int v110; // edx
  int v111; // r9d
  unsigned int v112; // eax
  unsigned int v113; // r9d
  unsigned int v114; // eax
  unsigned __int8 v115; // dl
  unsigned int v116; // r9d
  unsigned int v117; // edi
  unsigned int v118; // ecx
  __int64 v119; // r10
  _DWORD *v120; // rax
  unsigned int v121; // edi
  int v122; // r11d
  _DWORD *v123; // rax
  int v124; // r11d
  unsigned int v125; // ebx
  unsigned int v126; // ecx
  unsigned int v127; // ebx
  int v128; // r8d
  _DWORD *v129; // rax
  int v130; // r8d
  unsigned int v131; // edx
  int v132; // r9d
  unsigned int v133; // eax
  unsigned __int8 v134; // dl
  unsigned __int8 v135; // r8
  unsigned int v136; // r9d
  _DWORD *v137; // rax
  unsigned int v138; // edi
  unsigned int v139; // ecx
  __int64 v140; // r10
  unsigned int v141; // edi
  int v142; // ebx
  _DWORD *v143; // rax
  int v144; // ebx
  unsigned int v145; // r11d
  unsigned int v146; // ecx
  unsigned int v147; // r11d
  int v148; // r8d
  _DWORD *v149; // rax
  int v150; // r8d
  unsigned int v151; // edx
  int v152; // r9d
  unsigned int v153; // eax
  unsigned __int8 v154; // dl
  unsigned int v155; // r9d
  unsigned int v156; // edi
  unsigned int v157; // ecx
  __int64 v158; // r10
  _DWORD *v159; // rax
  unsigned int v160; // edi
  int v161; // r11d
  _DWORD *v162; // rax
  int v163; // r11d
  unsigned int v164; // ebx
  unsigned int v165; // ecx
  unsigned int v166; // ebx
  int v167; // r8d
  _DWORD *v168; // rax
  int v169; // r8d
  unsigned int v170; // edx
  int v171; // r9d
  unsigned int v172; // eax
  int v173; // ecx
  unsigned __int8 v174; // dl
  unsigned int v175; // r9d
  unsigned int v176; // edi
  unsigned int v177; // ecx
  __int64 v178; // r10
  _DWORD *v179; // rax
  unsigned int v180; // edi
  int v181; // r11d
  _DWORD *v182; // rax
  int v183; // r11d
  unsigned int v184; // ebx
  unsigned int v185; // ecx
  unsigned int v186; // ebx
  int v187; // r8d
  _DWORD *v188; // rax
  int v189; // r8d
  unsigned int v190; // edx
  int v191; // r9d
  unsigned int v192; // eax
  int v193; // ecx
  unsigned __int8 v194; // dl
  unsigned int v195; // r9d
  unsigned int v196; // edi
  unsigned int v197; // ecx
  __int64 v198; // r10
  _DWORD *v199; // rax
  unsigned int v200; // edi
  int v201; // ebx
  _DWORD *v202; // rax
  int v203; // ebx
  unsigned int v204; // r11d
  unsigned int v205; // ecx
  unsigned int v206; // r11d
  int v207; // r8d
  _DWORD *v208; // rax
  int v209; // r8d
  unsigned int v210; // edx
  int v211; // r9d
  unsigned int v212; // eax
  unsigned __int8 v213; // dl
  unsigned int v214; // r9d
  unsigned int v215; // edi
  unsigned int v216; // ecx
  __int64 v217; // r10
  _DWORD *v218; // rax
  unsigned int v219; // edi
  int v220; // ebx
  _DWORD *v221; // rax
  int v222; // ebx
  unsigned int v223; // r11d
  unsigned int v224; // ecx
  unsigned int v225; // r11d
  int v226; // r8d
  _DWORD *v227; // rax
  int v228; // r8d
  unsigned int v229; // edx
  int v230; // r9d
  unsigned int v231; // eax
  unsigned __int8 v232; // dl
  int v233; // r9d
  unsigned int v234; // edi
  unsigned int v235; // ecx
  __int64 v236; // r10
  _DWORD *v237; // rax
  int v238; // r11d
  _DWORD *v239; // rax
  int v240; // r11d
  unsigned int v241; // ebx
  unsigned int v242; // ecx
  unsigned int v243; // ebx
  int v244; // r8d
  _DWORD *v245; // rax
  int v246; // r8d
  unsigned int v247; // edx
  int v248; // r9d
  unsigned int v249; // eax
  unsigned int v250; // r9d
  unsigned int v251; // eax
  unsigned __int8 v252; // dl
  _DWORD *v253; // r15
  _DWORD *v254; // rax
  unsigned int v255; // ebx
  unsigned int v256; // ecx
  __int64 v257; // r9
  unsigned int v258; // ebx
  int v259; // r11d
  _DWORD *v260; // rax
  int v261; // r11d
  unsigned int v262; // r10d
  unsigned int v263; // ecx
  unsigned int v264; // r10d
  int v265; // edx
  unsigned int v266; // eax
  char v267; // [rsp+0h] [rbp-68h]
  char v268; // [rsp+4h] [rbp-64h]
  int v269; // [rsp+8h] [rbp-60h]
  int v270; // [rsp+Ch] [rbp-5Ch]
  unsigned int v271; // [rsp+10h] [rbp-58h]
  unsigned int v272; // [rsp+14h] [rbp-54h]
  int v273; // [rsp+18h] [rbp-50h]
  __int64 v274; // [rsp+20h] [rbp-48h]
  _BYTE *v275; // [rsp+70h] [rbp+8h]
  int v276; // [rsp+78h] [rbp+10h]
  __int64 v277; // [rsp+88h] [rbp+20h]
  int v278; // [rsp+90h] [rbp+28h]
  int v279; // [rsp+98h] [rbp+30h]
  unsigned int v280; // [rsp+B0h] [rbp+48h]
  char v281; // [rsp+C0h] [rbp+58h]

  v11 = a3;
  v14 = *(_QWORD *)(a11 + 128);
  if ( !v14 )
    v14 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1776LL);
  v15 = *(_DWORD *)(v14 + 24);
  if ( (v15 & 2) != 0 )
  {
    v16 = *(int **)(v14 + 112);
    v17 = *v16;
    v18 = v16[6];
    v19 = v16[1];
    v20 = v16[7];
    v21 = v16[2];
    v22 = v16[8];
    v269 = *v16;
  }
  else
  {
    v19 = 65280;
    LOBYTE(v20) = 8;
    if ( (v15 & 4) != 0 )
    {
      LOBYTE(v22) = 16;
      v17 = 255;
      v269 = 255;
      v21 = 16711680;
      LOBYTE(v18) = 0;
    }
    else
    {
      LOBYTE(v18) = 16;
      v17 = 16711680;
      v269 = 16711680;
      v21 = 255;
      LOBYTE(v22) = 0;
    }
  }
  v23 = a9;
  v24 = a6 & 0xFFFFFFFC;
  v280 = (a9 & v17) >> v18;
  v281 = v22;
  v268 = v18;
  v270 = v19;
  v25 = (a5 + 3) & 0xFFFFFFFC;
  v271 = (v23 & v19) >> v20;
  v267 = v20;
  v272 = (v23 & v21) >> v22;
  result = (unsigned int)(3 * a5);
  v27 = (_BYTE *)(a2 / 2 + a1);
  v28 = (int)result + a4;
  v275 = v27;
  v277 = v28;
  if ( v25 > (int)(a6 & 0xFFFFFFFC) )
  {
    if ( (a5 & 3) == 1 )
    {
      v232 = *v27 & 0xF;
      if ( v232 )
      {
        if ( v232 == 15 )
        {
          v233 = v23;
        }
        else
        {
          LOWORD(a10) = *(_WORD *)v28;
          BYTE2(a10) = *(_BYTE *)(v28 + 2);
          v234 = (a10 & (unsigned int)v17) >> v18;
          v235 = v280 - v234;
          v236 = v232;
          v237 = &unk_1C02E43F0;
          if ( (int)(v280 - v234) >= 0 )
            v237 = &unk_1C02E4430;
          v20 = v234 << 16;
          v238 = v237[v232];
          v239 = &unk_1C02E43F0;
          v240 = v235 * v238;
          v241 = (a10 & (unsigned int)v19) >> v267;
          v242 = v271 - v241;
          if ( (int)(v271 - v241) >= 0 )
            v239 = &unk_1C02E4430;
          v243 = v241 << 16;
          v244 = v239[v232];
          v245 = &unk_1C02E43F0;
          v246 = v242 * v244;
          v247 = (a10 & (unsigned int)v21) >> v281;
          if ( (int)(v272 - v247) >= 0 )
            v245 = &unk_1C02E4430;
          v248 = v245[v236];
          v249 = v20 + v240;
          v17 = v269;
          LOBYTE(v20) = v267;
          v250 = v269 & (HIWORD(v249) << v268) | v21 & (((v247 << 16) + (v272 - v247) * v248) >> 16 << v281);
          v251 = v243 + v246;
          v27 = v275;
          v233 = v19 & (HIWORD(v251) << v267) | v250;
        }
        *(_BYTE *)v28 = v233;
        *(_BYTE *)(v28 + 2) = BYTE2(v233);
        *(_BYTE *)(v28 + 1) = BYTE1(v233);
      }
      v28 += 3LL;
      result = (unsigned int)(a5 + 1);
      if ( (_DWORD)result == a6 )
        return result;
      ++v27;
    }
    else if ( (a5 & 3) != 2 )
    {
      return result;
    }
    v252 = *v27 >> 4;
    if ( v252 )
    {
      if ( v252 != 15 )
      {
        v253 = &unk_1C02E43F0;
        LOWORD(a10) = *(_WORD *)v28;
        BYTE2(a10) = *(_BYTE *)(v28 + 2);
        v254 = &unk_1C02E43F0;
        v255 = (a10 & (unsigned int)v17) >> v268;
        v256 = v280 - v255;
        v257 = v252;
        if ( (int)(v280 - v255) >= 0 )
          v254 = &unk_1C02E4430;
        v258 = v255 << 16;
        v259 = v254[v252];
        v260 = &unk_1C02E43F0;
        v261 = v256 * v259;
        v262 = (a10 & (unsigned int)v19) >> v20;
        v263 = v271 - v262;
        if ( (int)(v271 - v262) >= 0 )
          v260 = &unk_1C02E4430;
        v264 = v262 << 16;
        v265 = v263 * v260[v252];
        v266 = (a10 & (unsigned int)v21) >> v281;
        if ( (int)(v272 - v266) >= 0 )
          v253 = &unk_1C02E4430;
        v23 = v269 & ((v258 + v261) >> 16 << v268) | v19 & ((v264 + v265) >> 16 << v20) | v21 & (((v266 << 16)
                                                                                                + (v272 - v266)
                                                                                                * v253[v257]) >> 16 << v281);
      }
      *(_BYTE *)v28 = v23;
      result = v23 >> 8;
      *(_BYTE *)(v28 + 2) = BYTE2(v23);
      *(_BYTE *)(v28 + 1) = BYTE1(v23);
    }
    return result;
  }
  v279 = a6 - v24;
  v29 = v25 - a5;
  v273 = v25 - a5;
  result = (unsigned int)((int)(v24 - v25) / 4);
  v30 = (int)(v24 - v25) / 4;
  v276 = v30;
  if ( a8 )
  {
    while ( 1 )
    {
      v31 = v27;
      v32 = v28;
      v33 = v29 - 1;
      if ( !v33 )
        goto LABEL_37;
      v34 = v33 - 1;
      if ( !v34 )
        goto LABEL_25;
      if ( v34 == 1 )
        break;
LABEL_49:
      if ( v30 > 0 )
      {
        v274 = (unsigned int)v30;
        while ( 1 )
        {
          v94 = *v31;
          v95 = (unsigned __int8)*v31 >> 4;
          if ( v95 )
          {
            if ( v95 == 15 )
            {
              v96 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)v32;
              BYTE2(a10) = *(_BYTE *)(v32 + 2);
              v97 = &unk_1C02E43F0;
              v98 = (a10 & (unsigned int)v17) >> v18;
              v99 = v280 - v98;
              v100 = v95;
              if ( (int)(v280 - v98) >= 0 )
                v97 = &unk_1C02E4430;
              v101 = v98 << 16;
              v102 = v97[v95];
              v103 = &unk_1C02E43F0;
              v18 = v99 * v102;
              v104 = (a10 & (unsigned int)v270) >> v267;
              v105 = v271 - v104;
              if ( (int)(v271 - v104) >= 0 )
                v103 = &unk_1C02E4430;
              v106 = v104 << 16;
              v107 = v103[v95];
              v108 = &unk_1C02E43F0;
              v109 = v105 * v107;
              v110 = (a10 & (unsigned int)v21) >> v281;
              if ( (int)(v272 - v110) >= 0 )
                v108 = &unk_1C02E4430;
              v111 = v108[v100];
              v112 = v106 + v109;
              v17 = v269;
              v113 = v270 & (HIWORD(v112) << v267) | v21 & (((v110 << 16) + (v272 - v110) * v111) >> 16 << v281);
              v114 = v101 + v18;
              LOBYTE(v18) = v268;
              v96 = v269 & (HIWORD(v114) << v268) | v113;
            }
            *(_BYTE *)v32 = v96;
            *(_BYTE *)(v32 + 2) = BYTE2(v96);
            *(_BYTE *)(v32 + 1) = BYTE1(v96);
            v94 = *v31;
          }
          v115 = v94 & 0xF;
          if ( v115 )
          {
            if ( v115 == 15 )
            {
              v116 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v32 + 3);
              BYTE2(a10) = *(_BYTE *)(v32 + 5);
              v117 = (a10 & (unsigned int)v17) >> v18;
              v118 = v280 - v117;
              v119 = v115;
              v120 = &unk_1C02E43F0;
              if ( (int)(v280 - v117) >= 0 )
                v120 = &unk_1C02E4430;
              v121 = v117 << 16;
              v122 = v120[v115];
              v123 = &unk_1C02E43F0;
              v124 = v118 * v122;
              v125 = (a10 & (unsigned int)v270) >> v267;
              v126 = v271 - v125;
              if ( (int)(v271 - v125) >= 0 )
                v123 = &unk_1C02E4430;
              v127 = v125 << 16;
              v128 = v123[v115];
              v129 = &unk_1C02E43F0;
              v130 = v126 * v128;
              v131 = (a10 & (unsigned int)v21) >> v281;
              if ( (int)(v272 - v131) >= 0 )
                v129 = &unk_1C02E4430;
              v132 = v129[v119];
              v133 = v121 + v124;
              v17 = v269;
              v116 = v270 & ((v127 + v130) >> 16 << v267) | v269 & (HIWORD(v133) << v268) | v21 & (((v131 << 16)
                                                                                                  + (v272 - v131) * v132) >> 16 << v281);
            }
            *(_BYTE *)(v32 + 3) = v116;
            *(_BYTE *)(v32 + 5) = BYTE2(v116);
            *(_BYTE *)(v32 + 4) = BYTE1(v116);
          }
          v134 = v31[1];
          v135 = v134 >> 4;
          if ( v134 >> 4 )
          {
            if ( v135 == 15 )
            {
              v136 = v23;
            }
            else
            {
              LOBYTE(a10) = *(_BYTE *)(v32 + 6);
              *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v32 + 7);
              v137 = &unk_1C02E43F0;
              v138 = (a10 & (unsigned int)v17) >> v268;
              v139 = v280 - v138;
              v140 = v135;
              if ( (int)(v280 - v138) >= 0 )
                v137 = &unk_1C02E4430;
              v141 = v138 << 16;
              v142 = v137[v135];
              v143 = &unk_1C02E43F0;
              v144 = v139 * v142;
              v145 = (a10 & (unsigned int)v270) >> v267;
              v146 = v271 - v145;
              if ( (int)(v271 - v145) >= 0 )
                v143 = &unk_1C02E4430;
              v147 = v145 << 16;
              v148 = v143[v135];
              v149 = &unk_1C02E43F0;
              v150 = v146 * v148;
              v151 = (a10 & (unsigned int)v21) >> v281;
              if ( (int)(v272 - v151) >= 0 )
                v149 = &unk_1C02E4430;
              v152 = v149[v140];
              v153 = v147 + v150;
              v17 = v269;
              v136 = v269 & ((v144 + v141) >> 16 << v268) | v270 & (HIWORD(v153) << v267) | v21 & (((v151 << 16)
                                                                                                  + (v272 - v151) * v152) >> 16 << v281);
            }
            *(_BYTE *)(v32 + 6) = v136;
            *(_BYTE *)(v32 + 8) = BYTE2(v136);
            *(_BYTE *)(v32 + 7) = BYTE1(v136);
            v134 = v31[1];
          }
          v154 = v134 & 0xF;
          if ( v154 )
          {
            if ( v154 == 15 )
            {
              v155 = v23;
            }
            else
            {
              LOBYTE(a10) = *(_BYTE *)(v32 + 9);
              *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v32 + 10);
              v156 = (a10 & (unsigned int)v17) >> v268;
              v157 = v280 - v156;
              v158 = v154;
              v159 = &unk_1C02E43F0;
              if ( (int)(v280 - v156) >= 0 )
                v159 = &unk_1C02E4430;
              v160 = v156 << 16;
              v161 = v159[v154];
              v162 = &unk_1C02E43F0;
              v163 = v157 * v161;
              v164 = (a10 & (unsigned int)v270) >> v267;
              v165 = v271 - v164;
              if ( (int)(v271 - v164) >= 0 )
                v162 = &unk_1C02E4430;
              v166 = v164 << 16;
              v167 = v162[v154];
              v168 = &unk_1C02E43F0;
              v169 = v165 * v167;
              v170 = (a10 & (unsigned int)v21) >> v281;
              if ( (int)(v272 - v170) >= 0 )
                v168 = &unk_1C02E4430;
              v171 = v168[v158];
              v172 = v163 + v160;
              v17 = v269;
              v155 = v270 & ((v166 + v169) >> 16 << v267) | v269 & (HIWORD(v172) << v268) | v21 & (((v170 << 16)
                                                                                                  + (v272 - v170) * v171) >> 16 << v281);
            }
            *(_BYTE *)(v32 + 9) = v155;
            *(_BYTE *)(v32 + 11) = BYTE2(v155);
            *(_BYTE *)(v32 + 10) = BYTE1(v155);
          }
          v32 += 12LL;
          v31 += 2;
          if ( !--v274 )
            break;
          LOBYTE(v18) = v268;
        }
        v28 = v277;
      }
      v173 = v279;
      if ( v279 )
      {
        v174 = (unsigned __int8)*v31 >> 4;
        if ( v174 )
        {
          if ( v174 == 15 )
          {
            v175 = v23;
          }
          else
          {
            LOWORD(a10) = *(_WORD *)v32;
            BYTE2(a10) = *(_BYTE *)(v32 + 2);
            v176 = (a10 & (unsigned int)v17) >> v268;
            v177 = v280 - v176;
            v178 = v174;
            v179 = &unk_1C02E43F0;
            if ( (int)(v280 - v176) >= 0 )
              v179 = &unk_1C02E4430;
            v180 = v176 << 16;
            v181 = v179[v174];
            v182 = &unk_1C02E43F0;
            v183 = v177 * v181;
            v184 = (a10 & (unsigned int)v270) >> v267;
            v185 = v271 - v184;
            if ( (int)(v271 - v184) >= 0 )
              v182 = &unk_1C02E4430;
            v186 = v184 << 16;
            v187 = v182[v174];
            v188 = &unk_1C02E43F0;
            v189 = v185 * v187;
            v190 = (a10 & (unsigned int)v21) >> v281;
            if ( (int)(v272 - v190) >= 0 )
              v188 = &unk_1C02E4430;
            v191 = v188[v178];
            v192 = v180 + v183;
            v17 = v269;
            v173 = v279;
            v175 = v270 & ((v189 + v186) >> 16 << v267) | v269 & (HIWORD(v192) << v268) | v21 & (((v190 << 16)
                                                                                                + (v272 - v190) * v191) >> 16 << v281);
          }
          *(_BYTE *)v32 = v175;
          *(_BYTE *)(v32 + 2) = BYTE2(v175);
          *(_BYTE *)(v32 + 1) = BYTE1(v175);
        }
        v193 = v173 - 1;
        v278 = v193;
        if ( v193 )
        {
          v194 = *v31 & 0xF;
          if ( v194 )
          {
            if ( v194 == 15 )
            {
              v195 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v32 + 3);
              BYTE2(a10) = *(_BYTE *)(v32 + 5);
              v196 = (a10 & (unsigned int)v17) >> v268;
              v197 = v280 - v196;
              v198 = v194;
              v199 = &unk_1C02E43F0;
              if ( (int)(v280 - v196) >= 0 )
                v199 = &unk_1C02E4430;
              v200 = v196 << 16;
              v201 = v199[v194];
              v202 = &unk_1C02E43F0;
              v203 = v197 * v201;
              v204 = (a10 & (unsigned int)v270) >> v267;
              v205 = v271 - v204;
              if ( (int)(v271 - v204) >= 0 )
                v202 = &unk_1C02E4430;
              v206 = v204 << 16;
              v207 = v202[v194];
              v208 = &unk_1C02E43F0;
              v209 = v205 * v207;
              v210 = (a10 & (unsigned int)v21) >> v281;
              if ( (int)(v272 - v210) >= 0 )
                v208 = &unk_1C02E4430;
              v211 = v208[v198];
              v212 = v206 + v209;
              v17 = v269;
              v193 = v278;
              v195 = v269 & ((v200 + v203) >> 16 << v268) | v270 & (HIWORD(v212) << v267) | v21 & (((v210 << 16)
                                                                                                  + (v272 - v210) * v211) >> 16 << v281);
            }
            *(_BYTE *)(v32 + 3) = v195;
            *(_BYTE *)(v32 + 5) = BYTE2(v195);
            *(_BYTE *)(v32 + 4) = BYTE1(v195);
          }
          if ( v193 != 1 )
          {
            v213 = (unsigned __int8)v31[1] >> 4;
            if ( v213 )
            {
              if ( v213 == 15 )
              {
                v214 = v23;
              }
              else
              {
                LOWORD(a10) = *(_WORD *)(v32 + 6);
                BYTE2(a10) = *(_BYTE *)(v32 + 8);
                v215 = (a10 & (unsigned int)v17) >> v268;
                v216 = v280 - v215;
                v217 = v213;
                v218 = &unk_1C02E43F0;
                if ( (int)(v280 - v215) >= 0 )
                  v218 = &unk_1C02E4430;
                v219 = v215 << 16;
                v220 = v218[v213];
                v221 = &unk_1C02E43F0;
                v222 = v216 * v220;
                v223 = (a10 & (unsigned int)v270) >> v267;
                v224 = v271 - v223;
                if ( (int)(v271 - v223) >= 0 )
                  v221 = &unk_1C02E4430;
                v225 = v223 << 16;
                v226 = v221[v213];
                v227 = &unk_1C02E43F0;
                v228 = v224 * v226;
                v229 = (a10 & (unsigned int)v21) >> v281;
                if ( (int)(v272 - v229) >= 0 )
                  v227 = &unk_1C02E4430;
                v230 = v227[v217];
                v231 = v228 + v225;
                v17 = v269;
                v214 = v269 & ((v222 + v219) >> 16 << v268) | v270 & (HIWORD(v231) << v267) | v21 & (((v229 << 16) + (v272 - v229) * v230) >> 16 << v281);
              }
              *(_BYTE *)(v32 + 6) = v214;
              *(_BYTE *)(v32 + 8) = BYTE2(v214);
              *(_BYTE *)(v32 + 7) = BYTE1(v214);
            }
          }
        }
      }
      result = (unsigned int)(a8 - 1);
      v27 = &v275[v11];
      v28 += a7;
      LOBYTE(v18) = v268;
      v29 = v273;
      v30 = v276;
      a8 = result;
      v275 += v11;
      v277 = v28;
      if ( !(_DWORD)result )
        return result;
    }
    v35 = *v27 & 0xF;
    if ( v35 )
    {
      if ( v35 == 15 )
      {
        v36 = v23;
      }
      else
      {
        LOBYTE(a10) = *(_BYTE *)v28;
        *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v28 + 1);
        v37 = (a10 & (unsigned int)v17) >> v18;
        v38 = v280 - v37;
        v39 = v35;
        v40 = &unk_1C02E43F0;
        if ( (int)(v280 - v37) >= 0 )
          v40 = &unk_1C02E4430;
        v41 = v37 << 16;
        v42 = v40[v35];
        v43 = &unk_1C02E43F0;
        v44 = v38 * v42;
        v45 = (a10 & (unsigned int)v270) >> v267;
        v46 = v271 - v45;
        if ( (int)(v271 - v45) >= 0 )
          v43 = &unk_1C02E4430;
        v18 = v45 << 16;
        v47 = v43[v35];
        v48 = &unk_1C02E43F0;
        v49 = v46 * v47;
        v50 = (a10 & (unsigned int)v21) >> v281;
        if ( (int)(v272 - v50) >= 0 )
          v48 = &unk_1C02E4430;
        v51 = v48[v39];
        v52 = v44 + v41;
        v17 = v269;
        v53 = v269 & (HIWORD(v52) << v268) | v21 & (((v50 << 16) + (v272 - v50) * v51) >> 16 << v281);
        v54 = v49 + v18;
        v27 = v275;
        LOBYTE(v18) = v268;
        v36 = v270 & (HIWORD(v54) << v267) | v53;
      }
      *(_BYTE *)v28 = v36;
      *(_BYTE *)(v28 + 2) = BYTE2(v36);
      *(_BYTE *)(v28 + 1) = BYTE1(v36);
    }
    v32 = v28 + 3;
    v31 = v27 + 1;
LABEL_25:
    v55 = (unsigned __int8)*v31 >> 4;
    if ( v55 )
    {
      if ( v55 == 15 )
      {
        v56 = v23;
      }
      else
      {
        LOBYTE(a10) = *(_BYTE *)v32;
        *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v32 + 1);
        v57 = (a10 & (unsigned int)v17) >> v18;
        v58 = v280 - v57;
        v59 = v55;
        v60 = &unk_1C02E43F0;
        if ( (int)(v280 - v57) >= 0 )
          v60 = &unk_1C02E4430;
        v61 = v57 << 16;
        v62 = v60[v55];
        v63 = &unk_1C02E43F0;
        v64 = v58 * v62;
        v65 = (a10 & (unsigned int)v270) >> v267;
        v66 = v271 - v65;
        if ( (int)(v271 - v65) >= 0 )
          v63 = &unk_1C02E4430;
        v67 = v65 << 16;
        v68 = v63[v55];
        v69 = &unk_1C02E43F0;
        v70 = v66 * v68;
        v71 = (a10 & (unsigned int)v21) >> v281;
        if ( (int)(v272 - v71) >= 0 )
          v69 = &unk_1C02E4430;
        v72 = v69[v59];
        v73 = v61 + v64;
        v17 = v269;
        v56 = v270 & ((v67 + v70) >> 16 << v267) | v269 & (HIWORD(v73) << v268) | v21 & (((v71 << 16)
                                                                                        + (v272 - v71) * v72) >> 16 << v281);
      }
      *(_BYTE *)v32 = v56;
      *(_BYTE *)(v32 + 2) = BYTE2(v56);
      *(_BYTE *)(v32 + 1) = BYTE1(v56);
    }
    LOBYTE(v18) = v268;
    v32 += 3LL;
LABEL_37:
    v74 = *v31 & 0xF;
    if ( v74 )
    {
      if ( v74 == 15 )
      {
        v75 = v23;
      }
      else
      {
        LOBYTE(a10) = *(_BYTE *)v32;
        *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v32 + 1);
        v76 = (a10 & (unsigned int)v17) >> v18;
        v77 = v280 - v76;
        v78 = v74;
        v79 = &unk_1C02E43F0;
        if ( (int)(v280 - v76) >= 0 )
          v79 = &unk_1C02E4430;
        v80 = v76 << 16;
        v81 = v79[v74];
        v82 = &unk_1C02E43F0;
        v18 = v77 * v81;
        v83 = (a10 & (unsigned int)v270) >> v267;
        v84 = v271 - v83;
        if ( (int)(v271 - v83) >= 0 )
          v82 = &unk_1C02E4430;
        v85 = v83 << 16;
        v86 = v82[v74];
        v87 = &unk_1C02E43F0;
        v88 = v84 * v86;
        v89 = (a10 & (unsigned int)v21) >> v281;
        if ( (int)(v272 - v89) >= 0 )
          v87 = &unk_1C02E4430;
        v90 = v87[v78];
        v91 = v85 + v88;
        v17 = v269;
        v92 = v270 & (HIWORD(v91) << v267) | v21 & (((v89 << 16) + (v272 - v89) * v90) >> 16 << v281);
        v93 = v80 + v18;
        LOBYTE(v18) = v268;
        v75 = v269 & (HIWORD(v93) << v268) | v92;
      }
      *(_BYTE *)v32 = v75;
      *(_BYTE *)(v32 + 2) = BYTE2(v75);
      *(_BYTE *)(v32 + 1) = BYTE1(v75);
    }
    v30 = v276;
    v32 += 3LL;
    ++v31;
    goto LABEL_49;
  }
  return result;
}
