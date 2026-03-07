__int64 __fastcall FxCompanionTarget::NotifySurpriseRemove(FxCompanionTarget *this)
{
  return ((__int64 (__fastcall *)(IDeviceCompanion *))this->m_RdDeviceCompanion->SendSurpriseRemove)(this->m_RdDeviceCompanion);
}
