// write access to const memory has been detected, the output may be wrong!
void CleanupDwmInputProcessing()
{
  CInputManager::DestroySessionGlobal();
  if ( WPP_MAIN_CB.Dpc.ProcessorHistory )
  {
    Win32FreePool((void *)WPP_MAIN_CB.Dpc.ProcessorHistory);
    WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  }
  if ( ghMITEvent )
  {
    ZwClose(ghMITEvent);
    ghMITEvent = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.DeferredRoutine )
  {
    ZwClose(WPP_MAIN_CB.Dpc.DeferredRoutine);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    Win32FreePool(WPP_MAIN_CB.Dpc.SystemArgument1);
    WPP_MAIN_CB.Dpc.SystemArgument1 = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
  {
    Win32FreePool(*(void **)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
    *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.DpcListEntry.Next )
  {
    Win32FreePool(WPP_MAIN_CB.Dpc.DpcListEntry.Next);
    WPP_MAIN_CB.Dpc.DpcListEntry.Next = 0LL;
  }
  if ( gpsemDITMouseInjectionWaiters )
  {
    Win32FreePool(gpsemDITMouseInjectionWaiters);
    gpsemDITMouseInjectionWaiters = 0LL;
  }
}
