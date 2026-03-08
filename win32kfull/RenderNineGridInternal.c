/*
 * XREFs of RenderNineGridInternal @ 0x1C0080D30
 * Callers:
 *     RenderNineGrid @ 0x1C0080A1C (RenderNineGrid.c)
 * Callees:
 *     DNG_StretchCol @ 0x1C00034CC (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1C0081850 (DNG_DrawRow.c)
 *     DNG_InitStretch @ 0x1C0081ACC (DNG_InitStretch.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C014D9F6 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 */

int __fastcall RenderNineGridInternal(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __m128i *a4,
        int *a5,
        _DWORD *a6,
        int a7,
        int a8)
{
  __int64 v9; // r15
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // r14
  int v12; // esi
  unsigned __int64 v13; // rbx
  int v14; // r13d
  unsigned __int64 v15; // xmm0_8
  int v16; // esi
  unsigned __int64 v17; // rax
  int v18; // r14d
  unsigned __int64 v19; // r11
  int v20; // edi
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rax
  int v23; // ecx
  int v24; // ebx
  int v25; // r12d
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // r9
  int v30; // ecx
  int v31; // edx
  int v32; // ebx
  int v33; // r9d
  int v34; // r15d
  int v35; // eax
  int v36; // r9d
  __int64 v37; // r8
  unsigned __int64 v38; // rcx
  int v39; // r9d
  int v40; // eax
  int v41; // r9d
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  int v47; // r9d
  int v48; // r9d
  int v49; // edi
  int v50; // edx
  int v51; // esi
  int v52; // r8d
  int v53; // ecx
  int v54; // r15d
  int v55; // r9d
  int v56; // edi
  int v57; // edi
  int v58; // r8d
  int v59; // edx
  int v60; // r9d
  __int64 v61; // r13
  unsigned __int64 v62; // r15
  int v63; // eax
  unsigned __int64 v64; // rcx
  int v65; // edi
  int v66; // r14d
  unsigned __int64 v67; // r9
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // r8
  __int64 v71; // rdi
  __int64 v72; // rax
  unsigned int v73; // r14d
  __int64 v74; // r13
  unsigned __int64 i; // r15
  int v76; // r8d
  void *v77; // rcx
  char *v78; // rdx
  char *v79; // r9
  int v80; // r11d
  int v81; // r12d
  int v82; // ebx
  int v83; // ecx
  int v84; // r13d
  unsigned __int64 v85; // r10
  int v86; // eax
  __int64 v87; // r9
  __int64 v88; // rdi
  __int64 v89; // rbx
  int v90; // edx
  __int64 v91; // rdi
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rdx
  int v94; // eax
  int v95; // eax
  int v96; // r13d
  int v97; // r12d
  __int64 v98; // rbx
  __int64 v99; // rsi
  int v100; // edi
  const void *v101; // rdx
  char *v102; // rcx
  char *v103; // r9
  __int64 v104; // r10
  unsigned int v105; // r9d
  unsigned __int64 v106; // kr08_8
  int v107; // ebx
  int v108; // edx
  __int64 v109; // rdi
  int v110; // r12d
  unsigned __int64 v111; // rax
  int v112; // r15d
  int v113; // r15d
  int v114; // r13d
  __int64 v115; // r13
  __int64 v116; // rsi
  unsigned __int64 v117; // rdx
  unsigned __int64 v118; // rbx
  int v119; // r12d
  __int64 v120; // rdx
  unsigned __int64 v121; // kr10_8
  __int64 v122; // r10
  __int64 v123; // rbx
  __int64 v124; // r14
  __int64 v125; // rcx
  int *v126; // rdx
  _DWORD *v127; // r8
  __int64 v128; // r9
  int v129; // ecx
  int v131; // [rsp+30h] [rbp-D0h]
  int v132; // [rsp+34h] [rbp-CCh]
  int v133; // [rsp+34h] [rbp-CCh]
  int v134; // [rsp+38h] [rbp-C8h]
  int v135; // [rsp+38h] [rbp-C8h]
  int v136; // [rsp+40h] [rbp-C0h]
  int v137; // [rsp+40h] [rbp-C0h]
  int v138; // [rsp+48h] [rbp-B8h]
  int v139; // [rsp+50h] [rbp-B0h]
  int v140; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v141; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v142; // [rsp+60h] [rbp-A0h]
  int v143; // [rsp+68h] [rbp-98h]
  unsigned __int64 v144; // [rsp+70h] [rbp-90h]
  int v145; // [rsp+70h] [rbp-90h]
  int v146; // [rsp+78h] [rbp-88h]
  unsigned __int64 v147; // [rsp+80h] [rbp-80h]
  int v148; // [rsp+88h] [rbp-78h]
  __int64 v149; // [rsp+90h] [rbp-70h]
  unsigned __int64 v150; // [rsp+98h] [rbp-68h]
  int v151; // [rsp+A0h] [rbp-60h]
  int v152; // [rsp+B0h] [rbp-50h] BYREF
  int v153; // [rsp+B4h] [rbp-4Ch]
  __int64 v154; // [rsp+B8h] [rbp-48h]
  int v155; // [rsp+C0h] [rbp-40h]
  int v156; // [rsp+C4h] [rbp-3Ch]
  int v157; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v158; // [rsp+D0h] [rbp-30h]
  int v159; // [rsp+D8h] [rbp-28h]
  int v160; // [rsp+DCh] [rbp-24h]
  unsigned int v161; // [rsp+E0h] [rbp-20h]
  int v162; // [rsp+E4h] [rbp-1Ch]
  int v163; // [rsp+ECh] [rbp-14h]
  int v164; // [rsp+F0h] [rbp-10h]
  int v165; // [rsp+F4h] [rbp-Ch]
  int v166; // [rsp+F8h] [rbp-8h]
  int v167; // [rsp+FCh] [rbp-4h]
  int v168; // [rsp+100h] [rbp+0h]
  int v169; // [rsp+104h] [rbp+4h]
  int v170; // [rsp+108h] [rbp+8h]
  int v171; // [rsp+10Ch] [rbp+Ch]
  int v172; // [rsp+110h] [rbp+10h]
  int v173; // [rsp+114h] [rbp+14h]
  char v174; // [rsp+118h] [rbp+18h] BYREF
  char v175; // [rsp+138h] [rbp+38h] BYREF
  int v176; // [rsp+158h] [rbp+58h]
  int v177; // [rsp+15Ch] [rbp+5Ch]
  int v178; // [rsp+160h] [rbp+60h]
  int v179; // [rsp+164h] [rbp+64h]
  int v180; // [rsp+168h] [rbp+68h]
  unsigned __int64 v181; // [rsp+16Ch] [rbp+6Ch]
  int v182; // [rsp+17Ch] [rbp+7Ch]
  int v183; // [rsp+180h] [rbp+80h]
  int v184; // [rsp+184h] [rbp+84h]
  unsigned __int64 v185; // [rsp+188h] [rbp+88h]
  unsigned __int64 v186; // [rsp+190h] [rbp+90h]
  unsigned __int64 v187; // [rsp+198h] [rbp+98h]
  unsigned __int64 v188; // [rsp+1A0h] [rbp+A0h]
  __int128 v189; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v190; // [rsp+1C0h] [rbp+C0h]
  __int64 v193; // [rsp+230h] [rbp+130h]
  int v194; // [rsp+230h] [rbp+130h]
  char v195; // [rsp+230h] [rbp+130h]
  int v196; // [rsp+230h] [rbp+130h]
  int v197; // [rsp+230h] [rbp+130h]
  int v198; // [rsp+238h] [rbp+138h]
  int v199; // [rsp+250h] [rbp+150h]

  v9 = a4->m128i_i64[0];
  v10 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v11 = a3->m128i_i64[0];
  v12 = v10;
  v13 = HIDWORD(a4->m128i_i64[0]);
  v14 = HIDWORD(v10) - v13;
  v15 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v146 = v14;
  v148 = v15 - a3->m128i_i64[0];
  v16 = v12 - a4->m128i_i64[0];
  v144 = HIDWORD(a3->m128i_i64[0]);
  LODWORD(v17) = HIDWORD(v15) - HIDWORD(a3->m128i_i64[0]);
  v151 = v17;
  if ( v16 >= 128000000 || v14 >= 128000000 || v16 <= -128000000 || v14 <= -128000000 )
    return v17;
  memset_0(&v152, 0, 0xF8uLL);
  v18 = v11 - v9;
  v19 = *(_QWORD *)(a1 + 48);
  v20 = v15 - v9;
  v138 = HIDWORD(v15) - v13;
  v21 = v19 + *(unsigned int *)(a1 + 40);
  v22 = *(_QWORD *)(a2 + 48) + *(unsigned int *)(a2 + 40);
  v187 = *(_QWORD *)(a2 + 48);
  v188 = v22;
  v23 = v144 - v13;
  v24 = *(_DWORD *)(a2 + 32);
  v184 = *(_DWORD *)(a1 + 32);
  v145 = v23;
  v142 = v19;
  v198 = *(_DWORD *)(a1 + 64) / 4;
  v25 = v198;
  v155 = v198;
  LODWORD(v22) = *(_DWORD *)(a2 + 64);
  v185 = v19;
  v141 = v21;
  v186 = v21;
  v199 = (int)v22 / 4;
  v159 = (int)v22 / 4;
  v143 = v18;
  v152 = v18;
  v153 = v15 - v9;
  v149 = *(_QWORD *)(a1 + 56) + 4 * (v198 * (v14 - v23 - 1) - (__int64)v18);
  v26 = *a5;
  v27 = a5[1];
  v28 = a5[2] - v26;
  v131 = a5[3] - v27;
  v193 = (int)v22 / 4 * (v131 - 1);
  v29 = *(_QWORD *)(a2 + 56) + 4 * (v26 + v193 + (int)v22 / 4 * v27);
  v150 = v29;
  if ( (*a6 & 0x20) != 0 )
  {
    v95 = v14 - 1;
    v96 = v145;
    v97 = v138;
    v98 = v149 + 4 * (v198 * v145 - (__int64)(v198 * v95));
    LODWORD(v17) = v199 * v145;
    if ( v131 < v138 )
      v97 = a5[3] - v27;
    v99 = v29 + 4 * ((int)v17 - v193);
    if ( v28 < v20 )
      v20 = a5[2] - v26;
    if ( v20 > v18 && v145 < v97 )
    {
      v100 = 4 * (v20 - v18);
      while ( 1 )
      {
        v101 = (const void *)(v99 + 4LL * v18);
        v102 = (char *)(v98 + 4LL * v18);
        if ( v100 <= 0 )
          break;
        v103 = &v102[v100];
        if ( v103 <= v102 )
          break;
        v17 = (unsigned __int64)v101 + v100;
        if ( v17 <= (unsigned __int64)v101 || v19 > (unsigned __int64)v102 || (unsigned __int64)v103 > v21 )
          break;
        if ( (v17 > v21 || v19 > (unsigned __int64)v101) && (v187 > (unsigned __int64)v101 || v17 > v188) )
          break;
        memmove(v102, v101, v100);
        v83 = v198;
        ++v96;
        LODWORD(v17) = v199;
        v21 = v141;
        v19 = v142;
        v98 += 4LL * v198;
        v99 += 4LL * v199;
        if ( v96 >= v97 )
          goto LABEL_65;
      }
    }
    goto LABEL_64;
  }
  v178 = *a6 & 2;
  v157 = v148;
  v161 = v131;
  v30 = a6[1];
  v31 = a6[2];
  v162 = v24;
  v156 = v16;
  v32 = 1;
  v160 = v28;
  v163 = v30;
  v132 = v31;
  v166 = v31;
  if ( v16 - v31 - v30 <= 0 || v28 - v31 - v30 <= 0 )
  {
    v34 = 0;
    v173 = 0;
    v33 = 0;
    if ( v31 + v30 )
    {
      v34 = v16 * v30 / (v31 + v30);
      v176 = v34;
    }
    else
    {
      v176 = 0;
    }
    v194 = v16 - v34;
    v177 = v16 - v34;
  }
  else
  {
    v33 = 1;
    v173 = 1;
    v194 = v31;
    v34 = v30;
    v177 = v31;
    v176 = v30;
  }
  v164 = v18;
  if ( v34 >= v20 )
    v35 = v20;
  else
    v35 = v34;
  v165 = v35;
  if ( v33 || !v34 )
  {
    v36 = v194;
  }
  else
  {
    DNG_InitStretch((unsigned int)&v174, v34, v30, v18, v35);
    v21 = v186;
    v19 = v185;
    v36 = v177;
    v31 = v166;
    v18 = v152;
    v34 = v176;
    v30 = v163;
    v28 = v160;
    v16 = v156;
    v25 = v155;
    v20 = v153;
    v141 = v186;
    v142 = v185;
    v194 = v177;
    v132 = v166;
    v143 = v152;
  }
  v37 = (unsigned int)(v28 - v31 - v30);
  v134 = v16 - v36;
  v38 = (unsigned int)(v16 - v36 - v34);
  v169 = v37;
  v139 = v16 - v36 - v34;
  v39 = v18;
  v170 = v139;
  if ( v34 > v18 )
    v39 = v34;
  v171 = v39;
  v40 = v38 + v34;
  if ( (int)v38 + v34 >= v20 )
    v40 = v20;
  v172 = v40;
  if ( v173 )
  {
    v183 = v40 - v34;
    v41 = v39 - v34;
    v182 = v41;
    v42 = (v37 << 32) / v38;
    v43 = ((v37 << 32) - 1) / v38 + 1;
    v181 = v43;
    v44 = v42 >> 1;
    v45 = HIDWORD(v43);
    v46 = v42 >> 33;
    if ( v41 > 5 )
    {
      v92 = (unsigned int)v44 + v41 * (unsigned __int64)(unsigned int)v43;
      LODWORD(v44) = v92;
      LODWORD(v46) = v46 + v41 * v45 + HIDWORD(v92);
    }
    else if ( v41 > 0 )
    {
      v104 = (unsigned int)v41;
      v105 = v46;
      do
      {
        v106 = __PAIR64__(v105, v44) + v43;
        v105 = (__PAIR64__(v105, v44) + v43) >> 32;
        LODWORD(v44) = v106;
        --v104;
      }
      while ( v104 );
      v21 = v141;
      LODWORD(v46) = v105;
      v19 = v142;
    }
    LODWORD(v38) = v139;
    v31 = v132;
    v179 = v46;
    v180 = v44;
  }
  v47 = v18;
  if ( v134 > v18 )
    v47 = v134;
  v48 = v47 - v38 - v34;
  v167 = v48;
  if ( v16 < v20 )
    v20 = v16;
  v49 = v20 - v38 - v34;
  v168 = v49;
  if ( !v173 && v194 )
  {
    DNG_InitStretch((unsigned int)&v175, v194, v31, v48, v49);
    v21 = v186;
    v19 = v185;
    v18 = v152;
    v25 = v155;
    v141 = v186;
    v142 = v185;
    v143 = v152;
  }
  v50 = a6[4];
  v51 = a6[3];
  v140 = v14 - v50;
  if ( v14 - v50 - v51 <= 0 || v131 - v51 - v50 <= 0 )
  {
    v195 = 0;
    v52 = a6[4];
    v135 = a6[3];
    if ( v51 + v50 )
      v94 = v14 * v51 / (v51 + v50);
    else
      v94 = 0;
    v133 = v94;
    v50 = v14 - v94;
  }
  else
  {
    v195 = 1;
    v52 = a6[4];
    v133 = a6[3];
    v135 = v133;
  }
  v53 = v138;
  v54 = v14 - v50;
  v55 = v145;
  v56 = v138;
  if ( v14 - v50 > v145 )
    v55 = v14 - v50;
  if ( v14 < v138 )
    v56 = v14;
  if ( v138 > v54 )
  {
    v154 = v149;
    v158 = v150;
    if ( v52 == v50 )
    {
      v90 = v52 - v55 - v50 - 1;
      v154 = v149 - 4LL * v198 * (v14 + v90);
      v158 = v150 - 4LL * v199 * (v14 + v90);
      if ( v55 >= v56 )
      {
LABEL_78:
        v53 = v138;
        goto LABEL_34;
      }
      v91 = (unsigned int)(v56 - v55);
      do
      {
        DNG_DrawRow(&v152);
        v154 += 4LL * v198;
        v158 += 4LL * v199;
        --v91;
      }
      while ( v91 );
    }
    else
    {
      if ( v50 <= 0 )
        goto LABEL_34;
      v189 = 0LL;
      v190 = 0LL;
      DNG_InitStretch((unsigned int)&v189, v50, v52, v14 - v56, v14 - v55);
      DNG_StretchCol((struct _DNGINTERNALDATA *)&v152, &v189);
    }
    v19 = v185;
    v21 = v186;
    v18 = v152;
    v25 = v155;
    v142 = v185;
    v141 = v186;
    v143 = v152;
    goto LABEL_78;
  }
LABEL_34:
  v57 = v131;
  v58 = a6[4];
  LODWORD(v17) = a6[3];
  v59 = v131 - v17 - v58;
  v60 = v14 - v17 - v58;
  v136 = v59;
  if ( v195 && v59 > 0 && v60 > 0 && v145 < v54 && v53 > v133 )
  {
    v61 = v149 - 4LL * v198 * v58;
    v62 = v150 - 4LL * v199 * v58;
    if ( v135 <= v145 )
      v51 = v145;
    if ( v178 )
    {
      v107 = v131 - v17 - v58;
      v80 = v199;
      v108 = (v51 - v135) % v59;
      v109 = v61 + 4 * (v198 * (v51 - v135) - (__int64)(v198 * (v60 - 1)));
      v110 = v136 - v108;
      v154 = v109;
      v111 = v62 + 4 * (v159 * v108 - (__int64)(v199 * (v136 - 1)));
      v112 = v136;
      v158 = v111;
      if ( v136 >= v60 )
        v112 = v60;
      v113 = v51 + v112;
      v114 = v140;
      v197 = v113;
      if ( v140 >= v138 )
        v114 = v138;
      v137 = v114;
      if ( v113 >= v114 )
      {
        v113 = v138;
        if ( v140 < v138 )
          v113 = v140;
        v197 = v113;
      }
      if ( v51 < v113 )
      {
        v115 = 4LL * v198;
        v116 = (unsigned int)(v113 - v51);
        do
        {
          DNG_DrawRow(&v152);
          if ( --v110 )
          {
            v117 = v158;
          }
          else
          {
            v110 = v107;
            v117 = v158 - 4LL * v199 * v107;
          }
          v109 = v115 + v154;
          v158 = 4LL * v199 + v117;
          v154 += v115;
          --v116;
        }
        while ( v116 );
        v18 = v152;
        v113 = v197;
        v114 = v137;
        v80 = v199;
      }
      v81 = v198;
      v17 = 4LL * v198 * v107;
      v118 = v109 - v17;
      v158 = v109 - v17;
      if ( v113 >= v114 )
      {
        v14 = v146;
        v57 = v131;
        goto LABEL_61;
      }
      v119 = 4 * v157;
      do
      {
        LODWORD(v17) = DNG_CopyMemory(
                         (struct _DNGINTERNALDATA *)&v152,
                         (void *)(4LL * v18 + v109),
                         (void *)(4LL * v18 + v118),
                         v119);
        if ( !(_DWORD)v17 )
          break;
        LODWORD(v17) = 4 * v198;
        ++v113;
        v109 += 4LL * v198;
        v118 += 4LL * v198;
        v154 = v109;
        v158 = v118;
      }
      while ( v113 < v114 );
    }
    else
    {
      v63 = v140;
      if ( v140 >= v138 )
        v63 = v138;
      v64 = (unsigned int)v60;
      v65 = v135 + v60 - v63;
      v66 = v135 + v60 - v51;
      v67 = (((unsigned __int64)(unsigned int)v59 << 32) - 1) / (unsigned int)v60 + 1;
      v68 = ((unsigned __int64)(unsigned int)v59 << 32) / v64;
      v196 = v67;
      v69 = v68 >> 1;
      v147 = HIDWORD(v67);
      v70 = v68 >> 33;
      if ( v65 > 5 )
      {
        v93 = (unsigned int)v69 + v65 * (unsigned __int64)(unsigned int)v67;
        LODWORD(v69) = v69 + v65 * v67;
        LODWORD(v70) = HIDWORD(v93) + v65 * HIDWORD(v67) + v70;
      }
      else if ( v65 > 0 )
      {
        v120 = (unsigned int)v65;
        do
        {
          v121 = __PAIR64__(v70, v69) + v67;
          LODWORD(v70) = (__PAIR64__(v70, v69) + v67) >> 32;
          LODWORD(v69) = v121;
          --v120;
        }
        while ( v120 );
      }
      v71 = v61 - 4LL * v25 * v65;
      v72 = 4LL * v25 * v66;
      v73 = 0;
      v74 = v61 - v72;
      v17 = 4LL * v159 * (int)v70;
      for ( i = v62 - v17; v71 != v74; v71 -= 4LL * v25 )
      {
        if ( v32 )
        {
          v154 = v71;
          v158 = i;
          DNG_DrawRow(&v152);
          v25 = v155;
          v141 = v186;
          v143 = v152;
          v142 = v185;
        }
        else
        {
          v76 = 4 * v157;
          v17 = v143 + (__int64)v25;
          v77 = (void *)(v71 + 4LL * v143);
          v78 = (char *)(v71 + 4 * v17);
          if ( 4 * v157 <= 0 )
            break;
          v17 = (unsigned __int64)v77 + v76;
          if ( v17 <= (unsigned __int64)v77 )
            break;
          v79 = &v78[v76];
          if ( v79 <= v78 || v19 > (unsigned __int64)v77 || v17 > v21 )
            break;
          if ( (v19 > (unsigned __int64)v78 || (unsigned __int64)v79 > v21)
            && (v187 > (unsigned __int64)v78 || (unsigned __int64)v79 > v188) )
          {
            break;
          }
          memmove(v77, v78, v76);
        }
        v32 = ((int)v69 + v196 < (unsigned int)v69) + (_DWORD)v147;
        v73 += v32;
        if ( v73 < v161 )
          i -= 4LL * v159 * v32;
        v21 = v141;
        LODWORD(v69) = v69 + v196;
        v19 = v142;
        v17 = -(__int64)v25;
      }
    }
    v14 = v146;
    v57 = v131;
  }
  v80 = v199;
  v81 = v198;
LABEL_61:
  v82 = v138;
  if ( v133 < v138 )
    v82 = v133;
  if ( v145 < v133 )
  {
    v84 = v81 * (v14 - v133);
    v17 = 4LL * v80 * (v57 - a6[3]);
    v85 = v150 - v17;
    v154 = v149 - 4LL * v84;
    v158 = v150 - v17;
    if ( v135 == v133 )
    {
      v86 = v135 - v145 - 1;
      v87 = v149 - 4LL * v84 - 4LL * v81 * v86;
      v17 = 4LL * v80 * v86;
      v154 = v87;
      v158 = v85 - v17;
      if ( v145 < v82 )
      {
        v88 = 4LL * v80;
        v89 = (unsigned int)(v82 - v145);
        do
        {
          LODWORD(v17) = DNG_DrawRow(&v152);
          v154 += 4LL * v81;
          v158 += v88;
          --v89;
        }
        while ( v89 );
      }
    }
    else if ( v133 > 0 )
    {
      v189 = 0LL;
      v190 = 0LL;
      DNG_InitStretch((unsigned int)&v189, v133, v135, v133 - v82, v133 - v145);
      LODWORD(v17) = DNG_StretchCol((struct _DNGINTERNALDATA *)&v152, &v189);
    }
  }
LABEL_64:
  v83 = v198;
LABEL_65:
  if ( a8 && v151 <= *(_DWORD *)(a1 + 36) && v148 <= *(_DWORD *)(a1 + 32) && v151 > 0 )
  {
    v122 = (unsigned int)v151;
    LODWORD(v17) = v148 / 2;
    v123 = 4LL * v83;
    v124 = 0LL;
    do
    {
      v125 = *(_QWORD *)(a1 + 56);
      v126 = (int *)(v125 + v124);
      v127 = (_DWORD *)(v124 + 4LL * v148 + v125 - 4);
      if ( v148 / 2 > 0 )
      {
        v128 = (unsigned int)(v148 / 2);
        do
        {
          v129 = *v126++;
          LODWORD(v17) = *v127--;
          *(v126 - 1) = v17;
          v127[1] = v129;
          --v128;
        }
        while ( v128 );
      }
      v124 += v123;
      --v122;
    }
    while ( v122 );
  }
  return v17;
}
