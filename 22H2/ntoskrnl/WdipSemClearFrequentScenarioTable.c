/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x140392E7C
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14083449C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1409DDCA0 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140C32C28 = 0LL;
  return result;
}
