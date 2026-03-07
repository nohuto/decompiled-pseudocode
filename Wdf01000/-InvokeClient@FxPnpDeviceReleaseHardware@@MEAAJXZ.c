int (__fastcall *__fastcall FxPnpDeviceReleaseHardware::InvokeClient(
        FxPnpDeviceReleaseHardware *this))(WDFDEVICE__ *, WDFCMRESLIST__ *)
{
  int (__fastcall *result)(WDFDEVICE__ *, WDFCMRESLIST__ *); // rax
  int _a3; // eax
  unsigned int v4; // edi

  result = this->m_Method;
  if ( result )
  {
    _a3 = result(this->m_Device, this->m_ResourcesTranslated);
    v4 = _a3;
    if ( _a3 < 0 )
      WPP_IFR_SF_qid(
        this->m_PkgPnp->m_Globals,
        2u,
        0xCu,
        0x12u,
        WPP_PnpCallbacks_cpp_Traceguids,
        this->m_Device,
        (__int64)this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3);
    return (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *))v4;
  }
  return result;
}
