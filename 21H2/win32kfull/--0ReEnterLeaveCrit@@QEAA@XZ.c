/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004F094
 * Callers:
 *     EditionParseDesktop @ 0x1C004EA20 (EditionParseDesktop.c)
 *     UnmapDesktop @ 0x1C004EB70 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C004EE50 (MapDesktop.c)
 *     UserDetachQueueFromInputWindow @ 0x1C00F2F58 (UserDetachQueueFromInputWindow.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C010AD38 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     UserJobCallout @ 0x1C0114020 (UserJobCallout.c)
 *     DestroyWindowStation @ 0x1C01150D0 (DestroyWindowStation.c)
 *     FreeWindowStation @ 0x1C0123A60 (FreeWindowStation.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C012AFA0 (EditionIsUsermodeRIMAccessAllowed.c)
 *     FreeDesktop @ 0x1C012C1E0 (FreeDesktop.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C0167380 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     xxxProcessHidInput @ 0x1C01D60A0 (xxxProcessHidInput.c)
 *     UserBeep @ 0x1C0219C78 (UserBeep.c)
 *     UserRedrawDesktop @ 0x1C023E508 (UserRedrawDesktop.c)
 *     UserKillTimer @ 0x1C0248204 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C024825C (UserSetTimer.c)
 * Callees:
 *     <none>
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)this = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
    EnterCrit(0LL, 1LL);
  return this;
}
