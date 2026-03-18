/*
 * XREFs of GreGetTextExtentW @ 0x1C007A468
 * Callers:
 *     GetCharDimensions @ 0x1C007A270 (GetCharDimensions.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0200E00 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0225BF8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0233E30 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C02382DC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxPSMTextOut @ 0x1C02417C4 (xxxPSMTextOut.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C024CCF8 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C024D088 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C024EEC0 (xxxPSMGetTextExtent.c)
 * Callees:
 *     ?GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00838A8 (-GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C00F8AA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00FA9A0 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 */

__int64 __fastcall GreGetTextExtentW(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rax
  _BYTE v10[48]; // [rsp+30h] [rbp-38h] BYREF

  v8 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v10, *(struct Gre::Full::SESSION_GLOBALS **)(v8 + 32));
  LODWORD(a4) = GrepGetTextExtentW(a1, a2, a3, a4, 1, 1024);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v10);
  return (unsigned int)a4;
}
