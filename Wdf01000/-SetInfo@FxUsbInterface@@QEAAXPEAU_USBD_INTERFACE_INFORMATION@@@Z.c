void __fastcall FxUsbInterface::SetInfo(FxUsbInterface *this, _USBD_INTERFACE_INFORMATION *InterfaceInfo)
{
  unsigned __int8 v2; // di
  unsigned __int8 InterfaceNumber; // dl
  FxUsbPipe *v6; // rsi
  FxUsbInterface *m_UsbInterface; // rcx

  v2 = 0;
  for ( this->m_CurAlternateSetting = InterfaceInfo->AlternateSetting; v2 < this->m_NumberOfConfiguredPipes; ++v2 )
  {
    InterfaceNumber = InterfaceInfo->InterfaceNumber;
    v6 = this->m_ConfiguredPipes[v2];
    m_UsbInterface = v6->m_UsbInterface;
    *(_OWORD *)&v6->m_PipeInformation.MaximumPacketSize = *(_OWORD *)&InterfaceInfo->Pipes[v2].MaximumPacketSize;
    *(_QWORD *)&v6->m_PipeInformation.MaximumTransferSize = *(_QWORD *)&InterfaceInfo->Pipes[v2].MaximumTransferSize;
    v6->m_InterfaceNumber = InterfaceNumber;
    if ( m_UsbInterface )
      m_UsbInterface->Release(
        m_UsbInterface,
        v6,
        1088,
        "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
    v6->m_UsbInterface = this;
    FxObject::AddRef(this, v6, 1093, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
  }
}
