void __fastcall FxUsbInterface::FormatSelectSettingUrb(
        FxUsbInterface *this,
        _URB *Urb,
        unsigned __int16 NumEndpoints,
        unsigned __int8 SettingNumber)
{
  unsigned int v4; // ebp
  __int16 v8; // si
  unsigned __int16 v9; // bx
  unsigned __int8 v10; // r9
  unsigned __int8 m_InterfaceNumber; // al
  __int64 v12; // r8

  v4 = NumEndpoints;
  v8 = 24 * NumEndpoints;
  v9 = 24 * NumEndpoints + 56;
  memset(Urb, 0, v9);
  Urb->UrbHeader.Length = v9;
  Urb->UrbSelectInterface.Interface.AlternateSetting = SettingNumber;
  v10 = 0;
  Urb->UrbHeader.Function = 1;
  m_InterfaceNumber = this->m_InterfaceNumber;
  Urb->UrbSelectInterface.Interface.Length = v9 - 32;
  Urb->UrbSelectInterface.Interface.InterfaceNumber = m_InterfaceNumber;
  Urb->UrbSelectInterface.ConfigurationHandle = this->m_UsbDevice->m_ConfigHandle;
  Urb->UrbSelectInterface.Interface.Length = v8 + 24;
  for ( Urb->UrbSelectInterface.Interface.NumberOfPipes = v4;
        v10 < (unsigned __int16)v4;
        Urb->UrbSelectInterface.Interface.Pipes[v12].MaximumTransferSize = -1 )
  {
    v12 = v10++;
    Urb->UrbSelectInterface.Interface.Pipes[v12].PipeFlags = this->m_UsbDevice->m_SspIsochPipeFlags != 0 ? 0x100 : 0;
  }
}
