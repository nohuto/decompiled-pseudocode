/*
 * XREFs of HalpInterruptIsHvLineBasedIntRemappingSupported @ 0x14036D0C0
 * Callers:
 *     HalpInterruptUnmap @ 0x140760E58 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvLineBasedIntRemappingSupported()
{
  return qword_140C4A228 != 0;
}
