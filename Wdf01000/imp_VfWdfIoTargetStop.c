void __fastcall imp_VfWdfIoTargetStop(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget, __int64 Action)
{
  WdfVersion.Functions.pfnWdfIoTargetStop(DriverGlobals, IoTarget, (_WDF_IO_TARGET_SENT_IO_ACTION)Action);
}
