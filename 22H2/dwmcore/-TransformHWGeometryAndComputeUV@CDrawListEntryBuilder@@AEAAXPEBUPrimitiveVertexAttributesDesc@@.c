/*
 * XREFs of ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x180097000
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180096030 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?ComputeUVsFromXY@@YAXPEAU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V?$span@$$CBUTextureStageInfo@@$0?0@gsl@@@Z @ 0x180012CA0 (-ComputeUVsFromXY@@YAXPEAU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V-$span@$$.c)
 *     ??$?0V?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@UTextureStageInfo@@$0?0@gsl@@QEAA@AEAV?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18001670C (--$-0V-$vector_facade@UTextureStageInfo@@V-$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expans.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180016774 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x1800167A8 (--$uninitialized_copy@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEA.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180058584 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180061AA4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180088808 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x180094908 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800989C4 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18016227C (-terminate@details@gsl@@YAXXZ.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x180163798 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 *     ??0narrowing_error@gsl@@QEAA@XZ @ 0x1801637B0 (--0narrowing_error@gsl@@QEAA@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x18019C690 (--$move_backward@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEAUText.c)
 *     detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region @ 0x18019D200 (detail--vector_facade__CDrawListEntryBuilder--TransformHWGeometryAndComputeUV_--_15_--TexStageIn.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18021F244 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

void __fastcall CDrawListEntryBuilder::TransformHWGeometryAndComputeUV(
        CDrawListEntryBuilder *this,
        const struct PrimitiveVertexAttributesDesc *a2,
        const struct D2D1::Matrix3x2F *a3,
        const struct D2D1::Matrix3x2F *a4,
        unsigned int a5)
{
  gsl::details *v5; // r14
  char *v7; // r8
  int v8; // eax
  const struct PrimitiveVertexAttributesDesc *v10; // rbx
  CDrawListEntryBuilder *v11; // r13
  __int64 v12; // xmm1_8
  __int64 v13; // r12
  __int64 v14; // rcx
  int v15; // eax
  __m128 v16; // xmm6
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  char *v20; // r8
  gsl::details *v21; // r14
  detail::liberal_expansion_policy *v22; // rcx
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  gsl::details *v27; // rbx
  gsl::details *v28; // rcx
  bool v29; // zf
  char *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r15
  unsigned __int64 v33; // rdi
  __int128 v34; // xmm8
  __int64 v35; // rax
  char *v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  bool v39; // sf
  __int64 v40; // rax
  unsigned __int64 v41; // r15
  detail::liberal_expansion_policy *v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rdi
  SIZE_T v47; // r9
  SIZE_T v48; // rax
  gsl::details *v49; // rbx
  gsl::details *v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r12
  unsigned __int64 v54; // rdi
  __int128 v55; // xmm7
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdi
  char *v59; // rsi
  bool v60; // sf
  __int64 v61; // rax
  D2DMatrixHelper *v62; // rbx
  float v63; // xmm8_4
  unsigned int v64; // edi
  int v65; // r14d
  __int64 v66; // r12
  signed int v67; // ebx
  signed int v68; // esi
  __int64 v69; // rdx
  HANDLE v70; // rax
  float v71; // xmm6_4
  float *v72; // r9
  __int64 v73; // xmm1_8
  float v74; // xmm2_4
  float m22; // xmm14_4
  float v76; // xmm0_4
  FLOAT v77; // xmm11_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  __int64 v80; // rcx
  float v81; // xmm3_4
  float *v82; // r14
  float *v83; // rax
  float v84; // xmm15_4
  float v85; // xmm7_4
  float v86; // xmm8_4
  float v87; // xmm10_4
  float v88; // xmm5_4
  float v89; // xmm6_4
  float v90; // xmm14_4
  float v91; // xmm11_4
  float v92; // xmm4_4
  float v93; // xmm13_4
  float v94; // xmm12_4
  float v95; // xmm10_4
  float v96; // xmm9_4
  float v97; // xmm3_4
  float v98; // xmm4_4
  float v99; // xmm15_4
  float v100; // xmm2_4
  float v101; // xmm8_4
  float v102; // xmm1_4
  float v103; // xmm5_4
  unsigned int v104; // esi
  int v105; // r15d
  float v106; // xmm7_4
  float v107; // xmm11_4
  float v108; // xmm12_4
  float v109; // xmm6_4
  float v110; // xmm13_4
  float v111; // xmm14_4
  float v112; // xmm8_4
  float v113; // xmm15_4
  __int64 v114; // r12
  signed int v115; // edi
  signed int v116; // r14d
  float *v117; // r8
  float *v118; // r9
  float v119; // xmm2_4
  float v120; // xmm3_4
  float v121; // xmm4_4
  float v122; // xmm5_4
  float v123; // xmm1_4
  gsl::details *v124; // rbx
  __int64 v125; // r10
  float *v126; // rcx
  unsigned int v127; // r11d
  float v128; // xmm8_4
  float v129; // xmm9_4
  float v130; // xmm14_4
  float v131; // xmm15_4
  float v132; // xmm11_4
  float v133; // xmm12_4
  float v134; // xmm10_4
  float v135; // xmm13_4
  float v136; // xmm2_4
  __int64 v137; // rcx
  float *v138; // r8
  float v139; // xmm0_4
  float v140; // xmm3_4
  float v141; // xmm6_4
  float v142; // xmm2_4
  __int64 v143; // rdx
  float v144; // xmm4_4
  float v145; // xmm5_4
  float v146; // xmm0_4
  float v147; // xmm6_4
  float v148; // xmm1_4
  float v149; // xmm7_4
  float v150; // xmm3_4
  float v151; // xmm4_4
  _OWORD *v152; // rbx
  __int64 v153; // rdx
  HANDLE ProcessHeap; // rax
  char v155; // [rsp+28h] [rbp-E0h]
  char v156; // [rsp+29h] [rbp-DFh]
  struct D2D_MATRIX_3X2_F v157; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v158; // [rsp+48h] [rbp-C0h]
  FLOAT dy; // [rsp+58h] [rbp-B0h]
  __int64 v160; // [rsp+5Ch] [rbp-ACh]
  float m21; // [rsp+64h] [rbp-A4h]
  float v162; // [rsp+68h] [rbp-A0h]
  float v163; // [rsp+6Ch] [rbp-9Ch]
  __int64 v164; // [rsp+70h] [rbp-98h]
  unsigned __int64 v165; // [rsp+78h] [rbp-90h]
  D2DMatrixHelper *v166; // [rsp+80h] [rbp-88h]
  const struct PrimitiveVertexAttributesDesc *v167; // [rsp+88h] [rbp-80h]
  int v168; // [rsp+90h] [rbp-78h]
  __int64 v169[2]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v170; // [rsp+A8h] [rbp-60h]
  CDrawListEntryBuilder *v171; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v172; // [rsp+C0h] [rbp-48h]
  __int64 v173; // [rsp+D0h] [rbp-38h]
  __int128 v174; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v175; // [rsp+E8h] [rbp-20h]
  __int128 v176; // [rsp+108h] [rbp+0h]
  __int64 v177; // [rsp+118h] [rbp+10h]
  __int64 v178; // [rsp+128h] [rbp+20h] BYREF
  int v179; // [rsp+130h] [rbp+28h]
  __int64 v180; // [rsp+134h] [rbp+2Ch]
  int v181; // [rsp+13Ch] [rbp+34h]
  __int64 v182; // [rsp+140h] [rbp+38h]
  int v183; // [rsp+148h] [rbp+40h]
  __int128 v184; // [rsp+158h] [rbp+50h] BYREF
  __int64 v185; // [rsp+168h] [rbp+60h]
  __int128 v186; // [rsp+178h] [rbp+70h] BYREF
  __int64 v187; // [rsp+188h] [rbp+80h]
  __int64 v188; // [rsp+1A8h] [rbp+A0h]
  _BYTE v189[40]; // [rsp+1B0h] [rbp+A8h] BYREF
  gsl::details *v190; // [rsp+1D8h] [rbp+D0h] BYREF
  char *v191; // [rsp+1E0h] [rbp+D8h]
  char *v192; // [rsp+1E8h] [rbp+E0h]
  _BYTE v193[112]; // [rsp+1F0h] [rbp+E8h] BYREF
  char v194; // [rsp+260h] [rbp+158h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+268h] [rbp+160h] BYREF
  _OWORD v196[6]; // [rsp+288h] [rbp+180h] BYREF
  __int64 v197; // [rsp+2E8h] [rbp+1E0h] BYREF

  v5 = (gsl::details *)v193;
  v169[0] = *((_QWORD *)this + 24);
  v7 = &v194;
  v8 = *(_DWORD *)this;
  v166 = a4;
  v167 = a2;
  v10 = a2;
  v171 = this;
  v11 = this;
  v190 = (gsl::details *)v193;
  v168 = 8 * v8 + 16;
  *(_QWORD *)&v174 = *((_QWORD *)this + 148);
  v191 = v193;
  v192 = &v194;
  if ( a2 )
  {
    v12 = *((_QWORD *)a3 + 2);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)a3;
    *(_QWORD *)&matrix.m[2][0] = v12;
    D2D1InvertMatrix(&matrix);
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)v157.m[1], a4, (const struct D2D1::Matrix3x2F *)&matrix);
    LODWORD(v13) = 0;
    v180 = *(_QWORD *)&v157.m[2][0];
    v182 = v158;
    v178 = *(_QWORD *)&v157.m[1][0];
    v179 = 0;
    v181 = 0;
    v183 = 1065353216;
    LODWORD(v164) = 0;
    if ( *((_DWORD *)v10 + 10) )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)(unsigned int)v13 >= *((_QWORD *)v10 + 5) )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        memset(v196, 0, 52);
        v14 = *((_QWORD *)v10 + 6) + 52LL * (unsigned int)v13;
        v155 = 0;
        v15 = *((_DWORD *)v11 + 569);
        if ( _bittest(&v15, v13) )
        {
          v16 = *(__m128 *)(v14 + 36);
          v156 = 1;
          if ( v16.m128_f32[0] != 0.0
            || _mm_shuffle_ps(v16, v16, 85).m128_f32[0] != 0.0
            || _mm_shuffle_ps(v16, v16, 170).m128_f32[0] != 1.0
            || _mm_shuffle_ps(v16, v16, 255).m128_f32[0] != 1.0 )
          {
            v155 = 1;
          }
          v17 = Matrix3x3::operator*(&v178, v189, v14);
          v18 = *(_OWORD *)v17;
          v19 = *(_OWORD *)(v17 + 16);
          LODWORD(v17) = *(_DWORD *)(v17 + 32);
          v196[0] = v18;
          LODWORD(v196[2]) = v17;
          v196[1] = v19;
        }
        else
        {
          v16 = *(__m128 *)((char *)&v196[2] + 4);
          v156 = 0;
        }
        v20 = v191;
        v21 = v190;
        v22 = (detail::liberal_expansion_policy *)(v192 - v191);
        v23 = (v191 - (char *)v190) / 56;
        if ( !((v192 - v191) / 56) )
        {
          v24 = v23 + 1;
          v25 = (v192 - (char *)v190) / 56;
          if ( v23 + 1 < v23 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
          }
          v26 = detail::liberal_expansion_policy::expand(v22, v25, v24);
          *(_QWORD *)&v157.m[1][0] = operator new(saturated_mul(v26, 0x38uLL));
          v27 = *(gsl::details **)&v157.m[1][0];
          *(_QWORD *)&v157.m[2][0] = v23;
          v158 = 0LL;
          v184 = *(_OWORD *)&v157.m[1][0];
          v185 = 0LL;
          std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
            (__int64)v189,
            (__int64)v190,
            (__int64)v191,
            &v184);
          v28 = v190;
          v29 = v190 == (gsl::details *)v193;
          v190 = v27;
          if ( v29 )
            v28 = 0LL;
          operator delete(v28);
          v21 = v190;
          v20 = (char *)v190 + 56 * v23;
          v191 = v20;
          v192 = (char *)v190 + 56 * v26;
        }
        *((_QWORD *)&v175 + 1) = 1LL;
        v30 = v20;
        v31 = (unsigned __int128)((v20 - (char *)v21) * (__int128)0x4924924924924925LL) >> 64;
        v32 = (v20 - (char *)v21) / 56;
        v33 = v32 - v23;
        v170 = v32 - v23;
        *(_QWORD *)&v175 = (char *)v21 + 56 * v32;
        v34 = v175;
        if ( !(_QWORD)v175 )
        {
          _o__invalid_parameter_noinfo_noreturn(v20 - (char *)v21, v31);
          __debugbreak();
        }
        v35 = 1LL;
        v188 = 1LL;
        v176 = v34;
        if ( v33 <= 1 )
          v35 = v32 - v23;
        v177 = 1LL;
        v36 = &v30[-56 * v35];
        if ( v30 != v36 )
          break;
LABEL_30:
        if ( v33 > 1 )
        {
          *(_QWORD *)&v172 = v21;
          *((_QWORD *)&v172 + 1) = v32;
          v173 = 0LL;
          v39 = v32 < 0;
          if ( v32 )
          {
            if ( v21 )
            {
              v39 = v32 < 0;
              goto LABEL_34;
            }
LABEL_36:
            _o__invalid_parameter_noinfo_noreturn(v36, v31);
            __debugbreak();
LABEL_37:
            _o__invalid_parameter_noinfo_noreturn(v36, v31);
            __debugbreak();
LABEL_38:
            _o__invalid_parameter_noinfo_noreturn(v36, v31);
            __debugbreak();
LABEL_39:
            _o__invalid_parameter_noinfo_noreturn(v36, v31);
            __debugbreak();
          }
          else
          {
LABEL_34:
            if ( v39 && v32 )
              goto LABEL_36;
          }
          v173 = v32;
          v186 = v172;
          v187 = v32;
          std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
            v189,
            (char *)v21 + 56 * v23,
            (char *)v21 + 56 * v32 - 56,
            &v186);
          v20 = v191;
        }
        v10 = v167;
        LODWORD(v13) = v13 + 1;
        v40 = 56 * v23;
        v11 = v171;
        v191 = v20 + 56;
        LODWORD(v164) = v13;
        *(_OWORD *)((char *)v21 + v40) = v196[0];
        *(_OWORD *)((char *)v21 + v40 + 16) = v196[1];
        *(_DWORD *)((char *)v21 + v40 + 32) = v196[2];
        *((_BYTE *)v21 + v40 + 52) = v155;
        *((_BYTE *)v21 + v40 + 53) = v156;
        *(__m128 *)((char *)v21 + v40 + 36) = v16;
        if ( (unsigned int)v13 >= *((_DWORD *)v10 + 10) )
          goto LABEL_42;
      }
      v13 = v176;
      v37 = v177;
      while ( 1 )
      {
        v30 -= 56;
        if ( !v13 )
          goto LABEL_39;
        if ( !v37 )
          goto LABEL_37;
        if ( (unsigned __int64)--v37 >= *((_QWORD *)&v176 + 1) )
          goto LABEL_38;
        v38 = v13 + 56 * v37;
        *(_DWORD *)v38 = *(_DWORD *)v30;
        *(_DWORD *)(v38 + 4) = *((_DWORD *)v30 + 1);
        *(_DWORD *)(v38 + 8) = *((_DWORD *)v30 + 2);
        *(_DWORD *)(v38 + 12) = *((_DWORD *)v30 + 3);
        *(_DWORD *)(v38 + 16) = *((_DWORD *)v30 + 4);
        *(_DWORD *)(v38 + 20) = *((_DWORD *)v30 + 5);
        *(_DWORD *)(v38 + 24) = *((_DWORD *)v30 + 6);
        *(_DWORD *)(v38 + 28) = *((_DWORD *)v30 + 7);
        *(_DWORD *)(v38 + 32) = *((_DWORD *)v30 + 8);
        *(_OWORD *)(v38 + 36) = *(_OWORD *)(v30 + 36);
        *(_BYTE *)(v38 + 52) = v30[52];
        *(_BYTE *)(v38 + 53) = v30[53];
        if ( v30 == v36 )
        {
          v20 = v191;
          v33 = v170;
          LODWORD(v13) = v164;
          goto LABEL_30;
        }
      }
    }
LABEL_42:
    v5 = v190;
    v7 = v192;
  }
  v41 = (v191 - (char *)v5) / 56;
  if ( v41 < *(unsigned int *)v11 )
  {
    while ( 1 )
    {
      v42 = (detail::liberal_expansion_policy *)(v7 - v191);
      if ( !((v7 - v191) / 56) )
      {
        v43 = (unsigned __int128)((v7 - (char *)v5) * (__int128)0x4924924924924925LL) >> 64;
        v44 = v41 + 1;
        v45 = ((unsigned __int64)v43 >> 63) + (v43 >> 4);
        if ( v41 + 1 < v41 )
        {
          std::_Xoverflow_error("overflow");
          __debugbreak();
        }
        v46 = detail::liberal_expansion_policy::expand(v42, v45, v44);
        v48 = 56 * v46;
        if ( !is_mul_ok(v46, 0x38uLL) )
          v48 = v47;
        *(_QWORD *)&v176 = operator new(v48);
        *((_QWORD *)&v176 + 1) = v41;
        v49 = (gsl::details *)v176;
        v177 = 0LL;
        v186 = v176;
        v187 = 0LL;
        std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
          (__int64)v189,
          (__int64)v190,
          (__int64)v191,
          &v186);
        v50 = v190;
        v29 = v190 == (gsl::details *)v193;
        v190 = v49;
        if ( v29 )
          v50 = 0LL;
        operator delete(v50);
        v5 = v190;
        v191 = (char *)v190 + 56 * v41;
        v192 = (char *)v190 + 56 * v46;
      }
      v51 = (__int64)v191;
      *((_QWORD *)&v175 + 1) = 1LL;
      v52 = (unsigned __int128)((v191 - (char *)v5) * (__int128)0x4924924924924925LL) >> 64;
      v53 = (v191 - (char *)v5) / 56;
      v54 = v53 - v41;
      v165 = v53 - v41;
      *(_QWORD *)&v175 = (char *)v5 + 56 * v53;
      v55 = v175;
      if ( !(_QWORD)v175 )
      {
        _o__invalid_parameter_noinfo_noreturn(v191 - (char *)v5, v52);
        __debugbreak();
      }
      v56 = 1LL;
      v188 = 1LL;
      *(_OWORD *)&matrix.m11 = v55;
      if ( v54 <= 1 )
        v56 = v53 - v41;
      *(_QWORD *)&matrix.m[2][0] = 1LL;
      v57 = v51 - 56 * v56;
      if ( v51 != v57 )
      {
        v11 = *(CDrawListEntryBuilder **)&matrix.m11;
        v58 = *(_QWORD *)&matrix.m[2][0];
        while ( 1 )
        {
          v51 -= 56LL;
          if ( !v11 )
            goto LABEL_72;
          if ( !v58 )
            goto LABEL_70;
          if ( (unsigned __int64)--v58 >= *(_QWORD *)&matrix.m[1][0] )
            goto LABEL_71;
          v59 = (char *)v11 + 56 * v58;
          *(_DWORD *)v59 = *(_DWORD *)v51;
          *((_DWORD *)v59 + 1) = *(_DWORD *)(v51 + 4);
          *((_DWORD *)v59 + 2) = *(_DWORD *)(v51 + 8);
          *((_DWORD *)v59 + 3) = *(_DWORD *)(v51 + 12);
          *((_DWORD *)v59 + 4) = *(_DWORD *)(v51 + 16);
          *((_DWORD *)v59 + 5) = *(_DWORD *)(v51 + 20);
          *((_DWORD *)v59 + 6) = *(_DWORD *)(v51 + 24);
          *((_DWORD *)v59 + 7) = *(_DWORD *)(v51 + 28);
          *((_DWORD *)v59 + 8) = *(_DWORD *)(v51 + 32);
          *(_OWORD *)(v59 + 36) = *(_OWORD *)(v51 + 36);
          v59[52] = *(_BYTE *)(v51 + 52);
          v59[53] = *(_BYTE *)(v51 + 53);
          if ( v51 == v57 )
          {
            v54 = v165;
            v11 = v171;
            break;
          }
        }
      }
      if ( v54 <= 1 )
        goto LABEL_74;
      *(_QWORD *)&v172 = v5;
      *((_QWORD *)&v172 + 1) = v53;
      v173 = 0LL;
      v60 = v53 < 0;
      if ( !v53 )
        goto LABEL_67;
      if ( v5 )
        break;
LABEL_69:
      _o__invalid_parameter_noinfo_noreturn(v57, v52);
      __debugbreak();
LABEL_70:
      _o__invalid_parameter_noinfo_noreturn(v57, v52);
      __debugbreak();
LABEL_71:
      _o__invalid_parameter_noinfo_noreturn(v57, v52);
      __debugbreak();
LABEL_72:
      _o__invalid_parameter_noinfo_noreturn(v57, v52);
      __debugbreak();
LABEL_73:
      v173 = v53;
      v184 = v172;
      v185 = v53;
      std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        v189,
        (char *)v5 + 56 * v41,
        (char *)v5 + 56 * v53 - 56,
        &v184);
LABEL_74:
      v191 += 56;
      v61 = 56 * v41;
      *(_DWORD *)((char *)v5 + v61 + 52) = 0;
      *(_OWORD *)((char *)v5 + v61) = 0LL;
      *(_OWORD *)((char *)v5 + v61 + 16) = 0LL;
      *(_DWORD *)((char *)v5 + v61 + 32) = 0;
      *(_OWORD *)((char *)v5 + v61 + 36) = 0LL;
      v5 = v190;
      v41 = (v191 - (char *)v190) / 56;
      if ( v41 >= *(unsigned int *)v11 )
        goto LABEL_76;
      v7 = v192;
    }
    v60 = v53 < 0;
LABEL_67:
    if ( !v60 || !v53 )
      goto LABEL_73;
    goto LABEL_69;
  }
LABEL_76:
  v62 = v166;
  v63 = *(float *)v166;
  if ( *(float *)v166 == 1.0
    && *((float *)v166 + 1) == 0.0
    && *((float *)v166 + 2) == 0.0
    && *((float *)v166 + 3) == 1.0
    && *((float *)v166 + 4) == 0.0
    && *((float *)v166 + 5) == 0.0 )
  {
    v64 = a5;
    if ( a5 >= *((_DWORD *)v11 + 544) )
      goto LABEL_86;
    v65 = v168;
    v66 = v169[0];
    v67 = a5 * v168;
    v68 = a5 * v168;
    do
    {
      gsl::span<TextureStageInfo,-1>::span<TextureStageInfo,-1>(v169, &v190);
      *(_OWORD *)&v157.m[1][0] = *(_OWORD *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(
                                              (__int64 *)&v171,
                                              v169);
      ComputeUVsFromXY(v66 + v67, v174 + v68, v157.m[1]);
      ++v64;
      v68 += v65;
      v67 += v65;
    }
    while ( v64 < *((_DWORD *)v11 + 544) );
    goto LABEL_85;
  }
  v71 = *((float *)v166 + 1);
  if ( IsCloseRealZero(v71, 0.000081380211) && IsCloseRealZero(*((float *)v62 + 2), 0.000081380211)
    || IsCloseRealZero(v63, 0.000081380211) && IsCloseRealZero(*((float *)v62 + 3), 0.000081380211) )
  {
    v73 = *((_QWORD *)v62 + 2);
    *(_OWORD *)&v157.m[1][0] = *(_OWORD *)v62;
    v158 = v73;
    if ( IsCloseRealZero(v63, 0.000081380211) && IsCloseRealZero(*((float *)v62 + 3), 0.000081380211) )
    {
      LODWORD(v74) = LODWORD(v71) & _xmm;
      LODWORD(m22) = *((_DWORD *)v62 + 2) & _xmm;
      LODWORD(v164) = LODWORD(v71) & _xmm;
      *((float *)&v160 + 1) = FLOAT_N1_0;
      *((float *)&v164 + 1) = m22;
      if ( v157.m22 >= 0.0 )
        LODWORD(v160) = (_DWORD)FLOAT_1_0;
      else
        *(float *)&v160 = FLOAT_N1_0;
      v162 = *((float *)&v158 + 1);
      v163 = *(float *)&v158;
      dy = v157.dy;
      m21 = v157.m21;
      if ( v157.dx >= 0.0 )
        HIDWORD(v160) = (_DWORD)FLOAT_1_0;
    }
    else
    {
      LODWORD(v74) = LODWORD(v63) & _xmm;
      LODWORD(m22) = *((_DWORD *)v62 + 3) & _xmm;
      LODWORD(v164) = LODWORD(v63) & _xmm;
      *((float *)&v164 + 1) = m22;
      dy = FLOAT_N1_0;
      if ( v157.m21 >= 0.0 )
        m21 = *(float *)&FLOAT_1_0;
      else
        m21 = FLOAT_N1_0;
      v162 = *((float *)&v158 + 1);
      v160 = *(_QWORD *)&v157.m[1][1];
      v163 = *(float *)&v158;
      if ( v157.dy >= 0.0 )
        dy = *(float *)&FLOAT_1_0;
    }
  }
  else
  {
    D2DMatrixHelper::GetScaleDimensions(v62, (struct D2D_MATRIX_3X2_F *)v157.m[1], &v157.m22, v72);
    v74 = v157.m21;
    m22 = v157.m22;
    v164 = *(_QWORD *)&v157.m[1][0];
    v76 = (float)(1.0 / v157.m22) * *((float *)v62 + 2);
    v77 = (float)(1.0 / v157.m22) * *((float *)v62 + 3);
    m21 = (float)(1.0 / v157.m21) * v63;
    v78 = *((float *)v62 + 4);
    *((float *)&v160 + 1) = v76;
    v79 = *((float *)v62 + 5);
    v163 = v78;
    *(float *)&v160 = (float)(1.0 / v157.m21) * v71;
    dy = v77;
    v162 = v79;
  }
  v80 = (__int64)v191;
  *(_QWORD *)&v196[0] = (char *)&v196[1] + 8;
  v81 = 1.0 / v74;
  v82 = (float *)((char *)v5 + 8);
  *((_QWORD *)&v196[0] + 1) = (char *)&v196[1] + 8;
  *(_QWORD *)&v196[1] = &v197;
  *(float *)&v171 = 1.0 / v74;
  *(float *)&v170 = 1.0 / m22;
  *(float *)&v167 = 0.0 - (float)((float)(1.0 / v74) * 0.0);
  *(float *)&v166 = 0.0 - (float)((float)(1.0 / m22) * 0.0);
  while ( 1 )
  {
    v83 = v82 - 2;
    if ( v82 - 2 == (float *)v80 )
      break;
    v84 = v82[3];
    v85 = *v82;
    v86 = v82[4];
    v87 = *v82;
    v88 = v82[5];
    v89 = v82[6];
    v90 = v82[1];
    v91 = *v83;
    v92 = v82[2];
    *(float *)&v165 = *(v82 - 1);
    v157.m21 = v92;
    v93 = v88 * 0.0;
    v94 = v86 * 0.0;
    v95 = (float)((float)(v87 * v81) + (float)(v84 * 0.0)) + (float)(v89 * 0.0);
    v96 = (float)((float)(v90 * *(float *)&v170) + (float)(v91 * 0.0)) + (float)(v86 * 0.0);
    v97 = (float)(v84 * *(float *)&v170) + (float)(v85 * 0.0);
    v98 = (float)((float)(v92 * *(float *)&v170) + (float)(*(float *)&v165 * 0.0)) + (float)(v88 * 0.0);
    v99 = (float)((float)(v84 * *(float *)&v166) + (float)(v85 * *(float *)&v167)) + v89;
    v100 = (float)((float)(v90 * *(float *)&v166) + (float)(*(float *)&v167 * v91)) + v86;
    v101 = v157.m21 * 0.0;
    v102 = (float)((float)(v157.m21 * *(float *)&v166) + (float)(*(float *)&v165 * *(float *)&v167)) + v88;
    v103 = *(float *)&v171;
    *v83 = (float)((float)(*(float *)&v171 * v91) + (float)(v90 * 0.0)) + v94;
    *(v82 - 1) = (float)((float)(*(float *)&v165 * v103) + v101) + v93;
    *v82 = v95;
    v82[1] = v96;
    v82[2] = v98;
    v82[3] = v97 + (float)(v89 * 0.0);
    v82[4] = v100;
    v82[5] = v102;
    v82[6] = v99;
    v82 += 14;
    v81 = *(float *)&v171;
  }
  v104 = a5;
  if ( a5 < *((_DWORD *)v11 + 544) )
  {
    v105 = v168;
    v106 = FLOAT_0_000081380211;
    v107 = dy;
    v108 = *(float *)&v160;
    v109 = *((float *)&v160 + 1);
    v110 = m21;
    v111 = *((float *)&v164 + 1);
    v112 = v162;
    v113 = v163;
    v114 = v169[0];
    v115 = a5 * v168;
    v116 = a5 * v168;
    do
    {
      v117 = (float *)(v174 + v115);
      v118 = (float *)(v114 + v116);
      v119 = *v117;
      v120 = v117[1];
      v121 = *v118;
      v122 = v118[1];
      v123 = *v117 * *(float *)&v164;
      *v117 = v123;
      v117[1] = v120 * v111;
      *v118 = (float)(v121 - v119) + v123;
      v118[1] = (float)(v122 - v120) + v117[1];
      v124 = v190;
      v125 = (v191 - (char *)v190) / 56;
      if ( v125 < 0 )
      {
        v174 = 0LL;
        gsl::narrowing_error::narrowing_error((gsl::narrowing_error *)&v174);
        gsl::details::throw_exception<gsl::narrowing_error>();
        __debugbreak();
      }
      if ( !v190 && v125 || !v190 && v125 )
      {
        gsl::details::terminate((gsl::details *)(v191 - (char *)v190));
        JUMPOUT(0x18009847ALL);
      }
      v126 = 0LL;
      v127 = 0;
      if ( (_DWORD)v125 )
      {
        do
        {
          if ( v127 >= (unsigned __int64)v125 )
          {
            gsl::details::terminate((gsl::details *)v126);
            __debugbreak();
          }
          v126 = (float *)((char *)v124 + 56 * v127);
          if ( *((_BYTE *)v126 + 53) )
          {
            v128 = v126[3];
            v129 = *v126;
            v130 = v126[5];
            v131 = v126[2];
            v132 = v126[4];
            v133 = v126[1];
            v134 = v126[6];
            v135 = v126[7];
            v136 = (float)((float)(*v118 * v131) + (float)(v118[1] * v130)) + v126[8];
            if ( !IsCloseRealZero(v136, v106) )
              IsCloseRealOne(v136, v106);
            v139 = v138[1];
            v140 = (float)((float)(*v138 * v129) + (float)(v139 * v128)) + v134;
            v141 = (float)((float)(*v138 * v131) + (float)(v139 * v130)) + *(float *)(v137 + 32);
            v142 = (float)((float)(*v138 * v133) + (float)(v139 * v132)) + v135;
            if ( !IsCloseRealZero(v141, v106) && !IsCloseRealOne(v141, v106) )
            {
              v140 = v140 / v141;
              v142 = v142 / v141;
            }
            if ( *((_BYTE *)v126 + 52) )
            {
              v146 = v126[11];
              v147 = v126[9];
              if ( v144 <= v146 )
                v144 = fmaxf(v144, v147);
              else
                v144 = v126[11];
              v148 = v126[12];
              v149 = v126[10];
              if ( v145 <= v148 )
                v145 = fmaxf(v145, v149);
              else
                v145 = v126[12];
              if ( v140 <= v146 )
                v140 = fmaxf(v140, v147);
              else
                v140 = v126[11];
              if ( v142 <= v148 )
                v142 = fmaxf(v142, v149);
              else
                v142 = v126[12];
              v106 = FLOAT_0_000081380211;
            }
            v118[2 * v143 + 4] = v144;
            v118[2 * v143 + 5] = v145;
            v117[2 * v143 + 4] = v140;
            v117[2 * v143 + 5] = v142;
          }
          else
          {
            v118[2 * v127 + 4] = 0.0;
            v118[2 * v127 + 5] = 0.0;
            v169[0] = 0LL;
            v117[2 * v127 + 4] = 0.0;
            v117[2 * v127 + 5] = 0.0;
          }
          ++v127;
        }
        while ( v127 < (unsigned int)v125 );
        v107 = dy;
        v108 = *(float *)&v160;
        v109 = *((float *)&v160 + 1);
        v110 = m21;
        v111 = *((float *)&v164 + 1);
        v112 = v162;
        v113 = v163;
      }
      ++v104;
      v116 += v105;
      v115 += v105;
      v150 = (float)((float)(v118[1] * v107) + (float)(*v118 * v108)) + v112;
      *v118 = (float)((float)(v118[1] * v109) + (float)(*v118 * v110)) + v113;
      v118[1] = v150;
      v151 = (float)((float)(v117[1] * v107) + (float)(*v117 * v108)) + v112;
      *v117 = (float)((float)(v117[1] * v109) + (float)(*v117 * v110)) + v113;
      v117[1] = v151;
    }
    while ( v104 < *((_DWORD *)v11 + 544) );
  }
  v152 = *(_OWORD **)&v196[0];
  v153 = (*((_QWORD *)&v196[0] + 1) - *(_QWORD *)&v196[0]) / 36LL;
  if ( v153 )
  {
    detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region(
      v196,
      v153,
      (*((_QWORD *)&v196[0] + 1) - *(_QWORD *)&v196[0]) / 36LL);
    v152 = *(_OWORD **)&v196[0];
  }
  *(_QWORD *)&v196[0] = 0LL;
  if ( v152 == (_OWORD *)((char *)&v196[1] + 8) )
    v152 = 0LL;
  if ( v152 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v152);
LABEL_85:
    v5 = v190;
    goto LABEL_86;
  }
  v5 = v190;
LABEL_86:
  v69 = (v191 - (char *)v5) / 56;
  if ( v69 )
    v191 -= 56 * v69;
  v190 = 0LL;
  if ( v5 == (gsl::details *)v193 )
    v5 = 0LL;
  if ( v5 )
  {
    v70 = GetProcessHeap();
    HeapFree(v70, 0, v5);
  }
}
