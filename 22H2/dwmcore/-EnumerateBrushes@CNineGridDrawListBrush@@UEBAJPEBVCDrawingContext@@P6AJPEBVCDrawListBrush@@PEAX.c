/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800F2530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180007B2C (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180016774 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180041988 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x180042330 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x180042514 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x180042538 (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 *     ??1?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18004268C (--1-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QE.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180050134 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180054720 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800563C0 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180058584 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18008D110 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800989C4 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800BA28C (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C4488 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6CD8 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18016227C (-terminate@details@gsl@@YAXXZ.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801EEBC0 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  char *v4; // r14
  int v7; // edi
  __int64 v8; // r8
  __int64 (__fastcall *v9)(_QWORD, __int64); // r9
  __int64 v10; // r10
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  CSurfaceDrawListBrush *v14; // rcx
  unsigned int v15; // r8d
  CSurfaceDrawListBrush *v16; // rax
  CMILMatrix *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  gsl::details *v22; // rcx
  __m128 v23; // xmm7
  __int64 v24; // rax
  __int64 v25; // rdx
  _BYTE *v26; // rcx
  unsigned int v27; // r10d
  gsl::details *v28; // r8
  __int64 v29; // r13
  _BYTE *v30; // r9
  gsl::details *v31; // rdx
  __int64 v32; // r14
  __int64 v33; // r15
  float v34; // xmm0_4
  __int64 v35; // r12
  unsigned int v36; // r11d
  unsigned __int64 v37; // rax
  __int64 v38; // r10
  float v39; // xmm2_4
  __int64 v40; // rsi
  unsigned int v41; // xmm0_4
  __int32 v42; // xmm1_4
  char v43; // r12
  __int32 v44; // xmm1_4
  FLOAT v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm7_4
  float v49; // xmm10_4
  float v50; // xmm4_4
  float v51; // xmm3_4
  struct D2D_MATRIX_3X2_F *v52; // r9
  __int64 v53; // rdx
  unsigned int v54; // r8d
  float *v55; // rdi
  float v56; // xmm0_4
  FLOAT v57; // xmm5_4
  float v58; // xmm0_4
  float v59; // xmm0_4
  float v60; // xmm0_4
  FLOAT v61; // xmm1_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  float *v64; // rax
  CSurfaceDrawListBrush *v65; // rcx
  void *v66; // rdx
  struct D2D_RECT_F v67; // xmm0
  CSurfaceDrawListBrush *v68; // rax
  int v69; // r11d
  int v70; // eax
  __int64 v71; // rcx
  float v72; // xmm2_4
  float v73; // xmm1_4
  __int64 v74; // rax
  struct D2D_RECT_F v75; // xmm0
  int v76; // r11d
  struct D2D_MATRIX_3X2_F *v77; // r9
  __int64 v78; // rax
  __int64 v79; // xmm1_8
  __m128 left_low; // xmm2
  __int64 v81; // rax
  __m128 top_low; // xmm1
  float v83; // xmm0_4
  int v84; // eax
  __int64 v85; // rcx
  unsigned __int64 v86; // rax
  char v88; // [rsp+48h] [rbp-C0h]
  CSurfaceDrawListBrush *v89; // [rsp+50h] [rbp-B8h] BYREF
  int v90; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_RECT_F v91; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v92; // [rsp+78h] [rbp-90h] BYREF
  char v93; // [rsp+88h] [rbp-80h]
  int v94; // [rsp+98h] [rbp-70h]
  struct D2D_RECT_F v95; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v96; // [rsp+B0h] [rbp-58h]
  struct D2D_RECT_F v97; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v98; // [rsp+C8h] [rbp-40h]
  float v99; // [rsp+CCh] [rbp-3Ch] BYREF
  float v100; // [rsp+D0h] [rbp-38h] BYREF
  __m128 v101; // [rsp+D8h] [rbp-30h] BYREF
  void *v102; // [rsp+E8h] [rbp-20h]
  int (*v103)(const struct CDrawListBrush *, void *); // [rsp+F0h] [rbp-18h]
  __int64 v104; // [rsp+F8h] [rbp-10h]
  struct D2D_RECT_F v105; // [rsp+100h] [rbp-8h] BYREF
  __int128 v106; // [rsp+110h] [rbp+8h]
  __int128 v107; // [rsp+120h] [rbp+18h]
  __int128 v108; // [rsp+130h] [rbp+28h]
  int v109; // [rsp+140h] [rbp+38h]
  char v110[68]; // [rsp+144h] [rbp+3Ch] BYREF
  gsl::details *v111; // [rsp+188h] [rbp+80h] BYREF
  _BYTE *v112; // [rsp+190h] [rbp+88h]
  gsl::details **v113; // [rsp+198h] [rbp+90h]
  _BYTE v114[24]; // [rsp+1A0h] [rbp+98h] BYREF
  gsl::details *v115; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE *v116; // [rsp+1C0h] [rbp+B8h]
  struct D2D_RECT_F *v117; // [rsp+1C8h] [rbp+C0h]
  _BYTE v118[24]; // [rsp+1D0h] [rbp+C8h] BYREF
  struct D2D_RECT_F v119; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v120; // [rsp+1F8h] [rbp+F0h]
  __int128 v121; // [rsp+208h] [rbp+100h]
  __int128 v122; // [rsp+218h] [rbp+110h]
  int v123; // [rsp+228h] [rbp+120h]
  _QWORD v124[3]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v125[24]; // [rsp+250h] [rbp+148h] BYREF
  _QWORD v126[3]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v127[24]; // [rsp+280h] [rbp+178h] BYREF
  __int64 v128; // [rsp+298h] [rbp+190h] BYREF

  v102 = a4;
  v103 = a3;
  v4 = (char *)this + 112;
  v7 = 0;
  if ( !CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    v89 = 0LL;
    v88 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 2LL) )
    {
      v13 = *((_QWORD *)this + 9);
      v92.m128_u64[0] = (unsigned __int64)&v89;
      v93 = 1;
      v92.m128_u64[1] = 0LL;
      LOWORD(v90) = *(_WORD *)(v13 + 104);
      BYTE2(v90) = *(_BYTE *)(v13 + 106);
      v7 = CSurfaceDrawListBrush::CreateWithTextureTransform(
             (struct CSurfaceDrawListBrush *)(v13 + 56),
             (__int16 *)&v90,
             (__int64)&Matrix3x3::Identity,
             &v92.m128_u64[1]);
      if ( v93 )
      {
        v14 = *(CSurfaceDrawListBrush **)v92.m128_u64[0];
        *(_QWORD *)v92.m128_u64[0] = v92.m128_u64[1];
        if ( v14 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v14, 1, v15);
      }
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v7, 0xA6u, 0LL);
LABEL_71:
        std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v89, v53, v54);
        return (unsigned int)v7;
      }
      *((_OWORD *)v89 + 9) = *(_OWORD *)(v13 + 144);
      v16 = v89;
      *(_OWORD *)((char *)v89 + 8) = *(_OWORD *)((char *)this + 8);
      *((_QWORD *)v16 + 3) = *((_QWORD *)this + 3);
      *((_BYTE *)v89 + 168) = 0;
      if ( *((_BYTE *)this + 64) )
        CSurfaceDrawListBrush::SetSnapToPixelsReference(v89, (const struct D2D_VECTOR_2F *)this + 7);
      if ( *(_BYTE *)(v13 + 168) )
      {
        v123 = 0;
        v88 = 1;
        CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 408), (struct CMILMatrix *)&v119);
        v17 = CMILMatrix::CMILMatrix((CMILMatrix *)v110, (const struct D2D_MATRIX_3X2_F *)((char *)this + 8));
        v18 = *((_OWORD *)v17 + 1);
        v105 = *(struct D2D_RECT_F *)v17;
        v19 = *((_OWORD *)v17 + 2);
        v106 = v18;
        v20 = *((_OWORD *)v17 + 3);
        LODWORD(v17) = *((_DWORD *)v17 + 16);
        v107 = v19;
        v109 = (int)v17;
        v108 = v20;
        CMILMatrix::Multiply((CMILMatrix *)&v105, (const struct CMILMatrix *)&v119);
        v123 = v109;
        v119 = v105;
        v120 = v106;
        v121 = v107;
        v122 = v108;
        CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v119, &v99, &v100);
        *((_BYTE *)v89 + 169) = 1;
      }
    }
    v115 = (gsl::details *)v118;
    v116 = v118;
    v117 = &v119;
    v111 = (gsl::details *)v114;
    v112 = v114;
    v113 = &v115;
    CoordMap::ComputeMeshPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
      (int)v4,
      (int)&v115,
      (int)&v111,
      (__int64)this + 32,
      SLODWORD(FLOAT_1_1920929eN7));
    v126[0] = v127;
    v126[1] = v127;
    v126[2] = &v128;
    v124[0] = v125;
    v124[1] = v125;
    v124[2] = v126;
    v21 = gsl::narrow<__int64,unsigned __int64>((v112 - (_BYTE *)v111) >> 2);
    v92.m128_u64[0] = v21;
    if ( v21 < 0
      || (v22 = v111, (v92.m128_u64[1] = (unsigned __int64)v111) == 0) && v21
      || (v23 = *(__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(
                             (__int64 *)&v97,
                             (__int64 *)&v92),
          v24 = gsl::narrow<__int64,unsigned __int64>((v116 - (_BYTE *)v115) >> 2),
          v92.m128_u64[0] = v24,
          v24 < 0)
      || (v22 = v115, (v92.m128_u64[1] = (unsigned __int64)v115) == 0) && v24 )
    {
      gsl::details::terminate(v22);
      JUMPOUT(0x1800F308BLL);
    }
    v101 = v23;
    v92 = *(__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(
                       (__int64 *)&v91,
                       (__int64 *)&v92);
    CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
      (__int64)v4,
      v25,
      (__int128 *)&v92,
      (unsigned int *)&v101,
      (__int64)v126,
      (__int64)v124);
    v26 = v112;
    v27 = 1;
    v28 = v111;
    v94 = 1;
    if ( (unsigned __int64)((v112 - (_BYTE *)v111) >> 2) > 1 )
    {
      v29 = 1LL;
      v30 = v116;
      v31 = v115;
      v32 = v126[0];
      v33 = v124[0];
      while ( 1 )
      {
        v34 = *((float *)v28 + v27 - 1) - *((float *)v28 + v29);
        v35 = v27 - 1;
        v98 = v27 - 1;
        v104 = v35;
        if ( COERCE_FLOAT(LODWORD(v34) & _xmm) > 0.0000011920929 )
        {
          v36 = 1;
          v90 = 1;
          v37 = (v30 - (_BYTE *)v31) >> 2;
          if ( v37 > 1 )
            break;
        }
LABEL_67:
        v29 = ++v27;
        v94 = v27;
        if ( v27 >= (unsigned __int64)((v26 - (_BYTE *)v28) >> 2) )
          goto LABEL_70;
      }
      v38 = 1LL;
      while ( 1 )
      {
        v39 = *((float *)v31 + v38);
        v40 = v36 - 1;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v31 + v40) - v39) & _xmm) > 0.0000011920929 )
        {
          v41 = *((_DWORD *)v28 + v35);
          v101.m128_i32[0] = *((_DWORD *)v31 + v40);
          v101.m128_i32[3] = *((_DWORD *)v28 + v29);
          v42 = *(_DWORD *)(v33 + 4 * v35);
          v43 = *((_BYTE *)this + 569);
          v92.m128_i32[1] = v42;
          v44 = *(_DWORD *)(v33 + 4 * v29);
          *(unsigned __int64 *)((char *)v101.m128_u64 + 4) = __PAIR64__(LODWORD(v39), v41);
          v45 = *(float *)(v32 + 4 * v40);
          v92.m128_i32[3] = v44;
          v92.m128_f32[0] = v45;
          v92.m128_i32[2] = *(_DWORD *)(v32 + 4 * v38);
          v91.left = v45;
          LODWORD(v46) = _mm_shuffle_ps(v92, v92, 85).m128_u32[0];
          LODWORD(v47) = _mm_shuffle_ps(v92, v92, 170).m128_u32[0];
          LODWORD(v48) = _mm_shuffle_ps(v92, v92, 255).m128_u32[0];
          LODWORD(v49) = _mm_shuffle_ps(v101, v101, 85).m128_u32[0];
          LODWORD(v50) = _mm_shuffle_ps(v101, v101, 170).m128_u32[0];
          LODWORD(v51) = _mm_shuffle_ps(v101, v101, 255).m128_u32[0];
          v91.top = v46;
          v91.right = v47;
          v91.bottom = v48;
          LODWORD(v97.left) = v101.m128_i32[0];
          v97.top = v49;
          v97.right = v50;
          v97.bottom = v51;
          if ( !v43
            || (float)(*((float *)this + 138) - v101.m128_f32[0]) > 0.0000011920929
            || (float)(*((float *)this + 139) - v49) > 0.0000011920929
            || (float)(v50 - *((float *)this + 140)) > 0.0000011920929
            || (float)(v51 - *((float *)this + 141)) > 0.0000011920929 )
          {
            if ( v36 == 1 )
              v52 = (struct D2D_MATRIX_3X2_F *)(*((_DWORD *)this + 12) & 0x3000000);
            else
              v52 = 0LL;
            if ( v89 )
            {
              v55 = (float *)*((_QWORD *)this + 9);
              if ( v88 )
              {
                if ( (float)(v47 - v92.m128_f32[0]) > 0.5
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                    (float)((float)((float)(v50 - v101.m128_f32[0]) / (float)(v47 - v92.m128_f32[0]))
                                          * v99)
                                  - 1.0) & _xmm) >= 0.000081380211 )
                {
                  if ( v92.m128_f32[0] <= v55[8] )
                    v56 = 0.0;
                  else
                    v56 = FLOAT_0_5;
                  v57 = v92.m128_f32[0] + v56;
                  v58 = v55[10];
                  v91.left = v57;
                  if ( v58 <= v47 )
                    v59 = 0.0;
                  else
                    v59 = FLOAT_0_5;
                  v91.right = v47 - v59;
                }
                if ( (float)(v48 - v46) > 0.5
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v51 - v49) / (float)(v48 - v46)) * v100) - 1.0) & _xmm) >= 0.000081380211 )
                {
                  if ( v46 <= v55[9] )
                    v60 = 0.0;
                  else
                    v60 = FLOAT_0_5;
                  v61 = v46 + v60;
                  v62 = v55[11];
                  v91.top = v61;
                  if ( v62 <= v48 )
                    v63 = 0.0;
                  else
                    v63 = FLOAT_0_5;
                  v91.bottom = v48 - v63;
                }
              }
              D2DMatrixHelper::ComputeRectangleTransform(&v97, &v91, &v95, v52);
              v119.right = 0.0;
              v119.left = v95.left;
              v119.top = v95.top;
              v119.bottom = v95.right;
              *(_QWORD *)&v120 = LODWORD(v95.bottom);
              *((_QWORD *)&v120 + 1) = v96;
              LODWORD(v121) = 1065353216;
              v64 = Matrix3x3::operator*(&v119.left, &v105.left, v55 + 27);
              v65 = v89;
              v66 = v102;
              *(_OWORD *)((char *)v89 + 108) = *(_OWORD *)v64;
              v67 = v97;
              *(_OWORD *)((char *)v65 + 124) = *((_OWORD *)v64 + 1);
              *((float *)v65 + 35) = v64[8];
              v68 = v89;
              *((_BYTE *)v89 + 52) = 1;
              *((struct D2D_RECT_F *)v68 + 2) = v67;
              *((_DWORD *)v68 + 12) = v69;
              v70 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v103)(v89, v66);
              v7 = v70;
              if ( v70 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x18Du, 0LL);
                break;
              }
            }
            else
            {
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v92.m128_f32[0] - v47) & _xmm) <= 0.0009765625 )
              {
                v72 = (float)(v47 + v92.m128_f32[0]) * 0.5;
                v91.left = v72 - 0.00048828125;
                v91.right = v72 + 0.00048828125;
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v46 - v48) & _xmm) <= 0.0009765625 )
              {
                v73 = (float)(v46 + v48) * 0.5;
                v91.top = v73 - 0.00048828125;
                v91.bottom = v73 + 0.00048828125;
              }
              D2DMatrixHelper::ComputeRectangleTransform(&v91, &v97, &v119, v52);
              v74 = *((_QWORD *)this + 9);
              v75 = v91;
              *(_BYTE *)(v74 + 52) = 1;
              *(struct D2D_RECT_F *)(v74 + 32) = v75;
              *(_DWORD *)(v74 + 48) = v76;
              D2D1::Matrix3x2F::SetProduct(
                (D2D1::Matrix3x2F *)&v95,
                (const struct D2D1::Matrix3x2F *)&v119,
                (CNineGridDrawListBrush *)((char *)this + 8));
              v78 = *((_QWORD *)this + 9);
              v79 = v96;
              *(struct D2D_RECT_F *)(v78 + 8) = v95;
              *(_QWORD *)(v78 + 24) = v79;
              if ( *((_BYTE *)this + 64) )
              {
                D2DMatrixHelper::ComputeRectangleTransform(&v97, &v91, &v95, v77);
                left_low = (__m128)LODWORD(v95.left);
                v81 = *((_QWORD *)this + 9);
                top_low = (__m128)LODWORD(v95.top);
                top_low.m128_f32[0] = v95.top * *((float *)this + 14);
                left_low.m128_f32[0] = (float)(v95.left * *((float *)this + 14))
                                     + (float)(v95.right * *((float *)this + 15));
                v83 = v95.bottom * *((float *)this + 15);
                *(_BYTE *)(v81 + 64) = 1;
                left_low.m128_f32[0] = left_low.m128_f32[0] + *(float *)&v96;
                top_low.m128_f32[0] = (float)(top_low.m128_f32[0] + v83) + *((float *)&v96 + 1);
                *(_QWORD *)(v81 + 56) = _mm_unpacklo_ps(left_low, top_low).m128_u64[0];
              }
              v84 = ((__int64 (__fastcall *)(_QWORD, void *))v103)(*((_QWORD *)this + 9), v102);
              v7 = v84;
              if ( v84 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0, v84, 0x1BEu, 0LL);
                break;
              }
            }
            v30 = v116;
            v31 = v115;
            v26 = v112;
            v28 = v111;
            v32 = v126[0];
            v33 = v124[0];
          }
          v35 = v104;
        }
        v36 = v90 + 1;
        v86 = (v30 - (_BYTE *)v31) >> 2;
        v38 = v36;
        ++v90;
        if ( v36 >= v86 )
        {
          v27 = v94;
          goto LABEL_67;
        }
      }
    }
LABEL_70:
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>((__int64)v124);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>((__int64)v126);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>((__int64)&v111);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>((__int64)&v115);
    goto LABEL_71;
  }
  *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)this + 8);
  *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 3);
  v11 = v9(*((_QWORD *)this + 9), v10);
  v7 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x94u, 0LL);
  return (unsigned int)v7;
}
