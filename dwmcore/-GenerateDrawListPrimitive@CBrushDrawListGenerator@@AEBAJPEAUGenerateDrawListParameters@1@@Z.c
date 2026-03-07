__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v2; // rax
  CBrushDrawListGenerator *v4; // rbx
  bool v5; // r15
  unsigned int v6; // eax
  char v7; // r12
  unsigned int v8; // esi
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD *); // rcx
  unsigned int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // ecx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // esi
  gsl::details *v22; // r13
  char *v23; // rax
  int v24; // r12d
  struct CRenderingEffect *v25; // rbx
  gsl::details *v26; // rcx
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rcx
  unsigned int v30; // xmm6_4
  unsigned int v31; // xmm7_4
  unsigned int v32; // xmm8_4
  unsigned int v33; // xmm9_4
  float v34; // xmm1_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm2_4
  float v38; // xmm5_4
  float v39; // xmm6_4
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  __m128 v42; // xmm0
  __m128 v43; // xmm1
  __m128 v44; // xmm1
  __m128 v45; // xmm1
  __int64 v46; // rsi
  struct CShape *v47; // rcx
  int v48; // r12d
  __int64 v49; // rdx
  _BYTE *v50; // rcx
  _BYTE *v51; // rdx
  __int64 v52; // rcx
  struct CRenderingEffect *v53; // rdx
  __int64 v54; // rcx
  char v55; // r12
  unsigned int *v56; // r13
  unsigned int v57; // r15d
  __int64 v58; // rsi
  const struct Matrix3x3 *v59; // rdx
  const struct D2D_MATRIX_3X2_F *v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r9
  __int64 v63; // rax
  int v64; // eax
  int v65; // eax
  __int128 v66; // xmm0
  int v67; // eax
  unsigned int v68; // ecx
  bool v69; // zf
  unsigned int v70; // xmm1_4
  unsigned int v71; // xmm0_4
  int v72; // eax
  unsigned int v73; // ecx
  int v75; // eax
  __int64 v76; // rdx
  __int64 *v77; // rcx
  __int64 v78; // rdx
  struct CRenderingEffect *v79; // rcx
  struct CRenderingEffect *v80; // rax
  __int64 v81; // rcx
  int v82; // eax
  int v83; // xmm1_4
  int v84; // xmm0_4
  unsigned int v85; // xmm1_4
  unsigned int v86; // xmm0_4
  __m128 v87; // xmm0
  __m128 v88; // xmm1
  __m128 v89; // xmm0
  __m128 v90; // xmm0
  __m128 v91; // xmm1
  __m128 v92; // xmm0
  __m128 v93; // xmm1
  __m128 v94; // xmm0
  __m128 v95; // xmm0
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // rax
  float v99; // xmm1_4
  __m128 v100; // xmm3
  __m128 v101; // xmm2
  float v102; // xmm0_4
  int v103; // esi
  struct CRenderingEffect *v104; // [rsp+30h] [rbp-D0h] BYREF
  int v105; // [rsp+38h] [rbp-C8h] BYREF
  struct CRenderingEffect *v106; // [rsp+40h] [rbp-C0h] BYREF
  char *v107; // [rsp+48h] [rbp-B8h]
  __int128 v108; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v109; // [rsp+60h] [rbp-A0h] BYREF
  CBrushDrawListGenerator *v110; // [rsp+70h] [rbp-90h]
  __m128 v111; // [rsp+78h] [rbp-88h] BYREF
  __m256i v112; // [rsp+88h] [rbp-78h]
  _BYTE v113[20]; // [rsp+A8h] [rbp-58h]
  struct CShape *v114[2]; // [rsp+C0h] [rbp-40h] BYREF
  __m128 v115; // [rsp+D0h] [rbp-30h]
  int v116; // [rsp+E0h] [rbp-20h]
  __m128 v117; // [rsp+F0h] [rbp-10h]
  unsigned int v118[2]; // [rsp+108h] [rbp+8h]
  CRectanglesShape *v119; // [rsp+110h] [rbp+10h] BYREF
  char v120; // [rsp+118h] [rbp+18h]
  __m128 v121; // [rsp+120h] [rbp+20h] BYREF
  __m256i v122; // [rsp+130h] [rbp+30h]
  __m128 v123; // [rsp+150h] [rbp+50h]
  int v124; // [rsp+160h] [rbp+60h]
  _BYTE v125[24]; // [rsp+170h] [rbp+70h] BYREF
  __int128 *v126; // [rsp+188h] [rbp+88h]
  char *v127; // [rsp+190h] [rbp+90h]
  __int128 v128; // [rsp+198h] [rbp+98h]
  __int128 v129; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v130; // [rsp+1C0h] [rbp+C0h] BYREF
  const unsigned int *v131; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v132; // [rsp+1D8h] [rbp+D8h]
  void *lpMem; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE *v134; // [rsp+1E8h] [rbp+E8h]
  int v135; // [rsp+1F0h] [rbp+F0h]
  __int64 v136; // [rsp+1F4h] [rbp+F4h]
  _BYTE v137[16]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v138; // [rsp+210h] [rbp+110h]
  __int128 v139; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v140[2]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v141[3]; // [rsp+240h] [rbp+140h] BYREF
  char v142; // [rsp+258h] [rbp+158h]
  _DWORD v143[52]; // [rsp+260h] [rbp+160h] BYREF

  v2 = *((_QWORD *)a2 + 23);
  v4 = this;
  v110 = this;
  if ( *(_QWORD *)(v2 + 80) )
  {
    v24 = *((_DWORD *)a2 + 50);
    v23 = (char *)a2 + 136;
    v22 = (gsl::details *)*((unsigned int *)a2 + 44);
  }
  else
  {
    v5 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 24) + 8LL))(*((_QWORD *)a2 + 24)) == 1
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 8) - 1.0) & _xmm) < 0.0000011920929;
    v6 = *((_DWORD *)a2 + 45);
    v7 = 0;
    v8 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        v9 = v8;
        v10 = *((_QWORD *)a2 + v8 + 17);
        if ( v10 )
          break;
