/*
 * XREFs of ?AllocateUrb@FxUsbDeviceStringContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C005C6E0
 * Callers:
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C005FB28 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     USBD_UrbAllocate @ 0x1C008856C (USBD_UrbAllocate.c)
 */

int __fastcall FxUsbDeviceStringContext::AllocateUrb(FxUsbDeviceStringContext *this, USBD_HANDLE__ *USBDHandle)
{
  _URB_CONTROL_DESCRIPTOR_REQUEST **p_m_Urb; // rbx
  int result; // eax
  _URB_CONTROL_DESCRIPTOR_REQUEST *v6; // rcx

  p_m_Urb = &this->m_Urb;
  result = USBD_UrbAllocate(USBDHandle, (_URB **)&this->m_Urb);
  if ( result >= 0 )
  {
    v6 = *p_m_Urb;
    this->m_USBDHandle = USBDHandle;
    v6->Hdr.Function = 11;
    (*p_m_Urb)->Hdr.Length = 136;
    (*p_m_Urb)->DescriptorType = 3;
  }
  return result;
}
