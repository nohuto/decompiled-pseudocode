int __fastcall FxUsbPipeRequestContext::AllocateUrb(FxUsbPipeRequestContext *this, USBD_HANDLE__ *USBDHandle)
{
  int result; // eax

  if ( this->m_Urb )
    return -1073741436;
  result = USBD_UrbAllocate(USBDHandle, (_URB **)&this->m_Urb);
  if ( result >= 0 )
    this->m_USBDHandle = USBDHandle;
  return result;
}
