/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00CD064
 * Callers:
 *     GreGetSprite @ 0x1C0013DE0 (GreGetSprite.c)
 *     GreUpdateSpriteVisRgn @ 0x1C005AA10 (GreUpdateSpriteVisRgn.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C005AFF4 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreDwmHasSoftwareCursor @ 0x1C005B2AC (GreDwmHasSoftwareCursor.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0077DA8 (GreUpdateSpriteClipRgn.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C00BC9E0 (DwmDestroyDeviceSpecificResources.c)
 *     GreGetSpriteAttributes @ 0x1C00C8640 (GreGetSpriteAttributes.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00C8FF0 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00CD42C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0265A70 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0266060 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0267588 (GreDeleteSpriteDelayDelete.c)
 *     GreProtectSpriteContent @ 0x1C0267E68 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0268454 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C02686B0 (GreWindowResizeStarted.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

DWMSPRITELOCK *__fastcall DWMSPRITELOCK::DWMSPRITELOCK(DWMSPRITELOCK *this, struct PDEVOBJ *a2, int a3, int a4)
{
  __int64 ThreadWin32Thread; // rax
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx

  *(_DWORD *)this = 0;
  if ( !a3 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || a4 == 1 || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      v8 = Gre::Base::Globals(v7);
      GreAcquireSemaphore(*((_QWORD *)v8 + 14));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v8 + 14), 5LL);
      *(_DWORD *)this = 1;
    }
  }
  return this;
}
