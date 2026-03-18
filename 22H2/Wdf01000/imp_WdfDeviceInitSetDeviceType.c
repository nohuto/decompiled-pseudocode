/*
 * XREFs of imp_WdfDeviceInitSetDeviceType @ 0x1C0044C80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetDeviceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned int DeviceType)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  DeviceInit->DeviceType = DeviceType;
}
