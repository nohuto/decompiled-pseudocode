/*
 * XREFs of EngDeleteSemaphore @ 0x1C005AFF0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C005B290 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
