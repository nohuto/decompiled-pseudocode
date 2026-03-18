/*
 * XREFs of ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     GreGetBoundsRect @ 0x1C0009A58 (GreGetBoundsRect.c)
 *     NtGdiFastPolyPolyline @ 0x1C000C9F0 (NtGdiFastPolyPolyline.c)
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     ?GreExtTextOutRect@@YAHPEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C001DC04 (-GreExtTextOutRect@@YAHPEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C002C4E0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C00D8400 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreGetAppClipBox @ 0x1C00D9B30 (GreGetAppClipBox.c)
 *     NtGdiPatBlt @ 0x1C00DBEF0 (NtGdiPatBlt.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0119504 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GreDrawEscape@@YAHPEAUHDC__@@HAEBV?$umptr_r@D@@@Z @ 0x1C02754CC (-GreDrawEscape@@YAHPEAUHDC__@@HAEBV-$umptr_r@D@@@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0276D58 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GrePlgBlt @ 0x1C0290EF0 (GrePlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0297970 (NtGdiTransparentBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C029A2A0 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02A8594 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02A8FD0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02A9590 (NtGdiFrameRgn.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02AA938 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiUpdateColors @ 0x1C02D2A60 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02D4500 (NtGdiExtFloodFill.c)
 *     ?GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D7814 (-GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiSwapBuffers @ 0x1C02D84A0 (NtGdiSwapBuffers.c)
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
