/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0053708
 * Callers:
 *     GreRestoreDC @ 0x1C000D6C0 (GreRestoreDC.c)
 *     GreGetNearestColor @ 0x1C001A710 (GreGetNearestColor.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C001F480 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C006F338 (-vCleanupDCs@@YAXK@Z.c)
 *     GreSelectBrush @ 0x1C00CD8F0 (GreSelectBrush.c)
 *     GreSetLayout @ 0x1C00D1C50 (GreSetLayout.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00DEED0 (GreCleanDCAndSetOwnerEx.c)
 *     GreSelectPen @ 0x1C017E5A0 (GreSelectPen.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C018C1F0 (NtGdiGetDeviceCapsAll.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C018E1E0 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     NtGdiCreateMetafileDC @ 0x1C0199440 (NtGdiCreateMetafileDC.c)
 *     GreSetMagicColors @ 0x1C01995FC (GreSetMagicColors.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0052A00 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