LABEL_16:
        v6 = *((_DWORD *)a2 + 45);
        ++v8;
        v141[v9] = v10;
        if ( v8 >= v6 )
        {
          v4 = v110;
          goto LABEL_18;
        }
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)a2 + v8 + 17), 2LL) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1LL) )
          v10 = 0LL;
        goto LABEL_16;
      }
      if ( v5 )
      {
        if ( *(_BYTE *)(v10 + 72) )
        {
LABEL_10:
          v5 = 1;
LABEL_14:
          if ( v7 || *(_BYTE *)(v10 + 147) )
            v7 = 1;
          goto LABEL_16;
        }
        v11 = *(_QWORD *)(v10 + 56);
        if ( v11 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) )
          {
            v5 = 1;
            goto LABEL_14;
          }
        }
        else
        {
          v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))(*(_QWORD *)(v10 + 64)
                                                           + 8LL
                                                           + *(int *)(*(_QWORD *)(*(_QWORD *)(v10 + 64) + 8LL) + 8LL));
          if ( *(_DWORD *)((**v12)(v12, v140) + 4) == 3 )
            goto LABEL_10;
        }
      }
      v5 = 0;
      goto LABEL_14;
    }
LABEL_18:
    v13 = *((_DWORD *)a2 + 70);
    v14 = *((_DWORD *)a2 + 71);
    v15 = *((_DWORD *)v4 + 4) | (v7 != 0 ? 0x40 : 0);
    HIDWORD(v108) = *((_DWORD *)a2 + 69);
    *(_QWORD *)&v129 = v6;
    *(_QWORD *)&v109 = (char *)a2 + 8;
    HIDWORD(v109) = *((unsigned __int16 *)a2 + 144);
    *(_QWORD *)&v108 = __PAIR64__(v13, v6);
    v16 = v15 | v5;
    v17 = (__int64 *)*((_QWORD *)a2 + 24);
    *((_QWORD *)&v129 + 1) = v141;
    DWORD2(v109) = v16;
    v18 = *v17;
    v104 = 0LL;
    DWORD2(v108) = v14;
    v19 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, struct CRenderingEffect **))(v18 + 16))(v17, &v129, &v104);
    v21 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1F0u, 0LL);
      wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((__int64 *)&v104);
      return v21;
    }
    CDrawListEntryBuilder::Begin(
      *((CDrawListEntryBuilder **)a2 + 23),
      (const struct DrawListEntryBuilderSetupParams *)&v108,
      v104);
    if ( v104 )
      (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v104 + 8LL))(v104);
    v22 = (gsl::details *)*((unsigned int *)a2 + 44);
    v23 = (char *)a2 + 136;
    v24 = *((_DWORD *)a2 + 50);
  }
  v107 = v23;
  v25 = 0LL;
  *(_QWORD *)&v130 = 0LL;
  v26 = v22;
  v105 = v24;
  if ( !v23 && v22 )
  {
LABEL_111:
    `gsl::details::get_terminate_handler'::`2'::handler(v26);
    __debugbreak();
  }
  v27 = 0LL;
  v106 = 0LL;
  if ( !v22 )
  {
LABEL_48:
    v25 = v106;
    v53 = 0LL;
    *(_QWORD *)&v130 = v106;
    v48 = 0;
    v106 = 0LL;
    goto LABEL_49;
  }
  v26 = (gsl::details *)&CRectanglesShape::`vftable';
  while ( 1 )
  {
    v28 = *(_QWORD *)&v23[8 * v27];
    if ( !v28 || !*(_BYTE *)(v28 + 52) )
      goto LABEL_47;
    v131 = &CRectanglesShape::`vftable';
    lpMem = v137;
    v132 = 0LL;
    v134 = v137;
    v135 = 1;
    v136 = 1LL;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v137);
    v29 = 0LL;
    v138 = 0LL;
    v30 = *(_DWORD *)(v28 + 44);
    v31 = *(_DWORD *)(v28 + 40);
    v32 = *(_DWORD *)(v28 + 36);
    v33 = *(_DWORD *)(v28 + 32);
    HIDWORD(v136) = 0;
    if ( lpMem != v134 )
    {
      operator delete(lpMem);
      v29 = v138;
      lpMem = v134;
      LODWORD(v136) = v135;
    }
    if ( v29 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      v138 = 0LL;
    }
    *(_QWORD *)&v129 = __PAIR64__(v32, v33);
    *((_QWORD *)&v129 + 1) = __PAIR64__(v30, v31);
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      &lpMem,
      &v129,
      1LL);
    v124 = 0;
    if ( ((1 << v27) & v24) != 0 )
    {
      v83 = *(_DWORD *)(v28 + 12);
      LODWORD(v114[0]) = *(_DWORD *)(v28 + 8);
      v84 = *(_DWORD *)(v28 + 16);
      HIDWORD(v114[0]) = v83;
      v85 = *(_DWORD *)(v28 + 20);
      HIDWORD(v114[1]) = v84;
      v86 = *(_DWORD *)(v28 + 24);
      v115.m128_u64[0] = v85;
      v115.m128_u64[1] = __PAIR64__(*(_DWORD *)(v28 + 28), v86);
      LODWORD(v114[1]) = 0;
      v116 = 1065353216;
      Matrix3x3::operator*(v114, &v111, (char *)a2 + 204);
      LODWORD(v114[1]) = 0;
      v87 = *(__m128 *)v114;
      v115.m128_i32[2] = 0;
      v117.m128_i32[2] = 0;
      v87.m128_f32[0] = v111.m128_f32[0];
      *(_OWORD *)&v122.m256i_u64[2] = _xmm;
      v88 = v115;
      v124 = 0;
      v89 = _mm_shuffle_ps(v87, v87, 225);
      v89.m128_f32[0] = v111.m128_f32[1];
      v88.m128_f32[0] = v111.m128_f32[3];
      v90 = _mm_shuffle_ps(v89, v89, 135);
      v90.m128_f32[0] = v111.m128_f32[2];
      v91 = _mm_shuffle_ps(v88, v88, 225);
      v91.m128_f32[0] = *(float *)v112.m256i_i32;
      *(__m128 *)v114 = _mm_shuffle_ps(v90, v90, 57);
      v121 = *(__m128 *)v114;
      v92 = v117;
      v93 = _mm_shuffle_ps(v91, v91, 135);
      v92.m128_f32[0] = *(float *)&v112.m256i_i32[2];
      v93.m128_f32[0] = *(float *)&v112.m256i_i32[1];
      v94 = _mm_shuffle_ps(v92, v92, 225);
      v94.m128_f32[0] = *(float *)&v112.m256i_i32[3];
      v95 = _mm_shuffle_ps(v94, v94, 135);
      v95.m128_f32[0] = *(float *)&v112.m256i_i32[4];
      *(__m128 *)v122.m256i_i8 = _mm_shuffle_ps(v93, v93, 57);
      v117 = _mm_shuffle_ps(v95, v95, 57);
      v123 = v117;
      v115 = *(__m128 *)v122.m256i_i8;
    }
    else
    {
      v34 = *(float *)(v28 + 8);
      v35 = *(float *)(v28 + 16);
      v36 = *(float *)(v28 + 20);
      v37 = *(float *)(v28 + 12);
      v38 = *(float *)(v28 + 24);
      v39 = *(float *)(v28 + 28);
      *(_OWORD *)&v112.m256i_u64[1] = 0LL;
      *(_QWORD *)&v113[12] = 0x14043F800000LL;
      v40 = (__m128)v111.m128_u64[0];
      *(_DWORD *)&v113[8] = 0;
      v112.m256i_i64[3] = 1065353216LL;
      v40.m128_f32[0] = v34;
      v41 = *(__m128 *)v112.m256i_i8;
      v41.m128_f32[0] = v35;
      v42 = _mm_shuffle_ps(v40, v40, 225);
      v43 = _mm_shuffle_ps(v41, v41, 225);
      v42.m128_f32[0] = v37;
      v43.m128_f32[0] = v36;
      *(__m128 *)v112.m256i_i8 = _mm_shuffle_ps(v43, v43, 225);
      v124 = 5124;
      v122 = v112;
      v44 = *(__m128 *)v113;
      v111 = _mm_shuffle_ps(v42, v42, 225);
      v44.m128_f32[0] = v38;
      v121 = v111;
      v45 = _mm_shuffle_ps(v44, v44, 225);
      v45.m128_f32[0] = v39;
      *(__m128 *)v113 = _mm_shuffle_ps(v45, v45, 225);
      v123 = *(__m128 *)v113;
    }
    v46 = (__int64)v106;
    if ( !v106 )
    {
      v114[1] = 0LL;
      v114[0] = (struct CShape *)&v106;
      v115.m128_i8[0] = 1;
      v48 = CShape::CopyShape((CShape *)&v131, (const struct CMILMatrix *)&v121, &v114[1]);
      if ( v115.m128_i8[0] )
      {
        v47 = v114[1];
        v49 = *(_QWORD *)v114[0];
        *(_QWORD *)v114[0] = v114[1];
        if ( v49 )
          std::default_delete<CShape>::operator()(v47, v49);
      }
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v47, 0LL, 0, v48, 0x5Fu, 0LL);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v131);
        v53 = v106;
        goto LABEL_49;
      }
      goto LABEL_38;
    }
    v104 = 0LL;
    *(_QWORD *)v118 = &v104;
    v119 = 0LL;
    v120 = 1;
    v75 = CShape::TryOptimizedCombinePaths(v106, 0LL, &v131, &v121, 1, &v119);
    v48 = v75;
    if ( v75 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v77, 0LL, 0, v75, 0x1CCu, 0LL);
    }
    else if ( !v119 )
    {
      v96 = CShape::D2DCombine(v46, v76, (__int64)&v131, (__int64)&v121, D2D1_COMBINE_MODE_INTERSECT, &v119);
      v48 = v96;
      if ( v96 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v77, 0LL, 0, v96, 0x1D7u, 0LL);
    }
    if ( v120 )
    {
      v77 = *(__int64 **)v118;
      v78 = **(_QWORD **)v118;
      **(_QWORD **)v118 = v119;
      if ( v78 )
        std::default_delete<CShape>::operator()(v77, v78);
    }
    if ( v48 < 0 )
      break;
    v79 = v106;
    v80 = v104;
    v104 = 0LL;
    v106 = v80;
    if ( v79 )
    {
      (**(void (__fastcall ***)(struct CRenderingEffect *, __int64))v79)(v79, 1LL);
      if ( v104 )
        std::default_delete<CShape>::operator()(v81, v104);
    }
