/*
 * XREFs of ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001A120
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x180018510 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800741EC (-BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING_.c)
 *     ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x18022E184 (-CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_N.c)
 *     ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180277000 (-NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180279D0C (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027D228 (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F528 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18001A420 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 */

int __fastcall ExperienceManagerUtils::UnscaleByPerMonitorDPI(
        ExperienceManagerUtils *this,
        ExperienceManagerUtils *a2,
        HMONITOR a3)
{
  int v3; // ebx
  int PerMonitorDpi; // eax

  v3 = (int)this;
  PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi(a2, (HMONITOR)a2);
  return MulDiv(v3, 96, PerMonitorDpi);
}
