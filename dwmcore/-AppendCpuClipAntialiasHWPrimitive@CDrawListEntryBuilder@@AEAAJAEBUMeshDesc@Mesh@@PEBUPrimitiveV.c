__int64 __fastcall CDrawListEntryBuilder::AppendCpuClipAntialiasHWPrimitive(
        CDrawListEntryBuilder *this,
        const struct Mesh::MeshDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        float *a4,
        bool a5,
        bool *a6)
{
  __int64 v6; // r10
  bool *v8; // rsi
  __int64 v11; // rcx
  unsigned int v12; // r12d
  __int64 v13; // rax
  float v14; // xmm6_4
  float v15; // xmm9_4
  float v16; // xmm12_4
  float v17; // xmm13_4
  float v18; // xmm14_4
  float v19; // xmm15_4
  float v20; // xmm0_4
  int v21; // ebx
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  float *v30; // rcx
  float v31; // xmm1_4
  float v32; // xmm10_4
  float v33; // xmm6_4
  float v34; // xmm7_4
  float v35; // xmm9_4
  float v36; // xmm6_4
  float v37; // xmm1_4
  float v38; // xmm9_4
  float v39; // xmm6_4
  __int64 *v40; // r12
  __int64 *v41; // r9
  float *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // r10d
  float v46; // xmm1_4
  float v47; // xmm0_4
  int *v48; // rcx
  __int64 v49; // rax
  float v50; // xmm0_4
  float v51; // xmm1_4
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // edx
  int *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  _BYTE *v58; // rbx
  FLOAT v60; // ebx
  unsigned int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rcx
  float v64; // xmm3_4
  __int64 v65; // rdx
  __int64 v66; // rax
  float v67; // xmm10_4
  float v68; // xmm7_4
  float v69; // xmm9_4
  float v70; // xmm6_4
  float v71; // xmm0_4
  float v72; // xmm2_4
  float v73; // xmm3_4
  __int64 *v74; // r10
  float *v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // r9d
  float v79; // xmm1_4
  float v80; // xmm0_4
  int *v81; // rcx
  __int64 v82; // rax
  float v83; // xmm0_4
  float v84; // xmm1_4
  __int64 v85; // rcx
  __int64 v86; // rax
  unsigned int v87; // edx
  int *v88; // rcx
  __int64 v89; // rax
  unsigned int v90; // eax
  unsigned __int64 v91; // rdx
  __int64 v92; // rax
  float v93; // xmm1_4
  FLOAT v94; // xmm0_4
  CCpuClipAntialiasSink *v95; // rbx
  float v96; // xmm0_4
  const struct PrimitiveVertexAttributesDesc *v97; // r14
  int v98; // r12d
  const struct PrimitiveVertexAttributesDesc *v99; // rsi
  __int128 v100; // xmm0
  CDrawListEntryBuilder *v101; // rsi
  unsigned __int64 v102; // r9
  _QWORD *v103; // rbx
  unsigned int v104; // ecx
  int v105; // eax
  __int64 v106; // r12
  unsigned __int64 *v107; // rbx
  __int64 v108; // rsi
  unsigned __int64 v109; // r14
  _QWORD *v110; // r9
  __int64 v111; // r8
  unsigned __int64 v112; // rdx
  _QWORD *v113; // r10
  __int64 v114; // rcx
  __int64 v115; // r11
  _QWORD *v116; // rax
  void *v117; // rbx
  __int64 v118; // rdx
  _QWORD *v119; // r14
  unsigned int v120; // esi
  int v121; // eax
  __int64 v122; // r12
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rbx
  __int128 v126; // xmm0
  __int128 v127; // xmm1
  int v128; // ecx
  char *v129; // rax
  __int64 v130; // rax
  __int128 v131; // xmm0
  void *v132; // rcx
  int v133; // eax
  void *v134; // rcx
  void *v135; // rbx
  void *v136; // rcx
  void *v137; // rbx
  void *v138; // rcx
  HANDLE ProcessHeap; // rax
  unsigned int v140[2]; // [rsp+28h] [rbp-E0h]
  void *v141; // [rsp+30h] [rbp-D8h]
  __int64 v142; // [rsp+38h] [rbp-D0h]
  char v143; // [rsp+48h] [rbp-C0h]
  char v144; // [rsp+49h] [rbp-BFh]
  int v145; // [rsp+4Ch] [rbp-BCh]
  unsigned __int16 v146; // [rsp+50h] [rbp-B8h]
  float v147; // [rsp+54h] [rbp-B4h]
  float v148; // [rsp+58h] [rbp-B0h]
  float v149; // [rsp+5Ch] [rbp-ACh] BYREF
  struct D2D_MATRIX_3X2_F v150; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v151; // [rsp+78h] [rbp-90h] BYREF
  void *v152; // [rsp+80h] [rbp-88h] BYREF
  int v153; // [rsp+88h] [rbp-80h]
  bool *v154; // [rsp+90h] [rbp-78h]
  unsigned int v155; // [rsp+98h] [rbp-70h]
  __int64 v156; // [rsp+A0h] [rbp-68h] BYREF
  float v157; // [rsp+A8h] [rbp-60h]
  _BYTE v158[20]; // [rsp+B8h] [rbp-50h] BYREF
  int v159; // [rsp+CCh] [rbp-3Ch]
  unsigned __int64 v160; // [rsp+D0h] [rbp-38h]
  int v161; // [rsp+D8h] [rbp-30h]
  struct D2D_POINT_2F v162; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 v163; // [rsp+F0h] [rbp-18h]
  const struct PrimitiveVertexAttributesDesc *v164; // [rsp+F8h] [rbp-10h]
  CDrawListEntryBuilder *v165; // [rsp+100h] [rbp-8h]
  __int64 v166; // [rsp+108h] [rbp+0h]
  struct D2D_POINT_2F v167; // [rsp+110h] [rbp+8h] BYREF
  void **v168; // [rsp+118h] [rbp+10h]
  void *v169; // [rsp+120h] [rbp+18h] BYREF
  char v170; // [rsp+128h] [rbp+20h]
  __m128 v171; // [rsp+138h] [rbp+30h] BYREF
  __int64 v172; // [rsp+148h] [rbp+40h]
  __int64 v173; // [rsp+158h] [rbp+50h]
  __int64 v174; // [rsp+160h] [rbp+58h]
  _DWORD v175[4]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v176; // [rsp+178h] [rbp+70h]
  const struct PrimitiveVertexAttributesDesc *v177; // [rsp+180h] [rbp+78h]
  __int64 v178; // [rsp+190h] [rbp+88h]
  CCpuClipAntialiasSink *v179; // [rsp+198h] [rbp+90h]
  __int64 v180; // [rsp+1A0h] [rbp+98h]
  float v181; // [rsp+1A8h] [rbp+A0h]
  __int64 v182; // [rsp+1B0h] [rbp+A8h]
  char v183; // [rsp+1B8h] [rbp+B0h]
  bool v184; // [rsp+1B9h] [rbp+B1h]
  char v185; // [rsp+1BAh] [rbp+B2h]
  __m128 v186; // [rsp+1C8h] [rbp+C0h]
  _QWORD v187[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int128 v188; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v189; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v190; // [rsp+208h] [rbp+100h]
  __int64 v191; // [rsp+210h] [rbp+108h]
  __int64 v192; // [rsp+218h] [rbp+110h]
  __int128 v193; // [rsp+220h] [rbp+118h]
  __m128 v194; // [rsp+230h] [rbp+128h] BYREF
  unsigned __int64 v195; // [rsp+240h] [rbp+138h]
  __m128 v196; // [rsp+248h] [rbp+140h] BYREF
  unsigned __int64 v197; // [rsp+258h] [rbp+150h]
  _OWORD v198[3]; // [rsp+260h] [rbp+158h] BYREF
  int v199; // [rsp+290h] [rbp+188h]
  LPVOID lpMem; // [rsp+298h] [rbp+190h] BYREF
  _BYTE *v201; // [rsp+2A0h] [rbp+198h]
  char *v202; // [rsp+2A8h] [rbp+1A0h]
  _BYTE v203[208]; // [rsp+2B0h] [rbp+1A8h] BYREF
  char v204; // [rsp+380h] [rbp+278h] BYREF
  int v205; // [rsp+388h] [rbp+280h] BYREF
  _DWORD v206[3]; // [rsp+38Ch] [rbp+284h] BYREF
  int v207; // [rsp+398h] [rbp+290h] BYREF
  _DWORD v208[3]; // [rsp+39Ch] [rbp+294h] BYREF
  int v209; // [rsp+3A8h] [rbp+2A0h] BYREF
  _DWORD v210[3]; // [rsp+3ACh] [rbp+2A4h] BYREF
  int v211; // [rsp+3B8h] [rbp+2B0h] BYREF
  _DWORD v212[3]; // [rsp+3BCh] [rbp+2B4h] BYREF
  _OWORD v213[4]; // [rsp+3C8h] [rbp+2C0h] BYREF

  v6 = *((_QWORD *)this + 2);
  v8 = a6;
  v165 = this;
  v144 = (char)a4;
  v11 = *(_QWORD *)(v6 + 104);
  v12 = 0;
  v164 = a3;
  v154 = a6;
  v153 = 0;
  v13 = *(_QWORD *)(v11 + 16);
  v174 = v11;
  if ( *(_QWORD *)(v11 + 24) == v13 )
    v166 = 0LL;
  else
    v166 = *(_QWORD *)(*(_QWORD *)(v11 + 24) - 432LL) + 16LL;
  v14 = *(float *)(v6 + 56);
  v15 = *(float *)(v6 + 60);
  v16 = *(float *)(v6 + 8);
  v17 = *(float *)(v6 + 12);
  v18 = *(float *)(v6 + 24);
  v19 = *(float *)(v6 + 28);
  v194.m128_u64[0] = __PAIR64__(LODWORD(v17), LODWORD(v16));
  v194.m128_u64[1] = __PAIR64__(LODWORD(v19), LODWORD(v18));
  v147 = v14;
  v195 = __PAIR64__(LODWORD(v15), LODWORD(v14));
  v148 = v15;
  if ( *((_BYTE *)this + 4473) )
  {
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v171,
      (CDrawListEntryBuilder *)((char *)this + 56),
      (const struct D2D1::Matrix3x2F *)&v194);
    v195 = v172;
    LODWORD(v14) = v172;
    v194 = v171;
    v18 = v171.m128_f32[2];
    LODWORD(v15) = _mm_shuffle_ps((__m128)(unsigned __int64)v172, (__m128)(unsigned __int64)v172, 85).m128_u32[0];
    v17 = v171.m128_f32[1];
    v16 = v171.m128_f32[0];
    v148 = v15;
    LODWORD(v19) = _mm_shuffle_ps(v171, v171, 255).m128_u32[0];
    v147 = *(float *)&v172;
    v186 = v171;
    v163 = v172;
  }
  else
  {
    v163 = v195;
    v186 = v194;
  }
  D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)&v194, &v150, &v149, a4);
  lpMem = v203;
  *(_QWORD *)&v150.m[2][0] = 0LL;
  v201 = v203;
  v202 = &v204;
  v20 = fmaxf(v150.m11, v149) * *(float *)a2;
  v193 = 0uLL;
  v145 = 0;
  v149 = v20;
  if ( a3 )
  {
    v21 = (1 << *((_QWORD *)a3 + 5)) - 1;
    v145 = v21 & (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
  }
  v22 = *((_QWORD *)a2 + 1);
  v23 = 0LL;
  LODWORD(v24) = 0;
  v151 = 0LL;
  if ( v22 )
  {
    while ( 1 )
    {
      v25 = (unsigned int)v24;
      v26 = v24;
      v155 = v24;
      *(_QWORD *)v158 = (unsigned int)v24;
      if ( (unsigned int)v24 < v22 )
      {
        v27 = *((_QWORD *)a2 + 4);
        do
        {
          v28 = 32 * v25;
          if ( *(float *)(v28 + v27) != 0.0 )
            break;
          if ( *(float *)(v28 + v27 + 4) != 0.0 )
            break;
          LODWORD(v24) = v24 + 1;
          v25 = (unsigned int)v24;
        }
        while ( (unsigned int)v24 < v22 );
      }
      if ( (unsigned int)v24 >= v22 )
        goto LABEL_42;
      if ( *(_BYTE *)((unsigned int)v24 + *((_QWORD *)a2 + 5)) )
        goto LABEL_42;
      v29 = *((_QWORD *)a2 + 2);
      v30 = (float *)(*((_QWORD *)a2 + 4) + 32LL * (unsigned int)v24);
      v31 = *v30;
      v32 = (float)((float)(*(float *)(v29 + 8LL * (unsigned int)v24 + 4) * v18)
                  + (float)(*(float *)(v29 + 8LL * (unsigned int)v24) * v16))
          + v14;
      v33 = v30[1];
      v34 = (float)((float)(v17 * *(float *)(v29 + 8LL * (unsigned int)v24))
                  + (float)(*(float *)(v29 + 8LL * (unsigned int)v24 + 4) * v19))
          + v15;
      v35 = (float)(v33 * v18) + (float)(*v30 * v16);
      v167.x = v32;
      v167.y = v34;
      v36 = (float)(v33 * v19) + (float)(v17 * v31);
      v37 = 1.0 / sqrtf_0((float)(v36 * v36) + (float)(v35 * v35));
      v38 = v35 * v37;
      v39 = v36 * v37;
      if ( v38 == 0.0 && v39 == 0.0 )
        goto LABEL_42;
      v40 = *(__int64 **)v166;
      v41 = *(__int64 **)v166;
      v143 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v166 + 8LL) + 25LL);
      if ( !v143 )
      {
        v42 = *(float **)(*(_QWORD *)v166 + 8LL);
        v205 = 0;
        v206[1] = 3;
        v206[0] = 1;
        v43 = 1LL;
        v44 = 2LL;
        v206[2] = 2;
        if ( v39 <= 0.0 )
          v43 = 0LL;
        if ( v38 >= 0.0 )
          v44 = 0LL;
        v45 = v206[v44 - 1 + v43];
        do
        {
          v46 = v42[8];
          v47 = v42[7];
          v48 = &v205;
          if ( v46 > 0.0 )
            v48 = v206;
          v49 = 2LL;
          if ( v47 >= 0.0 )
            v49 = 0LL;
          if ( v48[v49] < v45 || v48[v49] == v45 && (float)((float)(v47 * v39) - (float)(v46 * v38)) > 0.000081380211 )
          {
            v42 = (float *)*((_QWORD *)v42 + 2);
          }
          else
          {
            v41 = (__int64 *)v42;
            v42 = *(float **)v42;
          }
        }
        while ( !*((_BYTE *)v42 + 25) );
      }
      if ( *((_BYTE *)v41 + 25) )
        goto LABEL_42;
      v50 = *((float *)v41 + 8);
      v51 = *((float *)v41 + 7);
      v52 = 1LL;
      v208[0] = 1;
      v53 = 2LL;
      v207 = 0;
      v208[1] = 3;
      v208[2] = 2;
      if ( v39 <= 0.0 )
        v52 = 0LL;
      if ( v38 >= 0.0 )
        v53 = 0LL;
      v54 = v208[v53 - 1 + v52];
      v55 = &v207;
      if ( v50 > 0.0 )
        v55 = v208;
      v56 = 2LL;
      if ( v51 >= 0.0 )
        v56 = 0LL;
      if ( v54 < v55[v56]
        || v54 == v55[v56] && (float)((float)(v50 * v38) - (float)(v51 * v39)) > 0.000081380211
        || v41 == v40
        || v149 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)(v34 - *((float *)v41 + 10)) * *((float *)v41 + 7))
                                - (float)((float)(v32 - *((float *)v41 + 9)) * *((float *)v41 + 8))) & _xmm) )
      {
LABEL_42:
        while ( v26 <= (unsigned int)v24 )
        {
          v57 = v26;
          if ( (unsigned __int64)v26 >= *((_QWORD *)a2 + 1) )
            break;
          ++v26;
          v8[v57] = 0;
        }
        v14 = v147;
        LODWORD(v24) = v24 + 1;
        v15 = v148;
        goto LABEL_46;
      }
      v60 = *((float *)v41 + 11);
      v173 = LOWORD(v60);
      v150.m11 = v60;
      LOWORD(v61) = HIWORD(v60);
      *(_QWORD *)&v150.m[1][0] = *(_QWORD *)(432LL * LOWORD(v60) + *(_QWORD *)(v174 + 16));
