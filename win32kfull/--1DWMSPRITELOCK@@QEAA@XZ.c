/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002D7C8
 * Callers:
 *     GreGetSprite @ 0x1C00130A0 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C001DFD0 (GreUpdateSpriteClipRgn.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00243E4 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreDwmGetSurfaceData @ 0x1C0029774 (GreDwmGetSurfaceData.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C002A9BC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreHintSpriteShape @ 0x1C002C80C (GreHintSpriteShape.c)
 *     vCleanupUMWindowlessSprite @ 0x1C002CDD0 (vCleanupUMWindowlessSprite.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C007B790 (DwmDestroyDeviceSpecificResources.c)
 *     GreUpdateSpriteVisRgn @ 0x1C007ED24 (GreUpdateSpriteVisRgn.c)
 *     GreDwmHasSoftwareCursor @ 0x1C007F36C (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C007F458 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreGetSpriteAttributes @ 0x1C010CF4C (GreGetSpriteAttributes.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0268520 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0268B34 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0269FC0 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026A184 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C026A7F8 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026ADA0 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026AFE4 (GreWindowResizeStarted.c)
 *     GreSetLWContentOwner @ 0x1C02D71EC (GreSetLWContentOwner.c)
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
