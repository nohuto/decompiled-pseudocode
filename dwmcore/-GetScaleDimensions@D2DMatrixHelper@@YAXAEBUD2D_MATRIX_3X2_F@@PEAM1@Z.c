/*
 * XREFs of ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18007EF18
 * Callers:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800308A8 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x180038318 (-DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@A.c)
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x18007D760 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801F9678 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

void __fastcall D2DMatrixHelper::GetScaleDimensions(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  float v7; // xmm6_4
  float v8; // xmm0_4

  v7 = sqrtf_0((float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1)));
  v8 = sqrtf_0((float)(*((float *)this + 2) * *((float *)this + 2)) + (float)(*((float *)this + 3) * *((float *)this + 3)));
  a2->m11 = v7;
  *a3 = v8;
}
