/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10
 * Callers:
 *     NtGdiGetMonitorID @ 0x1C0004A80 (NtGdiGetMonitorID.c)
 *     vCleanupUMWindowlessSprite @ 0x1C00220C0 (vCleanupUMWindowlessSprite.c)
 *     GreCreateDIBitmapReal @ 0x1C002BC78 (GreCreateDIBitmapReal.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00414F0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00419B4 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0041E44 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C008AE7C (GreSetRedirectionSurfaceSignaling.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008DF8C (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     GreAccNotifyWindow @ 0x1C00909D4 (GreAccNotifyWindow.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0091B20 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00CBDF4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreGetBitmapBits @ 0x1C00E67A4 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00E6BE0 (GreSetBitmapBits.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C00FF9EC (GreEndGdiRenderingToDxSurface.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0100F28 (GreBeginGdiRenderingToDxSurface.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C01073E0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     GreRealizeDefaultPalette @ 0x1C0116400 (GreRealizeDefaultPalette.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C011768C (GreLddmProcessDesktopSwitch.c)
 *     GreGetSystemPaletteUse @ 0x1C0119758 (GreGetSystemPaletteUse.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C0123804 (GreDxgkPreSessionDisconnected.c)
 *     GreRealizePalette @ 0x1C01470CC (GreRealizePalette.c)
 *     GreCreateDIBitmapComp @ 0x1C014A20C (GreCreateDIBitmapComp.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015DB6C (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026B85C (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BE20 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BF68 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026D608 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026D780 (GreHLsurfSetUpdateId.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0273714 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0273A8C (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C02745B0 (DxgkEngBltViaGDI.c)
 *     GreDxDwmShutdown @ 0x1C0275600 (GreDxDwmShutdown.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C029F870 (GreCreateBitmapFromDxSurface.c)
 *     GreCreateHalftonePalette @ 0x1C02B5EAC (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B6080 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C02B6390 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B6B20 (NtGdiUpdateColors.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02BBB68 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C02BFBA8 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02BFC5C (GreSetBitmapDimension.c)
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
