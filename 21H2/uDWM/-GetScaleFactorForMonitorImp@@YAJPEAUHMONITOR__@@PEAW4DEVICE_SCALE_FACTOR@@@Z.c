/*
 * XREFs of ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000CF38
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18000CD24 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x1800101A0 (-IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800120F8 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800B92D8 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800B9558 (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ??0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z @ 0x18000CF80 (--0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall GetScaleFactorForMonitorImp(HMONITOR a1, enum DEVICE_SCALE_FACTOR *a2)
{
  CImmersiveOrPrimaryMonitor *v3; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-38h] BYREF

  v3 = CImmersiveOrPrimaryMonitor::CImmersiveOrPrimaryMonitor((CImmersiveOrPrimaryMonitor *)v5, a1);
  *a2 = *(enum DEVICE_SCALE_FACTOR *)v3;
  return *((unsigned int *)v3 + 9);
}
