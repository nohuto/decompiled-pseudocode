/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1403911FC
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x1408347EC (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1409DAE00 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140C32868 = 0LL;
  return result;
}
