/*
 * XREFs of ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00D43A0
 * Callers:
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     <none>
 */

void EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters(void)
{
  if ( EnterLeaveCritMitRitHandOffHazard::_slSemWaiters )
  {
    KeReleaseSemaphore(
      (PRKSEMAPHORE)WPP_MAIN_CB.Dpc.DpcListEntry.Next,
      0,
      EnterLeaveCritMitRitHandOffHazard::_slSemWaiters,
      0);
    EnterLeaveCritMitRitHandOffHazard::_slSemWaiters = 0;
  }
}
