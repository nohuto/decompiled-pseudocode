void __fastcall imp_VfWdfIoQueuePurge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  WdfVersion.Functions.pfnWdfIoQueuePurge(DriverGlobals, Queue, PurgeComplete, Context);
}
