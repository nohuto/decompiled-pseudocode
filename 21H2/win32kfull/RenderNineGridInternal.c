/*
 * XREFs of RenderNineGridInternal @ 0x1C00D8290
 * Callers:
 *     RenderNineGrid @ 0x1C00D7F28 (RenderNineGrid.c)
 * Callees:
 *     DNG_StretchCol @ 0x1C00D7834 (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1C00D8FF0 (DNG_DrawRow.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C00D936C (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     DNG_InitStretch @ 0x1C00D93E0 (DNG_InitStretch.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  __int64 v8; // r15
  unsigned __int64 v9; // xmm0_8
  __int64 v10; // r14
  int v11; // esi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // xmm0_8
  int v15; // esi
  int v16; // r14d
  int v17; // edi
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // r12
  unsigned __int64 v21; // r12
  __int64 v22; // kr00_8
  __int64 v23; // kr08_8
  unsigned int v24; // r10d
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // r11
  int v29; // r15d
  int v30; // ebx
  int v31; // ecx
  int v32; // edx
  int v33; // r9d
  int v34; // r10d
  int v35; // eax
  __int64 v36; // r8
  int v37; // ecx
  unsigned int v38; // r11d
  int v39; // r9d
  int v40; // eax
  __int64 v41; // rdx
  int v42; // r9d
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rdx
  int v50; // r9d
  int v51; // r9d
  int v52; // edi
  _DWORD *v53; // rsi
  int v54; // r15d
  int v55; // edx
  int v56; // r14d
  int v57; // edx
  int v58; // edi
  int v59; // r9d
  int v60; // ecx
  int v61; // r8d
  int v62; // r10d
  int v63; // edx
  int v64; // r9d
  int v65; // r11d
  int v66; // r8d
  int v67; // esi
  __int64 v68; // r9
  int v69; // edi
  __int64 v70; // r15
  int v71; // eax
  __int64 v72; // r8
  unsigned __int64 v73; // rcx
  int v74; // r10d
  int v75; // r14d
  unsigned __int64 v76; // r11
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // rdx
  int v80; // edx
  __int64 v81; // rdi
  __int64 v82; // rax
  unsigned int v83; // r14d
  __int64 v84; // r9
  __int64 v85; // r15
  int v86; // r8d
  void *v87; // rcx
  char *v88; // rdx
  char *v89; // r9
  int v90; // r10d
  int v91; // r10d
  __int64 v92; // rdx
  unsigned __int64 v93; // kr10_8
  int v94; // edx
  __int64 v95; // rsi
  unsigned __int64 v96; // r9
  int v97; // eax
  unsigned __int64 v98; // r9
  __int64 v99; // rbx
  __int64 v100; // rbx
  __int64 v101; // rsi
  int v102; // edi
  const void *v103; // rdx
  char *v104; // rcx
  char *v105; // r9
  unsigned __int64 v106; // rax
  int v107; // eax
  int v108; // r13d
  __int64 v109; // rbx
  int v110; // edx
  int v111; // r12d
  int v112; // ecx
  int v113; // r15d
  int v114; // eax
  int v115; // r14d
  __int64 v116; // r13
  __int64 v117; // r15
  __int64 v118; // rdx
  unsigned __int64 v119; // rdi
  int v120; // r12d
  __int64 v121; // rsi
  __int64 v122; // r11
  unsigned __int64 v123; // kr18_8
  __int64 v124; // r9
  __int64 v125; // r11
  __int64 v126; // r14
  __int64 v127; // rcx
  int *v128; // rdx
  _DWORD *v129; // r8
  __int64 v130; // r10
  int v131; // ecx
  int v133; // [rsp+38h] [rbp-D0h]
  int v134; // [rsp+38h] [rbp-D0h]
  int v135; // [rsp+40h] [rbp-C8h]
  int v136; // [rsp+44h] [rbp-C4h]
  int v137; // [rsp+44h] [rbp-C4h]
  unsigned __int64 v138; // [rsp+48h] [rbp-C0h]
  int v139; // [rsp+48h] [rbp-C0h]
  int v140; // [rsp+50h] [rbp-B8h]
  int v141; // [rsp+50h] [rbp-B8h]
  int v142; // [rsp+58h] [rbp-B0h]
  unsigned int v143; // [rsp+60h] [rbp-A8h]
  int v144; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v145; // [rsp+68h] [rbp-A0h]
  int v146; // [rsp+68h] [rbp-A0h]
  int v147; // [rsp+70h] [rbp-98h]
  __int64 v148; // [rsp+78h] [rbp-90h]
  __int64 v149; // [rsp+80h] [rbp-88h]
  unsigned __int64 v150; // [rsp+88h] [rbp-80h]
  unsigned __int64 v151; // [rsp+88h] [rbp-80h]
  int v152; // [rsp+90h] [rbp-78h]
  int v153; // [rsp+98h] [rbp-70h]
  _QWORD v154[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v155; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v156; // [rsp+1B8h] [rbp+B0h]
  int v159; // [rsp+228h] [rbp+120h]
  char v160; // [rsp+228h] [rbp+120h]
  __int64 i; // [rsp+228h] [rbp+120h]
  int v162; // [rsp+230h] [rbp+128h]
  int v163; // [rsp+248h] [rbp+140h]

  v8 = a4->m128i_i64[0];
  v9 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v10 = a3->m128i_i64[0];
  v11 = v9;
  v12 = HIDWORD(a4->m128i_i64[0]);
  LODWORD(v13) = HIDWORD(v9) - v12;
  v14 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v142 = v13;
  v147 = v14 - a3->m128i_i64[0];
  v15 = v11 - a4->m128i_i64[0];
  v138 = HIDWORD(a3->m128i_i64[0]);
  v152 = HIDWORD(v14) - HIDWORD(a3->m128i_i64[0]);
  if ( v15 >= 128000000 || (int)v13 >= 128000000 || v15 <= -128000000 || (int)v13 <= -128000000 )
    return v13;
  memset(v154, 0, 0xF8uLL);
  v16 = v10 - v8;
  v17 = v14 - v8;
  v133 = HIDWORD(v14) - v12;
  v18 = *(_QWORD *)(a1 + 48);
  v19 = *(_QWORD *)(a2 + 48);
  v20 = *(unsigned int *)(a1 + 40);
  v154[30] = v19 + *(unsigned int *)(a2 + 40);
  v21 = v18 + v20;
  HIDWORD(v154[26]) = *(_DWORD *)(a1 + 32);
  v22 = *(int *)(a1 + 64);
  v154[29] = v19;
  v154[27] = v18;
  v139 = v138 - v12;
  v150 = v21;
  v23 = *(int *)(a2 + 64);
  v135 = ((BYTE4(v22) & 3) + (int)v22) >> 2;
  LODWORD(v154[2]) = v135;
  v154[28] = v21;
  v140 = v16;
  LODWORD(v154[0]) = v16;
  v163 = ((BYTE4(v23) & 3) + (int)v23) >> 2;
  LODWORD(v154[5]) = v163;
  HIDWORD(v154[0]) = v14 - v8;
  v24 = *(_DWORD *)(a2 + 32);
  v149 = *(_QWORD *)(a1 + 56) + 4 * (v135 * (v142 - v139 - 1) - (__int64)v16);
  v25 = *a5;
  v26 = a5[1];
  v27 = a5[2] - v25;
  v162 = a5[3] - v26;
  v28 = v163 * (v162 - 1);
  v148 = *(_QWORD *)(a2 + 56) + 4 * (v25 + v28 + v163 * v26);
  if ( (*a6 & 0x20) != 0 )
  {
    v91 = ((BYTE4(v22) & 3) + (int)v22) >> 2;
    v100 = v149 + 4 * (v135 * v139 - (__int64)(v135 * (v142 - 1)));
    LODWORD(v13) = v133;
    if ( v162 < v133 )
      LODWORD(v13) = a5[3] - v26;
    v101 = v148 + 4 * (v163 * v139 - v28);
    v134 = v13;
    if ( v27 < v17 )
      v17 = a5[2] - v25;
    if ( v17 > v16 && v139 < (int)v13 )
    {
      v102 = 4 * (v17 - v16);
      do
      {
        v103 = (const void *)(v101 + 4LL * v16);
        v104 = (char *)(v100 + 4LL * v16);
        if ( v102 <= 0 )
          break;
        v105 = &v104[v102];
        if ( v105 <= v104 )
          break;
        v13 = (unsigned __int64)v103 + v102;
        if ( v13 <= (unsigned __int64)v103 || v18 > (unsigned __int64)v104 || (unsigned __int64)v105 > v21 )
          break;
        if ( (v13 > v21 || v18 > (unsigned __int64)v103) && (v154[29] > (unsigned __int64)v103 || v13 > v154[30]) )
          break;
        memmove(v104, v103, v102);
        v91 = ((BYTE4(v22) & 3) + (int)v22) >> 2;
        ++v139;
        v101 += 4LL * v163;
        LODWORD(v13) = v134;
        v100 += 4LL * v135;
      }
      while ( v139 < v134 );
    }
    goto LABEL_68;
  }
  v29 = a6[2];
  v30 = 1;
  LODWORD(v154[22]) = *a6 & 2;
  LODWORD(v154[3]) = v147;
  v154[6] = __PAIR64__(v24, v162);
  v31 = a6[1];
  HIDWORD(v154[2]) = v15;
  HIDWORD(v154[5]) = v27;
  HIDWORD(v154[7]) = v31;
  LODWORD(v154[9]) = v29;
  if ( v15 - v29 - v31 <= 0 || v27 - v29 - v31 <= 0 )
  {
    v32 = 0;
    HIDWORD(v154[12]) = 0;
    if ( v29 + v31 )
    {
      v32 = HIDWORD(v154[12]);
      v34 = v15 * v31 / (v29 + v31);
      LODWORD(v154[21]) = v34;
    }
    else
    {
      v34 = 0;
      LODWORD(v154[21]) = 0;
    }
    v33 = v15 - v34;
    v159 = v15 - v34;
    HIDWORD(v154[21]) = v15 - v34;
  }
  else
  {
    v32 = 1;
    HIDWORD(v154[12]) = 1;
    v33 = v29;
    v159 = v29;
    v34 = v31;
    v154[21] = __PAIR64__(v29, v31);
  }
  LODWORD(v154[8]) = v16;
  if ( v34 >= v17 )
    v35 = v17;
  else
    v35 = v34;
  HIDWORD(v154[8]) = v35;
  if ( !v32 && v34 )
  {
    DNG_InitStretch((unsigned int)&v154[13], v34, v31, v16, v35);
    v21 = v154[28];
    v33 = HIDWORD(v154[21]);
    v16 = v154[0];
    v18 = v154[27];
    v34 = v154[21];
    v29 = v154[9];
    v31 = HIDWORD(v154[7]);
    v27 = HIDWORD(v154[5]);
    v15 = HIDWORD(v154[2]);
    v17 = HIDWORD(v154[0]);
    v32 = HIDWORD(v154[12]);
    v150 = v154[28];
    v159 = HIDWORD(v154[21]);
    v140 = v154[0];
  }
  v36 = (unsigned int)(v27 - v29 - v31);
  v37 = v15 - v33;
  v136 = v15 - v33;
  v38 = v15 - v33 - v34;
  v143 = v38;
  LODWORD(v154[11]) = v38;
  if ( v34 <= v16 )
  {
    v39 = v16;
    HIDWORD(v154[11]) = v16;
  }
  else
  {
    v39 = v34;
    HIDWORD(v154[11]) = v34;
  }
  v40 = v38 + v34;
  if ( (int)(v38 + v34) >= v17 )
    v40 = v17;
  LODWORD(v154[12]) = v40;
  HIDWORD(v154[10]) = v36;
  if ( v32 )
  {
    v41 = v38;
    LODWORD(v154[26]) = v40 - v34;
    v42 = v39 - v34;
    HIDWORD(v154[25]) = v42;
    v43 = (v36 << 32) - 1;
    if ( v38 == 4LL )
    {
      v44 = v43 >> 2;
    }
    else
    {
      v44 = v43 / v38;
      v41 = v38;
    }
    v45 = v44 + 1;
    v46 = v36 << 32;
    v153 = v45;
    if ( v41 == 4 )
      v47 = v46 >> 2;
    else
      v47 = v46 / v38;
    v48 = v47 >> 1;
    v145 = HIDWORD(v45);
    v49 = HIDWORD(v48);
    *(_QWORD *)((char *)&v154[23] + 4) = v45;
    if ( v42 > 5 )
    {
      v106 = ((unsigned int)v48 + v42 * (unsigned __int64)(unsigned int)v45) >> 32;
      LODWORD(v48) = v48 + v42 * v153;
      v37 = v136;
      LODWORD(v49) = v106 + v42 * v145 + v49;
    }
    else if ( v42 > 0 )
    {
      v122 = (unsigned int)v42;
      do
      {
        v123 = __PAIR64__(v49, v48) + v45;
        LODWORD(v49) = (__PAIR64__(v49, v48) + v45) >> 32;
        LODWORD(v48) = v123;
        --v122;
      }
      while ( v122 );
      v21 = v150;
      v38 = v143;
      v16 = v140;
      v37 = v136;
    }
    HIDWORD(v154[22]) = v49;
    v32 = HIDWORD(v154[12]);
    LODWORD(v154[23]) = v48;
  }
  v50 = v16;
  if ( v37 > v16 )
    v50 = v37;
  v51 = v50 - v38 - v34;
  HIDWORD(v154[9]) = v51;
  if ( v15 < v17 )
    v17 = v15;
  v52 = v17 - v38 - v34;
  LODWORD(v154[10]) = v52;
  if ( !v32 && v159 )
  {
    DNG_InitStretch((unsigned int)&v154[17], v159, v29, v51, v52);
    v21 = v154[28];
    v18 = v154[27];
    v140 = v154[0];
  }
  v53 = a6;
  v54 = v142;
  v55 = a6[3];
  v56 = a6[4];
  v144 = v55;
  if ( v142 - v55 - v56 <= 0 || v162 - v55 - v56 <= 0 )
  {
    v160 = 0;
    if ( v56 + v55 )
      v107 = v142 * v55 / (v56 + v55);
    else
      v107 = 0;
    v137 = v107;
    v57 = v142 - v107;
  }
  else
  {
    v137 = a6[3];
    v57 = a6[4];
    v160 = 1;
  }
  v58 = v142 - v57;
  v59 = v142 - v57;
  if ( v142 - v57 <= v139 )
    v59 = v139;
  v60 = v133;
  v61 = v133;
  if ( v142 < v133 )
    v61 = v142;
  if ( v133 <= v58 )
    goto LABEL_37;
  v154[1] = v149;
  v154[4] = v148;
  if ( v56 != v57 )
  {
    if ( v57 > 0 )
    {
      v155 = 0LL;
      v156 = 0LL;
      DNG_InitStretch((unsigned int)&v155, v57, v56, v142 - v61, v142 - v59);
      DNG_StretchCol((struct _DNGINTERNALDATA *)v154, &v155);
      v62 = v154[0];
      v21 = v154[28];
      v18 = v154[27];
      v60 = v133;
      v140 = v154[0];
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v94 = v56 - v59 - v57 + v142 - 1;
  v154[1] = v149 - 4LL * v135 * v94;
  v154[4] = v148 - 4LL * v163 * v94;
  if ( v59 >= v61 )
  {
    v60 = v133;
LABEL_37:
    v62 = v140;
    goto LABEL_38;
  }
  v95 = (unsigned int)(v61 - v59);
  do
  {
    DNG_DrawRow(v154);
    v154[1] += 4LL * v135;
    v154[4] += 4LL * v163;
    --v95;
  }
  while ( v95 );
  v62 = v154[0];
  v21 = v154[28];
  v18 = v154[27];
  v54 = v142;
  v60 = v133;
  v53 = a6;
  v140 = v154[0];
LABEL_38:
  v63 = v53[4];
  LODWORD(v13) = v53[3];
  v64 = v162;
  v65 = v54 - v13 - v63;
  v66 = v139;
  v67 = v162 - v13 - v63;
  if ( !v160 || v67 <= 0 || v65 <= 0 || v139 >= v58 )
  {
LABEL_64:
    v90 = v137;
    if ( v137 < v60 )
    {
      v60 = v137;
      v133 = v137;
    }
    goto LABEL_66;
  }
  if ( v60 > v137 )
  {
    v68 = v149 - 4LL * v135 * v63;
    v69 = v144;
    v70 = v148 - 4LL * v163 * v63;
    if ( v144 <= v139 )
      v69 = v139;
    if ( LODWORD(v154[22]) )
    {
      v108 = ((BYTE4(v22) & 3) + (int)v22) >> 2;
      v109 = v68 + 4 * (v135 * (v69 - v144) - (__int64)(v135 * (v65 - 1)));
      v154[1] = v109;
      v110 = (v69 - v144) % v67;
      v111 = v67 - v110;
      v112 = v142 - v56;
      v154[4] = v70 + 4 * (LODWORD(v154[5]) * v110 - (__int64)(v163 * (v67 - 1)));
      v113 = v142 - v56;
      v114 = v67;
      if ( v142 - v56 >= v133 )
        v113 = v133;
      v141 = v113;
      if ( v67 >= v65 )
        v114 = v65;
      if ( v69 + v114 >= v113 )
      {
        v115 = v133;
        if ( v112 < v133 )
          v115 = v112;
      }
      else
      {
        if ( v67 < v65 )
          v65 = v67;
        v115 = v65 + v69;
      }
      if ( v69 < v115 )
      {
        v116 = 4LL * v135;
        v117 = (unsigned int)(v115 - v69);
        do
        {
          DNG_DrawRow(v154);
          if ( --v111 )
          {
            v118 = v154[4];
          }
          else
          {
            v111 = v67;
            v118 = v154[4] - 4LL * v163 * v67;
          }
          v109 = v116 + v154[1];
          v154[4] = 4LL * v163 + v118;
          v154[1] += v116;
          --v117;
        }
        while ( v117 );
        v62 = v154[0];
        v113 = v141;
        v108 = ((BYTE4(v22) & 3) + (int)v22) >> 2;
      }
      v13 = 4LL * v108 * v67;
      v119 = v109 - v13;
      v154[4] = v109 - v13;
      if ( v115 < v113 )
      {
        v120 = 4 * LODWORD(v154[3]);
        v121 = 4LL * v62;
        do
        {
          LODWORD(v13) = DNG_CopyMemory(
                           (struct _DNGINTERNALDATA *)v154,
                           (void *)(v121 + v109),
                           (void *)(v121 + v119),
                           v120);
          if ( !(_DWORD)v13 )
            break;
          ++v115;
          v13 = 4LL * v108;
          v109 += v13;
          v119 += v13;
          v154[1] = v109;
          v154[4] = v119;
        }
        while ( v115 < v113 );
      }
    }
    else
    {
      v71 = v142 - v56;
      v72 = (unsigned int)v67;
      if ( v142 - v56 >= v133 )
        v71 = v133;
      v73 = (unsigned int)v65;
      v74 = v144 + v65 - v71;
      v75 = v144 + v65 - v69;
      v76 = (((unsigned __int64)(unsigned int)v67 << 32) - 1) / (unsigned int)v65 + 1;
      v146 = v76;
      v77 = (((unsigned __int64)(unsigned int)v67 << 32) / v73) >> 1;
      v151 = HIDWORD(v76);
      v78 = ((v72 << 32) / v73) >> 33;
      if ( v74 <= 5 )
      {
        if ( v74 > 0 )
        {
          v92 = (unsigned int)v74;
          do
          {
            v93 = __PAIR64__(v78, v77) + v76;
            LODWORD(v78) = (__PAIR64__(v78, v77) + v76) >> 32;
            LODWORD(v77) = v93;
            --v92;
          }
          while ( v92 );
        }
      }
      else
      {
        v79 = (unsigned int)v77 + v74 * (unsigned __int64)(unsigned int)v76;
        LODWORD(v77) = v77 + v74 * v76;
        LODWORD(v78) = HIDWORD(v79) + v74 * HIDWORD(v76) + v78;
      }
      v80 = v154[2];
      v81 = v68 - 4LL * LODWORD(v154[2]) * v74;
      v82 = 4LL * LODWORD(v154[2]) * v75;
      v83 = 0;
      v84 = v68 - v82;
      v13 = 4LL * LODWORD(v154[5]) * (int)v78;
      v85 = v70 - v13;
      for ( i = v84; v81 != i; v81 -= 4LL * SLODWORD(v154[2]) )
      {
        if ( v30 )
        {
          v154[1] = v81;
          v154[4] = v85;
          DNG_DrawRow(v154);
          v21 = v154[28];
          v18 = v154[27];
          v140 = v154[0];
        }
        else
        {
          v86 = 4 * LODWORD(v154[3]);
          v13 = v140 + (__int64)v80;
          v87 = (void *)(v81 + 4LL * v140);
          v88 = (char *)(v81 + 4 * v13);
          if ( 4 * LODWORD(v154[3]) <= 0 )
            break;
          v13 = (unsigned __int64)v87 + v86;
          if ( v13 <= (unsigned __int64)v87 )
            break;
          v89 = &v88[v86];
          if ( v89 <= v88 || v18 > (unsigned __int64)v87 || v13 > v21 )
            break;
          if ( (v18 > (unsigned __int64)v88 || (unsigned __int64)v89 > v21)
            && (v154[29] > (unsigned __int64)v88 || (unsigned __int64)v89 > v154[30]) )
          {
            break;
          }
          memmove(v87, v88, v86);
        }
        v30 = ((int)v77 + v146 < (unsigned int)v77) + (_DWORD)v151;
        v83 += v30;
        if ( v83 < LODWORD(v154[6]) )
          v85 -= 4LL * LODWORD(v154[5]) * v30;
        LODWORD(v77) = v77 + v146;
        v80 = v154[2];
        v13 = -(__int64)SLODWORD(v154[2]);
      }
    }
    v64 = v162;
    v60 = v133;
    v66 = v139;
    v54 = v142;
    goto LABEL_64;
  }
  v90 = v137;
LABEL_66:
  if ( v66 < v90 )
  {
    v154[1] = v149 - 4LL * v135 * (v54 - v90);
    v13 = 4LL * v163 * (v64 - a6[3]);
    v96 = v148 - v13;
    v154[4] = v148 - v13;
    if ( v144 == v90 )
    {
      v97 = v144 - v66 - 1;
      v98 = v96 - 4LL * v163 * v97;
      v154[1] = v149 - 4LL * v135 * (v54 - v90) - 4LL * v135 * v97;
      LODWORD(v13) = v133;
      v154[4] = v98;
      if ( v66 < v133 )
      {
        v99 = (unsigned int)(v133 - v66);
        do
        {
          LODWORD(v13) = DNG_DrawRow(v154);
          v154[1] += 4LL * v135;
          v154[4] += 4LL * v163;
          --v99;
        }
        while ( v99 );
      }
    }
    else if ( v90 > 0 )
    {
      v155 = 0LL;
      v156 = 0LL;
      DNG_InitStretch((unsigned int)&v155, v90, v144, v90 - v60, v90 - v66);
      LODWORD(v13) = DNG_StretchCol((struct _DNGINTERNALDATA *)v154, &v155);
    }
  }
  v91 = ((BYTE4(v22) & 3) + (int)v22) >> 2;
LABEL_68:
  if ( a8 && v152 <= *(_DWORD *)(a1 + 36) && v147 <= *(_DWORD *)(a1 + 32) && v152 > 0 )
  {
    v124 = 4LL * v91;
    LODWORD(v13) = v147 / 2;
    v125 = (unsigned int)v152;
    v126 = 0LL;
    do
    {
      v127 = *(_QWORD *)(a1 + 56);
      v128 = (int *)(v127 + v126);
      v129 = (_DWORD *)(v126 + 4LL * v147 + v127 - 4);
      if ( v147 / 2 > 0 )
      {
        v130 = (unsigned int)(v147 / 2);
        do
        {
          v131 = *v128++;
          LODWORD(v13) = *v129--;
          *(v128 - 1) = v13;
          v129[1] = v131;
          --v130;
        }
        while ( v130 );
      }
      v126 += v124;
      --v125;
    }
    while ( v125 );
  }
  return v13;
}
