void __fastcall vSrcTranCopyS4D24(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r14
  __int64 v14; // rax
  int v15; // ecx
  int *v16; // rcx
  int v17; // r12d
  int v18; // eax
  int v19; // r11d
  int v20; // r10d
  int v21; // r13d
  unsigned int v22; // edi
  unsigned int v23; // ebp
  unsigned int v24; // ebx
  signed int v25; // r8d
  const unsigned __int8 *v26; // r9
  unsigned __int8 *v27; // r15
  int v28; // ecx
  int v29; // edx
  const unsigned __int8 *v30; // r12
  unsigned __int8 *v31; // rsi
  int v32; // ecx
  int v33; // ecx
  unsigned __int8 v34; // dl
  unsigned int v35; // r8d
  unsigned int v36; // edi
  __int64 v37; // r9
  unsigned int v38; // ebx
  _DWORD *v39; // rax
  unsigned int v40; // edi
  unsigned int v41; // r11d
  int v42; // ebx
  _DWORD *v43; // rax
  unsigned int v44; // r10d
  unsigned int v45; // r11d
  unsigned int v46; // edx
  _DWORD *v47; // rax
  int v48; // r8d
  unsigned int v49; // eax
  unsigned __int8 v50; // dl
  _BYTE *v51; // rcx
  _BYTE *v52; // r9
  unsigned int v53; // r8d
  unsigned int v54; // edi
  __int64 v55; // r9
  unsigned int v56; // ebx
  _DWORD *v57; // rax
  unsigned int v58; // edi
  unsigned int v59; // r11d
  int v60; // ebx
  _DWORD *v61; // rax
  unsigned int v62; // r10d
  unsigned int v63; // r11d
  unsigned int v64; // edx
  _DWORD *v65; // rax
  int v66; // r8d
  unsigned int v67; // eax
  unsigned __int8 v68; // dl
  _BYTE *v69; // rcx
  _BYTE *v70; // r9
  unsigned int v71; // r8d
  unsigned int v72; // edi
  __int64 v73; // r9
  unsigned int v74; // ebx
  _DWORD *v75; // rax
  unsigned int v76; // edi
  unsigned int v77; // r11d
  int v78; // ebx
  _DWORD *v79; // rax
  unsigned int v80; // r10d
  unsigned int v81; // r11d
  unsigned int v82; // edx
  _DWORD *v83; // rax
  int v84; // r8d
  unsigned int v85; // eax
  unsigned __int8 v86; // dl
  _BYTE *v87; // rcx
  _BYTE *v88; // r9
  unsigned int v89; // r8d
  unsigned int v90; // edi
  __int64 v91; // r9
  unsigned int v92; // ebx
  _DWORD *v93; // rax
  unsigned int v94; // edi
  unsigned int v95; // r11d
  int v96; // ebx
  _DWORD *v97; // rax
  unsigned int v98; // r10d
  unsigned int v99; // r11d
  unsigned int v100; // edx
  _DWORD *v101; // rax
  int v102; // r8d
  unsigned int v103; // eax
  unsigned __int8 v104; // dl
  _BYTE *v105; // rcx
  _BYTE *v106; // r9
  unsigned int v107; // r8d
  unsigned int v108; // edi
  __int64 v109; // r9
  unsigned int v110; // ebx
  _DWORD *v111; // rax
  unsigned int v112; // edi
  unsigned int v113; // r11d
  int v114; // ebx
  _DWORD *v115; // rax
  unsigned int v116; // r10d
  unsigned int v117; // r11d
  unsigned int v118; // edx
  _DWORD *v119; // rax
  int v120; // r8d
  unsigned int v121; // eax
  unsigned __int8 v122; // dl
  _BYTE *v123; // rcx
  _BYTE *v124; // r9
  unsigned int v125; // r8d
  unsigned int v126; // edi
  __int64 v127; // r9
  unsigned int v128; // ebx
  _DWORD *v129; // rax
  unsigned int v130; // edi
  unsigned int v131; // r11d
  int v132; // ebx
  _DWORD *v133; // rax
  unsigned int v134; // r10d
  unsigned int v135; // r11d
  unsigned int v136; // edx
  _DWORD *v137; // rax
  int v138; // r8d
  unsigned int v139; // eax
  unsigned __int8 v140; // dl
  _BYTE *v141; // rcx
  _BYTE *v142; // r8
  unsigned int v143; // r9d
  unsigned int v144; // edi
  __int64 v145; // r11
  unsigned int v146; // ebx
  _DWORD *v147; // rax
  unsigned int v148; // edi
  unsigned int v149; // r10d
  int v150; // ebx
  _DWORD *v151; // rax
  unsigned int v152; // r8d
  unsigned int v153; // edx
  int v154; // r8d
  _DWORD *v155; // rax
  int v156; // r9d
  unsigned int v157; // eax
  int v158; // ecx
  unsigned __int8 v159; // dl
  unsigned int v160; // r9d
  unsigned int v161; // edi
  __int64 v162; // r11
  unsigned int v163; // ebx
  _DWORD *v164; // rax
  unsigned int v165; // edi
  unsigned int v166; // r10d
  int v167; // ebx
  _DWORD *v168; // rax
  unsigned int v169; // r8d
  unsigned int v170; // edx
  int v171; // r8d
  _DWORD *v172; // rax
  int v173; // r9d
  unsigned int v174; // eax
  int v175; // ecx
  unsigned __int8 v176; // dl
  int v177; // r8d
  unsigned int v178; // edi
  __int64 v179; // r9
  unsigned int v180; // ebx
  _DWORD *v181; // rax
  unsigned int v182; // edi
  unsigned int v183; // r11d
  int v184; // ebx
  _DWORD *v185; // rax
  unsigned int v186; // r10d
  unsigned int v187; // r11d
  unsigned int v188; // edx
  _DWORD *v189; // rax
  unsigned int v190; // r8d
  unsigned int v191; // eax
  unsigned __int8 v192; // dl
  unsigned int v193; // r9d
  unsigned int v194; // edi
  __int64 v195; // r11
  unsigned int v196; // ebx
  _DWORD *v197; // rax
  unsigned int v198; // edi
  unsigned int v199; // r10d
  int v200; // ebx
  _DWORD *v201; // rax
  unsigned int v202; // r8d
  unsigned int v203; // edx
  int v204; // r8d
  _DWORD *v205; // rax
  int v206; // r9d
  unsigned int v207; // eax
  unsigned __int8 v208; // dl
  unsigned int v209; // r9d
  _DWORD *v210; // rax
  unsigned int v211; // edi
  unsigned int v212; // ebx
  __int64 v213; // r11
  unsigned int v214; // r10d
  int v215; // ebx
  _DWORD *v216; // rax
  unsigned int v217; // r8d
  unsigned int v218; // r10d
  unsigned int v219; // edx
  int v220; // r8d
  _DWORD *v221; // rax
  int v222; // r9d
  unsigned int v223; // eax
  unsigned int v224; // eax
  unsigned __int8 v225; // r8
  _DWORD *v226; // rax
  unsigned int v227; // r10d
  unsigned int v228; // ecx
  __int64 v229; // r9
  unsigned int v230; // r10d
  int v231; // ecx
  _DWORD *v232; // rax
  unsigned int v233; // r8d
  unsigned int v234; // ecx
  unsigned int v235; // r8d
  unsigned int v236; // eax
  _DWORD *v237; // rcx
  int v238; // [rsp+0h] [rbp-88h]
  char v239; // [rsp+4h] [rbp-84h]
  int v240; // [rsp+8h] [rbp-80h]
  char v241; // [rsp+Ch] [rbp-7Ch]
  unsigned int v242; // [rsp+10h] [rbp-78h]
  int v243; // [rsp+10h] [rbp-78h]
  unsigned int v244; // [rsp+14h] [rbp-74h]
  __int64 v245; // [rsp+30h] [rbp-58h]
  int v246; // [rsp+38h] [rbp-50h]
  const unsigned __int8 *v247; // [rsp+90h] [rbp+8h]
  int v248; // [rsp+98h] [rbp+10h]
  unsigned __int8 *v249; // [rsp+A8h] [rbp+20h]
  int v250; // [rsp+B8h] [rbp+30h]
  unsigned int v251; // [rsp+D0h] [rbp+48h]
  unsigned int v252; // [rsp+D0h] [rbp+48h]
  char v253; // [rsp+E0h] [rbp+58h]

  v12 = a3;
  v14 = *((_QWORD *)a11 + 16);
  if ( !v14 )
    v14 = *(_QWORD *)(*((_QWORD *)a11 + 6) + 1776LL);
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
    v238 = *v16;
  }
  else
  {
    v19 = 65280;
    LOBYTE(v20) = 8;
    if ( (v15 & 4) != 0 )
    {
      LOBYTE(v18) = 0;
      v17 = 255;
      v238 = 255;
      v21 = 16711680;
      LOBYTE(v22) = 16;
    }
    else
    {
      LOBYTE(v18) = 16;
      v17 = 16711680;
      v238 = 16711680;
      v21 = 255;
      LOBYTE(v22) = 0;
    }
  }
  v23 = a9;
  v253 = v18;
  v24 = a6 & 0xFFFFFFFC;
  v242 = (a9 & v17) >> v18;
  v240 = v19;
  v251 = (a9 & v19) >> v20;
  v239 = v20;
  v241 = v22;
  v25 = (a5 + 3) & 0xFFFFFFFC;
  v244 = (v23 & v21) >> v22;
  v26 = &a1[a2 / 2];
  v27 = &a4[3 * a5];
  v247 = v26;
  v249 = v27;
  if ( v25 > (int)(a6 & 0xFFFFFFFC) )
  {
    if ( (a5 & 3) == 1 )
    {
      v208 = *v26 & 0xF;
      if ( v208 )
      {
        if ( v208 == 15 )
        {
          v209 = v23;
        }
        else
        {
          LOWORD(a10) = *(_WORD *)v27;
          BYTE2(a10) = v27[2];
          v210 = &unk_1C0329B30;
          v211 = (a10 & v17) >> v253;
          v212 = v242 - v211;
          v213 = v208;
          if ( (int)(v242 - v211) >= 0 )
            v210 = &unk_1C0329B70;
          v22 = v211 << 16;
          v214 = (a10 & v240) >> v20;
          v215 = v210[v208] * v212;
          v216 = &unk_1C0329B30;
          v217 = v251 - v214;
          if ( (int)(v251 - v214) >= 0 )
            v216 = &unk_1C0329B70;
          v218 = v214 << 16;
          v219 = (a10 & v21) >> v241;
          v220 = v216[v213] * v217;
          v221 = &unk_1C0329B30;
          if ( (int)(v244 - v219) >= 0 )
            v221 = &unk_1C0329B70;
          v222 = v221[v213] * (v244 - v219);
          v19 = v240;
          v223 = v22 + v215;
          LOBYTE(v22) = v241;
          v209 = v238 & (HIWORD(v223) << v253) | v240 & ((v218 + v220) >> 16 << v239) | v21 & (((v219 << 16) + v222) >> 16 << v241);
        }
        *v27 = v209;
        v224 = v209 >> 8;
        v27[2] = BYTE2(v209);
        v26 = v247;
        v27[1] = v224;
      }
      v27 += 3;
      if ( a5 + 1 == a6 )
        return;
      ++v26;
    }
    else if ( (a5 & 3) != 2 )
    {
      return;
    }
    v225 = *v26 >> 4;
    if ( v225 )
    {
      if ( v225 != 15 )
      {
        LOWORD(a10) = *(_WORD *)v27;
        BYTE2(a10) = v27[2];
        v226 = &unk_1C0329B30;
        v227 = (a10 & v238) >> v253;
        v228 = v242 - v227;
        v229 = v225;
        if ( (int)(v242 - v227) >= 0 )
          v226 = &unk_1C0329B70;
        v230 = v227 << 16;
        v231 = v226[v225] * v228;
        v232 = &unk_1C0329B30;
        v243 = v231;
        v233 = (a10 & v19) >> v239;
        v234 = v251 - v233;
        if ( (int)(v251 - v233) >= 0 )
          v232 = &unk_1C0329B70;
        v235 = v233 << 16;
        v252 = v232[v229] * v234;
        v236 = (a10 & v21) >> v22;
        v237 = &unk_1C0329B30;
        if ( (int)(v244 - v236) >= 0 )
          v237 = &unk_1C0329B70;
        v23 = v238 & ((v230 + v243) >> 16 << v253) | v19 & ((v235 + v252) >> 16 << v239) | v21 & (((v236 << 16)
                                                                                                 + v237[v229]
                                                                                                 * (v244 - v236)) >> 16 << v22);
      }
      *v27 = v23;
      v27[2] = BYTE2(v23);
      v27[1] = BYTE1(v23);
    }
    return;
  }
  v250 = a6 - v24;
  v28 = v25 - a5;
  v246 = v25 - a5;
  v29 = (int)(v24 - v25) / 4;
  v248 = v29;
  if ( a8 )
  {
    while ( 1 )
    {
      v30 = v26;
      v31 = v27;
      v32 = v28 - 1;
      if ( !v32 )
        goto LABEL_37;
      v33 = v32 - 1;
      if ( !v33 )
        goto LABEL_25;
      if ( v33 == 1 )
        break;
LABEL_49:
      if ( v29 > 0 )
      {
        v245 = (unsigned int)v29;
        do
        {
          v86 = *v30 >> 4;
          if ( v86 )
          {
            v87 = v31 + 1;
            v88 = v31 + 2;
            if ( v86 == 15 )
            {
              v89 = v23;
            }
            else
            {
              LOBYTE(a10) = *v31;
              BYTE1(a10) = *v87;
              BYTE2(a10) = *v88;
              v90 = (a10 & v238) >> v253;
              v91 = v86;
              v92 = v242 - v90;
              v93 = &unk_1C0329B30;
              if ( (int)(v242 - v90) >= 0 )
                v93 = &unk_1C0329B70;
              v94 = v90 << 16;
              v95 = (a10 & v240) >> v20;
              v96 = v93[v86] * v92;
              v97 = &unk_1C0329B30;
              v98 = v251 - v95;
              if ( (int)(v251 - v95) >= 0 )
                v97 = &unk_1C0329B70;
              v99 = v95 << 16;
              v100 = (a10 & v21) >> v241;
              v20 = v97[v91] * v98;
              v101 = &unk_1C0329B30;
              if ( (int)(v244 - v100) >= 0 )
                v101 = &unk_1C0329B70;
              v102 = v101[v91] * (v244 - v100);
              v88 = v31 + 2;
              v103 = v20 + v99;
              LOBYTE(v20) = v239;
              v87 = v31 + 1;
              v89 = v240 & (HIWORD(v103) << v239) | v238 & ((v96 + v94) >> 16 << v253) | v21 & (((v100 << 16) + v102) >> 16 << v241);
            }
            *v31 = v89;
            *v88 = BYTE2(v89);
            *v87 = BYTE1(v89);
          }
          v104 = *v30 & 0xF;
          if ( v104 )
          {
            v105 = v31 + 4;
            v106 = v31 + 5;
            if ( v104 == 15 )
            {
              v107 = v23;
            }
            else
            {
              LOBYTE(a10) = v31[3];
              BYTE1(a10) = *v105;
              BYTE2(a10) = *v106;
              v108 = (a10 & v238) >> v253;
              v109 = v104;
              v110 = v242 - v108;
              v111 = &unk_1C0329B30;
              if ( (int)(v242 - v108) >= 0 )
                v111 = &unk_1C0329B70;
              v112 = v108 << 16;
              v113 = (a10 & v240) >> v20;
              v114 = v111[v104] * v110;
              v115 = &unk_1C0329B30;
              v116 = v251 - v113;
              if ( (int)(v251 - v113) >= 0 )
                v115 = &unk_1C0329B70;
              v117 = v113 << 16;
              v118 = (a10 & v21) >> v241;
              v20 = v115[v109] * v116;
              v119 = &unk_1C0329B30;
              if ( (int)(v244 - v118) >= 0 )
                v119 = &unk_1C0329B70;
              v120 = v119[v109] * (v244 - v118);
              v106 = v31 + 5;
              v121 = v20 + v117;
              LOBYTE(v20) = v239;
              v105 = v31 + 4;
              v107 = v240 & (HIWORD(v121) << v239) | v238 & ((v114 + v112) >> 16 << v253) | v21 & (((v118 << 16) + v120) >> 16 << v241);
            }
            v31[3] = v107;
            *v106 = BYTE2(v107);
            *v105 = BYTE1(v107);
          }
          v122 = v30[1] >> 4;
          if ( v122 )
          {
            v123 = v31 + 7;
            v124 = v31 + 8;
            if ( v122 == 15 )
            {
              v125 = v23;
            }
            else
            {
              LOBYTE(a10) = v31[6];
              BYTE1(a10) = *v123;
              BYTE2(a10) = *v124;
              v126 = (a10 & v238) >> v253;
              v127 = v122;
              v128 = v242 - v126;
              v129 = &unk_1C0329B30;
              if ( (int)(v242 - v126) >= 0 )
                v129 = &unk_1C0329B70;
              v130 = v126 << 16;
              v131 = (a10 & v240) >> v20;
              v132 = v129[v122] * v128;
              v133 = &unk_1C0329B30;
              v134 = v251 - v131;
              if ( (int)(v251 - v131) >= 0 )
                v133 = &unk_1C0329B70;
              v135 = v131 << 16;
              v136 = (a10 & v21) >> v241;
              v20 = v133[v127] * v134;
              v137 = &unk_1C0329B30;
              if ( (int)(v244 - v136) >= 0 )
                v137 = &unk_1C0329B70;
              v138 = v137[v127] * (v244 - v136);
              v124 = v31 + 8;
              v139 = v135 + v20;
              LOBYTE(v20) = v239;
              v123 = v31 + 7;
              v125 = v240 & (HIWORD(v139) << v239) | v238 & ((v132 + v130) >> 16 << v253) | v21 & (((v136 << 16) + v138) >> 16 << v241);
            }
            v31[6] = v125;
            *v124 = BYTE2(v125);
            *v123 = BYTE1(v125);
          }
          v140 = v30[1] & 0xF;
          if ( v140 )
          {
            v141 = v31 + 10;
            v142 = v31 + 11;
            if ( v140 == 15 )
            {
              v143 = v23;
            }
            else
            {
              LOBYTE(a10) = v31[9];
              BYTE1(a10) = *v141;
              BYTE2(a10) = *v142;
              v144 = (a10 & v238) >> v253;
              v145 = v140;
              v146 = v242 - v144;
              v147 = &unk_1C0329B30;
              if ( (int)(v242 - v144) >= 0 )
                v147 = &unk_1C0329B70;
              v148 = v144 << 16;
              v149 = (a10 & v240) >> v239;
              v150 = v147[v140] * v146;
              v151 = &unk_1C0329B30;
              v152 = v251 - v149;
              if ( (int)(v251 - v149) >= 0 )
                v151 = &unk_1C0329B70;
              v20 = v149 << 16;
              v153 = (a10 & v21) >> v241;
              v154 = v151[v145] * v152;
              v155 = &unk_1C0329B30;
              if ( (int)(v244 - v153) >= 0 )
                v155 = &unk_1C0329B70;
              v156 = v155[v145] * (v244 - v153);
              v157 = v20 + v154;
              LOBYTE(v20) = v239;
              v142 = v31 + 11;
              v141 = v31 + 10;
              v143 = v238 & ((v148 + v150) >> 16 << v253) | v240 & (HIWORD(v157) << v239) | v21 & (((v153 << 16) + v156) >> 16 << v241);
            }
            v31[9] = v143;
            *v142 = BYTE2(v143);
            *v141 = BYTE1(v143);
          }
          v31 += 12;
          v30 += 2;
          --v245;
        }
        while ( v245 );
        v27 = v249;
      }
      v158 = v250;
      if ( v250 )
      {
        v159 = *v30 >> 4;
        if ( v159 )
        {
          if ( v159 == 15 )
          {
            v160 = v23;
          }
          else
          {
            LOWORD(a10) = *(_WORD *)v31;
            BYTE2(a10) = v31[2];
            v161 = (a10 & v238) >> v253;
            v162 = v159;
            v163 = v242 - v161;
            v164 = &unk_1C0329B30;
            if ( (int)(v242 - v161) >= 0 )
              v164 = &unk_1C0329B70;
            v165 = v161 << 16;
            v166 = (a10 & v240) >> v239;
            v167 = v164[v159] * v163;
            v168 = &unk_1C0329B30;
            v169 = v251 - v166;
            if ( (int)(v251 - v166) >= 0 )
              v168 = &unk_1C0329B70;
            v20 = v166 << 16;
            v170 = (a10 & v21) >> v241;
            v171 = v168[v162] * v169;
            v172 = &unk_1C0329B30;
            if ( (int)(v244 - v170) >= 0 )
              v172 = &unk_1C0329B70;
            v173 = v172[v162] * (v244 - v170);
            v174 = v20 + v171;
            LOBYTE(v20) = v239;
            v158 = v250;
            v160 = v238 & ((v165 + v167) >> 16 << v253) | v240 & (HIWORD(v174) << v239) | v21 & (((v170 << 16) + v173) >> 16 << v241);
          }
          *v31 = v160;
          v31[2] = BYTE2(v160);
          v31[1] = BYTE1(v160);
        }
        v175 = v158 - 1;
        if ( v175 )
        {
          v176 = *v30 & 0xF;
          if ( v176 )
          {
            if ( v176 == 15 )
            {
              v177 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v31 + 3);
              BYTE2(a10) = v31[5];
              v178 = (a10 & v238) >> v253;
              v179 = v176;
              v180 = v242 - v178;
              v181 = &unk_1C0329B30;
              if ( (int)(v242 - v178) >= 0 )
                v181 = &unk_1C0329B70;
              v182 = v178 << 16;
              v183 = (a10 & v240) >> v20;
              v184 = v181[v176] * v180;
              v185 = &unk_1C0329B30;
              v186 = v251 - v183;
              if ( (int)(v251 - v183) >= 0 )
                v185 = &unk_1C0329B70;
              v187 = v183 << 16;
              v188 = (a10 & v21) >> v241;
              v20 = v185[v179] * v186;
              v189 = &unk_1C0329B30;
              if ( (int)(v244 - v188) >= 0 )
                v189 = &unk_1C0329B70;
              v190 = v238 & ((v182 + v184) >> 16 << v253) | v21 & (((v188 << 16) + v189[v179] * (v244 - v188)) >> 16 << v241);
              v191 = v187 + v20;
              LOBYTE(v20) = v239;
              v177 = v240 & (HIWORD(v191) << v239) | v190;
            }
            v31[3] = v177;
            v31[5] = BYTE2(v177);
            v31[4] = BYTE1(v177);
          }
          if ( v175 != 1 )
          {
            v192 = v30[1] >> 4;
            if ( v192 )
            {
              if ( v192 == 15 )
              {
                v193 = v23;
              }
              else
              {
                LOWORD(a10) = *((_WORD *)v31 + 3);
                BYTE2(a10) = v31[8];
                v194 = (a10 & v238) >> v253;
                v195 = v192;
                v196 = v242 - v194;
                v197 = &unk_1C0329B30;
                if ( (int)(v242 - v194) >= 0 )
                  v197 = &unk_1C0329B70;
                v198 = v194 << 16;
                v199 = (a10 & v240) >> v239;
                v200 = v197[v192] * v196;
                v201 = &unk_1C0329B30;
                v202 = v251 - v199;
                if ( (int)(v251 - v199) >= 0 )
                  v201 = &unk_1C0329B70;
                v20 = v199 << 16;
                v203 = (a10 & v21) >> v241;
                v204 = v201[v195] * v202;
                v205 = &unk_1C0329B30;
                if ( (int)(v244 - v203) >= 0 )
                  v205 = &unk_1C0329B70;
                v206 = v205[v195] * (v244 - v203);
                v207 = v20 + v204;
                LOBYTE(v20) = v239;
                v193 = v238 & ((v198 + v200) >> 16 << v253) | v240 & (HIWORD(v207) << v239) | v21 & (((v203 << 16) + v206) >> 16 << v241);
              }
              v31[6] = v193;
              v31[8] = BYTE2(v193);
              v31[7] = BYTE1(v193);
            }
          }
        }
      }
      v26 = &v247[v12];
      v27 += a7;
      v19 = v240;
      v28 = v246;
      v29 = v248;
      --a8;
      v247 += v12;
      v249 = v27;
      if ( !a8 )
        return;
    }
    v34 = *v26 & 0xF;
    if ( v34 )
    {
      if ( v34 == 15 )
      {
        v35 = v23;
      }
      else
      {
        LOWORD(a10) = *(_WORD *)v27;
        BYTE2(a10) = v27[2];
        v36 = (a10 & v238) >> v253;
        v37 = v34;
        v38 = v242 - v36;
        v39 = &unk_1C0329B30;
        if ( (int)(v242 - v36) >= 0 )
          v39 = &unk_1C0329B70;
        v40 = v36 << 16;
        v41 = (a10 & v19) >> v20;
        v42 = v39[v34] * v38;
        v43 = &unk_1C0329B30;
        v44 = v251 - v41;
        if ( (int)(v251 - v41) >= 0 )
          v43 = &unk_1C0329B70;
        v45 = v41 << 16;
        v46 = (a10 & v21) >> v241;
        v20 = v43[v37] * v44;
        v47 = &unk_1C0329B30;
        if ( (int)(v244 - v46) >= 0 )
          v47 = &unk_1C0329B70;
        v48 = v47[v37] * (v244 - v46);
        v26 = v247;
        v49 = v20 + v45;
        LOBYTE(v20) = v239;
        v19 = v240;
        v35 = v240 & (HIWORD(v49) << v239) | v238 & ((v42 + v40) >> 16 << v253) | v21 & (((v46 << 16) + v48) >> 16 << v241);
      }
      *v27 = v35;
      v27[2] = BYTE2(v35);
      v27[1] = BYTE1(v35);
    }
    v31 = v27 + 3;
    v30 = v26 + 1;
