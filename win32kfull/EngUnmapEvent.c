/*
 * XREFs of EngUnmapEvent @ 0x1C027BB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngUnmapEvent(PEVENT pEvent)
{
  if ( (pEvent->fFlags & 1) == 0 )
    return 0;
  ObfDereferenceObject(pEvent->pKEvent);
  Win32FreePool(pEvent);
  return 1;
}
