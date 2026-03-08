/*
 * XREFs of WheaExitCriticalState @ 0x14060E1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WheaExitCriticalState()
{
  _InterlockedDecrement(&WheapCriticalStateRefCount);
}
