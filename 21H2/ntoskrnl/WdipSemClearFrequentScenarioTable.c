/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1403AF980
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14079ACF4 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14092FF70 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140C1A988 = 0LL;
  return result;
}
