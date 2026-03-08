/*
 * XREFs of EngSetLastError @ 0x1C00BAB10
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x1C00056E0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0006D20 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     GrePtInRegion @ 0x1C0007000 (GrePtInRegion.c)
 *     NtGdiPolyPolyDraw @ 0x1C000C360 (NtGdiPolyPolyDraw.c)
 *     GreRestoreDC @ 0x1C000D6C0 (GreRestoreDC.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0016D9C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 *     GreCreateRectRgn @ 0x1C0019F70 (GreCreateRectRgn.c)
 *     GreCreatePatternBrushInternal @ 0x1C001A060 (GreCreatePatternBrushInternal.c)
 *     NtGdiCreateRectRgn @ 0x1C001C0B0 (NtGdiCreateRectRgn.c)
 *     NtGdiGetRegionData @ 0x1C003C400 (NtGdiGetRegionData.c)
 *     GreGetRegionData @ 0x1C003C510 (GreGetRegionData.c)
 *     hdcOpenDCW @ 0x1C003C8E0 (hdcOpenDCW.c)
 *     GreGetDeviceCaps @ 0x1C003EAF0 (GreGetDeviceCaps.c)
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00455F0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0050B70 (GreCreateRectRgnIndirect.c)
 *     AllocateObject @ 0x1C0052FA0 (AllocateObject.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0056850 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C00577F0 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     GreCreateBitmap @ 0x1C005A690 (GreCreateBitmap.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C005A700 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     GreRestoreOwnedDC @ 0x1C00A46A0 (GreRestoreOwnedDC.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00AAC50 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1C00BF644 (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DEF60 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C017FDC0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C017FE30 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C017FEA0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C017FF10 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1C017FF8C (-bXformRound@EXFORMOBJ@@QEAAHAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C01811A8 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183370 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C018C110 (GreGetDpiDepDefaultGuiFont.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C018C1F0 (NtGdiGetDeviceCapsAll.c)
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C01980BC (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bPolyPolygon @ 0x1C019A250 (bPolyPolygon.c)
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