LABEL_38:
    v50 = lpMem;
    v51 = v134;
    v131 = &CRectanglesShape::`vftable';
    HIDWORD(v136) = 0;
    if ( lpMem != v134 )
    {
      operator delete(lpMem);
      v51 = v134;
      v50 = v134;
      lpMem = v134;
      LODWORD(v136) = v135;
    }
    if ( v138 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v138 + 16LL))(v138);
      v51 = v134;
      v50 = lpMem;
      v138 = 0LL;
    }
    if ( v50 != v51 )
    {
      operator delete(v50);
      lpMem = 0LL;
    }
    v52 = v132;
    if ( v132 )
    {
      v132 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    }
    v23 = v107;
    v26 = (gsl::details *)&CRectanglesShape::`vftable';
LABEL_47:
    if ( ++v27 >= (unsigned __int64)v22 )
      goto LABEL_48;
    v24 = v105;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v77, 0LL, 0, v48, 0x6Au, 0LL);
  if ( v104 )
    std::default_delete<CShape>::operator()(v97, v104);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v131);
  v53 = v106;
LABEL_49:
  v21 = v48;
  if ( v53 )
    std::default_delete<CShape>::operator()(v26, v53);
  else
    *(_QWORD *)&v130 = v25;
  if ( v48 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, 0LL, 0, v48, 0x203u, 0LL);
    if ( !v25 )
      return v21;
