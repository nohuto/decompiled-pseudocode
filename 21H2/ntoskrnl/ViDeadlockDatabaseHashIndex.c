/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x140A99440
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1406015D4 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140601734 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
