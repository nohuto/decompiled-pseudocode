/*
 * XREFs of ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001F7C4
 * Callers:
 *     DrvNotifyModeChangeStartStop @ 0x1C001D468 (DrvNotifyModeChangeStartStop.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C001F074 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     GreSuspendDirectDraw @ 0x1C001F220 (GreSuspendDirectDraw.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1C001F3D0 (DxgkEngFindViewDesktopPosition.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C001F480 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C001F730 (DrvGetWDDMAdapterInfo.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C006CAF8 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C018F3A4 (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bLddmDriver(PDEVOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
  if ( ((v1 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    return (*(_DWORD *)(v1 + 160) >> 23) & 1;
  else
    return 0LL;
}
