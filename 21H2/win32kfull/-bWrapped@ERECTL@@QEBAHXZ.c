/*
 * XREFs of ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C008E110
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C008B0D0 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     GreGetBoundsRect @ 0x1C008B388 (GreGetBoundsRect.c)
 *     GreSetBoundsRect @ 0x1C008BB64 (GreSetBoundsRect.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C008DA1C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     GreUnlockDisplayArea @ 0x1C01221CC (GreUnlockDisplayArea.c)
 *     GreLockDisplayArea @ 0x1C0122264 (GreLockDisplayArea.c)
 *     GreRectangle @ 0x1C0136C70 (GreRectangle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026DCB8 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bWrapped(ERECTL *this)
{
  return *(_DWORD *)this >= *((_DWORD *)this + 2) || *((_DWORD *)this + 1) >= *((_DWORD *)this + 3);
}
