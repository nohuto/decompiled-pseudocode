/*
 * XREFs of ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z @ 0x180276AD8
 * Callers:
 *     ?OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800C3F40 (-OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z @ 0x180277170 (-OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x18027D510 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180486C50 (-v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CImmersiveColor::IsColorSchemeChangeMessage(int a1, const WCHAR *a2)
{
  char v2; // bl

  v2 = 0;
  if ( a1 == 26 && a2 && CompareStringOrdinal(a2, -1, L"ImmersiveColorSet", -1, 1) == 2 )
  {
    RefreshImmersiveColorPolicyState();
    v2 = 1;
  }
  GetIsImmersiveColorUsingHighContrast(1LL);
  return v2;
}
