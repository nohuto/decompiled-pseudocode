/*
 * XREFs of MiResumeFromHibernate @ 0x1406263EC
 * Callers:
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x140626FE0 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
