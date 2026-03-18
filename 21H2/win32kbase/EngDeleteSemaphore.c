/*
 * XREFs of EngDeleteSemaphore @ 0x1C0044ED0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C0044F30 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
