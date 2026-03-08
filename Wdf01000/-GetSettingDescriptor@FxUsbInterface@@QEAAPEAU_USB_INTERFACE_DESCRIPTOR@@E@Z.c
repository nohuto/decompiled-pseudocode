/*
 * XREFs of ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C005F048
 * Callers:
 *     ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C005EFD0 (-GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C006078C (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0060A78 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     <none>
 */

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
