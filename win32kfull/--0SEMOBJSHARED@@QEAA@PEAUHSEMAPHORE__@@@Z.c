/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C001F240
 * Callers:
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C001D0C8 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     bSetDevDragRect @ 0x1C001DE80 (bSetDevDragRect.c)
 *     GreMovePointer @ 0x1C001E270 (GreMovePointer.c)
 *     GreDwmGetSurfaceData @ 0x1C0029774 (GreDwmGetSurfaceData.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0044690 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B842C (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C01297DC (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026A184 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026AB80 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C02866B0 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C028698C (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0286B70 (bSetDevPreviewRect.c)
 *     GreSaveScreenBits @ 0x1C02AA584 (GreSaveScreenBits.c)
 * Callees:
 *     <none>
 */

SEMOBJSHARED *__fastcall SEMOBJSHARED::SEMOBJSHARED(SEMOBJSHARED *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  GreAcquireSemaphoreSharedInternal(a2);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
  return this;
}
