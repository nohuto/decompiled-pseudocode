__int64 __fastcall FxPnpDevicePrepareHardware::InvokeCompanionCallback(
        FxPnpDevicePrepareHardware *this,
        FxCompanionTarget *CompanionTarget)
{
  int _a3; // eax
  unsigned int v4; // ebx

  _a3 = FxCompanionTarget::NotifyPrePrepareHardware(CompanionTarget, this->m_ResourcesRaw, this->m_ResourcesTranslated);
  v4 = _a3;
  if ( _a3 < 0 )
    WPP_IFR_SF_qid(
      this->m_PkgPnp->m_Globals,
      2u,
      0xCu,
      0xCu,
      WPP_PnPCallbacksKm_cpp_Traceguids,
      this->m_Device,
      (__int64)this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3);
  return v4;
}
