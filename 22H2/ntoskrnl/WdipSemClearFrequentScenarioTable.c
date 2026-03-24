/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1403AA630
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x140795984 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14092FE60 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140C1A728 = 0LL;
  return result;
}
