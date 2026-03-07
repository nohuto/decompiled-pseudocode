__int64 __fastcall FxUsbDevice::QueryUsbCapability(
        FxUsbDevice *this,
        const _GUID *CapabilityType,
        unsigned int CapabilityBufferLength,
        unsigned __int8 *CapabilityBuffer,
        const _GUID *ResultLength)
{
  USBD_HANDLE__ *m_USBDHandle; // rcx
  unsigned int v8; // edi
  int id; // eax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  if ( ResultLength )
    ResultLength->Data1 = 0;
  m_USBDHandle = this->m_USBDHandle;
  if ( m_USBDHandle )
  {
    id = USBD_QueryUsbCapability(
           m_USBDHandle,
           CapabilityType,
           CapabilityBufferLength,
           CapabilityBuffer,
           &ResultLength->Data1);
    v8 = id;
    if ( id < 0 )
      WPP_IFR_SF__guid_d(this->m_Globals, v10, v11, v12, traceGuid, CapabilityType, id);
  }
  else
  {
    v8 = -1073741436;
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x19u, WPP_FxusbDeviceKm_cpp_Traceguids, 0xC0000184);
  }
  return v8;
}
