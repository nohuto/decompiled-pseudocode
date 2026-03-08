/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800CA0D4
 * Callers:
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C9D98 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18010A5AC (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801DA5F4 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801EFEB0 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801F0F30 (-CalcDeviceTransformDelta@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801F1470 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268430 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180289168 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMILMatrix::InferAffineMatrix(CMILMatrix *a1)
{
  float *v1; // r8
  float *v2; // rdx
  double v3; // xmm3_8
  float v4; // xmm0_4
  __int64 v5; // rcx
  float v6; // xmm0_4
  double v7; // xmm3_8
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm2_4

  CMILMatrix::SetToIdentity(a1);
  v3 = (v1[2] - *v1) / (v2[2] - *v2);
  v4 = v3;
  *(float *)v5 = v4;
  v6 = *v1 - *v2 * v3;
  *(float *)(v5 + 48) = v6;
  v7 = (v1[3] - v1[1]) / (v2[3] - v2[1]);
  v8 = v7;
  *(float *)(v5 + 20) = v8;
  v9 = v2[1];
  v10 = v1[1];
  *(_BYTE *)(v5 + 64) &= 0xCCu;
  *(float *)(v5 + 52) = v10 - v9 * v7;
}
