/*
 * XREFs of HalpInterruptIsHvMsiRemappingSupported @ 0x140409B7C
 * Callers:
 *     HalpInterruptSetDestination @ 0x14028E950 (HalpInterruptSetDestination.c)
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 *     HalpInterruptUnmap @ 0x140930578 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvMsiRemappingSupported()
{
  return qword_140C62148 != 0;
}
