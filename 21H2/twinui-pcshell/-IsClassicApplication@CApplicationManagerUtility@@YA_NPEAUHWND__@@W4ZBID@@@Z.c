/*
 * XREFs of ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x1801CA820
 * Callers:
 *     ShouldWindowBeConsideredForRecovery @ 0x1801CB714 (ShouldWindowBeConsideredForRecovery.c)
 * Callees:
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1801C1550 (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CApplicationManagerUtility::IsClassicApplication(ShellManagedWindowHelper *a1, int a2)
{
  HWND v4; // rdx
  char v5; // bl

  if ( (unsigned int)(a2 - 1) > 1 && a2 != 16 )
    return 0;
  v5 = 0;
  if ( !(unsigned int)IsShellManagedWindow(a1)
    || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(a1, v4) )
  {
    return 1;
  }
  return v5;
}
