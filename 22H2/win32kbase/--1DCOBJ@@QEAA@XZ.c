/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68
 * Callers:
 *     GreRestoreDC @ 0x1C000F0E0 (GreRestoreDC.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C001C770 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0035FD4 (-vCleanupDCs@@YAXK@Z.c)
 *     GreCleanDC @ 0x1C0038740 (GreCleanDC.c)
 *     GreGetClipBox @ 0x1C00389B0 (GreGetClipBox.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreRestoreOwnedDC @ 0x1C0039180 (GreRestoreOwnedDC.c)
 *     GreSelectPalette @ 0x1C003A9E0 (GreSelectPalette.c)
 *     GreIntersectClipRect @ 0x1C003ADF0 (GreIntersectClipRect.c)
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     GreGetDCPoint @ 0x1C003B970 (GreGetDCPoint.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C003BBC0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     GreCreateCompatibleDC @ 0x1C003BC40 (GreCreateCompatibleDC.c)
 *     GreGetDeviceCaps @ 0x1C005D880 (GreGetDeviceCaps.c)
 *     GreGetNearestColor @ 0x1C005FC20 (GreGetNearestColor.c)
 *     GreSelectBrush @ 0x1C0089360 (GreSelectBrush.c)
 *     GreSetLayout @ 0x1C00C2AA0 (GreSetLayout.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00D32B0 (GreCleanDCAndSetOwnerEx.c)
 *     GreSelectPen @ 0x1C0150E50 (GreSelectPen.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C015F630 (NtGdiGetDeviceCapsAll.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C016145C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     NtGdiCreateMetafileDC @ 0x1C016C5C0 (NtGdiCreateMetafileDC.c)
 *     GreSetMagicColors @ 0x1C016C76C (GreSetMagicColors.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C004005C (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
  PopThreadGuardedObject((char *)this + 16);
}
