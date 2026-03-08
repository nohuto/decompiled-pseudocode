/*
 * XREFs of ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007FBDC
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     GreGetBoundsRect @ 0x1C0009698 (GreGetBoundsRect.c)
 *     NtGdiFastPolyPolyline @ 0x1C000BDA0 (NtGdiFastPolyPolyline.c)
 *     ?GreExtTextOutRect@@YAHPEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0025810 (-GreExtTextOutRect@@YAHPEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C004D014 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C004EEA0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0083DC0 (NtGdiAlphaBlend.c)
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C008B840 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreGetAppClipBox @ 0x1C008C244 (GreGetAppClipBox.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C008C990 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GreDrawEscape@@YAHPEAUHDC__@@HAEBV?$umptr_r@D@@@Z @ 0x1C0277ED8 (-GreDrawEscape@@YAHPEAUHDC__@@HAEBV-$umptr_r@D@@@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279714 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C029A1B0 (NtGdiTransparentBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C029CA5C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02AABB4 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02AB5A0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02ABB30 (NtGdiFrameRgn.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02ACE70 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiUpdateColors @ 0x1C02D47D0 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02D6200 (NtGdiExtFloodFill.c)
 *     ?GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D9630 (-GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiSwapBuffers @ 0x1C02DA270 (NtGdiSwapBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bFullScreen(XDCOBJ *this)
{
  __int64 result; // rax
  int v2; // ecx

  result = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)this + 496LL) )
    return 1LL;
  v2 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  if ( (v2 & 0x1000) != 0 && (v2 & 0x4000) == 0 )
    return 1LL;
  return result;
}
