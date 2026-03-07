int (__fastcall *__fastcall FxPowerDeviceArmWakeFromSx::InvokeClient(
        FxPowerDeviceArmWakeFromSx *this,
        __int64 a2,
        __int64 a3))(WDFDEVICE__ *)
{
  int (__fastcall *m_MethodWithReason)(WDFDEVICE__ *, unsigned __int8, unsigned __int8); // rax
  int _a3; // edi
  unsigned __int16 v6; // r9
  int (__fastcall *result)(WDFDEVICE__ *); // rax

  m_MethodWithReason = this->m_MethodWithReason;
  if ( m_MethodWithReason )
  {
    LOBYTE(a3) = this->m_ChildrenArmedForWake;
    LOBYTE(a2) = this->m_DeviceWakeEnabled;
    _a3 = m_MethodWithReason(this->m_Device, a2, a3);
    if ( _a3 >= 0 )
      return (int (__fastcall *)(WDFDEVICE__ *))(unsigned int)_a3;
    v6 = 30;
LABEL_4:
    WPP_IFR_SF_qid(
      this->m_PkgPnp->m_Globals,
      2u,
      0xCu,
      v6,
      WPP_PnpCallbacks_cpp_Traceguids,
      this->m_Device,
      (__int64)this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3);
    return (int (__fastcall *)(WDFDEVICE__ *))(unsigned int)_a3;
  }
  result = this->m_Method;
  if ( result )
  {
    _a3 = result(this->m_Device);
    if ( _a3 >= 0 )
      return (int (__fastcall *)(WDFDEVICE__ *))(unsigned int)_a3;
    v6 = 31;
    goto LABEL_4;
  }
  return result;
}
