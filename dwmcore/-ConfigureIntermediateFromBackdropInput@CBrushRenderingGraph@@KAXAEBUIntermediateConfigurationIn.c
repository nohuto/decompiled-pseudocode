/*
 * XREFs of ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800378C4
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180037D40 (-RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800FB294 (-RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?PixelInflate@@YA?AUD2D_RECT_F@@AEBU1@@Z @ 0x180035CFC (-PixelInflate@@YA-AUD2D_RECT_F@@AEBU1@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037B64 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180078358 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007FA38 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800B6654 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
        FLOAT *a1,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a2)
{
  FLOAT v2; // xmm0_4
  FLOAT v4; // xmm1_4
  __int64 v6; // r15
  __int64 v7; // r13
  FLOAT v8; // xmm0_4
  FLOAT v9; // xmm1_4
  struct D2D_MATRIX_3X2_F *v10; // r9
  FLOAT bottom; // xmm1_4
  __m128 v12; // xmm7
  float v13; // xmm6_4
  __int64 v14; // rax
  float v15; // xmm6_4
  __int64 v16; // rax
  float v17; // xmm6_4
  int v18; // [rsp+28h] [rbp-89h]
  int v19; // [rsp+2Ch] [rbp-85h]
  _BYTE v20[40]; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v21[40]; // [rsp+58h] [rbp-59h] BYREF
  struct D2D_RECT_F v22; // [rsp+80h] [rbp-31h] BYREF
  float v23; // [rsp+90h] [rbp-21h]
  float v24; // [rsp+94h] [rbp-1Dh]
  struct D2D_RECT_F v25; // [rsp+98h] [rbp-19h] BYREF

  v2 = *a1;
  v4 = a1[1];
  v7 = *(_QWORD *)a2;
  v6 = *((_QWORD *)a1 + 2);
  v25.left = 0.0;
  v25.top = 0.0;
  v25.right = v2;
  v25.bottom = v4;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v6);
  v22.top = 0.0;
  v22.right = 0.0;
  v22.left = (float)v18;
  v22.bottom = (float)v19;
  v23 = 0.0 - (float)((float)v18 * 0.0);
  v24 = 0.0 - (float)((float)v19 * 0.0);
  Matrix3x3::operator*(v6 + 48, v20, &v22);
  Matrix3x3::Get2DScaleDimensionsWithPerspective(v20, (char *)a2 + 24, (char *)a2 + 28, &v25);
  v8 = *a1;
  v9 = a1[1];
  v25.left = 0.0;
  v25.top = 0.0;
  v25.right = v8;
  v25.bottom = v9;
  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v25, (const struct D2D_RECT_F *)(v6 + 84), &v22, v10);
  bottom = v22.bottom;
  *((_DWORD *)a2 + 4) = LODWORD(v22.left);
  *((FLOAT *)a2 + 5) = bottom;
  v12 = (__m128)_mm_loadu_si128((const __m128i *)PixelInflate(&v25, (const struct D2D_RECT_F *)(v6 + 84)));
  v13 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  *((float *)a2 + 2) = _mm_shuffle_ps(v12, v12, 170).m128_f32[0] - v12.m128_f32[0];
  *((float *)a2 + 3) = _mm_shuffle_ps(v12, v12, 255).m128_f32[0] - v13;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v6);
  v22.top = 0.0;
  v22.left = (float)v18;
  v22.right = 0.0;
  v22.bottom = (float)v19;
  v23 = 0.0 - (float)((float)v18 * 0.0);
  v24 = 0.0 - (float)((float)v19 * 0.0);
  v14 = Matrix3x3::operator*(v6 + 48, v20, &v22);
  v12.m128_i32[0] ^= _xmm;
  LODWORD(v15) = LODWORD(v13) ^ _xmm;
  v22 = *(struct D2D_RECT_F *)&_xmm;
  v23 = v12.m128_f32[0];
  v24 = v15;
  v16 = Matrix3x3::operator*(v14, v21, &v22);
  *(_OWORD *)(v7 + 48) = *(_OWORD *)v16;
  *(_OWORD *)(v7 + 64) = *(_OWORD *)(v16 + 16);
  *(_DWORD *)(v7 + 80) = *(_DWORD *)(v16 + 32);
  *(float *)(v7 + 84) = v12.m128_f32[0] + *(float *)(v6 + 84);
  *(float *)(v7 + 88) = v15 + *(float *)(v6 + 88);
  *(float *)(v7 + 92) = v12.m128_f32[0] + *(float *)(v6 + 92);
  v17 = v15 + *(float *)(v6 + 96);
  *(_BYTE *)(v7 + 101) = 1;
  *(float *)(v7 + 96) = v17;
  *(_BYTE *)(v7 + 102) = *(_BYTE *)(v6 + 102);
  *(_BYTE *)(v7 + 103) = *(_BYTE *)(v6 + 103);
}
