_USB_COMMON_DESCRIPTOR *__fastcall FxUsbParseConfigurationDescriptor(
        _USB_CONFIGURATION_DESCRIPTOR *ConfigDesc,
        unsigned __int8 InterfaceNumber,
        unsigned __int8 AlternateSetting)
{
  unsigned __int64 wTotalLength; // rdx
  _USB_CONFIGURATION_DESCRIPTOR *v6; // rbx
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  _USB_COMMON_DESCRIPTOR *v8; // r11
  _USB_COMMON_DESCRIPTOR *v9; // rcx

  wTotalLength = ConfigDesc->wTotalLength;
  v6 = ConfigDesc;
  do
  {
    DescriptorType = FxUsbFindDescriptorType((char *)v6, wTotalLength, &ConfigDesc->bLength, 4);
    if ( !DescriptorType )
      break;
    v9 = DescriptorType;
    v8 = 0LL;
    if ( DescriptorType[1].bLength != InterfaceNumber )
      v9 = 0LL;
    if ( DescriptorType[1].bDescriptorType == AlternateSetting )
      v8 = v9;
    ConfigDesc = (_USB_CONFIGURATION_DESCRIPTOR *)(&DescriptorType->bLength + DescriptorType->bLength);
  }
  while ( !v8 );
  return v8;
}
