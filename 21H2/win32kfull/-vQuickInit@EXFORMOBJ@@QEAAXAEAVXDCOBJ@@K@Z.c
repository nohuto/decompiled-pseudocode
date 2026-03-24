/*
 * XREFs of ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44
 * Callers:
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0062D7C (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C00631C4 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087D58 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008EFE0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiModifyWorldTransform @ 0x1C0098420 (NtGdiModifyWorldTransform.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C0099EFC (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C009E784 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C009FBEC (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00A8FFC (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00AE0CC (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C00B4D10 (GreStretchBltInternal.c)
 *     GreGradientFill @ 0x1C00B63E4 (GreGradientFill.c)
 *     GreGetAppClipBox @ 0x1C00B6A6C (GreGetAppClipBox.c)
 *     GreRectVisible @ 0x1C00B84E0 (GreRectVisible.c)
 *     GreExcludeClipRect @ 0x1C00B9F40 (GreExcludeClipRect.c)
 *     GreGetTextExtentW @ 0x1C00E36CC (GreGetTextExtentW.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C00E8CD8 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     GreGetBoundsRect @ 0x1C00FC958 (GreGetBoundsRect.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C0100300 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     NtGdiGetPixel @ 0x1C01093E0 (NtGdiGetPixel.c)
 *     GreMaskBlt @ 0x1C010979C (GreMaskBlt.c)
 *     GreSetWindowOrg @ 0x1C010C650 (GreSetWindowOrg.c)
 *     GreSetViewportOrg @ 0x1C010C7B8 (GreSetViewportOrg.c)
 *     GreSetBoundsRect @ 0x1C0111294 (GreSetBoundsRect.c)
 *     NtGdiFrameRgn @ 0x1C013EC70 (NtGdiFrameRgn.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C0140208 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0142564 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     NtGdiRoundRect @ 0x1C0142820 (NtGdiRoundRect.c)
 *     GrePolyPolylineInternal @ 0x1C0142BD0 (GrePolyPolylineInternal.c)
 *     NtGdiFastPolyPolyline @ 0x1C0142FA0 (NtGdiFastPolyPolyline.c)
 *     GrePolylineTo @ 0x1C0143CD0 (GrePolylineTo.c)
 *     GreRectangle @ 0x1C01440E0 (GreRectangle.c)
 *     GrePolyBezierTo @ 0x1C0144930 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C0144F40 (GrePolyPolygonInternal.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0145120 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C01454C4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiFillRgn @ 0x1C0146850 (NtGdiFillRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0148F08 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiComputeXformCoefficients @ 0x1C0151310 (NtGdiComputeXformCoefficients.c)
 *     NtGdiSetPixel @ 0x1C0155DE0 (NtGdiSetPixel.c)
 *     NtGdiTransparentBlt @ 0x1C0156210 (NtGdiTransparentBlt.c)
 *     NtGdiOffsetClipRgn @ 0x1C0157410 (NtGdiOffsetClipRgn.c)
 *     GreGetTransform @ 0x1C016DA9C (GreGetTransform.c)
 *     GreGetTextExtentExW @ 0x1C016DED4 (GreGetTextExtentExW.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C02981E4 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     NtGdiPtVisible @ 0x1C029F8F0 (NtGdiPtVisible.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C029FB0C (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C029FD70 (GreAngleArc.c)
 *     GreMoveTo @ 0x1C02A02C4 (GreMoveTo.c)
 *     GrePolyDraw @ 0x1C02A0538 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C02A0A00 (NtGdiEllipse.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A839C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     NtGdiGetPath @ 0x1C02AD750 (NtGdiGetPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02ADB40 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02ADCE0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02ADE20 (NtGdiWidenPath.c)
 *     NtGdiArcInternal @ 0x1C02B1280 (NtGdiArcInternal.c)
 *     NtGdiConvertMetafileRect @ 0x1C02B7810 (NtGdiConvertMetafileRect.c)
 *     NtGdiExtFloodFill @ 0x1C02BA3E0 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vQuickInit(EXFORMOBJ *this, struct XDCOBJ *a2, int a3)
{
  unsigned int v4; // r8d

  *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL);
  *((_DWORD *)this + 3) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x1E000) != 0 || a3 != 516 )
  {
    v4 = a3 & 0x7FFFFFFF;
    if ( a3 >= 0 )
      v4 = a3;
    EXFORMOBJ::vInit(this, a2, v4, a3 & 0x80000000);
  }
  else
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 320LL;
  }
}
