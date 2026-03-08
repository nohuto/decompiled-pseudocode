/*
 * XREFs of ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C00031D0
 * Callers:
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0003140 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     imp_WdfPdoAddEjectionRelationsPhysicalDevice @ 0x1C0021B00 (imp_WdfPdoAddEjectionRelationsPhysicalDevice.c)
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x1C0021B70 (imp_WdfPdoClearEjectionRelationsDevices.c)
 *     imp_WdfPdoGetParent @ 0x1C0021BC0 (imp_WdfPdoGetParent.c)
 *     imp_WdfPdoMarkMissing @ 0x1C0021C50 (imp_WdfPdoMarkMissing.c)
 *     imp_WdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x1C0021CC0 (imp_WdfPdoRemoveEjectionRelationsPhysicalDevice.c)
 *     imp_WdfPdoRequestEject @ 0x1C0021D40 (imp_WdfPdoRequestEject.c)
 *     imp_WdfPdoRetrieveAddressDescription @ 0x1C0021E10 (imp_WdfPdoRetrieveAddressDescription.c)
 *     imp_WdfPdoUpdateAddressDescription @ 0x1C0021EB0 (imp_WdfPdoUpdateAddressDescription.c)
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C0003260 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_sq @ 0x1C0021984 (WPP_IFR_SF_sq.c)
 */

__int64 __fastcall GetPdoPackageFromDeviceHandle(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        WDFDEVICE__ *Device,
        char *FunctionName,
        FxPkgPdo **Package,
        _FX_DRIVER_GLOBALS **ObjectGlobals,
        FxDevice **OutDevice)
{
  unsigned int v8; // ebx
  FxDevice *v10; // r10
  __int64 v11; // r10
  _FX_DRIVER_GLOBALS *v12; // r11
  FxDevice *pDevice; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0;
  pDevice = 0LL;
  FxObjectHandleGetPtr(CallersGlobals, Device, 0x1002u, (void **)&pDevice);
  v10 = pDevice;
  *ObjectGlobals = pDevice->m_Globals;
  if ( OutDevice )
    *OutDevice = v10;
  if ( FxDevice::IsPdo(v10) )
  {
    *Package = *(FxPkgPdo **)(v11 + 648);
  }
  else
  {
    WPP_IFR_SF_sq(v12, 2u, 0x12u, 0xAu, WPP_FxDevicePdoAPI_cpp_Traceguids, FunctionName, Device);
    return (unsigned int)-1073741811;
  }
  return v8;
}
