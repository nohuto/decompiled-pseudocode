/*
 * XREFs of EngCreateFastMutex @ 0x1C014B0E0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C006C88C (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
