/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x18007A8C0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A040 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@H@Z @ 0x180008390 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180012524 (-IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x1800128E8 (--0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800140C0 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ @ 0x180014D20 (-ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18001ABD0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180074400 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x180077420 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007B454 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800804EC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009098C (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180095F40 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A7190 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800A71F4 (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A72B4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800C2990 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800C3320 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C35E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800C4E30 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800D87F0 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800DF1AC (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x180104860 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x18012FD7A (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 */

__int64 __fastcall CWindowNode::RenderImage(
        CWindowNode *this,
        struct CDrawingContext *a2,
        struct CWindowOcclusionInfo *a3,
        struct IBitmapResource *a4,
        const struct CShape *a5,
        bool a6,
        unsigned int a7)
{
  int v8; // ebx
  LONG left; // r12d
  LONG top; // r13d
  struct IBitmapResource *v11; // rax
  bool v12; // dl
  int right; // esi
  int bottom; // r14d
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // r15d
  LONG v19; // eax
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // eax
  int v23; // eax
  unsigned int v24; // ecx
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  __int64 v29; // rsi
  int v30; // eax
  CMILMatrix *v31; // rcx
  void (__fastcall ***v32)(_QWORD, const struct CShape **); // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // ecx
  struct tagRECT v36; // xmm1
  float v37; // xmm6_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm3_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm7_4
  float v44; // xmm2_4
  float v45; // xmm5_4
  float v46; // xmm3_4
  float v47; // xmm4_4
  __int64 v48; // rcx
  char IsCovered; // al
  struct IBitmapResource *v50; // rax
  __int64 v51; // rdx
  const struct CShape *v52; // r13
  __int64 v53; // rcx
  __int64 v54; // rdx
  const struct CShape *v55; // r14
  int v56; // ecx
  char v57; // al
  int v58; // ecx
  bool v59; // zf
  bool v60; // al
  struct IBitmapResource *v61; // rbx
  int v62; // eax
  unsigned int v63; // ecx
  struct IBitmapResource *v64; // rax
  __int64 v65; // rcx
  float v67; // xmm7_4
  float v68; // xmm5_4
  float v69; // xmm0_4
  __int64 v70; // r8
  __int64 v71; // r9
  struct IBitmapResource *v72; // rax
  struct IBitmapResource *v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  int v77; // eax
  unsigned int v78; // ecx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  int v83; // eax
  unsigned int v84; // ecx
  __int64 v85; // rcx
  struct tagRECT v86; // xmm0
  __m128 v87; // xmm2
  __m128 v88; // xmm2
  __m128 v89; // xmm2
  __m128 v90; // xmm2
  __m128 v91; // rt1
  unsigned int v92; // ecx
  __int64 v93; // rax
  int *v94; // rax
  __int64 v95; // rax
  int v96; // eax
  unsigned int v97; // ecx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rcx
  int v103; // eax
  unsigned int v104; // ecx
  __int64 v105; // rcx
  __int64 v106; // rax
  int *v107; // rax
  int v108; // eax
  unsigned int v109; // ecx
  __int64 v110; // rcx
  const struct CShape *v111; // rdx
  __int64 v112; // rcx
  unsigned int v113; // [rsp+28h] [rbp-E0h]
  char v114; // [rsp+38h] [rbp-D0h]
  const struct CShape *v115; // [rsp+40h] [rbp-C8h] BYREF
  bool v116; // [rsp+48h] [rbp-C0h]
  struct IBitmapResource *v117[2]; // [rsp+50h] [rbp-B8h] BYREF
  const struct CShape *v118; // [rsp+60h] [rbp-A8h]
  float v119[20]; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT rcDst; // [rsp+B8h] [rbp-50h] BYREF
  RECT rcSrc2; // [rsp+C8h] [rbp-40h] BYREF
  char v122; // [rsp+D8h] [rbp-30h]
  RECT v123; // [rsp+E0h] [rbp-28h] BYREF
  struct tagRECT v124; // [rsp+F8h] [rbp-10h] BYREF
  struct tagRECT v125; // [rsp+108h] [rbp+0h] BYREF
  const unsigned int *v126; // [rsp+118h] [rbp+10h] BYREF
  __int64 v127; // [rsp+120h] [rbp+18h]
  void *lpMem; // [rsp+128h] [rbp+20h] BYREF
  _BYTE *v129; // [rsp+130h] [rbp+28h]
  int v130; // [rsp+138h] [rbp+30h]
  __int64 v131; // [rsp+13Ch] [rbp+34h]
  _BYTE v132[16]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v133; // [rsp+158h] [rbp+50h]
  int v134; // [rsp+168h] [rbp+60h] BYREF
  int v135; // [rsp+16Ch] [rbp+64h]
  int v136; // [rsp+17Ch] [rbp+74h]

  v8 = 0;
  *(_QWORD *)&v125.left = a2;
  left = 0;
  top = 0;
  v118 = a5;
  v11 = a4;
  v12 = *((_BYTE *)this + 852) & 1;
  right = *((_DWORD *)this + 192) - *((_DWORD *)this + 190);
  bottom = *((_DWORD *)this + 193) - *((_DWORD *)this + 191);
  v117[0] = a4;
  v134 = 0;
  v116 = v12;
  v114 = 0;
  v119[16] = 0.0;
  *(_QWORD *)&v124.left = 0LL;
  v124.right = right;
  v124.bottom = bottom;
  rcDst = 0LL;
  if ( a5 )
  {
    v15 = *(_QWORD *)a5;
    v123 = 0LL;
    v16 = (*(__int64 (__fastcall **)(const struct CShape *, RECT *, _QWORD))(v15 + 48))(a5, &v123, 0LL);
    v18 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x358u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0, v18, 0x5F2u, 0LL);
      return (unsigned int)v18;
    }
    LODWORD(v115) = v123.left;
    if ( (v123.left & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v87 = 0LL;
      v87.m128_f32[0] = (float)(int)*(float *)&v123.left - *(float *)&v123.left;
      v19 = (int)*(float *)&v123.left - _mm_cmple_ss(v87, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      *(float *)&v115 = *(float *)&v123.left + 6291456.25;
      v19 = (int)((_DWORD)v115 << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v123.left - (float)v19) & _xmm) > 0.00390625 )
      v19 = CFloatFPU::FloorSat(*(float *)&v123.left);
    rcSrc2.left = v19;
    LODWORD(v115) = v123.top;
    if ( (v123.top & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v88 = 0LL;
      v88.m128_f32[0] = (float)(int)*(float *)&v123.top - *(float *)&v123.top;
      v20 = (int)*(float *)&v123.top - _mm_cmple_ss(v88, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      *(float *)&v115 = *(float *)&v123.top + 6291456.25;
      v20 = (int)((_DWORD)v115 << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v123.top - (float)v20) & _xmm) > 0.00390625 )
      v20 = CFloatFPU::FloorSat(*(float *)&v123.top);
    rcSrc2.top = v20;
    LODWORD(v115) = v123.right;
    if ( (v123.right & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v89 = 0LL;
      v89.m128_f32[0] = (float)(int)*(float *)&v123.right - *(float *)&v123.right;
      v21 = (int)*(float *)&v123.right - _mm_cmple_ss(v89, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      *(float *)&v115 = *(float *)&v123.right + 6291456.25;
      v21 = (int)((_DWORD)v115 << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v123.right - (float)v21) & _xmm) > 0.00390625 )
      v21 = CFloatFPU::CeilingSat(*(float *)&v123.right);
    rcSrc2.right = v21;
    LODWORD(v115) = v123.bottom;
    if ( (v123.bottom & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v90 = 0LL;
      v90.m128_f32[0] = (float)(int)*(float *)&v123.bottom - *(float *)&v123.bottom;
      v91.m128_f32[0] = FLOAT_N0_5;
      LODWORD(v115) = _mm_cmple_ss(v90, v91).m128_u32[0];
      v22 = (int)*(float *)&v123.bottom - (_DWORD)v115;
    }
    else
    {
      *(float *)&v115 = *(float *)&v123.bottom + 6291456.25;
      v22 = (int)((_DWORD)v115 << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v123.bottom - (float)v22) & _xmm) > 0.00390625 )
      v22 = CFloatFPU::CeilingSat(*(float *)&v123.bottom);
    rcSrc2.bottom = v22;
    TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v124, &rcSrc2);
    (*(void (__fastcall **)(const struct CShape *, const struct CShape **))(*(_QWORD *)v118 + 64LL))(v118, &v115);
    v11 = v117[0];
    bottom = v124.bottom;
    right = v124.right;
    top = v124.top;
    left = v124.left;
  }
  v23 = CWindowNode::ApplyTextureToLocalTransform(this, v11, v119, &rcDst);
  v18 = v23;
  if ( v23 < 0 )
  {
    v113 = 1525;
    goto LABEL_208;
  }
  if ( right <= left
    || bottom <= top
    || *(float *)&rcDst.right <= *(float *)&rcDst.left
    || *(float *)&rcDst.bottom <= *(float *)&rcDst.top )
  {
    return (unsigned int)v18;
  }
  v123 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v119, (struct MilRectF *)&rcDst);
  v25 = *(float *)&v123.left;
  if ( (float)left > *(float *)&v123.left )
  {
    *(float *)&v123.left = (float)left;
    v25 = (float)left;
  }
  v26 = *(float *)&v123.top;
  if ( (float)top > *(float *)&v123.top )
  {
    *(float *)&v123.top = (float)top;
    v26 = (float)top;
  }
  v27 = *(float *)&v123.right;
  if ( *(float *)&v123.right > (float)right )
  {
    *(float *)&v123.right = (float)right;
    v27 = (float)right;
  }
  v28 = *(float *)&v123.bottom;
  if ( *(float *)&v123.bottom > (float)bottom )
  {
    *(float *)&v123.bottom = (float)bottom;
    v28 = (float)bottom;
  }
  if ( v27 <= v25 || v28 <= v26 )
    v123 = (RECT)0LL;
  v29 = *(_QWORD *)&v125.left;
  rcSrc2 = 0LL;
  v30 = *(_DWORD *)(*(_QWORD *)&v125.left + 400LL);
  rcDst = 0LL;
  if ( v30 )
    v31 = (CMILMatrix *)(*(_QWORD *)(*(_QWORD *)&v125.left + 416LL) + 68LL * (unsigned int)(v30 - 1));
  else
    v31 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<1>(v31, (struct MilRectF *)&v123);
  v32 = (void (__fastcall ***)(_QWORD, const struct CShape **))(*(_QWORD *)(v29 + 32)
                                                              + 8LL
                                                              + *(int *)(*(_QWORD *)(*(_QWORD *)(v29 + 32) + 8LL) + 16LL));
  (**v32)(v32, &v115);
  *(_QWORD *)&v125.left = 0LL;
  v33 = *(_QWORD *)(v29 + 904);
  *(float *)&v125.right = (float)(int)v115;
  *(float *)&v125.bottom = (float)SHIDWORD(v115);
  v34 = v33 - *(_QWORD *)(v29 + 896);
  if ( !v34 || !*(_QWORD *)(v33 - 184) )
  {
    rcDst = v125;
    v37 = *(float *)&v125.bottom;
    if ( !v34 )
    {
      v40 = *(float *)&rcDst.right;
      v39 = *(float *)&rcDst.top;
      v38 = *(float *)&rcDst.left;
      goto LABEL_43;
    }
    goto LABEL_41;
  }
  v35 = *(_DWORD *)(v29 + 3184);
  if ( v35 )
  {
    v36 = *(struct tagRECT *)(*(_QWORD *)(v29 + 3200) + 16LL * (unsigned int)(v35 - 1));
    LODWORD(v37) = _mm_shuffle_ps((__m128)v36, (__m128)v36, 255).m128_u32[0];
    rcDst = v36;
LABEL_41:
    v38 = *(float *)&rcDst.left;
    v39 = *(float *)&rcDst.top;
    v40 = *(float *)&rcDst.right;
    goto LABEL_42;
  }
  v38 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v39 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v40 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v37 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
LABEL_42:
  if ( *(_QWORD *)(v33 - 168) )
  {
    rcDst = 0LL;
    CBaseClipStack::Top(v29 + 3216, &rcDst);
    if ( *(float *)&rcDst.left > v38 )
      v38 = *(float *)&rcDst.left;
    v67 = v39;
    if ( *(float *)&rcDst.top > v39 )
    {
      v39 = *(float *)&rcDst.top;
      v67 = *(float *)&rcDst.top;
    }
    v68 = v40;
    if ( v40 > *(float *)&rcDst.right )
    {
      v40 = *(float *)&rcDst.right;
      v68 = *(float *)&rcDst.right;
    }
    v69 = v37;
    if ( v37 > *(float *)&rcDst.bottom )
    {
      v37 = *(float *)&rcDst.bottom;
      v69 = *(float *)&rcDst.bottom;
    }
    if ( v68 <= v38 || v69 <= v67 )
    {
      v37 = 0.0;
      v40 = 0.0;
      v39 = 0.0;
      v38 = 0.0;
    }
  }
LABEL_43:
  v41 = *(float *)&rcSrc2.left;
  if ( v38 > *(float *)&rcSrc2.left )
    v41 = v38;
  v42 = *(float *)&rcSrc2.top;
  v43 = *(float *)&rcSrc2.top;
  if ( v39 > *(float *)&rcSrc2.top )
  {
    v42 = v39;
    v43 = v39;
  }
  v44 = *(float *)&rcSrc2.right;
  v45 = *(float *)&rcSrc2.right;
  if ( *(float *)&rcSrc2.right > v40 )
  {
    v44 = v40;
    v45 = v40;
  }
  v46 = *(float *)&rcSrc2.bottom;
  v47 = *(float *)&rcSrc2.bottom;
  if ( *(float *)&rcSrc2.bottom > v37 )
  {
    v46 = v37;
    v47 = v37;
  }
  if ( v45 <= v41 || v47 <= v43 )
  {
    v46 = 0.0;
    v44 = 0.0;
    v42 = 0.0;
    v41 = 0.0;
    v45 = 0.0;
    v47 = 0.0;
  }
  if ( v45 > v41 && v47 > v42 )
  {
    v48 = *(_QWORD *)(v29 + 8072);
    if ( !v48
      || (v44 <= v41 || v46 <= v42
        ? (IsCovered = 1)
        : (*(float *)&rcSrc2.left = v41,
           *(float *)&rcSrc2.top = v42,
           *(float *)&rcSrc2.right = v44,
           *(float *)&rcSrc2.bottom = v46,
           IsCovered = CArrayBasedCoverageSet::IsCovered(v48 + 448, &rcSrc2, a7)),
          !IsCovered) )
    {
      if ( *((_BYTE *)this + 896) && (v93 = CPtrArrayBase::operator[]((char *)this + 784, 0LL)) != 0 )
        v50 = (struct IBitmapResource *)(v93 + 72);
      else
        v50 = 0LL;
      if ( v117[0] != v50 )
        goto LABEL_63;
      if ( !CDrawingContext::DrawAsOverlay((CDrawingContext *)v29, v117[0]) )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v119[0] - 1.0) & _xmm) >= 0.0000011920929
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v119[5] - 1.0) & _xmm) >= 0.0000011920929 )
        {
          v8 = 2;
          v135 = 1;
          v134 = 2;
        }
LABEL_63:
        v127 = 0LL;
        v126 = &CRectanglesShape::`vftable';
        v130 = 1;
        lpMem = v132;
        v129 = v132;
        v131 = 1LL;
        TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v132);
        v133 = 0LL;
        HIDWORD(v131) = 0;
        DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
        if ( v133 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v133 + 16LL))(v133);
          v133 = 0LL;
        }
        rcSrc2 = v123;
        DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
          &lpMem,
          &rcSrc2,
          1LL);
        v52 = v118;
        v115 = 0LL;
        if ( v118 )
        {
          *(_QWORD *)&rcSrc2.right = 0LL;
          *(_QWORD *)&rcSrc2.left = &v115;
          v122 = 1;
          v18 = CShape::Combine(&v126, v51, v118, 0LL, 1, &rcSrc2.right);
          if ( v122 )
          {
            v53 = *(_QWORD *)&rcSrc2.left;
            v54 = **(_QWORD **)&rcSrc2.left;
            **(_QWORD **)&rcSrc2.left = *(_QWORD *)&rcSrc2.right;
            if ( v54 )
              std::default_delete<CShape>::operator()(v53, v54);
          }
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v18, 0x623u, 0LL);
            if ( v115 )
              std::default_delete<CShape>::operator()(v112, v115);
            goto LABEL_206;
          }
          v55 = v115;
        }
        else
        {
          v55 = (const struct CShape *)&v126;
        }
        v56 = *((_DWORD *)this + 214);
        v125 = v124;
        if ( v56 || *((_DWORD *)this + 216) || *((_DWORD *)this + 215) || *((_DWORD *)this + 217) )
        {
          v86 = *(struct tagRECT *)((char *)this + 728);
          rcDst = v86;
          rcDst.left = v56 + _mm_cvtsi128_si32((__m128i)v86);
          rcDst.right = v86.right - *((_DWORD *)this + 215);
          rcDst.top = *((_DWORD *)this + 216) + v86.top;
          rcDst.bottom = v86.bottom - *((_DWORD *)this + 217);
          *(_QWORD *)&rcSrc2.left = 0LL;
          rcSrc2.right = *((_DWORD *)this + 192) - *((_DWORD *)this + 190);
          rcSrc2.bottom = *((_DWORD *)this + 193) - *((_DWORD *)this + 191);
          IntersectRect(&rcDst, &rcDst, &rcSrc2);
          if ( !EqualRect(&rcDst, &rcSrc2) )
            TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v124, &rcDst);
        }
        if ( a6
          && (*((_DWORD *)this + 209) || *((_DWORD *)this + 211) || *((_DWORD *)this + 210) || *((_DWORD *)this + 212)) )
        {
          CWindowNode::IntersectWithAlphaMargins((__int64)this, (__int64)&v125);
          TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v125, &v124);
          if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(
                                   &v125,
                                   &v124,
                                   v70,
                                   v71) )
          {
            v57 = 1;
            goto LABEL_82;
          }
        }
        else
        {
          TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v125, &v124);
        }
        v57 = 0;
LABEL_82:
        v58 = *(_DWORD *)(v29 + 360);
        if ( v58 != *(_DWORD *)(v29 + 340) && v58 != 5 )
        {
          v8 |= 0x10u;
          v136 = *(_DWORD *)(v29 + 360);
          v134 = v8;
        }
        v59 = v57 == 0;
        v60 = v116;
        if ( !v59 && v116 )
        {
          if ( *((_BYTE *)this + 896) && (v95 = CPtrArrayBase::operator[]((char *)this + 784, 0LL)) != 0 )
            v72 = (struct IBitmapResource *)(v95 + 72);
          else
            v72 = 0LL;
          v73 = v117[0];
          if ( v117[0] != v72 && CDrawingContext::ShouldUseGDIAlphaMarginsLinearInterpolation((CDrawingContext *)v29) )
          {
            v8 |= 2u;
            v135 = -16777215;
            v134 = v8;
          }
          if ( !v8 )
          {
LABEL_121:
            if ( (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v124)
              || (unsigned __int8)CDrawingContext::IsOccluded(v29, (__int64)&v124) )
            {
              goto LABEL_130;
            }
            v117[0] = 0LL;
            CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v134, &v124);
            *(_QWORD *)&rcSrc2.right = 0LL;
            *(_QWORD *)&rcSrc2.left = v117;
            v122 = 1;
            v18 = CShape::Combine(&v134, v74, v55, 0LL, 1, &rcSrc2.right);
            if ( v122 )
            {
              v75 = *(_QWORD *)&rcSrc2.left;
              v76 = **(_QWORD **)&rcSrc2.left;
              **(_QWORD **)&rcSrc2.left = *(_QWORD *)&rcSrc2.right;
              if ( v76 )
                std::default_delete<CShape>::operator()(v75, v76);
            }
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v18, 0x669u, 0LL);
              CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v134);
              if ( v117[0] )
                std::default_delete<CShape>::operator()(v100, v117[0]);
              if ( v115 )
                std::default_delete<CShape>::operator()(v100, v115);
            }
            else
            {
              v77 = CDrawingContext::FillShapeWithBitmap(
                      (CDrawingContext *)v29,
                      v73,
                      (const struct CMILMatrix *)v119,
                      v117[0],
                      0,
                      a7);
              v18 = v77;
              if ( v77 >= 0 )
              {
                CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v134);
                if ( v117[0] )
                  std::default_delete<CShape>::operator()(v79, v117[0]);
LABEL_130:
                if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v125)
                  && !(unsigned __int8)CDrawingContext::IsOccluded(v29, (__int64)&v125) )
                {
                  v117[0] = 0LL;
                  CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v134, &v125);
                  *(_QWORD *)&rcSrc2.right = 0LL;
                  *(_QWORD *)&rcSrc2.left = v117;
                  v122 = 1;
                  v18 = CShape::Combine(&v134, v80, v55, 0LL, 1, &rcSrc2.right);
                  if ( v122 )
                  {
                    v81 = *(_QWORD *)&rcSrc2.left;
                    v82 = **(_QWORD **)&rcSrc2.left;
                    **(_QWORD **)&rcSrc2.left = *(_QWORD *)&rcSrc2.right;
                    if ( v82 )
                      std::default_delete<CShape>::operator()(v81, v82);
                  }
                  if ( v18 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v18, 0x67Eu, 0LL);
                    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v134);
                    if ( v117[0] )
                      std::default_delete<CShape>::operator()(v102, v117[0]);
                    if ( v115 )
                      std::default_delete<CShape>::operator()(v102, v115);
                  }
                  else
                  {
                    v83 = CDrawingContext::FillShapeWithBitmap(
                            (CDrawingContext *)v29,
                            v73,
                            (const struct CMILMatrix *)v119,
                            v117[0],
                            v116,
                            a7);
                    v18 = v83;
                    if ( v83 >= 0 )
                    {
                      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v134);
                      if ( v117[0] )
                        std::default_delete<CShape>::operator()(v85, v117[0]);
                      goto LABEL_90;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(v84, 0LL, 0, v83, 0x685u, 0LL);
                    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v134);
                    if ( v117[0] )
                      std::default_delete<CShape>::operator()(v101, v117[0]);
                    if ( v115 )
                      std::default_delete<CShape>::operator()(v101, v115);
                  }
                  goto LABEL_190;
                }
LABEL_90:
                if ( v115 )
                  (**(void (__fastcall ***)(const struct CShape *, __int64))v115)(v115, 1LL);
                HIDWORD(v131) = 0;
                v126 = &CRectanglesShape::`vftable';
                DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
                if ( v133 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v133 + 16LL))(v133);
                  v133 = 0LL;
                }
                if ( lpMem != v129 )
                {
                  operator delete(lpMem);
                  lpMem = 0LL;
                }
                v65 = v127;
                if ( v127 )
                {
                  v127 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
                }
                goto LABEL_98;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, v77, 0x671u, 0LL);
              CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v134);
              if ( v117[0] )
                std::default_delete<CShape>::operator()(v99, v117[0]);
              if ( v115 )
                std::default_delete<CShape>::operator()(v99, v115);
            }
