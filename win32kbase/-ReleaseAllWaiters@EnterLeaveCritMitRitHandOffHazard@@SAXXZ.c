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
