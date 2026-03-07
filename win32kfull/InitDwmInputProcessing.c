// write access to const memory has been detected, the output may be wrong!
__int64 InitDwmInputProcessing()
{
  unsigned int v0; // ebx

  v0 = -1073741801;
  WPP_MAIN_CB.Dpc.ProcessorHistory = CreateKernelEvent(1LL);
  ghMITEvent = hCreateKernelEvent(1LL, 0LL);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)hCreateKernelEvent(1LL, 0LL);
  WPP_MAIN_CB.Dpc.SystemArgument1 = (PVOID)CreateKernelEvent(1LL);
  *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = CreateKernelEvent(1LL);
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)CreateKernelEvent(1LL);
  gcDITMouseInjectionWaiters = 0;
  gpsemDITMouseInjectionWaiters = CreateKernelSemaphore(0LL, 0x7FFFFFFFLL);
  if ( WPP_MAIN_CB.Dpc.ProcessorHistory
    && ghMITEvent
    && WPP_MAIN_CB.Dpc.DeferredRoutine
    && WPP_MAIN_CB.Dpc.SystemArgument1
    && *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong
    && WPP_MAIN_CB.Dpc.DpcListEntry.Next
    && gpsemDITMouseInjectionWaiters )
  {
    return (unsigned int)CInputManager::CreateSessionGlobal();
  }
  return v0;
}
