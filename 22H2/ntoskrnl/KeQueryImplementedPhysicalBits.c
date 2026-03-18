/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x140579270
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140975538 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
