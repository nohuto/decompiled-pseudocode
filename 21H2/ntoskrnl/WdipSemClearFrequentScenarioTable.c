/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1403AF810
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14079AAF4 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14092FE10 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140C1A988 = 0LL;
  return result;
}
