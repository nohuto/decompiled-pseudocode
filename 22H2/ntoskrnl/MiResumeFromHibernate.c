/*
 * XREFs of MiResumeFromHibernate @ 0x14062888C
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x14062947C (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
