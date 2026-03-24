/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x1403A91A0
 * Callers:
 *     KiSetFeatureBits @ 0x14099C42C (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