LABEL_59:
      v146 = v61;
      while ( 1 )
      {
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 >= v22 || *(_BYTE *)(v24 + *((_QWORD *)a2 + 5)) )
          break;
        v62 = *((_QWORD *)a2 + 4);
        v63 = 32LL * (unsigned int)v24;
        v64 = *(float *)(v63 + v62);
        v65 = v63 + v62;
        if ( v64 != 0.0 || *(float *)(v65 + 4) != 0.0 )
        {
          v66 = *((_QWORD *)a2 + 2);
          v67 = (float)((float)(*(float *)(v66 + 8 * v24 + 4) * v18) + (float)(v16 * *(float *)(v66 + 8 * v24))) + v147;
          v68 = (float)(v16 * v64) + (float)(v18 * *(float *)(v65 + 4));
          v69 = (float)((float)(v17 * *(float *)(v66 + 8 * v24)) + (float)(*(float *)(v66 + 8 * v24 + 4) * v19)) + v148;
          v70 = (float)(v17 * v64) + (float)(v19 * *(float *)(v65 + 4));
          v71 = sqrtf_0((float)(v70 * v70) + (float)(v68 * v68));
          v72 = (float)(1.0 / v71) * v70;
          v73 = (float)(1.0 / v71) * v68;
          if ( v73 != 0.0 || v72 != 0.0 )
          {
            v74 = v40;
            if ( !v143 )
            {
              v75 = (float *)v40[1];
              v210[0] = 1;
              v76 = 1LL;
              v77 = 2LL;
              v209 = 0;
              v210[1] = 3;
              v210[2] = 2;
              if ( v72 <= 0.0 )
                v76 = 0LL;
              if ( v73 >= 0.0 )
                v77 = 0LL;
              v78 = v210[v77 - 1 + v76];
              do
              {
                v79 = v75[8];
                v80 = v75[7];
                v81 = &v209;
                if ( v79 > 0.0 )
                  v81 = v210;
                v82 = 2LL;
                if ( v80 >= 0.0 )
                  v82 = 0LL;
                if ( v81[v82] < v78
                  || v81[v82] == v78 && (float)((float)(v80 * v72) - (float)(v79 * v73)) > 0.000081380211 )
                {
                  v75 = (float *)*((_QWORD *)v75 + 2);
                }
                else
                {
                  v74 = (__int64 *)v75;
                  v75 = *(float **)v75;
                }
              }
              while ( !*((_BYTE *)v75 + 25) );
            }
            if ( !*((_BYTE *)v74 + 25) )
            {
              v83 = *((float *)v74 + 8);
              v84 = *((float *)v74 + 7);
              v85 = 1LL;
              v212[0] = 1;
              v86 = 2LL;
              v211 = 0;
              v212[1] = 3;
              v212[2] = 2;
              if ( v72 <= 0.0 )
                v85 = 0LL;
              if ( v73 >= 0.0 )
                v86 = 0LL;
              v87 = v212[v86 - 1 + v85];
              v88 = &v211;
              if ( v83 > 0.0 )
                v88 = v212;
              v89 = 2LL;
              if ( v84 >= 0.0 )
                v89 = 0LL;
              if ( v87 >= v88[v89]
                && (v87 != v88[v89] || (float)((float)(v83 * v73) - (float)(v84 * v72)) <= 0.000081380211)
                && v74 != v40
                && v149 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                         (float)((float)(v69 - *((float *)v74 + 10)) * *((float *)v74 + 7))
                                       - (float)((float)(v67 - *((float *)v74 + 9)) * *((float *)v74 + 8))) & _xmm) )
              {
                v90 = *((_DWORD *)v74 + 11);
                if ( LOWORD(v60) == (_WORD)v90 )
                {
                  v61 = HIWORD(v90);
                  if ( HIWORD(v150._11) <= (unsigned __int16)v61 )
                    goto LABEL_59;
                }
              }
            }
          }
          break;
        }
      }
      v14 = v147;
      v15 = v148;
      v23 = v151;
      v8 = v154;
      v91 = (unsigned int)v24 % v22;
      v92 = *((_QWORD *)a2 + 2);
      v93 = *(float *)(v92 + 8 * v91 + 4);
      v94 = (float)((float)(v17 * *(float *)(v92 + 8 * v91)) + (float)(v93 * v19)) + v148;
      v162.x = (float)((float)(v93 * v18) + (float)(v16 * *(float *)(v92 + 8 * v91))) + v147;
      v162.y = v94;
      if ( v155 < (unsigned int)v24 )
      {
        LOBYTE(v91) = 1;
        memset_0(&v154[*(_QWORD *)v158], v91, (unsigned int)v24 - v155);
      }
      if ( v144 )
        goto LABEL_46;
      LOWORD(v156) = LOWORD(v60);
      v95 = *(CCpuClipAntialiasSink **)&v150.m[1][0];
      HIDWORD(v156) = CCpuClipAntialiasSink::CalcOutlinePosition(
                        *(CCpuClipAntialiasSink **)&v150.m[1][0],
                        HIWORD(v150._11),
                        &v167);
      v96 = CCpuClipAntialiasSink::CalcOutlinePosition(v95, v146, &v162);
      v97 = *(const struct PrimitiveVertexAttributesDesc **)&v150.m[2][0];
      v98 = v145;
      v157 = v96;
      if ( *(_QWORD *)&v150.m[2][0]
        || (v99 = v164, *(_QWORD *)&v150.m[2][0] = v164, v97 = v164, !v145)
        || D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v194) )
      {
        v152 = 0LL;
        if ( !v145 )
        {
          v101 = v165;
          goto LABEL_106;
        }
      }
      else
      {
        v196 = v186;
        v197 = v163;
        D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v196);
        v118 = *((_QWORD *)v99 + 5);
        v119 = (_QWORD *)((char *)v99 + 40);
        memset(v198, 0, sizeof(v198));
        v199 = 0;
        detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::resize(
          &lpMem,
          v118,
          v198);
        v120 = 0;
        if ( *v119 )
        {
          v121 = v145;
          v122 = 0LL;
          do
          {
            if ( _bittest(&v121, v120) )
            {
              *(_QWORD *)&v158[12] = v196.m128_u64[1];
              *(_QWORD *)v158 = v196.m128_u64[0];
              v160 = v197;
              *(_DWORD *)&v158[8] = 0;
              v159 = 0;
              v161 = 1065353216;
              v123 = gsl::span<PrimitiveUVDesc const,-1>::operator[](v119, v122);
              v124 = Matrix3x3::operator*(v158, v213, v123);
              v125 = 52 * v122;
              v126 = *(_OWORD *)v124;
              v127 = *(_OWORD *)(v124 + 16);
              v128 = *(_DWORD *)(v124 + 32);
              v129 = (char *)lpMem;
              *(_OWORD *)((char *)lpMem + v125) = v126;
              *(_OWORD *)&v129[v125 + 16] = v127;
              *(_DWORD *)&v129[v125 + 32] = v128;
              v130 = gsl::span<PrimitiveUVDesc const,-1>::operator[](v119, v122);
              *(_OWORD *)((char *)lpMem + v125 + 36) = *(_OWORD *)(v130 + 36);
              v121 = v145;
            }
            v122 = ++v120;
          }
          while ( (unsigned __int64)v120 < *v119 );
          v95 = *(CCpuClipAntialiasSink **)&v150.m[1][0];
          v98 = v145;
        }
        v131 = *(_OWORD *)v164;
        v190 = *((_QWORD *)v164 + 2);
        v191 = *((_QWORD *)v164 + 3);
        v192 = *((_QWORD *)v164 + 4);
        v189 = v131;
        gsl::span<PrimitiveUVDesc const,-1>::span<PrimitiveUVDesc const,-1>(&v188, (__int64 *)&lpMem);
        v97 = (const struct PrimitiveVertexAttributesDesc *)&v189;
        *(_QWORD *)&v150.m[2][0] = &v189;
        v193 = v188;
        v152 = 0LL;
      }
      v100 = *(_OWORD *)((char *)v97 + 40);
      v101 = v165;
      v168 = &v152;
      v169 = 0LL;
      v102 = *(unsigned int *)v165;
      v170 = 1;
      *(_OWORD *)v158 = v100;
      CCpuClipAntialiasSink::CreateUVData((__int64)v95, 0, (__int64)&v156, v102, v98, (unsigned __int64 *)v158, &v169);
      if ( v170 )
      {
        v103 = *v168;
        *v168 = v169;
        if ( v103 )
        {
          v132 = (void *)v103[2];
          if ( v132 )
            operator delete(v132);
          operator delete(v103, 0x18uLL);
        }
        v95 = *(CCpuClipAntialiasSink **)&v150.m[1][0];
      }
