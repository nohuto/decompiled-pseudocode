/*
 * XREFs of ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800FB7A8
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180037D40 (-RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800FB294 (-RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?PixelInflate@@YA?AUD2D_RECT_F@@AEBU1@@Z @ 0x180035CFC (-PixelInflate@@YA-AUD2D_RECT_F@@AEBU1@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180035DF4 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037B64 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180078358 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800B6654 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1800FBA04 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromInput(
        CBrushRenderingGraph *this,
        FLOAT *a2,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a3)
{
  FLOAT v3; // xmm0_4
  float *v4; // rbx
  __int64 v5; // rdi
  __int64 v8; // r15
  bool v9; // zf
  float *v10; // rdi
  struct D2D_RECT_F *v11; // r9
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  FLOAT v15; // xmm3_4
  float v16; // xmm0_4
  FLOAT v17; // xmm2_4
  FLOAT v18; // xmm1_4
  const struct D2D_RECT_F *v19; // r8
  __m128 v20; // xmm1
  float v21; // xmm3_4
  float v22; // xmm4_4
  __int64 v23; // [rsp+28h] [rbp-39h] BYREF
  float v24[10]; // [rsp+30h] [rbp-31h] BYREF
  struct D2D_RECT_F v25; // [rsp+58h] [rbp-9h] BYREF
  struct D2D_RECT_F v26; // [rsp+68h] [rbp+7h] BYREF
  float v27; // [rsp+78h] [rbp+17h]
  float v28; // [rsp+7Ch] [rbp+1Bh]

  v3 = *a2;
  v4 = (float *)((char *)a3 + 24);
  v5 = *((_QWORD *)a2 + 2);
  v25.left = 0.0;
  v25.top = 0.0;
  v8 = *(_QWORD *)a3;
  v9 = *(_BYTE *)(v5 + 44) == 0;
  v25.right = v3;
  v25.bottom = a2[1];
  if ( v9 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 + 56) + 8LL))(*(_QWORD *)(v5 + 56), 2LL) )
    {
      v10 = v4 + 1;
      *(_QWORD *)v4 = *((_QWORD *)a2 + 1);
      goto LABEL_4;
    }
    CSurfaceDrawListBrush::ComputeLocalToSourceTransform(*(CSurfaceDrawListBrush **)(v5 + 56), (struct Matrix3x3 *)v24);
  }
  else
  {
    CDrawListBitmap::GetSize((CDrawListBitmap *)v5, &v23);
    v26.top = 0.0;
    v26.right = 0.0;
    v26.left = (float)(int)v23;
    v26.bottom = (float)SHIDWORD(v23);
    v27 = 0.0 - (float)((float)(int)v23 * 0.0);
    v28 = 0.0 - (float)((float)SHIDWORD(v23) * 0.0);
    Matrix3x3::operator*((float *)(v5 + 48), v24, &v26.left);
  }
  v10 = v4 + 1;
  Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v24, v4, v4 + 1, &v25.left);
LABEL_4:
  v12 = fminf(a2[2], *v4);
  v13 = *((float *)a3 + 4);
  v14 = *((float *)a3 + 5);
  v25.left = 0.0;
  v25.top = 0.0;
  v26.top = 0.0;
  v15 = fmaxf(v13, v12);
  v16 = fminf(a2[3], *v10);
  v26.right = 0.0;
  *((FLOAT *)a3 + 4) = v15;
  v26.left = v15;
  v17 = fmaxf(v14, v16);
  *((FLOAT *)a3 + 5) = v17;
  v18 = a2[1];
  v25.right = *a2;
  v26.bottom = v17;
  v25.bottom = v18;
  v27 = 0.0 - (float)(v15 * 0.0);
  v28 = 0.0 - (float)(v17 * 0.0);
  D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
    (D2DMatrixHelper *)&v25,
    &v26,
    (const struct D2D_MATRIX_3X2_F *)(v8 + 84),
    v11);
  v20 = (__m128)_mm_loadu_si128((const __m128i *)PixelInflate(&v25, v19));
  *((_DWORD *)a3 + 2) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
  *((_DWORD *)a3 + 3) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
  v21 = *((float *)a3 + 4);
  v22 = *((float *)a3 + 5);
  *(_DWORD *)(v8 + 52) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 60) = 0;
  *(_DWORD *)(v8 + 68) = 0;
  *(_DWORD *)(v8 + 80) = 1065353216;
  *(float *)(v8 + 48) = v21;
  *(float *)(v8 + 64) = v22;
  *(float *)(v8 + 72) = 0.0 - (float)(v21 * 0.0);
  *(float *)(v8 + 76) = 0.0 - (float)(v22 * 0.0);
}
