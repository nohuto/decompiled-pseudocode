/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x140793F58
 * Callers:
 *     WdipSemCleanStart @ 0x140793EEC (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x140794080 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
