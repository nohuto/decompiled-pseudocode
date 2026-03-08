/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180076750
 * Callers:
 *     <none>
 * Callees:
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x18002528C (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x180025310 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ??$?0M$0?0$0?0$0A@@?$span@$$CBM$0?0@gsl@@QEAA@AEBV?$span@M$0?0@1@@Z @ 0x180025474 (--$-0M$0-0$0-0$0A@@-$span@$$CBM$0-0@gsl@@QEAA@AEBV-$span@M$0-0@1@@Z.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180025924 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x18002FA18 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C728 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007FA38 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800925F4 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B2368 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4B20 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800D4790 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D79D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??$?0$0?0V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@M$0?0@gsl@@QEAA@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800EF8E4 (--$-0$0-0V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x18024F7EC (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  char *v4; // r14
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 (__fastcall *v9)(_QWORD, __int64); // r9
  __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // rsi
  CSurfaceDrawListBrush *v13; // rcx
  CSurfaceDrawListBrush *v14; // rax
  CSurfaceDrawListBrush *v15; // rax
  CMILMatrix *v16; // rax
  struct D2D_RECT_F v17; // xmm0
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _BYTE *v21; // rdx
  unsigned int v22; // r8d
  _BYTE *v23; // r11
  _BYTE *v24; // rcx
  struct D2D_MATRIX_3X2_F *v25; // r9
  __int64 v26; // rsi
  __int64 v27; // r14
  float v28; // xmm0_4
  __int64 v29; // r15
  unsigned int v30; // r13d
  __int64 v31; // r10
  float v32; // xmm2_4
  __int64 v33; // r8
  unsigned int v34; // xmm0_4
  FLOAT v35; // xmm1_4
  FLOAT v36; // xmm0_4
  char v37; // r15
  float *v38; // r10
  __int64 v39; // r10
  __int64 v40; // rax
  CSurfaceDrawListBrush *v41; // rcx
  struct D2D_RECT_F v42; // xmm0
  CSurfaceDrawListBrush *v43; // rax
  int v44; // r11d
  int v45; // eax
  unsigned int v46; // ecx
  void *v47; // rcx
  bool v48; // zf
  void *v49; // rcx
  void *v50; // rcx
  struct D2D_MATRIX_3X2_F *v51; // rcx
  CSurfaceDrawListBrush *v52; // rcx
  unsigned int v53; // edx
  __int64 v55; // r10
  struct D2D_RECT_F v56; // xmm0
  int v57; // r11d
  struct D2D_MATRIX_3X2_F *v58; // r9
  __int64 v59; // rax
  __int64 v60; // xmm1_8
  int v61; // eax
  unsigned int v62; // ecx
  float v63; // xmm2_4
  float v64; // xmm0_4
  float v65; // xmm1_4
  float v66; // xmm0_4
  int v67; // eax
  unsigned int v68; // ecx
  float v69; // xmm1_4
  float v70; // xmm1_4
  __m128 left_low; // xmm2
  __int64 v72; // rax
  __m128 top_low; // xmm1
  float v74; // xmm0_4
  void *v75; // rcx
  void *v76; // rcx
  void *v77; // rcx
  struct D2D_MATRIX_3X2_F *v78; // rcx
  char v79; // [rsp+48h] [rbp-C0h]
  CSurfaceDrawListBrush *v80; // [rsp+50h] [rbp-B8h] BYREF
  int v81; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_RECT_F v82; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_RECT_F v83; // [rsp+78h] [rbp-90h] BYREF
  __int64 v84; // [rsp+88h] [rbp-80h]
  unsigned int v85; // [rsp+90h] [rbp-78h]
  float v86; // [rsp+94h] [rbp-74h] BYREF
  float v87[4]; // [rsp+98h] [rbp-70h] BYREF
  struct D2D_RECT_F v88; // [rsp+A8h] [rbp-60h] BYREF
  struct D2D_RECT_F v89; // [rsp+B8h] [rbp-50h] BYREF
  void *v90; // [rsp+C8h] [rbp-40h]
  int (*v91)(const struct CDrawListBrush *, void *); // [rsp+D0h] [rbp-38h]
  __int64 v92; // [rsp+D8h] [rbp-30h] BYREF
  __m256i v93; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v94; // [rsp+108h] [rbp+0h]
  __int128 v95; // [rsp+118h] [rbp+10h]
  int v96; // [rsp+128h] [rbp+20h]
  _BYTE v97[68]; // [rsp+12Ch] [rbp+24h] BYREF
  struct D2D_RECT_F v98; // [rsp+170h] [rbp+68h] BYREF
  _BYTE *v99; // [rsp+180h] [rbp+78h] BYREF
  _BYTE *v100; // [rsp+188h] [rbp+80h]
  struct D2D_MATRIX_3X2_F **v101; // [rsp+190h] [rbp+88h]
  _BYTE v102[24]; // [rsp+198h] [rbp+90h] BYREF
  struct D2D_MATRIX_3X2_F *v103; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE *v104; // [rsp+1B8h] [rbp+B0h]
  _QWORD *v105; // [rsp+1C0h] [rbp+B8h]
  _BYTE v106[24]; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v107[3]; // [rsp+1E0h] [rbp+D8h] BYREF
  _BYTE v108[24]; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD v109[3]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v110[24]; // [rsp+228h] [rbp+120h] BYREF
  char v111; // [rsp+240h] [rbp+138h] BYREF
  __m256i v112; // [rsp+248h] [rbp+140h] BYREF
  __int128 v113; // [rsp+268h] [rbp+160h]
  __int128 v114; // [rsp+278h] [rbp+170h]
  int v115; // [rsp+288h] [rbp+180h]

  v90 = a4;
  v91 = a3;
  v4 = (char *)this + 112;
  v7 = 0;
  if ( CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 3);
    v67 = v9(*((_QWORD *)this + 9), v10);
    v7 = v67;
    if ( v67 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x90u, 0LL);
    return v7;
  }
  v80 = 0LL;
  v79 = 0;
  v11 = 1LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 2LL) )
  {
    v12 = *((_QWORD *)this + 9);
    *(_QWORD *)&v83.left = &v80;
    *(_QWORD *)&v83.right = 0LL;
    LOBYTE(v84) = 1;
    LOWORD(v81) = *(_WORD *)(v12 + 80);
    BYTE2(v81) = *(_BYTE *)(v12 + 82);
    v7 = CSurfaceDrawListBrush::CreateWithTextureTransform(v12 + 56, &v81, &Matrix3x3::Identity, &v83.right);
    if ( (_BYTE)v84 )
    {
      v13 = **(CSurfaceDrawListBrush ***)&v83.left;
      **(_QWORD **)&v83.left = *(_QWORD *)&v83.right;
      if ( v13 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1u);
    }
    if ( (v7 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, v7, 0xA2u, 0LL);
      goto LABEL_45;
    }
    if ( !*(_BYTE *)(v12 + 145) )
    {
      v14 = v80;
      *(_OWORD *)((char *)v80 + 120) = *(_OWORD *)(v12 + 120);
      *((_BYTE *)v14 + 145) = 0;
    }
    v15 = v80;
    *(_OWORD *)((char *)v80 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v15 + 3) = *((_QWORD *)this + 3);
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v80, (const struct D2D_VECTOR_2F *)this + 7);
    if ( *(_BYTE *)(v12 + 144) )
    {
      v79 = 1;
      v115 = 0;
      CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)&v112);
      v16 = CMILMatrix::CMILMatrix((CMILMatrix *)v97, (const struct D2D_MATRIX_3X2_F *)((char *)this + 8));
      v93 = *(__m256i *)v16;
      v94 = *((_OWORD *)v16 + 2);
      v95 = *((_OWORD *)v16 + 3);
      v96 = *((_DWORD *)v16 + 16);
      CMILMatrix::Multiply((CMILMatrix *)&v93, (const struct CMILMatrix *)&v112);
      v115 = v96;
      v112 = v93;
      v113 = v94;
      v17 = (struct D2D_RECT_F)*((_OWORD *)this + 2);
      v114 = v95;
      v98 = v17;
      CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)&v112, &v86, v87);
      *((_BYTE *)v80 + 147) = 1;
    }
  }
  v103 = (struct D2D_MATRIX_3X2_F *)v106;
  v104 = v106;
  v105 = v107;
  v99 = v102;
  v100 = v102;
  v101 = &v103;
  CoordMap::ComputeMeshPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (int)v4,
    (int)&v103,
    (int)&v99,
    (__int64)this + 32,
    SLODWORD(FLOAT_1_1920929eN7));
  v109[0] = v110;
  v109[1] = v110;
  v109[2] = &v111;
  v107[0] = v108;
  v107[1] = v108;
  v107[2] = v109;
  v18 = (_QWORD *)gsl::span<float,-1>::span<float,-1>(&v98, &v99);
  v89 = *(struct D2D_RECT_F *)gsl::span<float const,-1>::span<float const,-1>(&v82, v18);
  v19 = (_QWORD *)gsl::span<float,-1>::span<float,-1>(&v92, &v103);
  v88 = *(struct D2D_RECT_F *)gsl::span<float const,-1>::span<float const,-1>(&v83, v19);
  CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (__int64)v4,
    v20,
    (__int128 *)&v88,
    (unsigned int *)&v89,
    (__int64)v109,
    (__int64)v107);
  v21 = v100;
  v22 = 1;
  v23 = v99;
  v81 = 1;
  if ( (unsigned __int64)((v100 - v99) >> 2) > 1 )
  {
    v24 = v104;
    v25 = v103;
    v26 = v109[0];
    v27 = v107[0];
    do
    {
      v28 = *(float *)&v23[4 * v22 - 4] - *(float *)&v23[4 * v11];
      v29 = v22 - 1;
      v85 = v22 - 1;
      v92 = v29;
      if ( COERCE_FLOAT(LODWORD(v28) & _xmm) > 0.0000011920929 )
      {
        v30 = 1;
        if ( (unsigned __int64)((v24 - (_BYTE *)v25) >> 2) > 1 )
        {
          v31 = 1LL;
          while ( 1 )
          {
            v32 = *(&v25->m11 + v31);
            v33 = v30 - 1;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(&v25->m11 + v33) - v32) & _xmm) > 0.0000011920929 )
            {
              v34 = *(_DWORD *)&v23[4 * v29];
              v88.left = *(&v25->m11 + v33);
              v88.bottom = *(FLOAT *)&v23[4 * v11];
              v35 = *(float *)(v26 + 4 * v33);
              *(_QWORD *)&v88.top = __PAIR64__(LODWORD(v32), v34);
              v89.left = v35;
              v89.right = *(FLOAT *)(v26 + 4 * v31);
              v98 = v88;
              v36 = *(float *)(v27 + 4 * v29);
              v37 = *((_BYTE *)this + 569);
              v89.top = v36;
              v89.bottom = *(FLOAT *)(v27 + 4 * v11);
              v82 = v89;
              if ( !v37
                || (float)(*((float *)this + 138) - v88.left) > 0.0000011920929
                || (float)(*((float *)this + 139) - v88.top) > 0.0000011920929
                || (float)(v32 - *((float *)this + 140)) > 0.0000011920929
                || (float)(v88.bottom - *((float *)this + 141)) > 0.0000011920929 )
              {
                if ( v80 )
                {
                  v38 = (float *)*((_QWORD *)this + 9);
                  if ( v79 )
                  {
                    if ( (float)(v82.right - v82.left) > 0.5
                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                        (float)((float)((float)(v32 - v88.left) / (float)(v82.right - v82.left)) * v86)
                                      - 1.0) & _xmm) >= 0.000081380211 )
                    {
                      if ( v82.left <= v38[8] )
                        v65 = 0.0;
                      else
                        v65 = FLOAT_0_5;
                      v82.left = v82.left + v65;
                      if ( v38[10] <= v82.right )
                        v66 = 0.0;
                      else
                        v66 = FLOAT_0_5;
                      v82.right = v82.right - v66;
                    }
                    if ( (float)(v82.bottom - v82.top) > 0.5
                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                        (float)((float)((float)(v88.bottom - v88.top) / (float)(v82.bottom - v82.top))
                                              * v87[0])
                                      - 1.0) & _xmm) >= 0.000081380211 )
                    {
                      if ( v82.top <= v38[9] )
                        v63 = 0.0;
                      else
                        v63 = FLOAT_0_5;
                      v82.top = v82.top + v63;
                      if ( v38[11] <= v82.bottom )
                        v64 = 0.0;
                      else
                        v64 = FLOAT_0_5;
                      v82.bottom = v82.bottom - v64;
                    }
                  }
                  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v98, &v82, &v83, v25);
                  v112.m256i_i32[5] = 0;
                  v112.m256i_i32[0] = LODWORD(v83.left);
                  *(__int64 *)((char *)v112.m256i_i64 + 4) = LODWORD(v83.top);
                  *(__int64 *)((char *)&v112.m256i_i64[1] + 4) = *(_QWORD *)&v83.right;
                  v112.m256i_i64[3] = v84;
                  LODWORD(v113) = 1065353216;
                  v40 = Matrix3x3::operator*(&v112, &v93, v39 + 84);
                  v41 = v80;
                  *(_OWORD *)((char *)v80 + 84) = *(_OWORD *)v40;
                  v42 = v98;
                  *(_OWORD *)((char *)v41 + 100) = *(_OWORD *)(v40 + 16);
                  *((_DWORD *)v41 + 29) = *(_DWORD *)(v40 + 32);
                  v43 = v80;
                  *((_BYTE *)v80 + 52) = 1;
                  *((struct D2D_RECT_F *)v43 + 2) = v42;
                  *((_DWORD *)v43 + 12) = v44;
                  v45 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v91)(v80, v90);
                  v7 = v45;
                  if ( v45 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x18Eu, 0LL);
