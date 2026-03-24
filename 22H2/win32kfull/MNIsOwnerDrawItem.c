/*
 * XREFs of MNIsOwnerDrawItem @ 0x1C0048BB8
 * Callers:
 *     xxxDrawMenuItem @ 0x1C004470C (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C0047BA4 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0048148 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1BE0 (xxxDrawMenuBarUnderlines.c)
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01023FC (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNInvertItem @ 0x1C024C7C0 (xxxMNInvertItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E300 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C0049030 (MNIsUAHMenu.c)
 */

__int64 __fastcall MNIsOwnerDrawItem(__int64 a1, _DWORD **a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ecx

  if ( (**a2 & 0x100) != 0 )
    return 1;
  v3 = MNIsUAHMenu(a1, a2, a3);
  v4 = 0;
  if ( v3 )
    return 1;
  return v4;
}
