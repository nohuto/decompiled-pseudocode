/*
 * XREFs of EngIsSemaphoreOwned @ 0x1C00C2CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngIsSemaphoreOwned(HSEMAPHORE hsem)
{
  return *((_WORD *)hsem + 12) != 0;
}
