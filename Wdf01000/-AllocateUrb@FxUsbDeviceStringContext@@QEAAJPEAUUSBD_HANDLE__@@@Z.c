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
