__int64 __fastcall imp_WdfUsbTargetDeviceSelectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  _FX_DRIVER_GLOBALS *v4; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 result; // rax
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // dl
  unsigned __int16 v12; // r9
  FxUsbDevice *v13; // r10
  unsigned int v14; // edi
  unsigned int m_NumInterfaces; // r8d
  _WdfUsbTargetDeviceSelectConfigType Type; // edx
  unsigned int v17; // esi
  _URB *_a3; // rax
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // rcx
  const void *ObjectHandleUnchecked; // rax
  const void *v22; // rax
  int v23; // edx
  int v24; // r8d
  unsigned int v25; // edi
  _USB_INTERFACE_DESCRIPTOR **v26; // r14
  const void *v27; // rax
  int v28; // edx
  int v29; // r8d
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+80h] [rbp+8h] BYREF
  FxUsbInterface *pUsbInterface; // [rsp+98h] [rbp+20h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pUsbDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  if ( !Params )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( Params->Size != 32 )
    {
      WPP_IFR_SF_DDd(m_Globals, v10, 0xEu, 0xFu, WPP_FxUsbDeviceAPI_cpp_Traceguids, Params->Size, 32, -1073741820);
      return 3221225476LL;
    }
    if ( (unsigned int)(Params->Type - 1) > 5 )
    {
      v14 = -1073741811;
      WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbDeviceAPI_cpp_Traceguids, 32, -1073741811);
      return v14;
    }
    result = FxValidateObjectAttributes(m_Globals, PipesAttributes, 1);
    if ( (int)result < 0 )
      return result;
    v13 = pUsbDevice;
    if ( pUsbDevice->m_MismatchedInterfacesInConfigDescriptor )
    {
      v14 = -1073741808;
      WPP_IFR_SF_qDd(
        m_Globals,
        v11,
        0xEu,
        0x12u,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        UsbDevice,
        Params->Type,
        0xC0000010);
      return v14;
    }
    m_NumInterfaces = pUsbDevice->m_NumInterfaces;
    if ( !(_BYTE)m_NumInterfaces )
    {
      WPP_IFR_SF_qDd(m_Globals, v11, 0xEu, 0x13u, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, Params->Type, 0);
      return 0LL;
    }
    Type = Params->Type;
    if ( Type == WdfUsbTargetDeviceSelectConfigTypeDeconfig )
      return (unsigned int)FxUsbDevice::Deconfig(pUsbDevice);
    if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeSingleInterface )
    {
      if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
      {
        if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeInterfacesPairs )
        {
          if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeInterfacesDescriptor )
          {
            InterfaceDescriptors = Params->Types.Descriptor.InterfaceDescriptors;
            if ( !InterfaceDescriptors || !Params->Types.Descriptor.NumInterfaceDescriptors )
            {
              v17 = -1073741811;
              WPP_IFR_SF_qqDLd(
                m_Globals,
                Type,
                m_NumInterfaces,
                v12,
                _a1,
                UsbDevice,
                InterfaceDescriptors,
                Params->Types.Descriptor.NumInterfaceDescriptors,
                Params->Type);
              return v17;
            }
            return (unsigned int)FxUsbDevice::SelectConfigDescriptor(pUsbDevice, PipesAttributes, Params);
          }
          else
          {
            if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeUrb )
              return (unsigned int)-1073741811;
            _a3 = Params->Types.Urb.Urb;
            if ( !_a3 || _a3->UrbHeader.Function || _a3->UrbHeader.Length < 0x40u )
            {
              v17 = -1073741811;
              WPP_IFR_SF_qqLd(
                m_Globals,
                Type,
                0xEu,
                0x15u,
                WPP_FxUsbDeviceAPI_cpp_Traceguids,
                UsbDevice,
                _a3,
                Type,
                -1073741811);
              return v17;
            }
            return (unsigned int)FxUsbDevice::SelectConfig(pUsbDevice, PipesAttributes, _a3, FxUrbTypeLegacy, 0LL);
          }
        }
        if ( !Params->Types.Descriptor.InterfaceDescriptors )
        {
          v17 = -1073741811;
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(pUsbDevice);
          WPP_IFR_SF_qd(
            m_Globals,
            2u,
            0xEu,
            0x16u,
            WPP_FxUsbDeviceAPI_cpp_Traceguids,
            ObjectHandleUnchecked,
            -1073741811);
          return v17;
        }
        if ( Params->Types.SingleInterface.NumberConfiguredPipes != (_BYTE)m_NumInterfaces )
        {
          v17 = -1073741811;
          v22 = (const void *)FxObject::GetObjectHandleUnchecked(pUsbDevice);
          WPP_IFR_SF_qddd(m_Globals, v23, 0xEu, 0x17u, WPP_FxUsbDeviceAPI_cpp_Traceguids, v22, v23, v24, -1073741811);
          return v17;
        }
      }
      v25 = 0;
      if ( Params->Types.SingleInterface.NumberConfiguredPipes )
      {
        while ( 1 )
        {
          pUsbInterface = 0LL;
          v26 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v25];
          FxObjectHandleGetPtr(v4, (unsigned __int64)*v26, 0x1204u, (void **)&pUsbInterface);
          if ( *((_BYTE *)v26 + 8) >= pUsbInterface->m_NumSettings )
            break;
          if ( ++v25 >= Params->Types.SingleInterface.NumberConfiguredPipes )
          {
            v13 = pUsbDevice;
            return (unsigned int)FxUsbDevice::SelectConfigMulti(v13, PipesAttributes, Params);
          }
        }
        v27 = (const void *)FxObject::GetObjectHandleUnchecked(pUsbDevice);
        v14 = -1073741811;
        WPP_IFR_SF_qqddd(
          m_Globals,
          v28 - 1,
          0xEu,
          0x18u,
          WPP_FxUsbDeviceAPI_cpp_Traceguids,
          v27,
          *v26,
          v29,
          v28 - 1,
          -1073741811);
        return v14;
      }
      return (unsigned int)FxUsbDevice::SelectConfigMulti(v13, PipesAttributes, Params);
    }
    return (unsigned int)FxUsbDevice::SelectConfigSingle(pUsbDevice, PipesAttributes, Params);
  }
  return result;
}
