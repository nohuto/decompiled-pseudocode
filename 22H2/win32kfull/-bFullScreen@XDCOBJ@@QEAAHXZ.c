/*
 * XREFs of ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0085150 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00907A0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreExtTextOutRect @ 0x1C00AA01C (GreExtTextOutRect.c)
 *     GrePolyTextOutW @ 0x1C00AA69C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C00AAC5C (GreExtTextOutWInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00ADD74 (GreStretchDIBitsInternal.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C00B30B0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00B3F50 (NtGdiPatBlt.c)
 *     GreGradientFill @ 0x1C00B6084 (GreGradientFill.c)
 *     GreGetAppClipBox @ 0x1C00B670C (GreGetAppClipBox.c)
 *     GreGetBoundsRect @ 0x1C00FC608 (GreGetBoundsRect.c)
 *     GreMaskBlt @ 0x1C010941C (GreMaskBlt.c)
 *     NtGdiFrameRgn @ 0x1C013E790 (NtGdiFrameRgn.c)
 *     NtGdiFastPolyPolyline @ 0x1C01429F0 (NtGdiFastPolyPolyline.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0144F14 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C01458A4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiFillRgn @ 0x1C01462A0 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C01468E4 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0148958 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0155C50 (NtGdiTransparentBlt.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0164708 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027B628 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C027C254 (GreDrawEscape.c)
 *     GrePlgBlt @ 0x1C028D580 (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C02B7DC0 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B97B0 (NtGdiExtFloodFill.c)
 *     NtGdiSwapBuffers @ 0x1C02BC440 (NtGdiSwapBuffers.c)
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
