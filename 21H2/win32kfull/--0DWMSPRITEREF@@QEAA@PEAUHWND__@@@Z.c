/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00BE388
 * Callers:
 *     GreGetSprite @ 0x1C00075B4 (GreGetSprite.c)
 *     GreWindowBeginLayoutUpdate @ 0x1C00088D0 (GreWindowBeginLayoutUpdate.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087D58 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00BA4D8 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C00BDB88 (GreHintSpriteShape.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C0117B2C (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreWindowLayoutComplete @ 0x1C011C788 (GreWindowLayoutComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026F170 (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C026F28C (GreConfirmWindowResizeCommit.c)
 *     GreGetWindowResizeTelemetry @ 0x1C026F8E8 (GreGetWindowResizeTelemetry.c)
 *     GreIsWindowResizeInProgress @ 0x1C026FD58 (GreIsWindowResizeInProgress.c)
 *     GreProtectSpriteContent @ 0x1C026FE68 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0270430 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0270690 (GreWindowResizeStarted.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00BE3CC (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00BE400 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C016A6E4 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
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
