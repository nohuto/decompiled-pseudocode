/*
 * XREFs of HalpTimerGetSkip @ 0x1403EFC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char HalpTimerGetSkip()
{
  return BYTE2(KeGetPcr()->HalReserved[5]);
}
