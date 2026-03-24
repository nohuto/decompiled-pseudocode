/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018F2C
 * Callers:
 *     vCleanupUMWindowlessSprite @ 0x1C0014B70 (vCleanupUMWindowlessSprite.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C0017708 (GreSetRedirectionSurfaceSignaling.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0017990 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0017FB8 (GreBeginGdiRenderingToDxSurface.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C001816C (GreEndGdiRenderingToDxSurface.c)
 *     GreAccNotifyWindow @ 0x1C0018280 (GreAccNotifyWindow.c)
 *     GreGetBitmapBits @ 0x1C001842C (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C0018890 (GreSetBitmapBits.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C002A93C (GreLddmProcessDesktopSwitch.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C002DD04 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008D7B0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C00AC12C (GreCreateDIBitmapReal.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00B29E0 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00B2D00 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00B6048 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     GreRealizePalette @ 0x1C011BC6C (GreRealizePalette.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C011ECA0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     GreCreateDIBitmapComp @ 0x1C0122004 (GreCreateDIBitmapComp.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C0128B68 (GreDxgkPreSessionDisconnected.c)
 *     GreRealizeDefaultPalette @ 0x1C012B944 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C012DD38 (GreGetSystemPaletteUse.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C016AEEC (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026DAFC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026E0B4 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026E1F4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026FA5C (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026FBD0 (GreHLsurfSetUpdateId.c)
 *     NtGdiGetMonitorID @ 0x1C02740C0 (NtGdiGetMonitorID.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0275E08 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0276178 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0276D30 (DxgkEngBltViaGDI.c)
 *     GreDxDwmShutdown @ 0x1C0277E90 (GreDxDwmShutdown.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C02A0D70 (GreCreateBitmapFromDxSurface.c)
 *     GreCreateHalftonePalette @ 0x1C02B7D9C (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B7F20 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C02B8254 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B89F0 (NtGdiUpdateColors.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02BD5A0 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C02C1210 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02C12C0 (GreSetBitmapDimension.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  return this;
}
