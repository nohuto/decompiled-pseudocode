/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00C89F8
 * Callers:
 *     GreGetSprite @ 0x1C0013DE0 (GreGetSprite.c)
 *     GreWindowBeginLayoutUpdate @ 0x1C0016938 (GreWindowBeginLayoutUpdate.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0077DA8 (GreUpdateSpriteClipRgn.c)
 *     GreWindowLayoutComplete @ 0x1C00C5DFC (GreWindowLayoutComplete.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C00C8130 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0101D80 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreIsWindowResizeInProgress @ 0x1C01599C0 (GreIsWindowResizeInProgress.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026737C (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C0267488 (GreConfirmWindowResizeCommit.c)
 *     GreProtectSpriteContent @ 0x1C0267E68 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0268454 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C02686B0 (GreWindowResizeStarted.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00C8A3C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00D4D80 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

DWMSPRITEREF *__fastcall DWMSPRITEREF::DWMSPRITEREF(DWMSPRITEREF *this, HWND a2)
{
  HSPRITE v4; // rax

  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(this);
  *((_QWORD *)this + 4) = 0LL;
  v4 = DWMSPRITEREF::hspLookupWindow(a2);
  DWMSPRITEREF::LockSpriteObj(this, v4);
  return this;
}
