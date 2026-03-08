/*
 * XREFs of ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18012ACEC
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18000F1BC (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800D87F0 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x1801D08B0 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D149C (-DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801D2240 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801D26C0 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x1801EEF14 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180078480 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithSolidColor(struct CDrawingContext *a1, _OWORD *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rcx
  struct CGeometryOnlyDrawListBrush *v11; // [rsp+38h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp-10h]
  struct CGeometryOnlyDrawListBrush *v13; // [rsp+80h] [rbp+30h]
  __int64 *v14; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  if ( COERCE_FLOAT(*(_DWORD *)(a3 + 12) & _xmm) >= 0.0000011920929 || *((_DWORD *)a1 + 90) || *((_DWORD *)a1 + 85) )
  {
    v13 = 0LL;
    v11 = 0LL;
    v12 = 1;
    v3 = CGeometryOnlyDrawListBrush::Create(&v11);
    if ( v12 )
    {
      v7 = 0LL;
      v13 = v11;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v3, 0x935u, 0LL);
    }
    else
    {
      *((_DWORD *)v13 + 12) = 0;
      *((_BYTE *)v13 + 52) = 1;
      *((_OWORD *)v13 + 2) = 0LL;
      v8 = (__int64 *)v13;
      v13 = 0LL;
      v14 = v8;
      v3 = CDrawingContext::FillRectanglesWithDrawListBrush(a1, &v14, a2, (__int128 *)a3);
      if ( v14 )
        std::default_delete<CDrawListBrush>::operator()(v9, (__int64 (__fastcall ***)(_QWORD, __int64))v14);
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x93Fu, 0LL);
    }
    if ( v13 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v13, 1);
  }
  return (unsigned int)v3;
}
