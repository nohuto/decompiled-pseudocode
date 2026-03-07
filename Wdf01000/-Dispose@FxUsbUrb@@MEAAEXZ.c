unsigned __int8 __fastcall FxUsbUrb::Dispose(FxUsbUrb *this)
{
  unsigned __int8 result; // al

  USBD_UrbFree(this->m_USBDHandle, (_URB *)this->m_pBuffer);
  this->m_pBuffer = 0LL;
  result = 1;
  this->m_USBDHandle = 0LL;
  return result;
}
