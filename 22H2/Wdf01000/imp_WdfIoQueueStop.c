/*
 * XREFs of imp_WdfIoQueueStop @ 0x1C0014DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014E1C (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C0076104 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 */

void __fastcall imp_WdfIoQueueStop(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *StopComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  int v6; // eax
  FxIoQueue *pQueue; // [rsp+30h] [rbp+8h] BYREF

  pQueue = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&pQueue);
  v6 = FxIoQueue::QueueIdle(pQueue, 0, StopComplete, Context);
  if ( v6 < 0 )
    FxIoQueue::FatalError(pQueue, v6);
}
