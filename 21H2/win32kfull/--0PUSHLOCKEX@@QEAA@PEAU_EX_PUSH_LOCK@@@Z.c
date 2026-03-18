/*
 * XREFs of ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8
 * Callers:
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C00051F8 (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     FreeFileView @ 0x1C000D068 (FreeFileView.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0010458 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00134A0 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C001F138 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00208A4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0022588 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0084B9C (GreUpdateSpriteClipRgn.c)
 *     GreSfmCloseCompositorRef @ 0x1C0089AE4 (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C0089F6C (GreSfmOpenCompositorRef.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C008AE7C (GreSetRedirectionSurfaceSignaling.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C008EBE0 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x1C0090400 (GreNotifyDirtySprite.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B6430 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     UmfdLoadFontFile @ 0x1C00E9FA0 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00EA118 (UmfdUnloadFontFileInternal.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00EDC64 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F7180 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00F741C (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00F75FC (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F77E8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0153D4C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C01541E4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C01547D8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0155444 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0155D28 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C01566D4 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C015EED4 (--0ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01CD438 (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01CE29C (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026CCEC (GreAddBitmapD3DDirtyRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026D608 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026D780 (GreHLsurfSetUpdateId.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0281178 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C0291380 (GreEnsureDpiDepDefaultGuiFontForPlateau.c)
 *     GreMakeFontDir @ 0x1C02B99A8 (GreMakeFontDir.c)
 * Callees:
 *     <none>
 */

PUSHLOCKEX *__fastcall PUSHLOCKEX::PUSHLOCKEX(PUSHLOCKEX *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
