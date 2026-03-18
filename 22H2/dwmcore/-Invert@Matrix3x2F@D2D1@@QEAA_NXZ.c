/*
 * XREFs of ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1800E7B68
 * Callers:
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x18007D930 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x1800E7A74 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x1801F3D04 (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1801FC1B0 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180257570 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 *     ?SetD2DEffectProperties@CAffineTransform2DEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180257970 (-SetD2DEffectProperties@CAffineTransform2DEffect@@MEAAJPEAUID2D1Effect@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall D2D1::Matrix3x2F::Invert(D2D1_MATRIX_3X2_F *this)
{
  return D2D1InvertMatrix(this);
}
