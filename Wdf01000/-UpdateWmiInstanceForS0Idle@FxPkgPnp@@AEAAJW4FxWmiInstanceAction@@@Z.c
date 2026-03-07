__int64 __fastcall FxPkgPnp::UpdateWmiInstanceForS0Idle(FxPkgPnp *this, FxWmiInstanceAction Action, unsigned __int8 a3)
{
  int v3; // edx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  FxWmiInstance **p_WmiInstance; // r9
  __int64 result; // rax
  FxWmiInstanceInternalCallbacks cb; // [rsp+20h] [rbp-28h] BYREF

  v3 = Action - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      WmiInstance = m_Owner->m_IdleSettings.WmiInstance;
      if ( WmiInstance )
        FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_IdleSettings.WmiInstance, a3);
    }
    return 0LL;
  }
  p_WmiInstance = &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.WmiInstance;
  if ( *p_WmiInstance )
  {
    FxWmiProvider::AddInstance((*p_WmiInstance)->m_Provider, *p_WmiInstance, 1u);
    return 0LL;
  }
  cb.ExecuteMethod = 0LL;
  cb.SetInstance = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, void *))FxPkgPnp::_S0IdleSetInstance;
  cb.QueryInstance = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, void *, unsigned int *))FxPkgPnp::_S0IdleQueryInstance;
  cb.SetItem = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, unsigned int, void *))FxPkgPnp::_S0IdleSetItem;
  result = FxPkgPnp::RegisterPowerPolicyWmiInstance(
             this,
             &GUID_POWER_DEVICE_ENABLE,
             &cb,
             (FxWmiInstanceInternal **)p_WmiInstance);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
