/*
 * XREFs of WdipSemShutdown @ 0x14092FF70
 * Callers:
 *     WdipSemDisableScenario @ 0x140789510 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x14078979C (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x14079925C (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x14092FCB4 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1403AF980 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140414300 (memset.c)
 *     WdipSemFreePool @ 0x140930378 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x140930B28 (WdipSemDisableAllProviders.c)
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
  qword_140C1C9A8 = 0LL;
  dword_140C1C9D0 = 0;
  qword_140C1C9D8 = 0LL;
  qword_140C1C9C8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
