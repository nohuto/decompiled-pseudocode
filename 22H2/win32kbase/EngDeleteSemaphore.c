/*
 * XREFs of EngDeleteSemaphore @ 0x1C005BFF0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C005C290 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
