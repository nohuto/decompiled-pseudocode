/*
 * XREFs of imp_WdfUsbTargetDeviceGetInterface @ 0x1C006B230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C938 (WPP_IFR_SF_qdd.c)
 */

WDFUSBINTERFACE__ *__fastcall imp_WdfUsbTargetDeviceGetInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        unsigned __int8 InterfaceIndex)
{
  __int64 _a3; // rbx
  int _a2; // edx
  FxUsbInterface *v6; // rcx
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp+8h] BYREF

  pUsbDevice = 0LL;
  _a3 = InterfaceIndex;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  _a2 = pUsbDevice->m_NumInterfaces;
  if ( (unsigned __int8)_a3 >= (unsigned __int8)_a2 )
    v6 = 0LL;
  else
    v6 = pUsbDevice->m_Interfaces[_a3];
  if ( v6 )
    return (WDFUSBINTERFACE__ *)FxObject::GetObjectHandleUnchecked(v6);
  WPP_IFR_SF_qdd(pUsbDevice->m_Globals, 2u, 0xEu, 0x20u, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, _a2, _a3);
  return 0LL;
}
