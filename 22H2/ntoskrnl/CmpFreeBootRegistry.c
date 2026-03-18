/*
 * XREFs of CmpFreeBootRegistry @ 0x1406177E8
 * Callers:
 *     HvHiveCleanup @ 0x140709780 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x140828E1C (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
