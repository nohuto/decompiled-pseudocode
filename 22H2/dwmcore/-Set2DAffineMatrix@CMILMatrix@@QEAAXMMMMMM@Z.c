/*
 * XREFs of ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800B11AC
 * Callers:
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18000E188 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?GetScaledLetterboxingMargins@CBitmapRealization@@QEBA_NPEAUMilRectF@@@Z @ 0x1800142A4 (-GetScaledLetterboxingMargins@CBitmapRealization@@QEBA_NPEAUMilRectF@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058648 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058A10 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063690 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x18006DF00 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800707C0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071B00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073C30 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1800B10FC (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 *     ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B1150 (-GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CComponentTransform2D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180132380 (-GetRealization@CComponentTransform2D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?SetMatrix@CMILMatrix@@QEAAXMMMMMMMMMMMMMMMM@Z @ 0x1801347F8 (-SetMatrix@CMILMatrix@@QEAAXMMMMMMMMMMMMMMMM@Z.c)
 */

void __fastcall CMILMatrix::Set2DAffineMatrix(
        CMILMatrix *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  CMILMatrix::SetMatrix(this, a2, a3, 0.0, 0.0, a4, a5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, a6, a7, 0.0, 1.0);
  *((_BYTE *)this + 64) = *((_BYTE *)this + 64) & 0xF3 | 4;
  *((_BYTE *)this + 65) = *((_BYTE *)this + 65) & 0xC3 | 0x14;
}
