unsigned __int8 __fastcall FxPkgPdo::PnpSendStartDeviceDownTheStackOverload(FxPkgPdo *this)
{
  this->m_PendingPnPIrp->IoStatus.Status = 0;
  return 1;
}
