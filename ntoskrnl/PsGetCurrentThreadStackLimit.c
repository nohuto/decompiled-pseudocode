/*
 * XREFs of PsGetCurrentThreadStackLimit @ 0x1405A1860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackLimit()
{
  return KeGetCurrentThread()->StackLimit;
}
