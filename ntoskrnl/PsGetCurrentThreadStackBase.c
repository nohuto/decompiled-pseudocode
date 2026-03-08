/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x1405A1840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}
