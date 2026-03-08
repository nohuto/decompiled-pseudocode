/*
 * XREFs of imp_WdfUsbInterfaceGetNumConfiguredPipes @ 0x1C0057C90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfUsbInterfaceGetNumConfiguredPipes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface)
{
  FxUsbInterface *pUsbInterface; // [rsp+30h] [rbp+8h] BYREF

  pUsbInterface = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  return pUsbInterface->m_NumberOfConfiguredPipes;
}
