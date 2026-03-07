__int64 __fastcall CreateHalftoneBrushPat(__int64 a1, __int128 *a2, __int64 a3, _BYTE *a4, int a5)
{
  __int64 v8; // r12
  unsigned int v10; // edi
  __int128 v11; // xmm0
  unsigned int v12; // r14d
  int v13; // ebx
  int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // r15d
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  unsigned int v19; // r8d
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _BYTE *v25; // r11
  unsigned int v26; // r10d
  __int64 v27; // r14
  unsigned int v28; // r9d
  unsigned __int16 *v29; // r8
  char v30; // dl
  unsigned int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // r9
  _BYTE *v34; // r11
  unsigned int v35; // r10d
  unsigned __int16 *v36; // r9
  unsigned int v37; // eax
  char v38; // r8
  unsigned int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r8
  _BYTE *v44; // r11
  unsigned int v45; // r10d
  __int64 v46; // r14
  unsigned int v47; // r9d
  unsigned __int16 *v48; // r8
  char v49; // dl
  unsigned int v50; // ecx
  size_t v51; // r12
  char *v52; // r15
  unsigned int v53; // r14d
  unsigned int v54; // eax
  __int64 v55; // rbx
  const void *v56; // r14
  int i; // edi
  char v58; // r10
  __int64 v59; // rcx
  unsigned int v60; // eax
  __int64 v61; // rdx
  int v62; // r14d
  unsigned __int16 *v63; // r11
  unsigned int v64; // eax
  unsigned __int16 *v65; // r8
  unsigned int v66; // ecx
  unsigned __int16 *v67; // rdi
  unsigned int v68; // esi
  int v69; // eax
  unsigned int v70; // r11d
  unsigned int v71; // r9d
  char v72; // r10
  unsigned int v73; // edx
  unsigned int v74; // ecx
  int v75; // eax
  _BYTE *v76; // rdx
  unsigned int v77; // r8d
  char v78; // r10
  __int64 v79; // rcx
  unsigned int v80; // r13d
  __int64 v81; // rdx
  int v82; // r14d
  unsigned __int16 *v83; // rax
  unsigned int v84; // r13d
  unsigned __int16 *v85; // r11
  _BYTE *v86; // r12
  unsigned int v87; // r15d
  char v88; // dl
  int v89; // eax
  unsigned int v90; // ecx
  int v91; // r15d
  unsigned __int16 *v92; // r11
  int v93; // edx
  unsigned int v94; // ecx
  __int64 v96; // rax
  unsigned int v97; // r10d
  __int64 v98; // rcx
  int v99; // r14d
  unsigned __int16 *v100; // r11
  int v101; // r10d
  unsigned __int16 *v102; // r9
  unsigned __int64 v103; // rdx
  _BYTE *v104; // r14
  unsigned __int64 v105; // r11
  unsigned __int64 v106; // rdi
  unsigned __int64 v107; // rsi
  int v108; // eax
  unsigned __int64 v109; // r8
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // r11
  __int64 v113; // r8
  _BYTE *v114; // r9
  unsigned int v115; // r10d
  unsigned __int16 *v116; // r8
  int v117; // eax
  unsigned __int64 v118; // rdx
  __int64 v119; // rcx
  unsigned int v120; // r11d
  __int64 v121; // rdx
  int v122; // r14d
  unsigned __int16 *v123; // rax
  unsigned int v124; // r11d
  unsigned __int16 *v125; // r10
  unsigned int v126; // r8d
  _DWORD *v127; // r11
  unsigned int v128; // edx
  int v129; // eax
  int v130; // ecx
  int v131; // r10d
  __int64 v132; // r15
  __int64 v133; // r11
  __int64 v134; // rdx
  _BYTE *v135; // r8
  unsigned int v136; // r9d
  unsigned __int16 *v137; // rdx
  int v138; // eax
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // r11
  __int64 v142; // r8
  _BYTE *v143; // r9
  unsigned int v144; // r10d
  __int64 v145; // r14
  unsigned __int16 *v146; // r8
  int v147; // eax
  unsigned __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rdx
  unsigned __int64 v151; // rax
  unsigned __int64 v152; // r8
  _BYTE *v153; // r10
  unsigned int v154; // r11d
  unsigned __int16 *v155; // r8
  int v156; // eax
  char v157; // dl
  unsigned int v158; // ecx
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // r11
  __int64 v162; // r8
  _BYTE *v163; // r9
  unsigned int v164; // r10d
  __int64 v165; // r14
  unsigned __int16 *v166; // r8
  int v167; // eax
  unsigned __int64 v168; // rdx
  unsigned int v169; // [rsp+34h] [rbp-CCh]
  int v170; // [rsp+34h] [rbp-CCh]
  int v171; // [rsp+34h] [rbp-CCh]
  int v172; // [rsp+34h] [rbp-CCh]
  int v173; // [rsp+38h] [rbp-C8h]
  unsigned int v174; // [rsp+38h] [rbp-C8h]
  unsigned int v175; // [rsp+38h] [rbp-C8h]
  unsigned int v176; // [rsp+38h] [rbp-C8h]
  int v177; // [rsp+38h] [rbp-C8h]
  unsigned int v178; // [rsp+3Ch] [rbp-C4h]
  unsigned int v179; // [rsp+3Ch] [rbp-C4h]
  int v180; // [rsp+3Ch] [rbp-C4h]
  int v181; // [rsp+3Ch] [rbp-C4h]
  __int64 v183; // [rsp+48h] [rbp-B8h]
  _BYTE *v184; // [rsp+48h] [rbp-B8h]
  _BYTE *v185; // [rsp+48h] [rbp-B8h]
  _BYTE *v186; // [rsp+48h] [rbp-B8h]
  _WORD *v187; // [rsp+48h] [rbp-B8h]
  __int16 v188; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v189; // [rsp+52h] [rbp-AEh]
  __int128 v190; // [rsp+58h] [rbp-A8h]
  __int64 v191; // [rsp+68h] [rbp-98h]
  unsigned int v192; // [rsp+70h] [rbp-90h]
  __int64 v193; // [rsp+78h] [rbp-88h]
  _BYTE *v194; // [rsp+80h] [rbp-80h]
  __int64 v195; // [rsp+88h] [rbp-78h]
  _QWORD v196[3]; // [rsp+90h] [rbp-70h] BYREF
  int v197; // [rsp+A8h] [rbp-58h]
  unsigned __int8 v198; // [rsp+B5h] [rbp-4Bh]
  unsigned __int8 v199; // [rsp+B6h] [rbp-4Ah]
  unsigned __int8 v200; // [rsp+B7h] [rbp-49h]
  int v201; // [rsp+E0h] [rbp-20h]
  int v202; // [rsp+E4h] [rbp-1Ch]
  unsigned int v203; // [rsp+E8h] [rbp-18h]
  unsigned int v204; // [rsp+ECh] [rbp-14h]
  unsigned __int16 *v205; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v206; // [rsp+F8h] [rbp-8h]
  unsigned int v207; // [rsp+100h] [rbp+0h]
  unsigned int v208; // [rsp+104h] [rbp+4h]

  v194 = (_BYTE *)a3;
  v8 = 0LL;
  memset_0(v196, 0, 0x48uLL);
  v188 = 0;
  v189 = 0;
  ComputeRGBLUTAA(a1, (__int128 *)a3, (_DWORD *)(a1 + 3956));
  v10 = -10005;
  if ( (unsigned int)ComputeBGRMappingTable(a1, a3, a2, &v188) == 1 )
  {
    v204 = CachedHalftonePattern(a1, a3, (__int64)v196, 0, 0, 0);
    v10 = v204;
    if ( (int)v204 > 0 )
    {
      v11 = *(_OWORD *)(a1 + 3960);
      v12 = *(unsigned __int16 *)(a1 + 166);
      v13 = *(_DWORD *)(a3 + 56);
      v14 = *(unsigned __int16 *)(a1 + 170);
      v169 = v12;
      v191 = *(_QWORD *)(a1 + 3976);
      v190 = v11;
      if ( (v13 & 0x400000) != 0 )
        v8 = (__int64)*(&p8BPPXlate + BYTE12(v190));
      v15 = a1 + 548;
      v173 = v13 & 0x2000000;
      if ( (v13 & 0x2000000) == 0 )
        v15 = v8;
      v193 = v15;
      v16 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)v188 + 3984);
      v17 = *(_DWORD *)(a1 + 4LL * ((unsigned int)HIBYTE(v188) + 256) + 3984);
      v18 = *(_DWORD *)(a1 + 4LL * ((unsigned int)v189 + 512) + 3984);
      EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
      v19 = (unsigned __int8)v194[31];
      if ( v19 > 0xF8 )
      {
        if ( v19 != 249 )
        {
          switch ( v19 )
          {
            case 0xFAu:
              if ( v14 )
              {
                if ( v173 )
                {
                  v139 = v197;
                  v140 = a5;
                  v141 = v196[0];
                  do
                  {
                    v142 = v141;
                    v143 = a4;
                    v141 += v139;
                    a4 += v140;
                    --v14;
                    v144 = v12;
                    if ( v12 )
                    {
                      v145 = v193;
                      v146 = (unsigned __int16 *)(v142 + 2);
                      do
                      {
                        v147 = *v146;
                        v148 = (v16 - *(v146 - 1)) & 0x30000 | (unsigned __int64)((v18 - v146[1]) & 0xE00000);
                        v146 += 3;
                        *v143++ = *(_BYTE *)((((v17 - v147) & 0x1C0000 | v148) >> 16) + v145);
                        --v144;
                      }
                      while ( v144 );
                      v12 = v169;
                      v139 = v197;
                      v140 = a5;
                    }
                  }
                  while ( v14 );
                }
                else
                {
                  v149 = v197;
                  v150 = a5;
                  v151 = v196[0];
                  do
                  {
                    v152 = v151;
                    v153 = a4;
                    v151 += v149;
                    a4 += v150;
                    --v14;
                    v206 = v151;
                    v154 = v12;
                    if ( v12 )
                    {
                      v155 = (unsigned __int16 *)(v152 + 2);
                      do
                      {
                        v156 = *v155;
                        v157 = ((v18 - v155[1]) >> 16) & 0xE0;
                        v158 = (v16 - *(v155 - 1)) >> 16;
                        v155 += 3;
                        *v153++ = ((v17 - v156) >> 16) & 0x1C | v158 & 3 | v157;
                        --v154;
                      }
                      while ( v154 );
                      v151 = v206;
                      v149 = v197;
                      v150 = a5;
                    }
                  }
                  while ( v14 );
                }
              }
              break;
            case 0xFBu:
              v131 = dwGrayIdxHB[(unsigned __int8)((unsigned __int16)(v16 + v17 + v18) >> 8)]
                   + (unsigned __int16)wGrayIdxLB[(unsigned __int8)(v16 + v17 + v18)];
              if ( v14 )
              {
                v132 = v197;
                v133 = v196[0];
                do
                {
                  v134 = v133;
                  v135 = a4;
                  v133 += v132;
                  a4 += a5;
                  --v14;
                  v136 = v12;
                  if ( v12 )
                  {
                    v137 = (unsigned __int16 *)(v134 + 2);
                    do
                    {
                      v138 = *v137;
                      v137 += 3;
                      *v135++ = BYTE13(v190) ^ ((unsigned int)(v131 - v138) >> 12);
                      --v136;
                    }
                    while ( v136 );
                  }
                }
                while ( v14 );
              }
              break;
            case 0xFCu:
            case 0xFDu:
              if ( v14 )
              {
                v119 = v197;
                v120 = v12;
                v121 = a5;
                v122 = v12 & 1;
                v123 = (unsigned __int16 *)v196[0];
                v124 = v120 >> 1;
                LODWORD(v193) = v124;
                do
                {
                  v125 = v123;
                  v187 = a4;
                  a4 += v121;
                  --v14;
                  v206 = (unsigned __int64)v123 + v119;
                  v126 = v124;
                  if ( v124 )
                  {
                    v127 = v187;
                    do
                    {
                      v128 = DWORD2(v190) & (v18 - v125[5]) | (((unsigned int)v190 & (v16 - *v125) | DWORD1(v190) & (v17 - v125[1]) | DWORD2(v190) & (v18 - v125[2])) >> 16);
                      v129 = v125[3];
                      v130 = DWORD1(v190) & (v17 - v125[4]);
                      v125 += 6;
                      *v127++ = HIDWORD(v190) ^ (v190 & (v16 - v129) | v130 | v128);
                      --v126;
                    }
                    while ( v126 );
                    v187 = v127;
                    v124 = v193;
                  }
                  if ( v122 )
                    *v187 = HIWORD(v190) ^ (WORD1(v190) & ((v16 - *v125) >> 16) | WORD3(v190) & ((v17 - v125[1]) >> 16) | WORD5(v190) & ((v18 - v125[2]) >> 16));
                  v123 = (unsigned __int16 *)v206;
                  v119 = v197;
                  v121 = a5;
                }
                while ( v14 );
              }
              break;
            case 0xFEu:
              if ( v14 )
              {
                v110 = v197;
                v111 = a5;
                v112 = v196[0];
                do
                {
                  v113 = v112;
                  v114 = a4;
                  v112 += v110;
                  a4 += v111;
                  --v14;
                  v115 = v12;
                  if ( v12 )
                  {
                    v116 = (unsigned __int16 *)(v113 + 4);
                    do
                    {
                      v117 = *v116;
                      v118 = (v17 - *(v116 - 1)) & 0x380000 | (unsigned __int64)((v16 - *(v116 - 2)) & 0x1C00000);
                      v116 += 3;
                      *v114++ = VGA256Xlate[((v18 - v117) & 0x70000 | v118) >> 16];
                      --v115;
                    }
                    while ( v115 );
                    v12 = v169;
                    v110 = v197;
                    v111 = a5;
                  }
                }
                while ( v14 );
              }
              break;
            default:
              if ( v14 )
              {
                v96 = v197;
                v97 = v12;
                v98 = a5;
                v99 = v12 & 1;
                v100 = (unsigned __int16 *)v196[0];
                v101 = v97 >> 1;
                LODWORD(v195) = v101;
                v172 = v99;
                do
                {
                  --v14;
                  v194 = a4;
                  a4 += v98;
                  v181 = v14;
                  v102 = v100;
                  v186 = a4;
                  v100 = (unsigned __int16 *)((char *)v100 + v96);
                  v206 = (unsigned __int64)v100;
                  if ( v101 )
                  {
                    v103 = DWORD1(v190);
                    v104 = v194;
                    v105 = HIDWORD(v191);
                    v106 = (unsigned int)v191;
                    v107 = HIDWORD(v190);
                    do
                    {
                      v108 = *v102;
                      v109 = (v105 >> 16) & ((unsigned __int64)(v18 - v102[5]) >> 16) | (v106 >> 16) & ((unsigned __int64)(v17 - v102[4]) >> 16) | (v107 >> 16) & ((unsigned __int64)(v16 - v102[3]) >> 16) | ((unsigned __int64)DWORD2(v190) >> 16) & ((unsigned __int64)(v18 - v102[2]) >> 16) | (v103 >> 16) & ((unsigned __int64)(v17 - v102[1]) >> 16);
                      v102 += 6;
                      v103 = DWORD1(v190);
                      *v104++ = VGA16Xlate[(((unsigned __int64)(unsigned int)v190 >> 16) & ((unsigned __int64)(v16 - v108) >> 16) | v109) ^ 0x77];
                      --v101;
                    }
                    while ( v101 );
                    v14 = v181;
                    a4 = v186;
                    v101 = v195;
                    v100 = (unsigned __int16 *)v206;
                    v194 = v104;
                    v99 = v172;
                  }
                  if ( v99 )
                    *v194 = VGA16Xlate[(((unsigned int)v190 & (v16 - *v102) | DWORD1(v190) & (v17 - v102[1]) | (unsigned __int64)(DWORD2(v190) & (v18 - v102[2]))) ^ 0x700000) >> 16];
                  v96 = v197;
                  v98 = a5;
                }
                while ( v14 );
              }
              break;
          }
          return v204;
        }
      }
      else if ( v19 != 248 )
      {
        if ( v19 == 1 )
        {
          v77 = ((v16 + v17 + v18) ^ 0xFFF0) >> 4;
          v78 = -((v13 & 0x4000) == 0);
          if ( v14 )
          {
            v79 = v197;
            v80 = v12;
            v81 = a5;
            v82 = v12 & 7;
            v83 = (unsigned __int16 *)v196[0];
            v84 = v80 >> 3;
            do
            {
              v85 = v83;
              v185 = a4;
              v86 = a4;
              a4 += v81;
              v206 = (unsigned __int64)v83 + v79;
              --v14;
              v87 = v84;
              if ( v84 )
              {
                do
                {
                  v88 = ((v77 - v85[7]) >> 16) & 0x20 | ((v77 - v85[16]) >> 16) & 4 | ((v77 - v85[19]) >> 16) & 2 | ((v77 - v85[4]) >> 16) & 0x40 | ((v77 - v85[22]) >> 16) & 1 | ((v77 - v85[1]) >> 16) & 0x80;
                  v89 = v85[10];
                  v90 = (v77 - v85[13]) >> 16;
                  v85 += 24;
                  *v86++ = v78 ^ (((v77 - v89) >> 16) & 0x10 | v90 & 8 | v88);
                  --v87;
                }
                while ( v87 );
                v185 = v86;
              }
              v91 = v82;
              if ( v82 )
              {
                v92 = v85 + 1;
                v93 = 0;
                do
                {
                  v94 = v77 - *v92;
                  v92 += 3;
                  v93 = (2 * v93) | v94 & 0x10000;
                  --v91;
                }
                while ( v91 );
                v171 = v93;
                BYTE2(v171) = v78 ^ BYTE2(v93);
                *v185 = (unsigned int)(v171 << (8 - v82)) >> 16;
              }
              v83 = (unsigned __int16 *)v206;
              v79 = v197;
              v81 = a5;
            }
            while ( v14 );
          }
        }
        else if ( v19 == 2 )
        {
          v58 = (v13 & 0x4000) == 0 ? 0x77 : 0;
          if ( v14 )
          {
            v59 = v197;
            v60 = v12;
            v61 = a5;
            v62 = v12 & 1;
            v63 = (unsigned __int16 *)v196[0];
            v64 = v60 >> 1;
            LODWORD(v193) = v64;
            v170 = v62;
            do
            {
              --v14;
              v194 = a4;
              a4 += v61;
              v180 = v14;
              v65 = v63;
              v184 = a4;
              v63 = (unsigned __int16 *)((char *)v63 + v59);
              v66 = v64;
              v206 = (unsigned __int64)v63;
              if ( v64 )
              {
                v67 = v65;
                v192 = WORD1(v190);
                v68 = WORD1(v190);
                v201 = HIWORD(DWORD1(v190));
                v203 = WORD1(v191);
                v177 = HIWORD(HIDWORD(v191));
                LODWORD(v195) = HIWORD(DWORD2(v190));
                v202 = HIWORD(HIDWORD(v190));
                do
                {
                  v69 = v67[5];
                  v192 = v66 - 1;
                  v70 = (v18 - v69) >> 16;
                  v71 = v17 - v67[4];
                  v72 = v195 & ((v18 - v67[2]) >> 16);
                  v73 = v16 - v67[3];
                  v74 = (v17 - v67[1]) >> 16;
                  v75 = *v67;
                  v67 += 6;
                  LOBYTE(v70) = v201 & v74 | v177 & v70;
                  v66 = v192;
                  LOBYTE(v70) = v202 & BYTE2(v73) | v70;
                  v76 = v194;
                  *v194 = ((v13 & 0x4000) == 0 ? 0x77 : 0) ^ (v72 | v203 & BYTE2(v71) | v68 & ((v16 - v75) >> 16) | v70);
                  v194 = v76 + 1;
                }
                while ( v66 );
                a4 = v184;
                v62 = v170;
                v58 = (v13 & 0x4000) == 0 ? 0x77 : 0;
                v63 = (unsigned __int16 *)v206;
                v205 = v67;
                v65 = v67;
                v14 = v180;
              }
              if ( v62 )
                *v194 = v58 ^ (((v16 - *v65) >> 16) & BYTE2(v190) | ((v17 - v65[1]) >> 16) & BYTE6(v190) | ((v18 - v65[2]) >> 16) & BYTE10(v190));
              v64 = v193;
              v59 = v197;
              v61 = a5;
            }
            while ( v14 );
          }
        }
        else
        {
          v20 = 3;
          v195 = 3LL;
          switch ( v19 )
          {
            case 5u:
            case 6u:
              a4[v198] = ~(_BYTE)v18;
              a4[v199] = ~(_BYTE)v17;
              a4[v200] = ~(_BYTE)v16;
              if ( (_BYTE)v19 == 5 )
              {
                v51 = 3 * v12;
              }
              else
              {
                v20 = 4;
                a4[3] = 0;
                v195 = 4LL;
                v51 = 4 * v12;
              }
              v52 = &a4[v20];
              v53 = v51 - v20;
              if ( (_DWORD)v51 != v20 )
              {
                do
                {
                  v54 = v53;
                  if ( v20 <= v53 )
                    v54 = v20;
                  v55 = v54;
                  memmove(v52, a4, v54);
                  v52 += v55;
                  v20 = v55 + v195;
                  v195 = (unsigned int)(v55 + v195);
                  v53 -= v55;
                }
                while ( v53 );
              }
              v56 = a4;
              for ( i = v14 - 1; i; --i )
              {
                a4 += a5;
                memmove(a4, v56, v51);
              }
              break;
            case 0xF5u:
            case 0xF6u:
              if ( v14 )
              {
                v40 = v197;
                v41 = a5;
                v42 = v196[0];
                do
                {
                  v43 = v42;
                  v44 = a4;
                  v42 += v40;
                  a4 += v41;
                  --v14;
                  v45 = v12;
                  if ( v12 )
                  {
                    v46 = v193;
                    v206 = __PAIR64__(v17, v18);
                    v208 = v16;
                    v207 = v16;
                    v47 = *((_DWORD *)&v206
                          + ((v18 >= v17) | (unsigned __int64)(*((_DWORD *)&v206 + (v18 >= v17)) >= v16 ? 2 : 0))) >> 21;
                    v48 = (unsigned __int16 *)(v43 + 2);
                    do
                    {
                      --v45;
                      v49 = BYTE14(v190);
                      v176 = v48[1];
                      if ( v47 < v176 )
                      {
                        v179 = *v48;
                        if ( v47 < v179 )
                        {
                          v50 = *(v48 - 1);
                          if ( v47 < v50 )
                            v49 = *(_BYTE *)((((v17 - v179) & (v179 - DWORD1(v190)) & 0x38000 | (v18 - v176) & (v176 - DWORD2(v190)) & 0x1C0000 | (unsigned __int64)((unsigned __int16)(v16 - v50) & (unsigned __int16)(v50 - v190) & 0x7000)) >> 12)
                                           + v46);
                        }
                      }
                      *v44 = v49;
                      v48 += 3;
                      ++v44;
                    }
                    while ( v45 );
                    v12 = v169;
                    v40 = v197;
                    v41 = a5;
                  }
                }
                while ( v14 );
              }
              break;
            case 0xF7u:
              if ( v14 )
              {
                v21 = v197;
                v22 = v196[0];
                if ( v173 )
                {
                  v23 = a5;
                  do
                  {
                    v24 = v22;
                    v25 = a4;
                    v22 += v21;
                    a4 += v23;
                    --v14;
                    v26 = v12;
                    if ( v12 )
                    {
                      v27 = v193;
                      v206 = __PAIR64__(v17, v18);
                      v208 = v16;
                      v207 = v16;
                      v28 = *((_DWORD *)&v206
                            + ((v18 >= v17) | (unsigned __int64)(*((_DWORD *)&v206 + (v18 >= v17)) >= v16 ? 2 : 0))) >> 21;
                      v29 = (unsigned __int16 *)(v24 + 2);
                      do
                      {
                        --v26;
                        v30 = BYTE14(v190);
                        v178 = v29[1];
                        if ( v28 < v178 )
                        {
                          v174 = *v29;
                          if ( v28 < v174 )
                          {
                            v31 = *(v29 - 1);
                            if ( v28 < v31 )
                              v30 = *(_BYTE *)((((v17 - v174) & (v174 - DWORD1(v190)) & 0x1C000 | (v18 - v178) & (v178 - DWORD2(v190)) & 0xE0000 | (unsigned __int64)((unsigned __int16)(v16 - v31) & (unsigned __int16)(v31 - v190) & 0x3000)) >> 12)
                                             + v27);
                          }
                        }
                        *v25 = v30;
                        v29 += 3;
                        ++v25;
                      }
                      while ( v26 );
                      v12 = v169;
                      v21 = v197;
                      v23 = a5;
                    }
                  }
                  while ( v14 );
                }
                else
                {
                  v32 = a5;
                  do
                  {
                    v33 = v22;
                    v34 = a4;
                    v22 += v21;
                    a4 += v32;
                    --v14;
                    v183 = v22;
                    if ( v12 )
                    {
                      v206 = __PAIR64__(v17, v18);
                      v208 = v16;
                      v207 = v16;
                      v35 = *((_DWORD *)&v206
                            + ((v18 >= v17) | (unsigned __int64)(*((_DWORD *)&v206 + (v18 >= v17)) >= v16 ? 2 : 0))) >> 21;
                      v36 = (unsigned __int16 *)(v33 + 2);
                      do
                      {
                        --v12;
                        v37 = *(v36 - 1);
                        v38 = BYTE14(v190);
                        v175 = v36[1];
                        if ( v35 < v175 )
                        {
                          v39 = *v36;
                          v192 = v39;
                          if ( v35 < v39 && v35 < v37 )
                            v38 = ((v16 - v37) >> 12) & ((v37 - (unsigned int)v190) >> 12) & 3 | ((v17 - v192) >> 12) & ((v39 - DWORD1(v190)) >> 12) & 0x1C | ((v18 - v175) >> 12) & ((v175 - DWORD2(v190)) >> 12) & 0xE0;
                        }
                        *v34 = v38;
                        v36 += 3;
                        ++v34;
                      }
                      while ( v12 );
                      v12 = v169;
                      v22 = v183;
                      v21 = v197;
                      v32 = a5;
                    }
                  }
                  while ( v14 );
                }
              }
              break;
            default:
              return 4294967285LL;
          }
        }
        return v204;
      }
      if ( v14 )
      {
        v159 = v197;
        v160 = a5;
        v161 = v196[0];
        do
        {
          v162 = v161;
          v163 = a4;
          v161 += v159;
          a4 += v160;
          --v14;
          v164 = v12;
          if ( v12 )
          {
            v165 = v193;
            v166 = (unsigned __int16 *)(v162 + 2);
            do
            {
              v167 = *v166;
              v168 = (v16 - *(v166 - 1)) & 0x70000 | (unsigned __int64)((v18 - v166[1]) & 0x1C00000);
              v166 += 3;
              *v163++ = *(_BYTE *)((((v17 - v167) & 0x380000 | v168) >> 16) + v165);
              --v164;
            }
            while ( v164 );
            v12 = v169;
            v159 = v197;
            v160 = a5;
          }
        }
        while ( v14 );
      }
      return v204;
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
  return v10;
}
