/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x140873610
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x140732D9C (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x1404EDDF4 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck(0x21uLL, *(int *)*a1, *a1, a1[1]);
}
