/*
 * XREFs of imp_WdfUsbInterfaceGetNumEndpoints @ 0x1C0057CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfUsbInterfaceGetNumEndpoints(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        unsigned __int8 SettingIndex)
{
  __int64 v3; // rdi
  char v4; // bl
  FxUsbInterface *pUsbInterface; // [rsp+30h] [rbp+8h] BYREF

  v3 = SettingIndex;
  v4 = 0;
  pUsbInterface = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  if ( (unsigned __int8)v3 < pUsbInterface->m_NumSettings )
  {
    _mm_lfence();
    return pUsbInterface->m_Settings[v3].InterfaceDescriptor->bNumEndpoints;
  }
  return v4;
}
