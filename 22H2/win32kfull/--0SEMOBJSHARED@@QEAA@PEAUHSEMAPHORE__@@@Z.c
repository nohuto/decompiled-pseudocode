/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C007AC00
 * Callers:
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C001AE84 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C002D2BC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     bSetDevDragRect @ 0x1C006EAD0 (bSetDevDragRect.c)
 *     GreMovePointer @ 0x1C0078400 (GreMovePointer.c)
 *     GreDwmGetSurfaceData @ 0x1C007AA30 (GreDwmGetSurfaceData.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0088D28 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C01357DC (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0267774 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0268210 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C0283DA0 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C028407C (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0284260 (bSetDevPreviewRect.c)
 *     GreSaveScreenBits @ 0x1C02A7EE4 (GreSaveScreenBits.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B4F3C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B5720 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
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
