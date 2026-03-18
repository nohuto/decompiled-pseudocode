/*
 * XREFs of CiNdisUpdateThrottleState @ 0x1C000B860
 * Callers:
 *     CiThreadDecrementScheduledCount @ 0x1C000A660 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000B150 (CiThreadIncrementScheduledCount.c)
 * Callees:
 *     <none>
 */

void CiNdisUpdateThrottleState()
{
  if ( CiNdisDeviceHandle )
  {
    if ( !CiNdisThrottleInProgress )
    {
      CiNdisThrottleInProgress = 1;
      IoQueueWorkItem(CiNdisThrottleWorkItem, (PIO_WORKITEM_ROUTINE)CiNdisThrottle, NormalWorkQueue, 0LL);
    }
  }
}
