/*
 * XREFs of ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18000A894 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000B294 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x180019744 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180022370 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x18006DD30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800705F0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007B454 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180080DC4 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180083C00 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800B22DC (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800E7548 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18012C2FE (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x1801D46E0 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18020EFFC (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x180210054 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1802103A8 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180257134 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802A6564 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800559D0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180059E30 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180059F20 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A490 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005B510 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005F090 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800B0E5C (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D8418 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DAF28 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800E5BE0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800E5C14 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18026C8DC (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 */

void __fastcall CMILMatrix::Multiply(const struct CMILMatrix *a1, const struct CMILMatrix *a2, struct CMILMatrix *a3)
{
  int v5; // eax
  char v6; // al
  char v7; // al
  bool v8; // si
  bool v9; // dl
  bool v10; // dl
  __int64 v11; // rdx
  char v12; // al
  float v13; // xmm3_4
  CMILMatrix *v14; // rcx
  float v15; // xmm2_4
  float v16; // xmm1_4
  int v17; // eax
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  __int128 v24; // xmm1
  int v25; // eax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  int v31; // xmm1_4
  float v32; // xmm6_4
  float v33; // xmm7_4
  int v34; // xmm0_4
  int v35; // xmm1_4
  int v36; // xmm0_4
  int v37; // xmm1_4
  int v38; // xmm0_4
  int v39; // xmm1_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm0_4
  int v43; // xmm1_4
  _OWORD *v44; // rax
  __int128 v45; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v46; // [rsp+58h] [rbp-B0h]
  __int128 v47; // [rsp+68h] [rbp-A0h]
  __int128 v48; // [rsp+78h] [rbp-90h]
  int v49; // [rsp+88h] [rbp-80h]
  _DWORD v50[6]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v51[6]; // [rsp+B0h] [rbp-58h] BYREF
  float v52[6]; // [rsp+C8h] [rbp-40h] BYREF

  if ( a3 == a2 )
  {
    v24 = *((_OWORD *)a1 + 1);
    v25 = *((_DWORD *)a1 + 16);
    v45 = *(_OWORD *)a1;
    v26 = *((_OWORD *)a1 + 2);
    v49 = v25;
    v46 = v24;
    v27 = *((_OWORD *)a1 + 3);
    v47 = v26;
    v48 = v27;
    CMILMatrix::Multiply((CMILMatrix *)&v45, a2);
    v28 = v46;
    v17 = v49;
    *(_OWORD *)a3 = v45;
    v29 = v47;
    *((_OWORD *)a3 + 1) = v28;
    v30 = v48;
    *((_OWORD *)a3 + 2) = v29;
    *((_OWORD *)a3 + 3) = v30;
    goto LABEL_25;
  }
  *(_OWORD *)a3 = *(_OWORD *)a1;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a1 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a1 + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 16);
  *((_DWORD *)a3 + 16) = v5;
  v6 = (char)((_BYTE)v5 << 6) >> 6;
  if ( v6 )
  {
    v8 = 1;
    v10 = v6 == 1;
  }
  else
  {
    v7 = (char)(16 * *((_BYTE *)a3 + 65)) >> 6;
    if ( v7 )
    {
      v8 = 1;
      v9 = v7 == 1;
    }
    else
    {
      v8 = 1;
      v9 = (unsigned __int8)CMILMatrix::IsAffine<1>(a3, 0LL)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 8) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 9) - 0.0) & _xmm) < 0.000081380211;
      *((_BYTE *)a3 + 65) &= 0xF3u;
      *((_BYTE *)a3 + 65) |= (-4 - 8 * v9) & 0xC;
    }
    v10 = v9
       && (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(a3)
       && (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(a3)
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 10) - 1.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 12) - 0.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 13) - 0.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 14) - 0.0) & _xmm) < 0.000081380211;
    *((_BYTE *)a3 + 64) &= 0xFCu;
    *((_BYTE *)a3 + 64) |= (-1 - 2 * v10) & 3;
  }
  if ( v10 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a2;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
    v17 = *((_DWORD *)a2 + 16);
LABEL_25:
    *((_DWORD *)a3 + 16) = v17;
    return;
  }
  if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(a2) )
    return;
  v12 = (char)(16 * *((_BYTE *)a2 + 65)) >> 6;
  if ( v12 )
  {
    v8 = v12 == 1;
  }
  else
  {
    if ( !(unsigned __int8)CMILMatrix::IsAffine<1>(a2, 0LL)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 8) - 0.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 9) - 0.0) & _xmm) >= 0.000081380211 )
    {
      v8 = 0;
    }
    *((_BYTE *)a2 + 65) &= 0xF3u;
    *((_BYTE *)a2 + 65) |= (-4 - 8 * v8) & 0xC;
  }
  if ( v8
    && (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(a2)
    && (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(a2)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 10) - 1.0) & _xmm) < 0.000081380211 )
  {
    v13 = *((float *)a2 + 14);
    v14 = a3;
    v15 = *((float *)a2 + 13);
    v16 = *((float *)a2 + 12);
LABEL_21:
    CMILMatrix::Translate(v14, v16, v15, v13);
    return;
  }
  if ( CMILMatrix::IsTranslate<1>((__int64)a3, v11) )
  {
    v18 = *((float *)a3 + 12);
    v19 = *((float *)a3 + 13);
    v20 = *((float *)a3 + 14);
    *(_OWORD *)a3 = *(_OWORD *)a2;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
    *((_DWORD *)a3 + 16) = *((_DWORD *)a2 + 16);
    CMILMatrix::PrependTranslate(a3, v18, v19, v20);
    return;
  }
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(a2) )
  {
    v21 = *((float *)a2 + 12);
    v22 = *((float *)a2 + 13);
    v23 = *((float *)a2 + 14);
    CMILMatrix::Scale(a3, *(float *)a2, *((float *)a2 + 5), *((float *)a2 + 10));
    v13 = v23;
    v15 = v22;
    v16 = v21;
    goto LABEL_21;
  }
  if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a3) && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a2) )
  {
    v31 = *((_DWORD *)a3 + 1);
    v32 = *((float *)a3 + 10);
    v33 = *((float *)a3 + 14);
    v51[0] = *(_DWORD *)a3;
    v34 = *((_DWORD *)a3 + 4);
    v51[1] = v31;
    v35 = *((_DWORD *)a3 + 5);
    v51[2] = v34;
    v36 = *((_DWORD *)a3 + 12);
    v51[3] = v35;
    v37 = *((_DWORD *)a3 + 13);
    v51[4] = v36;
    v38 = *(_DWORD *)a2;
    v51[5] = v37;
    v39 = *((_DWORD *)a2 + 1);
    v50[0] = v38;
    v40 = *((_DWORD *)a2 + 4);
    v50[1] = v39;
    v41 = *((_DWORD *)a2 + 5);
    v50[2] = v40;
    v42 = *((_DWORD *)a2 + 12);
    v50[3] = v41;
    v43 = *((_DWORD *)a2 + 13);
    v50[4] = v42;
    v50[5] = v43;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)v52,
      (const struct D2D1::Matrix3x2F *)v51,
      (const struct D2D1::Matrix3x2F *)v50);
    CMILMatrix::Set2DAffineMatrix(a3, v52[0], v52[1], v52[2], v52[3], v52[4], v52[5]);
    *((float *)a3 + 10) = v32 * *((float *)a2 + 10);
    *((float *)a3 + 14) = (float)(v33 * *((float *)a2 + 10)) + *((float *)a2 + 14);
  }
  else
  {
    v44 = (_OWORD *)Windows::Foundation::Numerics::operator*(&v45, a3, a2);
    *(_OWORD *)a3 = *v44;
    *((_OWORD *)a3 + 1) = v44[1];
    *((_OWORD *)a3 + 2) = v44[2];
    *((_OWORD *)a3 + 3) = v44[3];
    *((_DWORD *)a3 + 16) = 0;
  }
}
