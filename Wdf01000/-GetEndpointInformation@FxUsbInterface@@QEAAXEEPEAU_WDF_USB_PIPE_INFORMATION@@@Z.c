void __fastcall FxUsbInterface::GetEndpointInformation(
        FxUsbInterface *this,
        unsigned __int8 SettingIndex,
        unsigned __int8 EndpointIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  _USB_INTERFACE_DESCRIPTOR *SettingDescriptor; // rax
  unsigned __int8 v7; // dl
  FxUsbInterface *v8; // rcx
  char v9; // r11
  _USB_ENDPOINT_DESCRIPTOR *i; // r8
  unsigned __int8 bDescriptorType; // al

  SettingDescriptor = FxUsbInterface::GetSettingDescriptor(this, SettingIndex);
  if ( SettingDescriptor )
  {
    for ( i = (_USB_ENDPOINT_DESCRIPTOR *)SettingDescriptor->bLength;
          ;
          SettingDescriptor = (_USB_INTERFACE_DESCRIPTOR *)i->bLength )
    {
      i = (_USB_ENDPOINT_DESCRIPTOR *)((char *)i + (_QWORD)SettingDescriptor);
      if ( i >= (_USB_ENDPOINT_DESCRIPTOR *)((char *)v8->m_UsbDevice->m_ConfigDescriptor
                                           + v8->m_UsbDevice->m_ConfigDescriptor->wTotalLength) )
        break;
      bDescriptorType = i->bDescriptorType;
      if ( bDescriptorType == 4 )
        break;
      if ( bDescriptorType == 5 )
      {
        if ( EndpointIndex == v9 )
        {
          FxUsbInterface::CopyEndpointFieldsFromDescriptor(v8, PipeInfo, i, v7);
          return;
        }
        ++v9;
      }
    }
  }
}
