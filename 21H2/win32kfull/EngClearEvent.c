/*
 * XREFs of EngClearEvent @ 0x1C027D530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngClearEvent(PEVENT pEvent)
{
  KeClearEvent((PRKEVENT)pEvent->pKEvent);
}
