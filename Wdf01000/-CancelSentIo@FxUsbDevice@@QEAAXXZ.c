void __fastcall FxUsbDevice::CancelSentIo(FxUsbDevice *this, __int64 m_ConfiguredPipes, unsigned __int8 a3)
{
  __int64 i; // rdi
  FxUsbInterface *v5; // rsi
  __int64 j; // rbp
  FxIoTarget *v7; // rcx

  for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
  {
    v5 = this->m_Interfaces[i];
    m_ConfiguredPipes = (__int64)v5->m_ConfiguredPipes;
    if ( m_ConfiguredPipes )
    {
      for ( j = 0LL; (unsigned int)j < v5->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
      {
        v7 = *(FxIoTarget **)(m_ConfiguredPipes + 8 * j);
        if ( v7 )
        {
          FxIoTarget::CancelSentIo(v7, m_ConfiguredPipes, a3);
          m_ConfiguredPipes = (__int64)v5->m_ConfiguredPipes;
        }
      }
    }
  }
  FxIoTarget::CancelSentIo(this, m_ConfiguredPipes, a3);
}
