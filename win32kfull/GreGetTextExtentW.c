/*
 * XREFs of GreGetTextExtentW @ 0x1C010FBEC
 * Callers:
 *     GetCharDimensions @ 0x1C010F9F4 (GetCharDimensions.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02039A0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C02288F0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0236ABC (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C023AF44 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxPSMTextOut @ 0x1C0244494 (xxxPSMTextOut.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C024F9B8 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C024FD48 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C0251BB0 (xxxPSMGetTextExtent.c)
 * Callees:
 *     ?GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C010F854 (-GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, unsigned __int16 *a2, unsigned int a3, struct tagSIZE *a4)
{
  __int64 v8; // rax
  _BYTE v10[48]; // [rsp+30h] [rbp-38h] BYREF

  v8 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v10, *(struct Gre::Full::SESSION_GLOBALS **)(v8 + 32));
  LODWORD(a4) = GrepGetTextExtentW(a1, a2, a3, a4, 1u, COERCE_FLOAT(1024));
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v10);
  return (unsigned int)a4;
}