LABEL_25:
    v50 = *v30 >> 4;
    if ( v50 )
    {
      v51 = v31 + 1;
      v52 = v31 + 2;
      if ( v50 == 15 )
      {
        v53 = v23;
      }
      else
      {
        LOBYTE(a10) = *v31;
        BYTE1(a10) = *v51;
        BYTE2(a10) = *v52;
        v54 = (a10 & v238) >> v253;
        v55 = v50;
        v56 = v242 - v54;
        v57 = &unk_1C0329B30;
        if ( (int)(v242 - v54) >= 0 )
          v57 = &unk_1C0329B70;
        v58 = v54 << 16;
        v59 = (a10 & v19) >> v20;
        v60 = v57[v50] * v56;
        v61 = &unk_1C0329B30;
        v62 = v251 - v59;
        if ( (int)(v251 - v59) >= 0 )
          v61 = &unk_1C0329B70;
        v63 = v59 << 16;
        v64 = (a10 & v21) >> v241;
        v20 = v61[v55] * v62;
        v65 = &unk_1C0329B30;
        if ( (int)(v244 - v64) >= 0 )
          v65 = &unk_1C0329B70;
        v66 = v65[v55] * (v244 - v64);
        v52 = v31 + 2;
        v67 = v20 + v63;
        LOBYTE(v20) = v239;
        v19 = v240;
        v51 = v31 + 1;
        v53 = v240 & (HIWORD(v67) << v239) | v238 & ((v60 + v58) >> 16 << v253) | v21 & (((v64 << 16) + v66) >> 16 << v241);
      }
      *v31 = v53;
      *v52 = BYTE2(v53);
      *v51 = BYTE1(v53);
    }
    v31 += 3;
