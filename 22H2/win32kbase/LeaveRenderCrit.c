/*
 * XREFs of LeaveRenderCrit @ 0x1C001DC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LeaveRenderCrit()
{
  ExReleaseResourceAndLeaveCriticalRegion(gpresRender);
  return PsLeavePriorityRegion();
}
