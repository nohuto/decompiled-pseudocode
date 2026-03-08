/*
 * XREFs of ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C007A208
 * Callers:
 *     ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x1C007A1B8 (--1FxPowerPolicyMachine@@QEAA@XZ.c)
 * Callees:
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x1C0077108 (--1FxPowerIdleMachine@@QEAA@XZ.c)
 *     ??1IdleTimeoutManagement@@QEAA@XZ @ 0x1C007A25C (--1IdleTimeoutManagement@@QEAA@XZ.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1C007A2A4 (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 *     ?CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ @ 0x1C007A318 (-CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ.c)
 *     ??1FxPoxInterface@@QEAA@XZ @ 0x1C00839A8 (--1FxPoxInterface@@QEAA@XZ.c)
 */

void __fastcall FxPowerPolicyOwnerSettings::~FxPowerPolicyOwnerSettings(FxPowerPolicyOwnerSettings *this)
{
  unsigned int v2; // edx
  FxUsbIdleInfo *m_UsbIdle; // rcx
  __int64 v4; // rdx

  FxPowerPolicyOwnerSettings::CleanupPowerCallback(this);
  m_UsbIdle = this->m_UsbIdle;
  if ( m_UsbIdle )
  {
    FxUsbIdleInfo::`scalar deleting destructor'(m_UsbIdle, v2);
    this->m_UsbIdle = 0LL;
  }
  IdleTimeoutManagement::~IdleTimeoutManagement(&this->m_IdleSettings.m_TimeoutMgmt);
  FxPoxInterface::~FxPoxInterface(&this->m_PoxInterface);
  FxPowerIdleMachine::~FxPowerIdleMachine(&this->m_PowerIdleMachine, v4);
}
