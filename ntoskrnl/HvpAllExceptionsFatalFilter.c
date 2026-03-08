/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x140A1A5EC
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x1408807B4 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x140615314 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck(0x21uLL, *(int *)*a1, *a1, a1[1]);
}
