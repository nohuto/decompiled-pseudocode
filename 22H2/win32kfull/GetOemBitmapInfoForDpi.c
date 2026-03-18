/*
 * XREFs of GetOemBitmapInfoForDpi @ 0x1C009A53C
 * Callers:
 *     BitBltSysBmp @ 0x1C009A400 (BitBltSysBmp.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00BAA10 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     NtUserBitBltSysBmp @ 0x1C01CCDC0 (NtUserBitBltSysBmp.c)
 *     NtUserGetOemBitmapSize @ 0x1C01D2A60 (NtUserGetOemBitmapSize.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022B810 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022B9A4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0233414 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C0234654 (MNDrawArrow.c)
 *     xxxDrawMenuItem @ 0x1C0234CAC (xxxDrawMenuItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0236930 (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0237E5C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C02382DC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxMNCompute @ 0x1C0238860 (xxxMNCompute.c)
 * Callees:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C009A5D8 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 *     GetDpiCacheSlot @ 0x1C00EDB50 (GetDpiCacheSlot.c)
 */

char *__fastcall GetOemBitmapInfoForDpi(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r11d
  struct OEMBITMAPSET *v4; // rbx
  unsigned int v5; // r11d
  __int64 CurrentProcessWin32Process; // rax

  v2 = (int)a1;
  v3 = a2;
  if ( !a2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v3 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
  }
  v4 = (struct OEMBITMAPSET *)((char *)&gOemBitmapSet + 760 * (unsigned int)GetDpiCacheSlot(v3));
  EnsureOemBitmapInfoForDpiSlot(v4, v5);
  return (char *)v4 + 8 * v2 + 16;
}
