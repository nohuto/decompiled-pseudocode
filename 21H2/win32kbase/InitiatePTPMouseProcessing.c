/*
 * XREFs of InitiatePTPMouseProcessing @ 0x1C01E7EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG InitiatePTPMouseProcessing()
{
  return KeSetEvent((PRKEVENT)gpevtPTPOperation, 1, 0);
}
