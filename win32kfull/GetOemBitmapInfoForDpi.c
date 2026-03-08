/*
 * XREFs of GetOemBitmapInfoForDpi @ 0x1C00D05EC
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C0021730 (xxxDrawCaptionBar.c)
 *     BitBltSysBmp @ 0x1C00D04B0 (BitBltSysBmp.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F268C (xxxDrawMenuBarUnderlines.c)
 *     NtUserBitBltSysBmp @ 0x1C01CDE10 (NtUserBitBltSysBmp.c)
 *     NtUserGetOemBitmapSize @ 0x1C01D3AB0 (NtUserGetOemBitmapSize.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022E530 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022E6C4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0236044 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C02372BC (MNDrawArrow.c)
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0239598 (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C023AAC4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C023AF44 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxMNCompute @ 0x1C023B4C8 (xxxMNCompute.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0045E2C (GetDpiCacheSlot.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C00D0688 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 */

char *__fastcall GetOemBitmapInfoForDpi(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v3; // r11d
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
