void __fastcall VfEvtIoStop(WDFQUEUE__ *Queue, WDFREQUEST__ *Request, unsigned int ActionFlags)
{
  char *TypedContext; // r14
  void (__fastcall *v7)(WDFQUEUE__ *, WDFREQUEST__ *, _QWORD); // rsi
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+20h] [rbp-48h] BYREF
  _GUID activityId; // [rsp+28h] [rbp-40h] BYREF

  TypedContext = VfWdfObjectGetTypedContext(Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v7 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *, _QWORD))*((_QWORD *)TypedContext + 8);
  if ( v7 )
  {
    activityId = 0LL;
    if ( PerfEvtIoStopStart(Queue, &activityId) )
    {
      v7(Queue, Request, ActionFlags);
      PerfEvtIoStopStop(Queue, &activityId);
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v7(Queue, Request, ActionFlags);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v7);
    }
  }
}