LABEL_145:
    std::default_delete<CShape>::operator()(v54, v25);
    return v21;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v25 + 16LL))(v25) )
    goto LABEL_145;
  v107 = 0LL;
  v55 = 1;
  memset_0(v143, 0, sizeof(v143));
  v56 = (unsigned int *)((char *)a2 + 176);
  v57 = 0;
  if ( *((_DWORD *)a2 + 44) )
  {
    do
    {
      v58 = *((_QWORD *)a2 + v57 + 17);
      if ( v58 )
      {
        if ( v55 && *((_DWORD *)a2 + 69) != 1 && *(_BYTE *)(v58 + 52) && *(_DWORD *)(v58 + 48) != 50529027 )
          v55 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v58 + 8LL))(
               *((_QWORD *)a2 + v57 + 17),
               2LL) )
        {
          v59 = (const struct Matrix3x3 *)&v143[13 * v57];
          *(_DWORD *)v59 = *(_DWORD *)(v58 + 8);
          *((_DWORD *)v59 + 1) = *(_DWORD *)(v58 + 12);
          *((_DWORD *)v59 + 2) = 0;
          *((_DWORD *)v59 + 3) = *(_DWORD *)(v58 + 16);
          *((_DWORD *)v59 + 4) = *(_DWORD *)(v58 + 20);
          *((_DWORD *)v59 + 5) = 0;
          *((_DWORD *)v59 + 6) = *(_DWORD *)(v58 + 24);
          *((_DWORD *)v59 + 7) = *(_DWORD *)(v58 + 28);
          *((_DWORD *)v59 + 8) = 1065353216;
          if ( Matrix3x3::TryInvert(v59, v59) )
          {
            v63 = Matrix3x3::operator*(v61, &v111, v58 + 84);
            *(_OWORD *)v62 = *(_OWORD *)v63;
            *(_OWORD *)(v62 + 16) = *(_OWORD *)(v63 + 16);
            v64 = *(_DWORD *)(v63 + 32);
          }
          else
          {
            *(_OWORD *)v62 = _xmm;
            v112.m256i_i32[4] = 1065353216;
            v64 = 1065353216;
            *(_OWORD *)(v62 + 16) = _xmm;
          }
          *(_DWORD *)(v62 + 32) = v64;
          v65 = *((_DWORD *)a2 + 50);
          if ( _bittest(&v65, v57) )
          {
            v98 = Matrix3x3::operator*((char *)a2 + 240, &v111, v62);
            *(_OWORD *)v62 = *(_OWORD *)v98;
            *(_OWORD *)(v62 + 16) = *(_OWORD *)(v98 + 16);
            *(_DWORD *)(v62 + 32) = *(_DWORD *)(v98 + 32);
          }
          else if ( !v107
                 && *(_BYTE *)(v58 + 148)
                 && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v58 + 8), v60) )
          {
            v99 = *(float *)(v58 + 140);
            v100 = (__m128)*(unsigned int *)(v58 + 136);
            v101 = (__m128)LODWORD(v99);
            v101.m128_f32[0] = v99 * *(float *)(v58 + 16);
            v102 = *(float *)(v58 + 136);
            v107 = (char *)v140;
            v101.m128_f32[0] = (float)(v101.m128_f32[0] + (float)(v102 * *(float *)(v58 + 8))) + *(float *)(v58 + 24);
            v100.m128_f32[0] = (float)((float)(v100.m128_f32[0] * *(float *)(v58 + 12))
                                     + (float)(v99 * *(float *)(v58 + 20)))
                             + *(float *)(v58 + 28);
            v140[0] = _mm_unpacklo_ps(v101, v100).m128_u64[0];
          }
          if ( !*(_BYTE *)(v58 + 52) || *(_BYTE *)(v58 + 144) )
            v66 = _xmm;
          else
            v66 = *(_OWORD *)(v58 + 120);
          *(_OWORD *)(v62 + 36) = v66;
        }
      }
      ++v57;
    }
    while ( v57 < *((_DWORD *)a2 + 44) );
    v25 = (struct CRenderingEffect *)v130;
    v56 = (unsigned int *)((char *)a2 + 176);
  }
  v142 = 0;
  v109 = 0LL;
  BYTE8(v109) = 6;
  v108 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CRenderingEffect *, int *))(*(_QWORD *)v25 + 64LL))(v25, &v105)
    || v105 != 1 )
  {
    BYTE8(v109) |= 1u;
    *(_QWORD *)&v108 = v25;
    if ( v55 && !*((_QWORD *)a2 + 1) && !*((_QWORD *)a2 + 11) )
      goto LABEL_75;
    v103 = *((_DWORD *)a2 + 50);
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v129, *v56);
    *((_QWORD *)&v129 + 1) = (char *)a2 + 136;
    if ( (_QWORD)v129 != -1LL
      && (a2 != (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-136LL || !(_QWORD)v129) )
    {
      CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        *((_DWORD *)a2 + 69),
        (unsigned int)&v129,
        v103,
        (_DWORD)a2 + 204,
        (__int64)v141);
      *((_QWORD *)&v108 + 1) = v141;
      goto LABEL_75;
    }
    goto LABEL_111;
  }
  v130 = 0LL;
  v67 = (*(__int64 (__fastcall **)(struct CRenderingEffect *, __int128 *, _QWORD))(*(_QWORD *)v25 + 48LL))(
          v25,
          &v130,
          0LL);
  v21 = v67;
  if ( v67 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x254u, 0LL);
