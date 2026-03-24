/*
 * XREFs of ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00B7A60
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087D58 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C00B5AD0 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     xxEngNineGrid @ 0x1C00C9058 (xxEngNineGrid.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00CB2CC (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     GreGetBoundsRect @ 0x1C00FC958 (GreGetBoundsRect.c)
 *     GreSetBoundsRect @ 0x1C0111294 (GreSetBoundsRect.c)
 *     GreRectangle @ 0x1C01440E0 (GreRectangle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0270200 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreLockDisplayArea @ 0x1C02858C8 (GreLockDisplayArea.c)
 *     GreUnlockDisplayArea @ 0x1C0285ACC (GreUnlockDisplayArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bWrapped(ERECTL *this)
{
  return *(_DWORD *)this >= *((_DWORD *)this + 2) || *((_DWORD *)this + 1) >= *((_DWORD *)this + 3);
}
