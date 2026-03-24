/*
 * XREFs of GreSelectFont @ 0x1C0045F20
 * Callers:
 *     xxxMenuDraw @ 0x1C0043708 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00447AC (xxxDrawMenuItem.c)
 *     DrawFrameControl @ 0x1C0045C38 (DrawFrameControl.c)
 *     xxxMNCompute @ 0x1C0047C44 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00481E8 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00DB574 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1F30 (xxxDrawMenuBarUnderlines.c)
 *     xxxSetNCFonts @ 0x1C00E2C88 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C00E3320 (ValidateExternalLogFont.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00E5230 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     FinalUserInit @ 0x1C00E5318 (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x1C00E6268 (MNSetupAnimationDC.c)
 *     _ServerFixupMenuDC @ 0x1C0106B80 (_ServerFixupMenuDC.c)
 *     xxxDrawCaptionTemp @ 0x1C01590D4 (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C0159B50 (CreateCompatiblePublicDC.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C0169284 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     CreateScaledFont @ 0x1C01EA410 (CreateScaledFont.c)
 *     MNAllocMenuState @ 0x1C0221838 (MNAllocMenuState.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223290 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022BCE0 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0242948 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C024302C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxMNInvertItem @ 0x1C024CD80 (xxxMNInvertItem.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C0250BE0 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C0250D44 (xxxDrawState.c)
 * Callees:
 *     GreSelectFontInternal @ 0x1C016D258 (GreSelectFontInternal.c)
 */

__int64 __fastcall GreSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
