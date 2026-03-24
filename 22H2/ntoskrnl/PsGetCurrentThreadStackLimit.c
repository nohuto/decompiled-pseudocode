/*
 * XREFs of PsGetCurrentThreadStackLimit @ 0x1405812A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackLimit()
{
  return KeGetCurrentThread()->StackLimit;
}
