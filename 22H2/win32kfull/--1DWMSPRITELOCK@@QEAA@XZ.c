/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C
 * Callers:
 *     GreGetSprite @ 0x1C0013DE0 (GreGetSprite.c)
 *     GreUpdateSpriteVisRgn @ 0x1C005AA10 (GreUpdateSpriteVisRgn.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C005AFF4 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreDwmHasSoftwareCursor @ 0x1C005B2AC (GreDwmHasSoftwareCursor.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0077DA8 (GreUpdateSpriteClipRgn.c)
 *     GreDwmGetSurfaceData @ 0x1C007AA30 (GreDwmGetSurfaceData.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C00BC9E0 (DwmDestroyDeviceSpecificResources.c)
 *     GreGetSpriteAttributes @ 0x1C00C8640 (GreGetSpriteAttributes.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00C8FF0 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00CD42C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreHintSpriteShape @ 0x1C00D41D4 (GreHintSpriteShape.c)
 *     vCleanupUMWindowlessSprite @ 0x1C00D4A00 (vCleanupUMWindowlessSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0265A70 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0266060 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0267588 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0267774 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C0267E68 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0268454 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C02686B0 (GreWindowResizeStarted.c)
 *     GreSetLWContentOwner @ 0x1C02D5534 (GreSetLWContentOwner.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITELOCK::~DWMSPRITELOCK(DWMSPRITELOCK *this)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx

  if ( *(_DWORD *)this )
  {
    v1 = Gre::Base::Globals(this);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 14));
  }
}