LABEL_129:
    std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Destroy(v141);
    goto LABEL_145;
  }
  v108 = v130;
  if ( v55 )
  {
    if ( *((_DWORD *)a2 + 69) == 1 )
      LODWORD(v109) = 0;
    else
      LODWORD(v109) = 50529027;
  }
  else
  {
    v82 = *v56;
    *(_QWORD *)&v129 = *v56;
    *((_QWORD *)&v129 + 1) = (char *)a2 + 136;
    if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-136LL && v82 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(&v129, &v108, &v109);
  }
LABEL_75:
  v69 = *((_BYTE *)a2 + 289) == 0;
  *(_QWORD *)&v129 = *((unsigned int *)a2 + 45);
  *((_QWORD *)&v129 + 1) = v143;
  memset(v125, 0, sizeof(v125));
  v126 = 0LL;
  v128 = v129;
  if ( v69 )
  {
    HIDWORD(v129) = *((_DWORD *)v110 + 8);
    *(float *)&v70 = *((float *)&v129 + 3) * *((float *)v110 + 6);
    *(float *)&v71 = *((float *)&v129 + 3) * *((float *)v110 + 7);
    *(float *)&v129 = *((float *)&v129 + 3) * *((float *)v110 + 5);
    *(_QWORD *)((char *)&v129 + 4) = __PAIR64__(v71, v70);
  }
  else
  {
    v129 = *(_OWORD *)((char *)v110 + 20);
  }
  v69 = (*((_DWORD *)v110 + 4) & 0x2000) == 0;
  v127 = v107;
  *(_OWORD *)v125 = v129;
  if ( !v69 )
  {
    if ( *(float *)&v125[12] == 0.0 )
    {
      *(_OWORD *)v125 = 0LL;
      v139 = _xmm;
    }
    else
    {
      v139 = *(_OWORD *)v125;
    }
    v126 = &v139;
  }
  v72 = CDrawListEntryBuilder::Insert(
          *((CDrawListEntryBuilder **)a2 + 23),
          (const struct PrimitiveGeometryDesc *)&v108,
          (const struct PrimitiveVertexAttributesDesc *)v125,
          0LL);
  v21 = v72;
  if ( v72 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0x298u, 0LL);
    goto LABEL_129;
  }
  if ( v142 && v142 != -1 && v142 != 1 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
      v141,
      v141,
      *(_QWORD *)(v141[0] + 8LL));
    std::_Deallocate<16,0>(v141[0], 48LL);
  }
  (**(void (__fastcall ***)(struct CRenderingEffect *, __int64))v25)(v25, 1LL);
  return v21;
}
