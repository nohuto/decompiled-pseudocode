/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0022938
 * Callers:
 *     GreGetSprite @ 0x1C0003730 (GreGetSprite.c)
 *     GreHintSpriteShape @ 0x1C002198C (GreHintSpriteShape.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0084B9C (GreUpdateSpriteClipRgn.c)
 *     GreWindowLayoutComplete @ 0x1C00A277C (GreWindowLayoutComplete.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C0100330 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreIsWindowResizeInProgress @ 0x1C016E988 (GreIsWindowResizeInProgress.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026CE90 (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C026CFAC (GreConfirmWindowResizeCommit.c)
 *     GreProtectSpriteContent @ 0x1C026D910 (GreProtectSpriteContent.c)
 *     GreWindowBeginLayoutUpdate @ 0x1C026DEE8 (GreWindowBeginLayoutUpdate.c)
 *     GreWindowResizeComplete @ 0x1C026E008 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026E268 (GreWindowResizeStarted.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002297C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00229B0 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015D684 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
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
