void __fastcall imp_VfWdfIoTargetPurge(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget, __int64 Action)
{
  WdfVersion.Functions.pfnWdfIoTargetPurge(DriverGlobals, IoTarget, (_WDF_IO_TARGET_PURGE_IO_ACTION)Action);
}
