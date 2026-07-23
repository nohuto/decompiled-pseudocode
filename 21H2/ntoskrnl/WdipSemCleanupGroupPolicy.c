/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1407992C8
 * Callers:
 *     WdipSemCleanStart @ 0x14079925C (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x1407993F0 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
