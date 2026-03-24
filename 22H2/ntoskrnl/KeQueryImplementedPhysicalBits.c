/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x140522144
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x1408BCCD8 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
