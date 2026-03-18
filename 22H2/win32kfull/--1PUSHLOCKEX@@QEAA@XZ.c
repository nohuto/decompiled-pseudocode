/*
 * XREFs of ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520
 * Callers:
 *     GreAdjustSpriteDirtyAccum @ 0x1C000ABB0 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x1C000B1A0 (GreNotifyDirtySprite.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@QEAAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C000B2D0 (-hspLookupWindow@DWMALTSPRITEREF@@QEAAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C0016E88 (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C001EC30 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00597AC (GreTransferSpriteStateToDwmState.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0077DA8 (GreUpdateSpriteClipRgn.c)
 *     GreSfmCloseCompositorRef @ 0x1C0079C9C (GreSfmCloseCompositorRef.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C007A4F0 (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C007B044 (GreSfmOpenCompositorRef.c)
 *     FreeFileView @ 0x1C007C5A8 (FreeFileView.c)
 *     UmfdUnloadFontFileInternal @ 0x1C007C648 (UmfdUnloadFontFileInternal.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C007E4F8 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     UmfdLoadFontFile @ 0x1C007ECF0 (UmfdLoadFontFile.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00A5158 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00A5278 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00A5810 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00A5928 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00BB50C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0112870 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0113620 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C01144C8 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0133A6C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0133EB8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0134710 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C013F2A8 (-ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C013FD60 (--1ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1C0140128 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C015982A (GreAddBitmapD3DDirtyRgn.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01A6D78 (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A7B94 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 *     GreHLsurfSetPresentFlags @ 0x1C0267ADC (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0267C44 (GreHLsurfSetUpdateId.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C027FCB0 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0281B48 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0281D9C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0282134 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C02989F0 (GreEnsureDpiDepDefaultGuiFontForPlateau.c)
 *     GreMakeFontDir @ 0x1C02D5B38 (GreMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __fastcall PUSHLOCKEX::~PUSHLOCKEX(PUSHLOCKEX *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
