/*
 * XREFs of ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4
 * Callers:
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0062CDC (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0063124 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087CC8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008EF50 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiModifyWorldTransform @ 0x1C0098390 (NtGdiModifyWorldTransform.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C0099E6C (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C009E6F4 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C009FB5C (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00A8EAC (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00ADD74 (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     GreGradientFill @ 0x1C00B6084 (GreGradientFill.c)
 *     GreGetAppClipBox @ 0x1C00B670C (GreGetAppClipBox.c)
 *     GreRectVisible @ 0x1C00B8180 (GreRectVisible.c)
 *     GreExcludeClipRect @ 0x1C00B9BE0 (GreExcludeClipRect.c)
 *     GreGetTextExtentW @ 0x1C00E337C (GreGetTextExtentW.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C00E8988 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     GreGetBoundsRect @ 0x1C00FC608 (GreGetBoundsRect.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C00FFFB0 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     NtGdiGetPixel @ 0x1C0109060 (NtGdiGetPixel.c)
 *     GreMaskBlt @ 0x1C010941C (GreMaskBlt.c)
 *     GreSetWindowOrg @ 0x1C010C2D0 (GreSetWindowOrg.c)
 *     GreSetViewportOrg @ 0x1C010C438 (GreSetViewportOrg.c)
 *     GreSetBoundsRect @ 0x1C0110F14 (GreSetBoundsRect.c)
 *     NtGdiFrameRgn @ 0x1C013E790 (NtGdiFrameRgn.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C013FC68 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0141FB4 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     NtGdiRoundRect @ 0x1C0142270 (NtGdiRoundRect.c)
 *     GrePolyPolylineInternal @ 0x1C0142620 (GrePolyPolylineInternal.c)
 *     NtGdiFastPolyPolyline @ 0x1C01429F0 (NtGdiFastPolyPolyline.c)
 *     GrePolylineTo @ 0x1C0143720 (GrePolylineTo.c)
 *     GreRectangle @ 0x1C0143B30 (GreRectangle.c)
 *     GrePolyBezierTo @ 0x1C0144380 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C0144990 (GrePolyPolygonInternal.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0144B70 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0144F14 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiFillRgn @ 0x1C01462A0 (NtGdiFillRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0148958 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiComputeXformCoefficients @ 0x1C0150D50 (NtGdiComputeXformCoefficients.c)
 *     NtGdiSetPixel @ 0x1C0155820 (NtGdiSetPixel.c)
 *     NtGdiTransparentBlt @ 0x1C0155C50 (NtGdiTransparentBlt.c)
 *     NtGdiOffsetClipRgn @ 0x1C0156E50 (NtGdiOffsetClipRgn.c)
 *     GreGetTransform @ 0x1C016D15C (GreGetTransform.c)
 *     GreGetTextExtentExW @ 0x1C016D540 (GreGetTextExtentExW.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0297BB4 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     NtGdiPtVisible @ 0x1C029F2C0 (NtGdiPtVisible.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C029F4DC (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C029F740 (GreAngleArc.c)
 *     GreMoveTo @ 0x1C029FC94 (GreMoveTo.c)
 *     GrePolyDraw @ 0x1C029FF08 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C02A03D0 (NtGdiEllipse.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A7D6C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     NtGdiGetPath @ 0x1C02AD120 (NtGdiGetPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02AD510 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02AD6B0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02AD7F0 (NtGdiWidenPath.c)
 *     NtGdiArcInternal @ 0x1C02B0BC0 (NtGdiArcInternal.c)
 *     NtGdiConvertMetafileRect @ 0x1C02B6BE0 (NtGdiConvertMetafileRect.c)
 *     NtGdiExtFloodFill @ 0x1C02B97B0 (NtGdiExtFloodFill.c)
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
