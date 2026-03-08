/*
 * XREFs of ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800E5C14
 * Callers:
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180022370 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800634C0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x18006DD30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800705F0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073A60 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800E5BE0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 * Callees:
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180059E30 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A530 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

bool __fastcall CMILMatrix::IsPure2DUniformZ<1>(__int64 a1)
{
  char v2; // al
  char v3; // r10

  v2 = CMILMatrix::Is2DAffine<1>(a1, 0LL);
  v3 = 0;
  if ( v2 )
    return CMILMatrix::ProducesUniformZ<1>(a1);
  return v3;
}
