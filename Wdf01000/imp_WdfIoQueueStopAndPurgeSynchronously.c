void __fastcall imp_WdfIoQueueStopAndPurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  int v2; // eax
  void *PPObject; // [rsp+30h] [rbp+8h] BYREF

  PPObject = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Queue, 0x1003u, &PPObject);
  if ( (int)FxVerifierCheckIrqlLevel(*((_FX_DRIVER_GLOBALS **)PPObject + 2), 0) >= 0 )
  {
    v2 = FxIoQueue::QueueIdleSynchronously((FxIoQueue *)PPObject, 1u);
    if ( v2 < 0 )
      FxIoQueue::FatalError((FxIoQueue *)PPObject, v2);
  }
}
