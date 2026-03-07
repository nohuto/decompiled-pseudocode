void __fastcall imp_WdfDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  _FX_DRIVER_GLOBALS *v5; // rsi
  _FX_DRIVER_GLOBALS *v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !RequestAttributes )
    FxVerifierNullBugCheck(v6, retaddr);
  if ( (int)FxValidateObjectAttributes(v6, RequestAttributes, 1) >= 0 )
  {
    *(_OWORD *)&DeviceInit->RequestAttributes.Size = *(_OWORD *)&RequestAttributes->Size;
    *(_OWORD *)&DeviceInit->RequestAttributes.EvtDestroyCallback = *(_OWORD *)&RequestAttributes->EvtDestroyCallback;
    *(_OWORD *)&DeviceInit->RequestAttributes.ParentObject = *(_OWORD *)&RequestAttributes->ParentObject;
    DeviceInit->RequestAttributes.ContextTypeInfo = RequestAttributes->ContextTypeInfo;
  }
  else
  {
    FxVerifierDbgBreakPoint(v5);
  }
}
