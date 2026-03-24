/*
 * XREFs of WdipSemShutdown @ 0x14092FE60
 * Callers:
 *     WdipSemDisableScenario @ 0x140789250 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407894DC (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x140793EEC (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x14092FBA4 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1403AA630 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140413800 (memset.c)
 *     WdipSemFreePool @ 0x140930268 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x140930A18 (WdipSemDisableAllProviders.c)
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
  dword_140C1A750 = 0;
  qword_140C1A758 = 0LL;
  qword_140C1A748 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
