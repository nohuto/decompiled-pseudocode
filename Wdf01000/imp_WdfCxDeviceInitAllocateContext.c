/*
 * XREFs of imp_WdfCxDeviceInitAllocateContext @ 0x1C00361F0
 * Callers:
 *     <none>
 * Callees:
 *     FxValiateCx @ 0x1C00360F4 (FxValiateCx.c)
 *     ?AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C003BBCC (-AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAP.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

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
