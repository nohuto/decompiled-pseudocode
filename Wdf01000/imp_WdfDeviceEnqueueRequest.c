/*
 * XREFs of imp_WdfDeviceEnqueueRequest @ 0x1C0005DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C00062F4 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 */

int __fastcall imp_WdfDeviceEnqueueRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+48h] [rbp+20h] BYREF

  pDevice = 0LL;
  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  FxObjectHandleGetPtr(m_Globals, Device, 0x1002u, (void **)&pDevice);
  FxObjectHandleGetPtr(m_Globals, Request, 0x1008u, (void **)&pRequest);
  return FxPkgIo::EnqueueRequest(pDevice->m_PkgIo, pDevice, pRequest);
}
