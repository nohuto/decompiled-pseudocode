/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0006F30 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0008058 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C0009194 (GreEndGdiRenderingToDxSurface.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0009468 (GreBeginGdiRenderingToDxSurface.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C000B140 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiGetMonitorID @ 0x1C000FDB0 (NtGdiGetMonitorID.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C0013394 (GreCreateBitmapFromDxSurface.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C001E978 (GreSetRedirectionSurfaceSignaling.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C001F4A4 (GreLddmProcessDesktopSwitch.c)
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x1C002941C (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     GreAccNotifyWindow @ 0x1C0029704 (GreAccNotifyWindow.c)
 *     vCleanupUMWindowlessSprite @ 0x1C002CDD0 (vCleanupUMWindowlessSprite.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004DAE8 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C0050094 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C005DF10 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008C7B8 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C00906B0 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     GreEnableEUDC @ 0x1C00B77A8 (GreEnableEUDC.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C00F6D80 (GreDxgkPreSessionDisconnected.c)
 *     GreGetSystemPaletteUse @ 0x1C00FA6A8 (GreGetSystemPaletteUse.c)
 *     GreRealizeDefaultPalette @ 0x1C00FA71C (GreRealizeDefaultPalette.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0268520 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0268B34 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0268C70 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026A4C8 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026A5FC (GreHLsurfSetUpdateId.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026E504 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0271100 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0271484 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0271CF0 (DxgkEngBltViaGDI.c)
 *     GreDxDwmShutdown @ 0x1C02728D0 (GreDxDwmShutdown.c)
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1C02B04AC (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 *     GreCreateHalftonePalette @ 0x1C02D32E0 (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02D3540 (GreGetSystemPaletteEntries.c)
 *     GreRealizePalette @ 0x1C02D3600 (GreRealizePalette.c)
 *     GreSetSystemPaletteUse @ 0x1C02D3F08 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02D47D0 (NtGdiUpdateColors.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02DA948 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1C02DFBC8 (-GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEA.c)
 *     GreGetBitmapDimension @ 0x1C02E039C (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02E04B8 (GreSetBitmapDimension.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx

  v2 = Gre::Base::Globals(this);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v2 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v2 + 10));
  return this;
}
