/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D8418
 * Callers:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D094 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800634C0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x18006DD30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800705F0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetLayoutParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180073620 (-GetLayoutParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073A60 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18024B010 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3, float a4)
{
  char v7; // al
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  bool v12; // al
  float v13; // xmm0_4
  float v14; // xmm4_4

  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a4) & _xmm) >= 0.000081380211 )
  {
    v7 = (char)(4 * *((_BYTE *)this + 65)) >> 6;
    v8 = a3 * *((float *)this + 6);
    v9 = (float)((float)(a2 * *((float *)this + 1)) + (float)(a3 * *((float *)this + 5)))
       + (float)(a4 * *((float *)this + 9));
    v10 = a4 * *((float *)this + 10);
    *((float *)this + 12) = (float)((float)((float)(a3 * *((float *)this + 4)) + (float)(a2 * *(float *)this))
                                  + (float)(a4 * *((float *)this + 8)))
                          + *((float *)this + 12);
    v11 = (float)(a2 * *((float *)this + 2)) + v8;
    *((float *)this + 13) = v9 + *((float *)this + 13);
    *((float *)this + 14) = (float)(v11 + v10) + *((float *)this + 14);
    if ( v7 )
    {
      v12 = v7 == 1
         && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)this + 11) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211;
    }
    else
    {
      LODWORD(v13) = *((_DWORD *)this + 11) & _xmm;
      v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                           (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) * 61440.0)
                                         + (float)(COERCE_FLOAT(*((_DWORD *)this + 7) & _xmm) * 61440.0))
                                 + COERCE_FLOAT(*((_DWORD *)this + 15) & _xmm))
                         - 1.0) & _xmm) < 0.000081380211;
      *((_BYTE *)this + 65) ^= (*((_BYTE *)this + 65) ^ (-16 - 32 * v12)) & 0x30;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v13 * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
        v12 = 0;
    }
    if ( v12 )
    {
      *((_BYTE *)this + 64) &= 0xFCu;
    }
    else
    {
      v14 = a3 * *((float *)this + 7);
      *((_DWORD *)this + 16) = 0;
      *((float *)this + 15) = (float)((float)(v14 + (float)(a2 * *((float *)this + 3)))
                                    + (float)(a4 * *((float *)this + 11)))
                            + *((float *)this + 15);
    }
  }
}
