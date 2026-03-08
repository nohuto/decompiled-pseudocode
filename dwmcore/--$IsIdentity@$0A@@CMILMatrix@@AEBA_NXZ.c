/*
 * XREFs of ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800620E0
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DF00 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18000E098 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x180019744 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180057EB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180086070 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x18008A6C8 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18008CA84 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800C6160 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x1801AAAFC (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801AAFC0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801D1120 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801EEC3C (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?IsIdentity@CMILMatrix@@QEBA_NXZ @ 0x18026CEFC (-IsIdentity@CMILMatrix@@QEBA_NXZ.c)
 * Callees:
 *     ??$ProducesUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180061FEC (--$ProducesUniformZ@$0A@@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CMILMatrix::IsIdentity<0>(__int64 a1)
{
  char v2; // al
  char v3; // cl
  __int64 v4; // r8
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  char v9; // al
  float v10; // xmm0_4
  char v11; // al
  char v12; // cl
  char result; // al

  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0)
                     + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0))
             + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) == 1.0 )
  {
    v2 = *(_BYTE *)(a1 + 65);
    v3 = 1;
    *(_BYTE *)(a1 + 65) = v2 & 0xCF | 0x10;
  }
  else
  {
    v3 = 0;
  }
  if ( ((unsigned __int8)v3 & ((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) == 0.0)) == 0 )
    return 0;
  if ( *(float *)(a1 + 32) != 0.0 )
    return 0;
  if ( *(float *)(a1 + 36) != 0.0 )
    return 0;
  *(_BYTE *)(a1 + 65) = *(_BYTE *)(a1 + 65) & 0xF3 | 4;
  if ( !CMILMatrix::ProducesUniformZ<0>(a1) )
    return 0;
  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v4 + 28) & _xmm) * 61440.0)
                     + (float)(COERCE_FLOAT(*(_DWORD *)(v4 + 12) & _xmm) * 61440.0))
             + COERCE_FLOAT(*(_DWORD *)(v4 + 60) & _xmm)) != v6 )
    return 0;
  v7 = *(float *)(v4 + 4);
  *(_BYTE *)(v4 + 65) = *(_BYTE *)(v4 + 65) & 0xCF | 0x10;
  if ( v7 != v5 )
    return 0;
  if ( *(float *)(v4 + 16) != v5 )
    return 0;
  v8 = *(float *)v4;
  v9 = *(_BYTE *)(v4 + 64) & 0x3F | 0x40;
  *(_BYTE *)(v4 + 64) = v9;
  if ( v8 != v6 )
    return 0;
  if ( *(float *)(v4 + 20) != v6 )
    return 0;
  v10 = *(float *)(v4 + 40);
  v11 = v9 & 0xCF | 0x10;
  *(_BYTE *)(v4 + 64) = v11;
  if ( v10 != v6 || *(float *)(v4 + 48) != v5 || *(float *)(v4 + 52) != v5 || *(float *)(v4 + 56) != v5 )
    return 0;
  v12 = v11;
  result = 1;
  *(_BYTE *)(v4 + 64) = v12 & 0xFC | 1;
  return result;
}
