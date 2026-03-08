/*
 * XREFs of EngDeleteEvent @ 0x1C027BA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngDeleteEvent(PEVENT pEvent)
{
  if ( (pEvent->fFlags & 1) != 0 )
    return 0;
  Win32FreePool(pEvent);
  return 1;
}
