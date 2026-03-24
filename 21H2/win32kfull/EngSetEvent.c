/*
 * XREFs of EngSetEvent @ 0x1C027D6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __stdcall EngSetEvent(PEVENT pEvent)
{
  return KeSetEvent((PRKEVENT)pEvent->pKEvent, 0, 0);
}
