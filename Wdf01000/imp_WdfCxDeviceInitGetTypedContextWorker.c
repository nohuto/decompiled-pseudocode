/*
 * XREFs of imp_WdfCxDeviceInitGetTypedContextWorker @ 0x1C00364F0
 * Callers:
 *     <none>
 * Callees:
 *     FxValiateCx @ 0x1C00360F4 (FxValiateCx.c)
 *     ?FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z @ 0x1C0043504 (-FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void *__fastcall imp_WdfCxDeviceInitGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  __int64 v3; // rbx
  FxUserObject *CxContextObject; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( (int)FxValiateCx(DeviceInit->DriverGlobals, (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8]) >= 0 )
  {
    CxContextObject = DeviceInit->CxContextObject;
    if ( CxContextObject )
      return FxObjectGetTypedContext(CxContextObject, TypeInfo);
  }
  return (void *)v3;
}
