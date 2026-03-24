/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00BE140
 * Callers:
 *     GreGetSprite @ 0x1C00075B4 (GreGetSprite.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0014B70 (vCleanupUMWindowlessSprite.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C0029120 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1C002A6EC (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C002ABA0 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00BA178 (GreUpdateSpriteClipRgn.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C00BD638 (GreDwmNotifySpriteDPIChange.c)
 *     GreHintSpriteShape @ 0x1C00BD828 (GreHintSpriteShape.c)
 *     GreZorderSprite @ 0x1C00BDEB4 (GreZorderSprite.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00BFB1C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreGetSpriteAttributes @ 0x1C00ED844 (GreGetSpriteAttributes.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00EF150 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026D53C (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026DAF4 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026EDB8 (GreDeleteSpriteDelayDelete.c)
 *     GreProtectSpriteContent @ 0x1C026F888 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026FE50 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C02700B0 (GreWindowResizeStarted.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

DWMSPRITELOCK *__fastcall DWMSPRITELOCK::DWMSPRITELOCK(DWMSPRITELOCK *this, struct PDEVOBJ *a2, int a3, int a4)
{
  __int64 ThreadWin32Thread; // rax

  *(_DWORD *)this = 0;
  if ( !a3 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( !ThreadWin32Thread || a4 == 1 || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      *(_DWORD *)this = 1;
    }
  }
  return this;
}
