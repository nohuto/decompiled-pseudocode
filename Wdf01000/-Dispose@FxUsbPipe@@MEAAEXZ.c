unsigned __int8 __fastcall FxUsbPipe::Dispose(FxUsbPipe *this)
{
  unsigned __int8 v2; // al
  FxUsbPipeContinuousReader *m_Reader; // rcx
  unsigned __int8 v4; // di

  v2 = FxIoTarget::Dispose(this);
  m_Reader = this->m_Reader;
  v4 = v2;
  if ( m_Reader )
  {
    FxUsbPipeContinuousReader::`scalar deleting destructor'(m_Reader);
    this->m_Reader = 0LL;
  }
  return v4;
}
