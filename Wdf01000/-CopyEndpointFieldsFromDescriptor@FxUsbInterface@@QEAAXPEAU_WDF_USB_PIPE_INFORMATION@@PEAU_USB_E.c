/*
 * XREFs of ?CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_ENDPOINT_DESCRIPTOR@@E@Z @ 0x1C005EAE8
 * Callers:
 *     ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C005EFD0 (-GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUsbInterface::CopyEndpointFieldsFromDescriptor(
        FxUsbInterface *this,
        _WDF_USB_PIPE_INFORMATION *PipeInfo,
        _USB_ENDPOINT_DESCRIPTOR *EndpointDesc,
        unsigned __int8 SettingIndex)
{
  _WDF_USB_PIPE_TYPE v4; // eax
  unsigned int v5; // eax

  PipeInfo->MaximumPacketSize = EndpointDesc->wMaxPacketSize;
  PipeInfo->EndpointAddress = EndpointDesc->bEndpointAddress;
  PipeInfo->Interval = EndpointDesc->bInterval;
  v4 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[EndpointDesc->bmAttributes & 3];
  PipeInfo->PipeType = v4;
  if ( v4 == WdfUsbPipeTypeControl )
    v5 = 4096;
  else
    v5 = (this->m_UsbDevice->m_Traits & 4) != 0 ? 0x200000 : 0x40000;
  PipeInfo->MaximumTransferSize = v5;
  PipeInfo->SettingIndex = SettingIndex;
}
