_USB_INTERFACE_DESCRIPTOR *__fastcall FxUsbInterface::GetSettingDescriptor(
        FxUsbInterface *this,
        unsigned __int8 Setting)
{
  unsigned __int8 m_NumSettings; // r9
  unsigned __int8 v3; // r8
  _USB_INTERFACE_DESCRIPTOR *result; // rax

  m_NumSettings = this->m_NumSettings;
  v3 = 0;
  if ( !m_NumSettings )
    return 0LL;
  while ( 1 )
  {
    result = this->m_Settings[v3].InterfaceDescriptor;
    if ( result->bAlternateSetting == Setting )
      break;
    if ( ++v3 >= m_NumSettings )
      return 0LL;
  }
  return result;
}
