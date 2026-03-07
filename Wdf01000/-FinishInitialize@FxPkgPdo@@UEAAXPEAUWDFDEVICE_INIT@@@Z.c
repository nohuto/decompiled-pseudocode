void __fastcall FxPkgPdo::FinishInitialize(FxPkgPdo *this, WDFDEVICE_INIT *DeviceInit)
{
  this->m_DefaultLocale = DeviceInit->Pdo.DefaultLocale;
  this->m_DeviceTextHead.Next = DeviceInit->Pdo.DeviceText.Next;
  DeviceInit->Pdo.DeviceText.Next = 0LL;
  FxPkgPnp::FinishInitialize(this, DeviceInit);
}
