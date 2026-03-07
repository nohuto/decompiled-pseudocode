void __fastcall FxDevice::ConfigureAutoForwardCleanupClose(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  _LIST_ENTRY *Blink; // rax
  _WDF_TRI_STATE Flink; // r8d
  __int32 v4; // r8d

  Blink = DeviceInit->CxDeviceInitListHead.Blink;
  Flink = WdfUseDefault;
  while ( Blink != &DeviceInit->CxDeviceInitListHead )
  {
    if ( BYTE4(Blink[13].Flink) )
    {
      Flink = (_WDF_TRI_STATE)Blink[13].Flink;
      if ( Flink == WdfFalse )
      {
        if ( Blink[11].Flink )
          goto LABEL_9;
      }
    }
    Blink = Blink->Blink;
  }
  if ( DeviceInit->FileObject.Set )
    Flink = DeviceInit->FileObject.AutoForwardCleanupClose;
LABEL_9:
  if ( Flink )
  {
    v4 = Flink - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return;
      if ( DeviceInit->InitType == FxDeviceInitTypeFdo && DeviceInit->Fdo.Filter )
      {
        this->m_AutoForwardCleanupClose = 1;
        return;
      }
    }
    else
    {
      this->m_AutoForwardCleanupClose = 1;
      if ( !this->m_Legacy )
        return;
    }
  }
  this->m_AutoForwardCleanupClose = 0;
}
