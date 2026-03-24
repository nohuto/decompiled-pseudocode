/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x1409DF224
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405A2228 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405A2388 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
