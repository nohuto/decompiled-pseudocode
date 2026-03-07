__int64 __fastcall imp_VfWdfIoQueueAssignForwardProgressPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *ForwardProgressPolicy)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *, _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *))WdfVersion.Functions.pfnWdfIoQueueAssignForwardProgressPolicy)(
           DriverGlobals,
           Queue,
           ForwardProgressPolicy);
}
