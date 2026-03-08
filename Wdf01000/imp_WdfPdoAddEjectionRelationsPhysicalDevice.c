/*
 * XREFs of imp_WdfPdoAddEjectionRelationsPhysicalDevice @ 0x1C0021B00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C00031D0 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00687EC (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

int __fastcall imp_WdfPdoAddEjectionRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  int result; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  result = GetPdoPackageFromDeviceHandle(
             (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
             Device,
             "imp_WdfPdoAddEjectionRelationsPhysicalDevice",
             &pPkgPdo,
             &pFxDriverGlobals,
             0LL);
  if ( !PhysicalDevice )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( result >= 0 )
    return FxPkgPdo::AddEjectionDevice(pPkgPdo, PhysicalDevice);
  return result;
}