LABEL_37:
    v68 = *v30 & 0xF;
    if ( v68 )
    {
      v69 = v31 + 1;
      v70 = v31 + 2;
      if ( v68 == 15 )
      {
        v71 = v23;
      }
      else
      {
        LOBYTE(a10) = *v31;
        BYTE1(a10) = *v69;
        BYTE2(a10) = *v70;
        v72 = (a10 & v238) >> v253;
        v73 = v68;
        v74 = v242 - v72;
        v75 = &unk_1C0329B30;
        if ( (int)(v242 - v72) >= 0 )
          v75 = &unk_1C0329B70;
        v76 = v72 << 16;
        v77 = (a10 & v19) >> v20;
        v78 = v75[v68] * v74;
        v79 = &unk_1C0329B30;
        v80 = v251 - v77;
        if ( (int)(v251 - v77) >= 0 )
          v79 = &unk_1C0329B70;
        v81 = v77 << 16;
        v82 = (a10 & v21) >> v241;
        v20 = v79[v73] * v80;
        v83 = &unk_1C0329B30;
        if ( (int)(v244 - v82) >= 0 )
          v83 = &unk_1C0329B70;
        v84 = v83[v73] * (v244 - v82);
        v70 = v31 + 2;
        v85 = v20 + v81;
        LOBYTE(v20) = v239;
        v69 = v31 + 1;
        v71 = v240 & (HIWORD(v85) << v239) | v238 & ((v78 + v76) >> 16 << v253) | v21 & (((v82 << 16) + v84) >> 16 << v241);
      }
      *v31 = v71;
      *v70 = BYTE2(v71);
      *v69 = BYTE1(v71);
    }
    v29 = v248;
    v31 += 3;
    ++v30;
    goto LABEL_49;
  }
}
