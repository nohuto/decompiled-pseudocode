/*
 * XREFs of CmpFreeBootRegistry @ 0x1404EDE18
 * Callers:
 *     HvHiveCleanup @ 0x1406572B4 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x14079FC8C (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
