/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C948
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C000BF70 (-vCleanupDCs@@YAXK@Z.c)
 *     GreGetNearestColor @ 0x1C0021710 (GreGetNearestColor.c)
 *     hdcOpenDCW @ 0x1C0022A00 (hdcOpenDCW.c)
 *     GreGetClipBox @ 0x1C003B540 (GreGetClipBox.c)
 *     bDeleteDCInternalEx @ 0x1C003C730 (bDeleteDCInternalEx.c)
 *     GreCreateCompatibleDC @ 0x1C003C7B0 (GreCreateCompatibleDC.c)
 *     GreGetDCPoint @ 0x1C00722C0 (GreGetDCPoint.c)
 *     GreIntersectClipRect @ 0x1C0072520 (GreIntersectClipRect.c)
 *     GreGetDeviceCaps @ 0x1C0092320 (GreGetDeviceCaps.c)
 *     GreCleanDC @ 0x1C0093490 (GreCleanDC.c)
 *     GreSetLayout @ 0x1C0093E60 (GreSetLayout.c)
 *     NtGdiCreateMetafileDC @ 0x1C00A4890 (NtGdiCreateMetafileDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00CC150 (GreCleanDCAndSetOwnerEx.c)
 *     GreRestoreDCInternal @ 0x1C00CC1F0 (GreRestoreDCInternal.c)
 *     GreSelectBrush @ 0x1C013C0F0 (GreSelectBrush.c)
 *     GreSelectPen @ 0x1C013C150 (GreSelectPen.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C01426E0 (NtGdiGetDeviceCapsAll.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0144640 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C01488BC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0148D20 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C0148EE0 (NtGdiGetGammaRampCapability.c)
 *     GreSelectPalette @ 0x1C01497F0 (GreSelectPalette.c)
 *     GreSetMagicColors @ 0x1C0149888 (GreSetMagicColors.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C014A2B0 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00C7FA0 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00C816C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 16);
  XDCOBJ::vLock(this, a2);
  return this;
}
