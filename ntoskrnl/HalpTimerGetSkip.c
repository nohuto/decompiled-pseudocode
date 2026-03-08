/*
 * XREFs of HalpTimerGetSkip @ 0x140409CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char HalpTimerGetSkip()
{
  return BYTE2(KeGetPcr()->HalReserved[5]);
}
