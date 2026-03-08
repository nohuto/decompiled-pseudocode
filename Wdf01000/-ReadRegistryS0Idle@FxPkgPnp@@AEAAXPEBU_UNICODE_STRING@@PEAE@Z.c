/*
 * XREFs of ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0079134
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0074544 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0074DA4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C00793A8 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00014A8 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C003CB50 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 */

void __fastcall FxPkgPnp::ReadRegistryS0Idle(FxPkgPnp *this, _UNICODE_STRING *ValueName, bool *Enabled)
{
  FxDevice *m_Device; // rcx
  unsigned int value; // [rsp+30h] [rbp+8h] BYREF
  FxAutoRegKey hKey; // [rsp+48h] [rbp+20h] BYREF

  m_Device = this->m_Device;
  hKey.m_Key = 0LL;
  if ( (int)FxDevice::OpenSettingsKey(m_Device, &hKey.m_Key, 0x20000u) >= 0 )
  {
    value = 0;
    if ( FxRegKey::_QueryULong(hKey.m_Key, ValueName, &value) >= 0 )
      *Enabled = value != 0;
  }
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
}
