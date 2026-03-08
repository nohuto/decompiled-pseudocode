/*
 * XREFs of ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007FA38
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800108C0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x18003584C (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800378C4 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x180037E34 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x180038318 (-DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@A.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180076750 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x1800B45F0 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800B45F0.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801F9678 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x180225F30 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x180245A68 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1802475C8 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

char __fastcall D2DMatrixHelper::ComputeRectangleTransform(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  float v4; // xmm3_4
  float left; // xmm4_4
  char v6; // r9
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm2_4
  float top; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  float v17[6]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+64h] [rbp-1Ch]

  v4 = *(float *)this;
  left = a2->left;
  v6 = 1;
  if ( *(float *)this == a2->left
    && *((float *)this + 1) == a2->top
    && *((float *)this + 2) == a2->right
    && *((float *)this + 3) == a2->bottom )
  {
    *(_QWORD *)&a3->left = 1065353216LL;
    a3->right = 0.0;
    *(_QWORD *)&a3->bottom = 1065353216LL;
    a3[1].top = 0.0;
  }
  else
  {
    v7 = *((float *)this + 1);
    v8 = *((float *)this + 2) - v4;
    v9 = *((float *)this + 3) - v7;
    if ( v8 == 0.0 && v9 == 0.0 )
    {
      return 0;
    }
    else
    {
      top = a2->top;
      v17[1] = 0.0;
      v17[2] = 0.0;
      v18 = *(_OWORD *)&_xmm;
      v11 = a2->right - left;
      v19 = LODWORD(v4) ^ _xmm;
      v20 = LODWORD(v7) ^ _xmm;
      v17[4] = left;
      v17[5] = top;
      v17[0] = v11 / v8;
      v17[3] = (float)(a2->bottom - top) / v9;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v15,
        (const struct D2D1::Matrix3x2F *)&v18,
        (const struct D2D1::Matrix3x2F *)v17);
      v12 = v16;
      *(_OWORD *)v13 = v15;
      *(_QWORD *)(v13 + 16) = v12;
    }
  }
  return v6;
}
