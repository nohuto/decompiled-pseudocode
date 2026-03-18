/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x140834448
 * Callers:
 *     WdipSemCleanStart @ 0x1408315A0 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x14083160C (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
