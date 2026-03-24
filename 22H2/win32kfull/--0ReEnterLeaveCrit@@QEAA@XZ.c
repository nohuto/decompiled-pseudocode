/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004EFF4
 * Callers:
 *     EditionParseDesktop @ 0x1C004E980 (EditionParseDesktop.c)
 *     UnmapDesktop @ 0x1C004EAD0 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C004EDB0 (MapDesktop.c)
 *     UserDetachQueueFromInputWindow @ 0x1C00F2C08 (UserDetachQueueFromInputWindow.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C010A9B8 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     UserJobCallout @ 0x1C0113CA0 (UserJobCallout.c)
 *     DestroyWindowStation @ 0x1C0114D50 (DestroyWindowStation.c)
 *     FreeWindowStation @ 0x1C01236E0 (FreeWindowStation.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C012ABF0 (EditionIsUsermodeRIMAccessAllowed.c)
 *     FreeDesktop @ 0x1C012BE30 (FreeDesktop.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C0166BB0 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     xxxProcessHidInput @ 0x1C01D5AE0 (xxxProcessHidInput.c)
 *     UserBeep @ 0x1C02196B8 (UserBeep.c)
 *     UserRedrawDesktop @ 0x1C023DF48 (UserRedrawDesktop.c)
 *     UserKillTimer @ 0x1C0247C44 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C0247C9C (UserSetTimer.c)
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
