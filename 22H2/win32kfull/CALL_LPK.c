/*
 * XREFs of CALL_LPK @ 0x1C0225FD4
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00BAA10 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0225BF8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0225E60 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0233E30 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0233FEC (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C02382DC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxPSMTextOut @ 0x1C02417C4 (xxxPSMTextOut.c)
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C024CBD0 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C024CCF8 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C024EEC0 (xxxPSMGetTextExtent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CALL_LPK(__int64 a1)
{
  unsigned int v1; // edx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 752LL) & 0xF) == 0 )
    return 0;
  v1 = 1;
  if ( (*(_DWORD *)(a1 + 488) & 1) != 0 || a1 == gptiRit )
    return 0;
  return v1;
}
