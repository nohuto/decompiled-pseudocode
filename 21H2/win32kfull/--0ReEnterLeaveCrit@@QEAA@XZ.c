/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0
 * Callers:
 *     UnmapDesktop @ 0x1C0078E40 (UnmapDesktop.c)
 *     EditionParseDesktop @ 0x1C0079050 (EditionParseDesktop.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C009C088 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C00FF328 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     UserJobCallout @ 0x1C0101E20 (UserJobCallout.c)
 *     DestroyWindowStation @ 0x1C0103EB0 (DestroyWindowStation.c)
 *     UserDetachQueueFromInputWindow @ 0x1C010E3C8 (UserDetachQueueFromInputWindow.c)
 *     FreeDesktop @ 0x1C011D500 (FreeDesktop.c)
 *     FreeWindowStation @ 0x1C011E7C0 (FreeWindowStation.c)
 *     xxxProcessHidInput @ 0x1C01D1B50 (xxxProcessHidInput.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C01D4190 (EditionIsUsermodeRIMAccessAllowed.c)
 *     UserBeep @ 0x1C0214878 (UserBeep.c)
 *     UserRedrawDesktop @ 0x1C0239BEC (UserRedrawDesktop.c)
 *     UserKillTimer @ 0x1C0243A90 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C0243AE8 (UserSetTimer.c)
 * Callees:
 *     IS_USERCRIT_OWNED @ 0x1C0079494 (IS_USERCRIT_OWNED.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  int v2; // eax

  v2 = IS_USERCRIT_OWNED();
  *(_DWORD *)this = v2;
  if ( !v2 )
    EnterCrit(1LL, 0LL);
  return this;
}