LABEL_106:
      memset_0(v175, 0, 0x58uLL);
      v104 = *((_DWORD *)v101 + 6);
      v175[0] = v104 & 0xFFFFEFFE | 0x1000;
      v178 = *((_QWORD *)v101 + 10);
      v182 = *(unsigned int *)v101;
      if ( v97 && *((_BYTE *)v101 + 29) )
      {
        v183 = 1;
      }
      else
      {
        v183 = 0;
        if ( !v97 )
        {
          v177 = 0LL;
          v176 = 0LL;
          goto LABEL_110;
        }
      }
      v176 = *((_QWORD *)v97 + 2);
      v177 = v97;
LABEL_110:
      v180 = v156;
      v179 = v95;
      v181 = v157;
      v184 = !a5;
      v185 = v104 & 1;
      if ( CCommonRegistryData::CpuClipAASinkEnableDebugColors )
      {
        v213[0] = _xmm;
        v213[1] = _xmm;
        v213[2] = _xmm;
        v213[3] = *(_OWORD *)&_xmm;
        if ( !v23 )
        {
          wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(&v151);
          v187[0] = 0LL;
          v187[1] = 0LL;
          v133 = CCommonRenderingEffectFactory::CreateRenderingEffect(v158, v187, &v151);
          *(_QWORD *)&v150.m[2][0] = v97;
          v12 = v133;
          if ( v133 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v133, 0x623u, 0LL);
            v135 = v152;
            if ( v152 )
            {
              v136 = (void *)*((_QWORD *)v152 + 2);
              if ( v136 )
                operator delete(v136);
              operator delete(v135, 0x18uLL);
            }
            v23 = v151;
            break;
          }
          v23 = v151;
        }
        v178 = v23;
        v183 = 1;
        v182 = 2LL;
        v177 = (const struct PrimitiveVertexAttributesDesc *)&v213[v173 & 3];
      }
      *(_QWORD *)&v150.m[1][0] = 0LL;
      v105 = CCpuClipAntialiasDrawListEntry::Create((__int64)v175, (__int64 *)&v152, v150.m[1]);
      v153 = v105;
      v12 = v105;
      if ( v105 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v105, 0x631u, 0LL);
        Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(v150.m[1]);
        v137 = v152;
        if ( v152 )
        {
          v138 = (void *)*((_QWORD *)v152 + 2);
          if ( v138 )
            operator delete(v138);
          operator delete(v137, 0x18uLL);
        }
        break;
      }
      v106 = *(_QWORD *)&v150.m[1][0];
      v107 = (unsigned __int64 *)((char *)v101 + 88);
      v108 = (__int64)(*((_QWORD *)v101 + 12) - *((_QWORD *)v101 + 11)) >> 3;
      detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(v107, 1LL);
      v109 = *v107;
      v110 = (_QWORD *)v107[1];
      v111 = (__int64)((__int64)v110 - *v107) >> 3;
      v112 = v111 - v108;
      v113 = (_QWORD *)(*v107 + 8 * v111);
      if ( !v113 )
        goto LABEL_162;
      v114 = ((__int64)(v107[1] - *v107) >> 3) - v108;
      v115 = 1LL;
      if ( v112 > 1 )
        v114 = 1LL;
      v116 = &v110[-v114];
      if ( v110 != v116 )
      {
        while ( 1 )
        {
          --v110;
          if ( !v115 )
            break;
          if ( --v115 )
            break;
          *v113 = *v110;
          if ( v110 == v116 )
            goto LABEL_116;
        }
LABEL_162:
        _invalid_parameter_noinfo_noreturn();
      }
LABEL_116:
      if ( v112 > 1 )
      {
        if ( v111 && (!v109 || v111 < 0) )
          goto LABEL_162;
        v171.m128_u64[1] = v111;
        v172 = v111;
        v171.m128_u64[0] = v109;
        std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
          v158,
          v109 + 8 * v108,
          v109 + 8 * (v111 - 1),
          &v171,
          *(_QWORD *)v140,
          v141,
          v142);
      }
      v107[1] += 8LL;
      *(_QWORD *)(v109 + 8 * v108) = v106;
      v117 = v152;
      if ( v152 )
      {
        v134 = (void *)*((_QWORD *)v152 + 2);
        if ( v134 )
          operator delete(v134);
        operator delete(v117, 0x18uLL);
      }
      v8 = v154;
LABEL_46:
      v22 = *((_QWORD *)a2 + 1);
      if ( (unsigned int)v24 >= v22 )
      {
        v12 = v153;
        break;
      }
    }
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  if ( 0x4EC4EC4EC4EC4EC5LL * ((v201 - (_BYTE *)lpMem) >> 2) )
    detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL);
  v58 = lpMem;
  lpMem = 0LL;
  if ( v58 != v203 && v58 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v58);
  }
  return v12;
}