LABEL_190:
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v126);
            goto LABEL_98;
          }
          v96 = CDrawingContext::PushRenderOptionsInternal(
                  (CDrawingContext *)v29,
                  0LL,
                  (const struct MilRenderOptions *)&v134,
                  1);
          v18 = v96;
          if ( v96 >= 0 )
          {
            LOBYTE(v8) = 1;
            goto LABEL_121;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v97, 0LL, 0, v96, 0x65Bu, 0LL);
          if ( v115 )
            std::default_delete<CShape>::operator()(v98, v115);
LABEL_206:
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v126);
          return (unsigned int)v18;
        }
        if ( v8 )
        {
          v103 = CDrawingContext::PushRenderOptionsInternal(
                   (CDrawingContext *)v29,
                   0LL,
                   (const struct MilRenderOptions *)&v134,
                   1);
          v18 = v103;
          if ( v103 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v104, 0LL, 0, v103, 0x63Bu, 0LL);
            if ( v115 )
              std::default_delete<CShape>::operator()(v105, v115);
            goto LABEL_206;
          }
          v60 = v116;
          v114 = 1;
        }
        v61 = v117[0];
        v62 = CDrawingContext::FillShapeWithBitmap(
                (CDrawingContext *)v29,
                v117[0],
                (const struct CMILMatrix *)v119,
                v55,
                v60,
                a7);
        v18 = v62;
        if ( v62 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x643u, 0LL);
          v111 = v115;
          if ( !v115 )
            goto LABEL_203;
        }
        else
        {
          if ( *((_BYTE *)this + 896) && (v106 = CPtrArrayBase::operator[]((char *)this + 784, 0LL)) != 0 )
            v64 = (struct IBitmapResource *)(v106 + 72);
          else
            v64 = 0LL;
          if ( v61 != v64
            || (v107 = PixelAlign(&rcSrc2.left, (float *)&v123.left),
                v108 = CWindowNode::RenderRevealBorder(this, v29, v107, v52),
                v18 = v108,
                v108 >= 0) )
          {
            LOBYTE(v8) = v114;
            goto LABEL_90;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0, v108, 0x648u, 0LL);
          v111 = v115;
          if ( !v115 )
          {
LABEL_203:
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v126);
            LOBYTE(v8) = v114;
LABEL_98:
            if ( (_BYTE)v8 )
              CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)v29, 1);
            return (unsigned int)v18;
          }
        }
        std::default_delete<CShape>::operator()(v110, v111);
        goto LABEL_203;
      }
      v94 = PixelAlign(&rcSrc2.left, (float *)&v123.left);
      v23 = CWindowNode::RenderRevealBorder(this, v29, v94, v118);
      v18 = v23;
      if ( v23 >= 0 )
        return (unsigned int)v18;
      v113 = 1553;
LABEL_208:
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, v113, 0LL);
    }
  }
  return (unsigned int)v18;
}
