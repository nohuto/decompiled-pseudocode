/*
 * XREFs of GreExtTextOutW @ 0x1C0113604
 * Callers:
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C00E77D8 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C01116B0 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0113BC4 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0114038 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02039A0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0228B58 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0236C78 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C0244494 (xxxPSMTextOut.c)
 *     ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1C024FE90 (-UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z.c)
 * Callees:
 *     ?GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C01136A4 (-GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 */

__int64 __fastcall GreExtTextOutW(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v11; // rax
  unsigned int v12; // ebx
  _BYTE v14[48]; // [rsp+50h] [rbp-38h] BYREF

  v11 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v14, *(struct Gre::Full::SESSION_GLOBALS **)(v11 + 32));
  v12 = GrepExtTextOutW(a1, a2, a3, a4, a5, a6, a7);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v14);
  return v12;
}
