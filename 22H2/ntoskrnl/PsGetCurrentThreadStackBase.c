/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x1405A3D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}
