/*
 * XREFs of EngCreateFastMutex @ 0x1C0196BA0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C002D2A8 (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
