int __fastcall imp_WdfCxDeviceInitAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *ContextAttributes,
        void **Context)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  int result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  result = FxValiateCx(DeviceInit->DriverGlobals, v4);
  if ( result >= 0 )
    return WDFDEVICE_INIT::AllocateCxContext(DeviceInit, v4, ContextAttributes, Context);
  return result;
}
