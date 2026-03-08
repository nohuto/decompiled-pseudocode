/*
 * XREFs of imp_WdfFdoInitQueryProperty @ 0x1C0030110
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1C003D0B0 (-_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJEC.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfFdoInitQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        unsigned int BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  int result; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v9 = DeviceInit->DriverGlobals;
  if ( !ResultLength )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( BufferLength && !PropertyBuffer )
    FxVerifierNullBugCheck(v9, retaddr);
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( result >= 0 )
  {
    if ( DeviceInit->InitType )
    {
      WPP_IFR_SF_D(v9, 2u, 0x12u, 0x29u, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC0000010);
      return -1073741808;
    }
    else
    {
      return FxDevice::_QueryProperty(
               v9,
               DeviceInit,
               0LL,
               0LL,
               DeviceProperty,
               BufferLength,
               PropertyBuffer,
               ResultLength);
    }
  }
  return result;
}
