/*
 * XREFs of EngCreateFastMutex @ 0x1C014AD90
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C006BDDC (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
