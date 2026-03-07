__int64 __fastcall FxUsbDevice::GetConfigDescriptor(
        FxUsbDevice *this,
        void *ConfigDescriptor,
        unsigned __int16 *ConfigDescriptorLength)
{
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rdx
  __int64 result; // rax
  unsigned __int16 v8; // r8
  unsigned __int16 wTotalLength; // cx
  unsigned int v10; // ebx

  m_ConfigDescriptor = this->m_ConfigDescriptor;
  if ( ConfigDescriptor )
  {
    v8 = *ConfigDescriptorLength;
    wTotalLength = m_ConfigDescriptor->wTotalLength;
    v10 = v8 < wTotalLength ? 0xC0000023 : 0;
    if ( v8 >= wTotalLength )
      v8 = m_ConfigDescriptor->wTotalLength;
    memmove(ConfigDescriptor, m_ConfigDescriptor, v8);
    result = v10;
    *ConfigDescriptorLength = this->m_ConfigDescriptor->wTotalLength;
  }
  else
  {
    *ConfigDescriptorLength = m_ConfigDescriptor->wTotalLength;
    return 3221225507LL;
  }
  return result;
}
