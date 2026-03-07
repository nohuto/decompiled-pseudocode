void __fastcall imp_WdfIoQueueStopAndPurge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *StopAndPurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  int v6; // eax
  void *PPObject; // [rsp+30h] [rbp+8h] BYREF

  PPObject = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Queue, 0x1003u, &PPObject);
  v6 = FxIoQueue::QueueIdle((FxIoQueue *)PPObject, 1u, StopAndPurgeComplete, Context);
  if ( v6 < 0 )
    FxIoQueue::FatalError((FxIoQueue *)PPObject, v6);
}
