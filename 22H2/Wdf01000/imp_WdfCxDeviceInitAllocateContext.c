/*
 * XREFs of imp_WdfCxDeviceInitAllocateContext @ 0x1C004B200
 * Callers:
 *     <none>
 * Callees:
 *     FxValiateCx @ 0x1C004B104 (FxValiateCx.c)
 *     ?AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C004FCC4 (-AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAP.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfCxDeviceInitAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *ContextAttributes,
        void **Context)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  int result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  result = FxValiateCx(DeviceInit->DriverGlobals, DriverName);
  if ( result >= 0 )
    return WDFDEVICE_INIT::AllocateCxContext(DeviceInit, DriverName, ContextAttributes, Context);
  return result;
}
