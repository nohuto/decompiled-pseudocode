/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0028198
 * Callers:
 *     GreGetSprite @ 0x1C00130A0 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C001DFD0 (GreUpdateSpriteClipRgn.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00243E4 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C002A9BC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C007B790 (DwmDestroyDeviceSpecificResources.c)
 *     GreUpdateSpriteVisRgn @ 0x1C007ED24 (GreUpdateSpriteVisRgn.c)
 *     GreDwmHasSoftwareCursor @ 0x1C007F36C (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C007F458 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreGetSpriteAttributes @ 0x1C010CF4C (GreGetSpriteAttributes.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0268520 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0268B34 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0269FC0 (GreDeleteSpriteDelayDelete.c)
 *     GreProtectSpriteContent @ 0x1C026A7F8 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026ADA0 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026AFE4 (GreWindowResizeStarted.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
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
