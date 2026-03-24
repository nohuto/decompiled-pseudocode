/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00BE4A0
 * Callers:
 *     GreGetSprite @ 0x1C00075B4 (GreGetSprite.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0014B70 (vCleanupUMWindowlessSprite.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C00291C0 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1C002A78C (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C002AC40 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00BA4D8 (GreUpdateSpriteClipRgn.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C00BD998 (GreDwmNotifySpriteDPIChange.c)
 *     GreHintSpriteShape @ 0x1C00BDB88 (GreHintSpriteShape.c)
 *     GreZorderSprite @ 0x1C00BE214 (GreZorderSprite.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00BFE7C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreGetSpriteAttributes @ 0x1C00EDB94 (GreGetSpriteAttributes.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00EF4A0 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026DAFC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026E0B4 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026F398 (GreDeleteSpriteDelayDelete.c)
 *     GreProtectSpriteContent @ 0x1C026FE68 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0270430 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0270690 (GreWindowResizeStarted.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
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
