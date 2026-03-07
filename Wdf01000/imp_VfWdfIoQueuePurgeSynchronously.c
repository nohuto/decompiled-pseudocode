void __fastcall imp_VfWdfIoQueuePurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueuePurgeSynchronously(DriverGlobals, Queue);
}
