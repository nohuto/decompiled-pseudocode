__int64 __fastcall imp_VfWdfIoQueueReadyNotify(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *QueueReady)(WDFQUEUE__ *, void *),
        void *Context)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *, void (__fastcall *)(WDFQUEUE__ *, void *), void *))WdfVersion.Functions.pfnWdfIoQueueReadyNotify)(
           DriverGlobals,
           Queue,
           QueueReady,
           Context);
}
