/*
 * XREFs of ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00851E0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0090830 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreExtTextOutRect @ 0x1C00AA21C (GreExtTextOutRect.c)
 *     GrePolyTextOutW @ 0x1C00AA89C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C00AAE5C (GreExtTextOutWInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00AE0CC (GreStretchDIBitsInternal.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C00B3410 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00B42B0 (NtGdiPatBlt.c)
 *     GreGradientFill @ 0x1C00B63E4 (GreGradientFill.c)
 *     GreGetAppClipBox @ 0x1C00B6A6C (GreGetAppClipBox.c)
 *     GreGetBoundsRect @ 0x1C00FC958 (GreGetBoundsRect.c)
 *     GreMaskBlt @ 0x1C010979C (GreMaskBlt.c)
 *     NtGdiFrameRgn @ 0x1C013EC70 (NtGdiFrameRgn.c)
 *     NtGdiFastPolyPolyline @ 0x1C0142FA0 (NtGdiFastPolyPolyline.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C01454C4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0145E54 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiFillRgn @ 0x1C0146850 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0146E94 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0148F08 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0156210 (NtGdiTransparentBlt.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0164ED8 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027BC58 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C027C884 (GreDrawEscape.c)
 *     GrePlgBlt @ 0x1C028DBB0 (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C02B89F0 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02BA3E0 (NtGdiExtFloodFill.c)
 *     NtGdiSwapBuffers @ 0x1C02BD080 (NtGdiSwapBuffers.c)
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
