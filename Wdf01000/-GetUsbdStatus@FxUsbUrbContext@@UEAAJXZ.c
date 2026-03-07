__int64 __fastcall FxUsbUrbContext::GetUsbdStatus(FxUsbUrbContext *this)
{
  _URB *m_pUrb; // rdx
  __int64 result; // rax

  m_pUrb = this->m_pUrb;
  result = 0LL;
  if ( m_pUrb )
    return (unsigned int)m_pUrb->UrbHeader.Status;
  return result;
}
