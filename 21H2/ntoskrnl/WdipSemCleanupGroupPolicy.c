/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1407990C8
 * Callers:
 *     WdipSemCleanStart @ 0x14079905C (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x1407991F0 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
