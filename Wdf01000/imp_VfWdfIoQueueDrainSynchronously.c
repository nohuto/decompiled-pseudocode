void __fastcall imp_VfWdfIoQueueDrainSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueueDrainSynchronously(DriverGlobals, Queue);
}
