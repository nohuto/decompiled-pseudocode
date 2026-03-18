/*
 * XREFs of ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C007AD98
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C000AE98 (GreGetDxSharedSurface.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0078BB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C007A4F0 (GreSetRedirectionSurfaceSignaling.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C007AC9C (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C00D8400 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C015982A (GreAddBitmapD3DDirtyRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C0267938 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetUpdateId @ 0x1C0267C44 (GreHLsurfSetUpdateId.c)
 *     GreWindowResizeComplete @ 0x1C0268454 (GreWindowResizeComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::bDeviceBitmap(SFMLOGICALSURFACE *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 23);
  if ( !v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 92) & 1) == 0 )
    return 0;
  return v2;
}
