/*
 * XREFs of MiResumeFromHibernate @ 0x140382260
 * Callers:
 *     MmDuplicateMemory @ 0x1409907AC (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x140382280 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
