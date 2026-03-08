/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x140576D60
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140972498 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
