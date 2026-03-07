__int64 __fastcall imp_VfWdfWaitLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *LockAttributes,
        WDFWAITLOCK__ **Lock)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_OBJECT_ATTRIBUTES *, WDFWAITLOCK__ **))WdfVersion.Functions.pfnWdfWaitLockCreate)(
           DriverGlobals,
           LockAttributes,
           Lock);
}
