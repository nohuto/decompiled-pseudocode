/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0136110 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     GrePolyPolylineInternal @ 0x1C0136510 (GrePolyPolylineInternal.c)
 *     NtGdiFillPath @ 0x1C0136730 (NtGdiFillPath.c)
 *     GrePolylineTo @ 0x1C0136880 (GrePolylineTo.c)
 *     NtGdiCloseFigure @ 0x1C0136A90 (NtGdiCloseFigure.c)
 *     GreRectangle @ 0x1C0136C70 (GreRectangle.c)
 *     GrePolyBezierTo @ 0x1C0137490 (GrePolyBezierTo.c)
 *     NtGdiSelectClipPath @ 0x1C01376C0 (NtGdiSelectClipPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C013789C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     GrePolyPolygonInternal @ 0x1C0137A70 (GrePolyPolygonInternal.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137C34 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0137FE4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014D744 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027CDC0 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027D860 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C029E444 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C029E684 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C029EE18 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C029F2E0 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C029F530 (NtGdiRoundRect.c)
 *     NtGdiFlattenPath @ 0x1C02ABDD0 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02ABEC0 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02AC150 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02AC2B0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02AC450 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02AC590 (NtGdiWidenPath.c)
 *     NtGdiArcInternal @ 0x1C02AFE50 (NtGdiArcInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((char *)this + 80);
    *((_DWORD *)this + 28) = 0;
  }
}
