/*
 * XREFs of ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180242D18
 * Callers:
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180243AF0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1802796D0 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F528 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180280EF0 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180018BA0 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 */

bool __fastcall CortanaFlightingHelpers::IsWideQFDeltaEnabled(CortanaFlightingHelpers *this)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x3A, &v2);
  return v2 != 0;
}
