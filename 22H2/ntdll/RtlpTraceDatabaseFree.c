/*
 * XREFs of RtlpTraceDatabaseFree @ 0x180102B4C
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x180102890 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D8A0 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
