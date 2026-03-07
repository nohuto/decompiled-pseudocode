void EnterLeaveCritMitRitHandOffHazard::UnInitialize(void)
{
  if ( WPP_MAIN_CB.Dpc.DpcListEntry.Next )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)WPP_MAIN_CB.Dpc.DpcListEntry.Next);
    WPP_MAIN_CB.Dpc.DpcListEntry.Next = 0LL;
  }
}
