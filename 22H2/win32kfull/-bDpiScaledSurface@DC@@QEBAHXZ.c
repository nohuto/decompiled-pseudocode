/*
 * XREFs of ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0010D4C
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00D92B0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C00DA09C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00DA0C8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00DA108 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00DD3B0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00F3A70 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00FE090 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C0108194 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C010BA70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C011A2F0 (GreExtSelectClipRgnInternal.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0159CE4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C030368C (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaledSurface(DC *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 62);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 116) & 0x800) != 0;
  return v2;
}
