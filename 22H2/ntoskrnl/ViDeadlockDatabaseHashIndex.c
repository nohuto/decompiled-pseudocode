/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x140AD9D54
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405D18B8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405D1A18 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
