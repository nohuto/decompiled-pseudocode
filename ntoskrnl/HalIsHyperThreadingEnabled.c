/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x14037F400
 * Callers:
 *     KiSetFeatureBits @ 0x140A8A714 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
