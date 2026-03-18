/*
 * XREFs of HalpInterruptIsHvMsiRemappingSupported @ 0x14040F0DC
 * Callers:
 *     HalpInterruptSetDestination @ 0x14031F770 (HalpInterruptSetDestination.c)
 *     HalpInterruptRemap @ 0x14037C728 (HalpInterruptRemap.c)
 *     HalpInterruptUnmap @ 0x1409334A8 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvMsiRemappingSupported()
{
  return qword_140C625A8 != 0;
}
