/*
 * XREFs of GetOemBitmapInfoForDpi @ 0x1C010710C
 * Callers:
 *     xxxDrawMenuItem @ 0x1C004470C (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C0047BA4 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0048148 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxDrawCaptionBar @ 0x1C00DCAB8 (xxxDrawCaptionBar.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1BE0 (xxxDrawMenuBarUnderlines.c)
 *     NtUserGetOemBitmapSize @ 0x1C0106E10 (NtUserGetOemBitmapSize.c)
 *     BitBltSysBmp @ 0x1C0106EBC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0107010 (NtUserBitBltSysBmp.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0246D18 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246EAC (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024B3F8 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C024C08C (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C024D2E4 (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E300 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C006148C (GetDpiCacheSlot.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C010716C (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 */

char *__fastcall GetOemBitmapInfoForDpi(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  struct OEMBITMAPSET *v4; // rbx

  v2 = (int)a1;
  v3 = a2;
  if ( !a2 )
    v3 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1) + 284);
  v4 = (struct OEMBITMAPSET *)((char *)&gOemBitmapSet + 760 * (unsigned int)GetDpiCacheSlot(v3));
  EnsureOemBitmapInfoForDpiSlot(v4, v3);
  return (char *)v4 + 8 * v2 + 16;
}
