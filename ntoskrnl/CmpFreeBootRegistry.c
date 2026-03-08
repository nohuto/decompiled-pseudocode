/*
 * XREFs of CmpFreeBootRegistry @ 0x140615338
 * Callers:
 *     HvHiveCleanup @ 0x1407A56B8 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x140820DAC (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
