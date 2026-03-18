/*
 * XREFs of EngCreateSemaphore @ 0x1C0077FE0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C0077FFC (GreCreateSemaphoreInternal.c)
 */

HSEMAPHORE EngCreateSemaphore(void)
{
  return (HSEMAPHORE)GreCreateSemaphoreInternal(1LL);
}
