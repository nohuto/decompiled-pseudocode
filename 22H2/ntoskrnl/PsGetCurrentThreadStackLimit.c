/*
 * XREFs of PsGetCurrentThreadStackLimit @ 0x1405A3D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackLimit()
{
  return KeGetCurrentThread()->StackLimit;
}
