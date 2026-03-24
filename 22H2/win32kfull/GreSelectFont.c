/*
 * XREFs of GreSelectFont @ 0x1C0045E80
 * Callers:
 *     xxxMenuDraw @ 0x1C0043668 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C004470C (xxxDrawMenuItem.c)
 *     DrawFrameControl @ 0x1C0045B98 (DrawFrameControl.c)
 *     xxxMNCompute @ 0x1C0047BA4 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0048148 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00DB224 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1BE0 (xxxDrawMenuBarUnderlines.c)
 *     xxxSetNCFonts @ 0x1C00E2938 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C00E2FD0 (ValidateExternalLogFont.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00E4EE0 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     FinalUserInit @ 0x1C00E4FC8 (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x1C00E5F18 (MNSetupAnimationDC.c)
 *     _ServerFixupMenuDC @ 0x1C0106800 (_ServerFixupMenuDC.c)
 *     xxxDrawCaptionTemp @ 0x1C0158B14 (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C0159590 (CreateCompatiblePublicDC.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C0168AB4 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     CreateScaledFont @ 0x1C01E9E50 (CreateScaledFont.c)
 *     MNAllocMenuState @ 0x1C0221278 (MNAllocMenuState.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0222CD0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022B720 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0242388 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0242A6C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxMNInvertItem @ 0x1C024C7C0 (xxxMNInvertItem.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C0250620 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C0250784 (xxxDrawState.c)
 * Callees:
 *     GreSelectFontInternal @ 0x1C016C948 (GreSelectFontInternal.c)
 */

__int64 __fastcall GreSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