LABEL_77:
                    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v107);
                    v75 = (void *)v107[0];
                    v48 = v107[0] == (_QWORD)v108;
                    v107[0] = 0LL;
                    if ( v48 )
                      v75 = 0LL;
                    operator delete(v75);
                    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v109);
                    v76 = (void *)v109[0];
                    v48 = v109[0] == (_QWORD)v110;
                    v109[0] = 0LL;
                    if ( v48 )
                      v76 = 0LL;
                    operator delete(v76);
                    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v99);
                    v77 = v99;
                    v48 = v99 == v102;
                    v99 = 0LL;
                    if ( v48 )
                      v77 = 0LL;
                    operator delete(v77);
                    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v103);
                    v78 = v103;
                    v48 = v103 == (struct D2D_MATRIX_3X2_F *)v106;
                    v103 = 0LL;
                    if ( v48 )
                      v78 = 0LL;
                    operator delete(v78);
                    v52 = v80;
                    if ( v80 )
                    {
                      v53 = 1;
LABEL_47:
                      CSurfaceDrawListBrush::`vector deleting destructor'(v52, v53);
                    }
                    return v7;
                  }
                }
                else
                {
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v82.left - v82.right) & _xmm) <= 0.0009765625 )
                  {
                    v69 = (float)(v82.right + v82.left) * 0.5;
                    v82.left = v69 - 0.00048828125;
                    v82.right = v69 + 0.00048828125;
                  }
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v82.top - v82.bottom) & _xmm) <= 0.0009765625 )
                  {
                    v70 = (float)(v82.bottom + v82.top) * 0.5;
                    v82.top = v70 - 0.00048828125;
                    v82.bottom = v70 + 0.00048828125;
                  }
                  D2DMatrixHelper::ComputeRectangleTransform(
                    (D2DMatrixHelper *)&v82,
                    &v98,
                    (const struct D2D_RECT_F *)&v112,
                    v25);
                  v55 = *((_QWORD *)this + 9);
                  v56 = v82;
                  *(_BYTE *)(v55 + 52) = 1;
                  *(struct D2D_RECT_F *)(v55 + 32) = v56;
                  *(_DWORD *)(v55 + 48) = v57;
                  D2D1::Matrix3x2F::SetProduct(
                    (D2D1::Matrix3x2F *)&v83,
                    (const struct D2D1::Matrix3x2F *)&v112,
                    (CNineGridDrawListBrush *)((char *)this + 8));
                  v59 = *((_QWORD *)this + 9);
                  v60 = v84;
                  *(struct D2D_RECT_F *)(v59 + 8) = v83;
                  *(_QWORD *)(v59 + 24) = v60;
                  if ( *((_BYTE *)this + 64) )
                  {
                    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v98, &v82, &v83, v58);
                    left_low = (__m128)LODWORD(v83.left);
                    v72 = *((_QWORD *)this + 9);
                    top_low = (__m128)LODWORD(v83.top);
                    top_low.m128_f32[0] = v83.top * *((float *)this + 14);
                    left_low.m128_f32[0] = (float)(v83.left * *((float *)this + 14))
                                         + (float)(v83.right * *((float *)this + 15));
                    v74 = v83.bottom * *((float *)this + 15);
                    *(_BYTE *)(v72 + 64) = 1;
                    left_low.m128_f32[0] = left_low.m128_f32[0] + *(float *)&v84;
                    top_low.m128_f32[0] = (float)(top_low.m128_f32[0] + v74) + *((float *)&v84 + 1);
                    *(_QWORD *)(v72 + 56) = _mm_unpacklo_ps(left_low, top_low).m128_u64[0];
                  }
                  v61 = ((__int64 (__fastcall *)(_QWORD, void *))v91)(*((_QWORD *)this + 9), v90);
                  v7 = v61;
                  if ( v61 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x1BFu, 0LL);
                    goto LABEL_77;
                  }
                }
                v24 = v104;
                v25 = v103;
                v21 = v100;
                v23 = v99;
                v26 = v109[0];
                v27 = v107[0];
              }
              v29 = v92;
            }
            v31 = ++v30;
            if ( v30 >= (unsigned __int64)((v24 - (_BYTE *)v25) >> 2) )
            {
              v22 = v81;
              break;
            }
          }
        }
      }
      v11 = ++v22;
      v81 = v22;
    }
    while ( v22 < (unsigned __int64)((v21 - v23) >> 2) );
    LODWORD(v11) = 1;
  }
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v107);
  v47 = (void *)v107[0];
  v48 = v107[0] == (_QWORD)v108;
  v107[0] = 0LL;
  if ( v48 )
    v47 = 0LL;
  operator delete(v47);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v109);
  v49 = (void *)v109[0];
  v48 = v109[0] == (_QWORD)v110;
  v109[0] = 0LL;
  if ( v48 )
    v49 = 0LL;
  operator delete(v49);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v99);
  v50 = v99;
  v48 = v99 == v102;
  v99 = 0LL;
  if ( v48 )
    v50 = 0LL;
  operator delete(v50);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v103);
  v51 = v103;
  v48 = v103 == (struct D2D_MATRIX_3X2_F *)v106;
  v103 = 0LL;
  if ( v48 )
    v51 = 0LL;
  operator delete(v51);
LABEL_45:
  v52 = v80;
  if ( v80 )
  {
    v53 = v11;
    goto LABEL_47;
  }
  return v7;
}
