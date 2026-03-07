void __fastcall FxUsbDeviceStringContext::CopyParameters(FxUsbDeviceStringContext *this, FxRequestBase *Request)
{
  unsigned __int8 bLength; // cl
  unsigned __int64 v4; // rax
  unsigned __int64 RequiredSize; // rdi
  IFxMemory *m_RequestMemory; // rcx
  IFxMemory *v7; // rsi
  __int64 v8; // rax
  _USB_STRING_DESCRIPTOR *v9; // rdi
  size_t v10; // rbx
  void *v11; // rax
  size_t v12; // r8
  wchar_t *bString; // rdx
  _USB_STRING_DESCRIPTOR *m_StringDescriptor; // rbx

  bLength = this->m_StringDescriptor->bLength;
  if ( (bLength & 1) != 0 || bLength < 2u )
  {
    this->m_CompletionParams.IoStatus.Status = -1073741668;
  }
  else if ( Request->m_Irp.m_Irp->IoStatus.Status >= 0 )
  {
    this->m_UsbParameters.Parameters.DeviceString.RequiredSize = bLength - 2;
    v4 = this->m_RequestMemory->GetBufferSize(this->m_RequestMemory);
    RequiredSize = this->m_UsbParameters.Parameters.DeviceString.RequiredSize;
    m_RequestMemory = this->m_RequestMemory;
    if ( RequiredSize <= v4 )
    {
      m_StringDescriptor = this->m_StringDescriptor;
      this->m_CompletionParams.IoStatus.Information = RequiredSize;
      v11 = (void *)m_RequestMemory->GetBuffer(m_RequestMemory);
      v12 = RequiredSize;
      bString = m_StringDescriptor->bString;
    }
    else
    {
      this->m_CompletionParams.IoStatus.Status = -2147483643;
      v7 = m_RequestMemory;
      v8 = m_RequestMemory->GetBufferSize(m_RequestMemory);
      v9 = this->m_StringDescriptor;
      v10 = v8;
      v11 = (void *)v7->GetBuffer(v7);
      v12 = v10;
      bString = v9->bString;
    }
    memmove(v11, bString, v12);
  }
  this->m_UsbParameters.UsbdStatus = this->GetUsbdStatus(this);
}
