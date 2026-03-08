/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003C250
 * Callers:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C001DB98 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C003B404 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     UserJobCallout @ 0x1C003C000 (UserJobCallout.c)
 *     DestroyWindowStation @ 0x1C00DF1B0 (DestroyWindowStation.c)
 *     UserDetachQueueFromInputWindow @ 0x1C00E05B8 (UserDetachQueueFromInputWindow.c)
 *     FreeWindowStation @ 0x1C00F1160 (FreeWindowStation.c)
 *     FreeDesktop @ 0x1C00F2180 (FreeDesktop.c)
 *     xxxProcessHidInput @ 0x1C0141C40 (xxxProcessHidInput.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C01AD430 (EditionIsUsermodeRIMAccessAllowed.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x1C01FA214 (-xxxUserBeep@@YAHKK_N@Z.c)
 *     UserRedrawDesktop @ 0x1C0225B78 (UserRedrawDesktop.c)
 *     UserSetTimer @ 0x1C022FBB8 (UserSetTimer.c)
 * Callees:
 *     <none>
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  __int64 v2; // rax

  v2 = SGDGetUserSessionState(this);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 8)) == 1 )
  {
    *(_BYTE *)this = 1;
  }
  else
  {
    *(_BYTE *)this = 0;
    EnterCrit(1LL, 0LL);
  }
  return this;
}
