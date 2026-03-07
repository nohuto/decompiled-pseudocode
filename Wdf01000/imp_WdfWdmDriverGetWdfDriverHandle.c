WDFDRIVER__ *__fastcall imp_WdfWdmDriverGetWdfDriverHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject)
{
  FxObject **DriverObjectExtension; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DriverObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  DriverObjectExtension = (FxObject **)IoGetDriverObjectExtension(DriverObject, FxDriver::GetFxDriver);
  return (WDFDRIVER__ *)FxObject::GetObjectHandleUnchecked(*DriverObjectExtension);
}
