/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0086CD0
 * Callers:
 *     GrePtInSprite @ 0x1C0021164 (GrePtInSprite.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0026524 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     GreDwmGetSurfaceData @ 0x1C00855CC (GreDwmGetSurfaceData.c)
 *     GreMovePointer @ 0x1C0086EF0 (GreMovePointer.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00EE480 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     bSetDevDragRect @ 0x1C010FE70 (bSetDevDragRect.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C01147B0 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C015506C (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026D294 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026DCB8 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C02823D0 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C02826A4 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0282884 (bSetDevPreviewRect.c)
 *     GreSaveScreenBits @ 0x1C029D748 (GreSaveScreenBits.c)
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
