/*
 * XREFs of EngSetLastError @ 0x1C00AADD0
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x1C0006A50 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0007E60 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     GrePtInRegion @ 0x1C0008190 (GrePtInRegion.c)
 *     NtGdiPolyPolyDraw @ 0x1C000DA60 (NtGdiPolyPolyDraw.c)
 *     GreRestoreDC @ 0x1C000F0E0 (GreRestoreDC.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreRestoreOwnedDC @ 0x1C0039180 (GreRestoreOwnedDC.c)
 *     GreIntersectClipRect @ 0x1C003ADF0 (GreIntersectClipRect.c)
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CBC0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     AllocateObject @ 0x1C003DE70 (AllocateObject.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C004A2E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     NtGdiGetRegionData @ 0x1C005A8F0 (NtGdiGetRegionData.c)
 *     GreGetRegionData @ 0x1C005AA00 (GreGetRegionData.c)
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C005C000 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     GreGetDeviceCaps @ 0x1C005D880 (GreGetDeviceCaps.c)
 *     GreCreatePatternBrushInternal @ 0x1C005E410 (GreCreatePatternBrushInternal.c)
 *     GreCreateBitmap @ 0x1C005EAE0 (GreCreateBitmap.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C005EB50 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     GreExtCreateRegion @ 0x1C007C890 (GreExtCreateRegion.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C007D290 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C0080270 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     GreCreateRectRgn @ 0x1C008A630 (GreCreateRectRgn.c)
 *     NtGdiCreateRectRgn @ 0x1C008A780 (NtGdiCreateRectRgn.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1C00AFFC8 (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00BA604 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00D33D8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C0152640 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C01526B0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C0152720 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C0152790 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1C015280C (-bXformRound@EXFORMOBJ@@QEAAHAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0153A28 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0156700 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD90 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C015F550 (GreGetDpiDepDefaultGuiFont.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C015F630 (NtGdiGetDeviceCapsAll.c)
 *     GreIntersectVisRect @ 0x1C016AF70 (GreIntersectVisRect.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C016B368 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bPolyPolygon @ 0x1C016D3A0 (bPolyPolygon.c)
 * Callees:
 *     <none>
 */

void __stdcall EngSetLastError(ULONG iError)
{
  _DWORD *CurrentThreadTeb; // rax

  CurrentThreadTeb = PsGetCurrentThreadTeb();
  if ( CurrentThreadTeb )
    CurrentThreadTeb[26] = iError;
}
