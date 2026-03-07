void __fastcall FxUsbPipe::~FxUsbPipe(FxUsbPipe *this, unsigned int a2)
{
  FxUsbInterface *m_UsbInterface; // rcx
  FxUsbPipe **m_ConfiguredPipes; // rdx
  __int64 v5; // rax

  this->__vftable = (FxUsbPipe_vtbl *)FxUsbPipe::`vftable';
  m_UsbInterface = this->m_UsbInterface;
  if ( m_UsbInterface )
  {
    m_ConfiguredPipes = m_UsbInterface->m_ConfiguredPipes;
    if ( m_ConfiguredPipes )
    {
      v5 = 0LL;
      if ( m_UsbInterface->m_NumberOfConfiguredPipes )
      {
        while ( m_ConfiguredPipes[v5] != this )
        {
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= m_UsbInterface->m_NumberOfConfiguredPipes )
            goto LABEL_8;
        }
        m_ConfiguredPipes[v5] = 0LL;
      }
    }
LABEL_8:
    this->m_UsbInterface->Release(
      this->m_UsbInterface,
      this,
      1100,
      "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
  }
  this->__vftable = (FxUsbPipe_vtbl *)FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
