/*
 * XREFs of imp_WdfDeviceInitSetCharacteristics @ 0x1C002F4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned int DeviceCharacteristics,
        unsigned __int8 OrInValues)
{
  unsigned int v5; // eax
  FxString *DeviceName; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceCharacteristics;
  if ( OrInValues )
    v5 = DeviceInit->Characteristics | DeviceCharacteristics;
  DeviceInit->Characteristics = v5 | 0x100;
  if ( (DeviceCharacteristics & 0x80u) != 0 )
  {
    DeviceName = DeviceInit->DeviceName;
    if ( DeviceName )
    {
      DeviceName->Release(DeviceName, 0LL, 279, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
      DeviceInit->DeviceName = 0LL;
    }
  }
}
