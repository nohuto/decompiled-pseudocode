/*
 * XREFs of EngCreateFastMutex @ 0x1C01771E0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C0056738 (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
