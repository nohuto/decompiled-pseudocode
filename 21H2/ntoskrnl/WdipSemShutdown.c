/*
 * XREFs of WdipSemShutdown @ 0x1409DA868
 * Callers:
 *     WdipSemEnableScenario @ 0x1406E6B08 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140815DC8 (WdipSemDisableScenario.c)
 *     WdipSemCleanStart @ 0x14083F570 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x1409DA758 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1403CB238 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WdipSemFreePool @ 0x1409DAC68 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1409DB3FC (WdipSemDisableAllProviders.c)
 */

__int64 WdipSemShutdown()
{
  WdipSemDisabledScenarioTable = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 600;
  WdipSemDisableAllProviders();
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2008uLL);
  qword_140C18E88 = 0LL;
  dword_140C16810 = 0;
  qword_140C16818 = 0LL;
  qword_140C16808 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
