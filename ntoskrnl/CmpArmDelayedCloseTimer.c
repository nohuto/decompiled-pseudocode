/*
 * XREFs of CmpArmDelayedCloseTimer @ 0x140243848
 * Callers:
 *     CmpAddToDelayedClose @ 0x1406B7220 (CmpAddToDelayedClose.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void CmpArmDelayedCloseTimer()
{
  if ( !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
    ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
}
