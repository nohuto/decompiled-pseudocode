/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x14083F5DC
 * Callers:
 *     WdipSemCleanStart @ 0x14083F570 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x14083F704 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
