__int64 __fastcall imp_VfWdfIoQueueCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        WDFQUEUE__ **Queue)
{
  _VF_HOOK_PROCESS_INFO hookInfo; // [rsp+30h] [rbp-18h] BYREF

  hookInfo = 0LL;
  AddEventHooksWdfIoQueueCreate(&hookInfo, DriverGlobals, Device, Config, QueueAttributes, Queue);
  if ( hookInfo.DonotCallKmdfLib )
    return hookInfo.DdiCallStatus;
  else
    return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_IO_QUEUE_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFQUEUE__ **))WdfVersion.Functions.pfnWdfIoQueueCreate)(
             DriverGlobals,
             Device,
             Config,
             QueueAttributes,
             Queue);
}
