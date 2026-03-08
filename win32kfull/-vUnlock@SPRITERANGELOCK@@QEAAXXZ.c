/*
 * XREFs of ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0018890
 * Callers:
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0018714 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0018908 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0018CB0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C001C4E4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C001D0C8 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     bSetDevDragRect @ 0x1C001DE80 (bSetDevDragRect.c)
 *     GreMovePointer @ 0x1C001E270 (GreMovePointer.c)
 *     GreDwmGetSurfaceData @ 0x1C0029774 (GreDwmGetSurfaceData.c)
 *     vCleanupUMWindowlessSprite @ 0x1C002CDD0 (vCleanupUMWindowlessSprite.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0034150 (GreDeleteSpriteOverlapPresent.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0044690 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     GreSetPointer @ 0x1C0062EF4 (GreSetPointer.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B842C (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     EngpMovePointer @ 0x1C0127E08 (EngpMovePointer.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C01297DC (GreDwmCreatedBitmapRemotingOutput.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C012ACE4 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     DxgkEngReleaseStableSprite @ 0x1C014D680 (DxgkEngReleaseStableSprite.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026A184 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026AB80 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0271694 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027CD08 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027D564 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02803E0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpPIDLockSpriteArea@@YA?AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0283DCC (-vSpPIDLockSpriteArea@@YA-AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z.c)
 *     ?vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0283E9C (-vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z.c)
 *     GreUnlockDisplayArea @ 0x1C02864D8 (GreUnlockDisplayArea.c)
 *     bMoveDevDragRect @ 0x1C02866B0 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C028698C (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0286B70 (bSetDevPreviewRect.c)
 *     GreSaveScreenBits @ 0x1C02AA584 (GreSaveScreenBits.c)
 *     GreSetLWContentOwner @ 0x1C02D71EC (GreSetLWContentOwner.c)
 * Callees:
 *     <none>
 */

void __fastcall SPRITERANGELOCK::vUnlock(SPRITERANGELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(*(_QWORD *)this);
}
