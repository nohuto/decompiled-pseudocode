/*
 * XREFs of imp_WdfIoQueueReadyNotify @ 0x1C0061B20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0066300 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 */

int __fastcall imp_WdfIoQueueReadyNotify(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *QueueReady)(WDFQUEUE__ *, void *),
        void *Context)
{
  FxIoQueue *pQueue; // [rsp+30h] [rbp+8h] BYREF

  pQueue = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Queue, 0x1003u, (void **)&pQueue);
  return FxIoQueue::ReadyNotify(pQueue, QueueReady, Context);
}
