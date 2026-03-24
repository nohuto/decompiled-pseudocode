/*
 * XREFs of PopEtDataSectionCopyString @ 0x1408F29EC
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x1406732D8 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     PopEtDataSectionCopyData @ 0x140673F40 (PopEtDataSectionCopyData.c)
 */

void *__fastcall PopEtDataSectionCopyString(__int64 a1, const void *a2, int a3)
{
  return PopEtDataSectionCopyData(a1, a2, 2 * a3);
}
