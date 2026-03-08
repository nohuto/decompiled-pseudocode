/*
 * XREFs of EngDeleteSemaphore @ 0x1C002AEF0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C002AF30 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
