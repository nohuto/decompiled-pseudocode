/*
 * XREFs of PoAddPowerTriageData @ 0x14056E99C
 * Callers:
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 * Callees:
 *     PopInternalAddToDumpFile @ 0x140564E84 (PopInternalAddToDumpFile.c)
 */

char PoAddPowerTriageData()
{
  return PopInternalAddToDumpFile(0LL, 0, 0LL);
}
