/*
 * XREFs of imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber @ 0x1C00577D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        unsigned int *CurrentFrameNumber)
{
  int (__fastcall *m_QueryBusTime)(void *, unsigned int *); // rax
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+30h] [rbp+8h] BYREF

  pUsbDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  if ( !CurrentFrameNumber )
    FxVerifierNullBugCheck(pUsbDevice->m_Globals, retaddr);
  m_QueryBusTime = pUsbDevice->m_QueryBusTime;
  if ( m_QueryBusTime )
    return ((__int64 (__fastcall *)(void *, unsigned int *))m_QueryBusTime)(
             pUsbDevice->m_BusInterfaceContext,
             CurrentFrameNumber);
  else
    return 3221225473LL;
}
