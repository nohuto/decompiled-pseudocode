void HalpBlkWdTimerRoutine()
{
  if ( (_DWORD)HalpBlkNumberProcessors )
  {
    if ( !_InterlockedExchange(&HalpBlkWdPollingInProgress, 1) )
      ExQueueWorkItem(&HalpBlkWdWorkItem, DelayedWorkQueue);
  }
}
