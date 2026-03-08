/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x140834798
 * Callers:
 *     WdipSemCleanStart @ 0x1408318F0 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x14083195C (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
