/*
 * XREFs of EngWaitForSingleObject @ 0x1C027BBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngWaitForSingleObject(PEVENT pEvent, PLARGE_INTEGER pTimeOut)
{
  return pEvent->pKEvent
      && (pEvent->fFlags & 1) == 0
      && KeWaitForSingleObject(pEvent->pKEvent, Executive, 0, 0, pTimeOut) >= 0;
}
