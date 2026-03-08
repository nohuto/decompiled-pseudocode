/*
 * XREFs of WdipSemShutdown @ 0x1409DAE00
 * Callers:
 *     WdipSemEnableScenario @ 0x1407966C0 (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x1408318F0 (WdipSemCleanStart.c)
 *     WdipSemDisableScenario @ 0x140831E48 (WdipSemDisableScenario.c)
 *     WdipSemUpdate @ 0x1409DAB4C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1403911FC (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WdipSemFreePool @ 0x1409DB200 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1409DB994 (WdipSemDisableAllProviders.c)
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
  qword_140C34AA8 = 0LL;
  dword_140C32450 = 0;
  qword_140C32458 = 0LL;
  qword_140C32448 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
