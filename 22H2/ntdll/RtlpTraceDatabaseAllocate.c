/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x180102B00
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x180102750 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x180102B84 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009D7E0 (ZwAllocateVirtualMemory.c)
 */

__int64 RtlpTraceDatabaseAllocate()
{
  ZwAllocateVirtualMemory();
  return 0LL;
}
