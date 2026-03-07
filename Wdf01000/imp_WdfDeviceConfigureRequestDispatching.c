int __fastcall imp_WdfDeviceConfigureRequestDispatching(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFQUEUE__ *Queue,
        unsigned int RequestType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v8; // eax
  int v9; // ebx
  unsigned __int16 v11; // r9
  FxIoQueue *pFxIoQueue; // [rsp+40h] [rbp-18h] BYREF
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  pDevice = 0LL;
  pFxIoQueue = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( RequestType <= 0xF && (v8 = 49177, _bittest(&v8, RequestType)) )
  {
    FxObjectHandleGetPtr(pDevice->m_Globals, (unsigned __int64)Queue, 0x1003u, (void **)&pFxIoQueue);
    if ( pDevice != pFxIoQueue->m_Device )
    {
      v9 = -1073741808;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x32u, WPP_FxDeviceApi_cpp_Traceguids, Queue, (__int64)Device, -1073741808);
      return v9;
    }
    if ( pDevice->m_Legacy )
    {
      if ( (pDevice->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
      {
        v11 = 51;
LABEL_9:
        v9 = -1073741436;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, v11, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741436);
        return v9;
      }
    }
    else if ( pDevice->m_CurrentPnpState != WdfDevStatePnpInit )
    {
      v11 = 52;
      goto LABEL_9;
    }
    if ( RequestType )
      return FxPkgIo::ConfigureForwarding(pDevice->m_PkgIo, pFxIoQueue, (_WDF_REQUEST_TYPE)RequestType);
    else
      return FxPkgGeneral::ConfigureForwarding(pDevice->m_PkgGeneral, pFxIoQueue);
  }
  else
  {
    WPP_IFR_SF_DD(
      pDevice->m_Globals,
      (unsigned __int8)WPP_FxDeviceApi_cpp_Traceguids,
      0xDu,
      0x31u,
      WPP_FxDeviceApi_cpp_Traceguids,
      RequestType,
      0xC000000D);
    return -1073741811;
  }
}
