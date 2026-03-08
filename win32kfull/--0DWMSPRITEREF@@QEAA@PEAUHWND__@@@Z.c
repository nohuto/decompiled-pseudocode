/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00296D4
 * Callers:
 *     GreGetSprite @ 0x1C00130A0 (GreGetSprite.c)
 *     GreWindowBeginLayoutUpdate @ 0x1C00161C4 (GreWindowBeginLayoutUpdate.c)
 *     GreUpdateSpriteClipRgn @ 0x1C001DFD0 (GreUpdateSpriteClipRgn.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005C120 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreWindowLayoutComplete @ 0x1C0098D74 (GreWindowLayoutComplete.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C00DFF20 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreIsWindowResizeInProgress @ 0x1C014CCA0 (GreIsWindowResizeInProgress.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C0269DDC (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C0269ED4 (GreConfirmWindowResizeCommit.c)
 *     GreProtectSpriteContent @ 0x1C026A7F8 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026ADA0 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026AFE4 (GreWindowResizeStarted.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002968C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C002D150 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMSPRITEREF *__fastcall DWMSPRITEREF::DWMSPRITEREF(DWMSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = DWMSPRITEREF::hspLookupWindow(a2);
  DWMSPRITEREF::LockSpriteObj(this, v3);
  return this;
}
