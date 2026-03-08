/*
 * XREFs of ViIrqlKeEnterCriticalRegion_Exit @ 0x140AE5530
 * Callers:
 *     <none>
 * Callees:
 *     ViIrqlLogCRStackTrace @ 0x140AE5594 (ViIrqlLogCRStackTrace.c)
 */

__int64 ViIrqlKeEnterCriticalRegion_Exit()
{
  return ViIrqlLogCRStackTrace();
}
