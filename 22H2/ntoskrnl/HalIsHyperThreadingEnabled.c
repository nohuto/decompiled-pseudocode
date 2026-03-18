/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x140382EF0
 * Callers:
 *     KiSetFeatureBits @ 0x140A8DD24 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
