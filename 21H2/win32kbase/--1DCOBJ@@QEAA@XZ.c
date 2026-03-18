/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C001783C (-vCleanupDCs@@YAXK@Z.c)
 *     GreGetClipBox @ 0x1C001BC60 (GreGetClipBox.c)
 *     bDeleteDCInternalEx @ 0x1C002DFD0 (bDeleteDCInternalEx.c)
 *     GreCreateCompatibleDC @ 0x1C002E050 (GreCreateCompatibleDC.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002E1F0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     NtGdiGetDeviceCaps @ 0x1C002E300 (NtGdiGetDeviceCaps.c)
 *     GreGetNearestColor @ 0x1C0062D20 (GreGetNearestColor.c)
 *     GreGetDeviceCaps @ 0x1C00642D0 (GreGetDeviceCaps.c)
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 *     GreCleanDC @ 0x1C009C3E0 (GreCleanDC.c)
 *     GreSetLayout @ 0x1C009E0A0 (GreSetLayout.c)
 *     GreGetDCPoint @ 0x1C00AB470 (GreGetDCPoint.c)
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 *     GreIntersectClipRect @ 0x1C00CA500 (GreIntersectClipRect.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00CD460 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiCreateMetafileDC @ 0x1C00CDAB0 (NtGdiCreateMetafileDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00DBCF0 (GreCleanDCAndSetOwnerEx.c)
 *     GreSelectBrush @ 0x1C0169250 (GreSelectBrush.c)
 *     GreSelectPen @ 0x1C01692B0 (GreSelectPen.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0171244 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSelectPalette @ 0x1C01757D0 (GreSelectPalette.c)
 *     GreSetMagicColors @ 0x1C0175868 (GreSetMagicColors.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C0176230 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C00D8C28 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00D9014 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 16);
}
