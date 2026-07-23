/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x140581580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}
