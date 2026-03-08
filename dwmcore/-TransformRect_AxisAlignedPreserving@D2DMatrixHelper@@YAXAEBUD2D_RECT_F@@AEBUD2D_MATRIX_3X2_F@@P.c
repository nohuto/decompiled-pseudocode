/*
 * XREFs of ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180035DF4
 * Callers:
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180017F14 (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x18003584C (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C8B4 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C788 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1800D9444 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 *     ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6850 (-SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6A08 (-ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800FB7A8 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801F7758 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1801FCC70 (-EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm6_4

  v4 = (float)((float)(a2->left * *(float *)this) + (float)(a2->right * *((float *)this + 1))) + a2[1].left;
  v5 = (float)((float)(a2->top * *(float *)this) + (float)(a2->bottom * *((float *)this + 1))) + a2[1].top;
  v6 = (float)((float)(a2->top * *((float *)this + 2)) + (float)(a2->bottom * *((float *)this + 3))) + a2[1].top;
  v7 = (float)((float)(a2->left * *((float *)this + 2)) + (float)(a2->right * *((float *)this + 3))) + a2[1].left;
  a3->m11 = fminf(v4, v7);
  a3->m12 = fminf(v5, v6);
  a3->m21 = fmaxf(v4, v7);
  a3->m22 = fmaxf(v5, v6);
}
